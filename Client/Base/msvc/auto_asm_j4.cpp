// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00488d10();
extern "C" void fn_00911c90();
// FUNCTION: ROBLOXSTUDIO 0x00481ec0
extern "C" __declspec(naked) void asm_00481ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x90 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00481f0f }
	__asm { mov ecx, eax }
	__asm { call fn_00911c90 }
	__asm { mov esi, eax }
	__asm { jmp L_00481f11 }
	__asm { L_00481f0f: }
	__asm { xor esi, esi }
	__asm { L_00481f11: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00488d10 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00481f42 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00481f42 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00481f42: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00488da0();
extern "C" void fn_009124d0();
// FUNCTION: ROBLOXSTUDIO 0x00481f60
extern "C" __declspec(naked) void asm_00481f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x90 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00481faf }
	__asm { mov ecx, eax }
	__asm { call fn_009124d0 }
	__asm { mov esi, eax }
	__asm { jmp L_00481fb1 }
	__asm { L_00481faf: }
	__asm { xor esi, esi }
	__asm { L_00481fb1: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00488da0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00481fe2 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00481fe2 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00481fe2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00488e30();
extern "C" void fn_00912620();
// FUNCTION: ROBLOXSTUDIO 0x00482000
extern "C" __declspec(naked) void asm_00482000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x90 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0048204f }
	__asm { mov ecx, eax }
	__asm { call fn_00912620 }
	__asm { mov esi, eax }
	__asm { jmp L_00482051 }
	__asm { L_0048204f: }
	__asm { xor esi, esi }
	__asm { L_00482051: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00488e30 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00482082 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00482082 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00482082: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00488ec0();
extern "C" void fn_00912790();
// FUNCTION: ROBLOXSTUDIO 0x004820a0
extern "C" __declspec(naked) void asm_004820a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x90 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004820ef }
	__asm { mov ecx, eax }
	__asm { call fn_00912790 }
	__asm { mov esi, eax }
	__asm { jmp L_004820f1 }
	__asm { L_004820ef: }
	__asm { xor esi, esi }
	__asm { L_004820f1: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00488ec0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00482122 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00482122 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00482122: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00488f50();
extern "C" void fn_009122d0();
// FUNCTION: ROBLOXSTUDIO 0x00482140
extern "C" __declspec(naked) void asm_00482140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x98 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0048218f }
	__asm { mov ecx, eax }
	__asm { call fn_009122d0 }
	__asm { mov esi, eax }
	__asm { jmp L_00482191 }
	__asm { L_0048218f: }
	__asm { xor esi, esi }
	__asm { L_00482191: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00488f50 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004821c2 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_004821c2 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_004821c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00488fe0();
extern "C" void fn_009121a0();
// FUNCTION: ROBLOXSTUDIO 0x004821e0
extern "C" __declspec(naked) void asm_004821e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x98 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0048222f }
	__asm { mov ecx, eax }
	__asm { call fn_009121a0 }
	__asm { mov esi, eax }
	__asm { jmp L_00482231 }
	__asm { L_0048222f: }
	__asm { xor esi, esi }
	__asm { L_00482231: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00488fe0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00482262 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00482262 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00482262: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00489190();
extern "C" void fn_0091c8a0();
// FUNCTION: ROBLOXSTUDIO 0x004823c0
extern "C" __declspec(naked) void asm_004823c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x9c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0048240f }
	__asm { mov ecx, eax }
	__asm { call fn_0091c8a0 }
	__asm { mov esi, eax }
	__asm { jmp L_00482411 }
	__asm { L_0048240f: }
	__asm { xor esi, esi }
	__asm { L_00482411: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00489190 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00482442 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00482442 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00482442: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00489220();
extern "C" void fn_0091d0c0();
// FUNCTION: ROBLOXSTUDIO 0x00482460
extern "C" __declspec(naked) void asm_00482460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x68 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004824ac }
	__asm { mov ecx, eax }
	__asm { call fn_0091d0c0 }
	__asm { mov esi, eax }
	__asm { jmp L_004824ae }
	__asm { L_004824ac: }
	__asm { xor esi, esi }
	__asm { L_004824ae: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00489220 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004824df }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_004824df }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_004824df: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_004892b0();
extern "C" void fn_0091ee80();
// FUNCTION: ROBLOXSTUDIO 0x00482500
extern "C" __declspec(naked) void asm_00482500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xa8 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0048254f }
	__asm { mov ecx, eax }
	__asm { call fn_0091ee80 }
	__asm { mov esi, eax }
	__asm { jmp L_00482551 }
	__asm { L_0048254f: }
	__asm { xor esi, esi }
	__asm { L_00482551: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_004892b0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00482582 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00482582 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00482582: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00489340();
extern "C" void fn_009032b0();
// FUNCTION: ROBLOXSTUDIO 0x004825a0
extern "C" __declspec(naked) void asm_004825a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x88 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004825ef }
	__asm { mov ecx, eax }
	__asm { call fn_009032b0 }
	__asm { mov esi, eax }
	__asm { jmp L_004825f1 }
	__asm { L_004825ef: }
	__asm { xor esi, esi }
	__asm { L_004825f1: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00489340 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00482622 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00482622 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00482622: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e75e0c[];
extern "C" char g_0131b4ac[];
extern "C" char g_0131b4b0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00482640
extern "C" __declspec(naked) void asm_00482640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a62e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00e75e0c], 0 }
	__asm { jne L_00482675 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482675: }
	__asm { push 0x487c30 }
	__asm { push 0x131b67c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131b4b0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004826bf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b4b0], eax }
	__asm { push 0xe75e0c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b4ac], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004826bf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131b4ac] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e77d34[];
extern "C" char g_0131b4a4[];
extern "C" char g_0131b4a8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004826e0
extern "C" __declspec(naked) void asm_004826e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a4ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e77d34], 0 }
	__asm { jne L_00482714 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482714: }
	__asm { push 0x487c80 }
	__asm { push 0x131b674 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131b4a8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0048275e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b4a8], eax }
	__asm { push 0xe77d34 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b4a4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0048275e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131b4a4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78aa8[];
extern "C" char g_0131e39c[];
extern "C" char g_0131e3a0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00482780
extern "C" __declspec(naked) void asm_00482780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a5ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e78aa8], 0 }
	__asm { jne L_004827b4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004827b4: }
	__asm { push 0x487cd0 }
	__asm { push 0x131b66c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e39c] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004827fe }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e39c], eax }
	__asm { push 0xe78aa8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131e3a0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004827fe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131e3a0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78ab0[];
extern "C" char g_0131e3a4[];
extern "C" char g_0131e3a8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00482820
extern "C" __declspec(naked) void asm_00482820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a3ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e78ab0], 0 }
	__asm { jne L_00482854 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482854: }
	__asm { push 0x487d20 }
	__asm { push 0x131b664 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e3a4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0048289e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e3a4], eax }
	__asm { push 0xe78ab0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131e3a8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0048289e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131e3a8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78a90[];
extern "C" char g_0131e3ac[];
extern "C" char g_0131e3b0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004828c0
extern "C" __declspec(naked) void asm_004828c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a34e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e78a90], 0 }
	__asm { jne L_004828f4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004828f4: }
	__asm { push 0x487d70 }
	__asm { push 0x131b65c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e3ac] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0048293e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e3ac], eax }
	__asm { push 0xe78a90 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131e3b0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0048293e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131e3b0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78a9c[];
extern "C" char g_0131e3b4[];
extern "C" char g_0131e3b8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00482960
extern "C" __declspec(naked) void asm_00482960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a32e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e78a9c], 0 }
	__asm { jne L_00482994 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482994: }
	__asm { push 0x487dc0 }
	__asm { push 0x131b654 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e3b4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004829de }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e3b4], eax }
	__asm { push 0xe78a9c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131e3b8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004829de: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131e3b8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78aa4[];
extern "C" char g_0131e3bc[];
extern "C" char g_0131e3c0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00482a00
extern "C" __declspec(naked) void asm_00482a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a2ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e78aa4], 0 }
	__asm { jne L_00482a34 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482a34: }
	__asm { push 0x487e10 }
	__asm { push 0x131b64c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e3bc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00482a7e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e3bc], eax }
	__asm { push 0xe78aa4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131e3c0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482a7e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131e3c0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78ab4[];
extern "C" char g_0131e3c4[];
extern "C" char g_0131e3c8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00482aa0
extern "C" __declspec(naked) void asm_00482aa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a56e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e78ab4], 0 }
	__asm { jne L_00482ad4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482ad4: }
	__asm { push 0x487e60 }
	__asm { push 0x131b644 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e3c4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00482b1e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e3c4], eax }
	__asm { push 0xe78ab4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131e3c8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482b1e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131e3c8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78a8c[];
extern "C" char g_0131e3cc[];
extern "C" char g_0131e3d0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00482b40
extern "C" __declspec(naked) void asm_00482b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a58e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e78a8c], 0 }
	__asm { jne L_00482b74 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482b74: }
	__asm { push 0x487eb0 }
	__asm { push 0x131b63c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e3cc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00482bbe }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e3cc], eax }
	__asm { push 0xe78a8c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131e3d0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482bbe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131e3d0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78a98[];
extern "C" char g_0131e3d4[];
extern "C" char g_0131e3d8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00482be0
extern "C" __declspec(naked) void asm_00482be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a5ae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e78a98], 0 }
	__asm { jne L_00482c14 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482c14: }
	__asm { push 0x487f00 }
	__asm { push 0x131b634 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e3d4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00482c5e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e3d4], eax }
	__asm { push 0xe78a98 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131e3d8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482c5e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131e3d8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78aa0[];
extern "C" char g_0131e3dc[];
extern "C" char g_0131e3e0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00482c80
extern "C" __declspec(naked) void asm_00482c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a54e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e78aa0], 0 }
	__asm { jne L_00482cb4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482cb4: }
	__asm { push 0x487f50 }
	__asm { push 0x131b62c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e3dc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00482cfe }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e3dc], eax }
	__asm { push 0xe78aa0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131e3e0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482cfe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131e3e0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e78aac[];
extern "C" char g_0131e3e4[];
extern "C" char g_0131e3e8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00482d20
extern "C" __declspec(naked) void asm_00482d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a52e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e78aac], 0 }
	__asm { jne L_00482d54 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482d54: }
	__asm { push 0x487fa0 }
	__asm { push 0x131b624 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e3e4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00482d9e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e3e4], eax }
	__asm { push 0xe78aac }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131e3e8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482d9e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131e3e8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e7b04c[];
extern "C" char g_0131e3ec[];
extern "C" char g_0131e3f0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00482dc0
extern "C" __declspec(naked) void asm_00482dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a5ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e7b04c], 0 }
	__asm { jne L_00482df4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482df4: }
	__asm { push 0x487ff0 }
	__asm { push 0x131b61c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e3ec] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00482e3e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e3ec], eax }
	__asm { push 0xe7b04c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131e3f0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482e3e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131e3f0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e7c160[];
extern "C" char g_0131e3f4[];
extern "C" char g_0131e3f8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00482e60
extern "C" __declspec(naked) void asm_00482e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a60e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e7c160], 0 }
	__asm { jne L_00482e94 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482e94: }
	__asm { push 0x488040 }
	__asm { push 0x131b614 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e3f4] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00482ede }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e3f4], eax }
	__asm { push 0xe7c160 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131e3f8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482ede: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131e3f8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e7d39c[];
extern "C" char g_0131b49c[];
extern "C" char g_0131b4a0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00482f00
extern "C" __declspec(naked) void asm_00482f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a38e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e7d39c], 0 }
	__asm { jne L_00482f34 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482f34: }
	__asm { push 0x488090 }
	__asm { push 0x131b60c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131b4a0] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00482f7e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b4a0], eax }
	__asm { push 0xe7d39c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b49c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482f7e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131b49c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e7d5f0[];
extern "C" char g_0131b494[];
extern "C" char g_0131b498[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00482fa0
extern "C" __declspec(naked) void asm_00482fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a30e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e7d5f0], 0 }
	__asm { jne L_00482fd4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00482fd4: }
	__asm { push 0x4880e0 }
	__asm { push 0x131b604 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131b498] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0048301e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b498], eax }
	__asm { push 0xe7d5f0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b494], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0048301e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131b494] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e7d7dc[];
extern "C" char g_0131b48c[];
extern "C" char g_0131b490[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00483040
extern "C" __declspec(naked) void asm_00483040()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a50e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e7d7dc], 0 }
	__asm { jne L_00483074 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00483074: }
	__asm { push 0x488130 }
	__asm { push 0x131b5fc }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131b490] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004830be }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b490], eax }
	__asm { push 0xe7d7dc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b48c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004830be: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131b48c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e762bc[];
extern "C" char g_0131b484[];
extern "C" char g_0131b488[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004830e0
extern "C" __declspec(naked) void asm_004830e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a36e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00e762bc], 0 }
	__asm { jne L_00483115 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00483115: }
	__asm { push 0x488180 }
	__asm { push 0x131b5f4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131b488] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0048315f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b488], eax }
	__asm { push 0xe762bc }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b484], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0048315f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131b484] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e7f778[];
extern "C" char g_0131e26c[];
extern "C" void fn_0048b090();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00486e40
extern "C" __declspec(naked) void asm_00486e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7acce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131e26c] }
	__asm { test al, 1 }
	__asm { jne L_00486eac }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e26c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e7f778] }
	__asm { call fn_0048b090 }
	__asm { push eax }
	__asm { mov ecx, 0x131e270 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddcd30 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00486eac: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131e270 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131b4bc[];
extern "C" void fn_00407e90();
extern "C" void fn_0048ad50();
// FUNCTION: ROBLOXSTUDIO 0x004878f0
extern "C" __declspec(naked) void asm_004878f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a12b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 8] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0048ad50 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [g_0131b4bc], 0 }
	__asm { jne L_00487964 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12de768 }
	__asm { mov dword ptr [ebp + 0xc], 0x131b6d0 }
	__asm { call fn_00407e90 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x12de758 }
	__asm { mov dword ptr [ebp + 0xc], 0x48acf0 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0131b4bc], 1 }
	__asm { L_00487964: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131e400[];
extern "C" char g_0131e404[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x004887f0
extern "C" __declspec(naked) void asm_004887f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a3ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131e400] }
	__asm { test al, 1 }
	__asm { jne L_0048882a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e400], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_0131e404], eax }
	__asm { L_0048882a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004889b0
extern "C" __declspec(naked) void asm_004889b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a100 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00488a09 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b2c8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00488a0b }
	__asm { L_00488a09: }
	__asm { xor eax, eax }
	__asm { L_00488a0b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00488a40
extern "C" __declspec(naked) void asm_00488a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd79fd0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00488a99 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe4de50 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00488a9b }
	__asm { L_00488a99: }
	__asm { xor eax, eax }
	__asm { L_00488a9b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00488ad0
extern "C" __declspec(naked) void asm_00488ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a0e0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00488b29 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe517c0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00488b2b }
	__asm { L_00488b29: }
	__asm { xor eax, eax }
	__asm { L_00488b2b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00488b60
extern "C" __declspec(naked) void asm_00488b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a110 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00488bb9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe517d8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00488bbb }
	__asm { L_00488bb9: }
	__asm { xor eax, eax }
	__asm { L_00488bbb: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00488bf0
extern "C" __declspec(naked) void asm_00488bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a050 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00488c49 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe517f0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00488c4b }
	__asm { L_00488c49: }
	__asm { xor eax, eax }
	__asm { L_00488c4b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00488c80
extern "C" __declspec(naked) void asm_00488c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a040 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00488cd9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe51808 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00488cdb }
	__asm { L_00488cd9: }
	__asm { xor eax, eax }
	__asm { L_00488cdb: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00488d10
extern "C" __declspec(naked) void asm_00488d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a010 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00488d69 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe51820 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00488d6b }
	__asm { L_00488d69: }
	__asm { xor eax, eax }
	__asm { L_00488d6b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00488da0
extern "C" __declspec(naked) void asm_00488da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a0a0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00488df9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe51838 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00488dfb }
	__asm { L_00488df9: }
	__asm { xor eax, eax }
	__asm { L_00488dfb: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00488e30
extern "C" __declspec(naked) void asm_00488e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a0b0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00488e89 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe51850 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00488e8b }
	__asm { L_00488e89: }
	__asm { xor eax, eax }
	__asm { L_00488e8b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00488ec0
extern "C" __declspec(naked) void asm_00488ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a0c0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00488f19 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe51868 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00488f1b }
	__asm { L_00488f19: }
	__asm { xor eax, eax }
	__asm { L_00488f1b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00488f50
extern "C" __declspec(naked) void asm_00488f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a070 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00488fa9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe51880 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00488fab }
	__asm { L_00488fa9: }
	__asm { xor eax, eax }
	__asm { L_00488fab: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00488fe0
extern "C" __declspec(naked) void asm_00488fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a060 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00489039 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe51898 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0048903b }
	__asm { L_00489039: }
	__asm { xor eax, eax }
	__asm { L_0048903b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00489070
extern "C" __declspec(naked) void asm_00489070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a0d0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_004890c9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b1d8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004890cb }
	__asm { L_004890c9: }
	__asm { xor eax, eax }
	__asm { L_004890cb: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00489100
extern "C" __declspec(naked) void asm_00489100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a0f0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00489159 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b2b0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0048915b }
	__asm { L_00489159: }
	__asm { xor eax, eax }
	__asm { L_0048915b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00489190
extern "C" __declspec(naked) void asm_00489190()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a090 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_004891e9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b4a8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004891eb }
	__asm { L_004891e9: }
	__asm { xor eax, eax }
	__asm { L_004891eb: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00489220
extern "C" __declspec(naked) void asm_00489220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a020 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00489279 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b4c0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0048927b }
	__asm { L_00489279: }
	__asm { xor eax, eax }
	__asm { L_0048927b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004892b0
extern "C" __declspec(naked) void asm_004892b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a030 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00489309 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5b4d8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0048930b }
	__asm { L_00489309: }
	__asm { xor eax, eax }
	__asm { L_0048930b: }
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

extern "C" char g_0131b450[];
extern "C" char g_0131b454[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00489a40
extern "C" __declspec(naked) void asm_00489a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a42e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131b454] }
	__asm { test al, 1 }
	__asm { jne L_00489a7a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b454], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_0131b450], eax }
	__asm { L_00489a7a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131b448[];
extern "C" char g_0131b44c[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00489bc0
extern "C" __declspec(naked) void asm_00489bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a3ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131b44c] }
	__asm { test al, 1 }
	__asm { jne L_00489bfa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b44c], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_0131b448], eax }
	__asm { L_00489bfa: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131b440[];
extern "C" char g_0131b444[];
extern "C" void fn_0089c670();
// FUNCTION: ROBLOXSTUDIO 0x00489c10
extern "C" __declspec(naked) void asm_00489c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a40e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131b444] }
	__asm { test al, 1 }
	__asm { jne L_00489c4a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b444], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0089c670 }
	__asm { mov dword ptr [g_0131b440], eax }
	__asm { L_00489c4a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131b474[];
extern "C" char g_0131b478[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0048aa50
extern "C" __declspec(naked) void asm_0048aa50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a4ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131b474] }
	__asm { test al, 1 }
	__asm { jne L_0048aa92 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b474], eax }
	__asm { push 0xe75fec }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b478], eax }
	__asm { L_0048aa92: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e75fec[];
extern "C" char g_0131b474[];
extern "C" char g_0131b478[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0048aaa0
extern "C" __declspec(naked) void asm_0048aaa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a4ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00e75fec], 0 }
	__asm { jne L_0048aad5 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0048aad5: }
	__asm { push 0x48aa50 }
	__asm { push 0x131b47c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131b474] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0048ab1f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b474], eax }
	__asm { push 0xe75fec }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b478], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0048ab1f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131b478] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0048ae00
extern "C" __declspec(naked) void asm_0048ae00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd79fe0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0048ae59 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe51958 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0048ae5b }
	__asm { L_0048ae59: }
	__asm { xor eax, eax }
	__asm { L_0048ae5b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_0048ae00();
extern "C" void fn_00901df0();
// FUNCTION: ROBLOXSTUDIO 0x0048ae90
extern "C" __declspec(naked) void asm_0048ae90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xa0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0048aedf }
	__asm { mov ecx, eax }
	__asm { call fn_00901df0 }
	__asm { mov esi, eax }
	__asm { jmp L_0048aee1 }
	__asm { L_0048aedf: }
	__asm { xor esi, esi }
	__asm { L_0048aee1: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0048ae00 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0048af12 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0048af12 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0048af12: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e80444[];
extern "C" char g_0131b4c0[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0048b090
extern "C" __declspec(naked) void asm_0048b090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7acee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131b4c0] }
	__asm { test al, 1 }
	__asm { jne L_0048b0fc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b4c0], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e80444] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131b4c8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddcd50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0048b0fc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131b4c8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131b684[];
extern "C" char g_0131b688[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0048b130
extern "C" __declspec(naked) void asm_0048b130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a2ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131b684] }
	__asm { test al, 1 }
	__asm { jne L_0048b172 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b684], eax }
	__asm { push 0xe7718c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b688], eax }
	__asm { L_0048b172: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e7718c[];
extern "C" char g_0131b684[];
extern "C" char g_0131b688[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0048b180
extern "C" __declspec(naked) void asm_0048b180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a2ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_00e7718c], 0 }
	__asm { jne L_0048b1b5 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0048b1b5: }
	__asm { push 0x48b130 }
	__asm { push 0x131b68c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131b684] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0048b1ff }
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
	__asm { L_0048b1ff: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131b688] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0048b220
extern "C" __declspec(naked) void asm_0048b220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7a000 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0048b279 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe4e760 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0048b27b }
	__asm { L_0048b279: }
	__asm { xor eax, eax }
	__asm { L_0048b27b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0048b800
extern "C" __declspec(naked) void asm_0048b800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd79ff0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0048b859 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe51940 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0048b85b }
	__asm { L_0048b859: }
	__asm { xor eax, eax }
	__asm { L_0048b85b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_0048b800();
extern "C" void fn_0090d160();
// FUNCTION: ROBLOXSTUDIO 0x0048b890
extern "C" __declspec(naked) void asm_0048b890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x88 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0048b8df }
	__asm { mov ecx, eax }
	__asm { call fn_0090d160 }
	__asm { mov esi, eax }
	__asm { jmp L_0048b8e1 }
	__asm { L_0048b8df: }
	__asm { xor esi, esi }
	__asm { L_0048b8e1: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_0048b800 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0048b912 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0048b912 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_0048b912: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131b6dc[];
extern "C" char g_0131b6e0[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0048ba40
extern "C" __declspec(naked) void asm_0048ba40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a4ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131b6dc] }
	__asm { test al, 1 }
	__asm { jne L_0048ba82 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b6dc], eax }
	__asm { push 0xe77b1c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b6e0], eax }
	__asm { L_0048ba82: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e77b1c[];
extern "C" char g_0131b6dc[];
extern "C" char g_0131b6e0[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x0048ba90
extern "C" __declspec(naked) void asm_0048ba90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a4ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e77b1c], 0 }
	__asm { jne L_0048bac4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0048bac4: }
	__asm { push 0x48ba40 }
	__asm { push 0x131b6e4 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131b6dc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0048bb0e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b6dc], eax }
	__asm { push 0xe77b1c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131b6e0], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0048bb0e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131b6e0] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101ac[];
extern "C" char g_00e101b0[];
extern "C" char g_0131b3c4[];
extern "C" char g_0131b6f4[];
extern "C" void fn_0048c290();
// FUNCTION: ROBLOXSTUDIO 0x0048c2c0
extern "C" __declspec(naked) void asm_0048c2c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd725b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0131b6f4] }
	__asm { push edi }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call dword ptr [g_00e101ac] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { je L_0048c30d }
	__asm { push dword ptr [edi] }
	__asm { mov ecx, dword ptr [g_0131b3c4] }
	__asm { call fn_0048c290 }
	__asm { L_0048c30d: }
	__asm { push esi }
	__asm { call dword ptr [g_00e101b0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b3490();
// FUNCTION: ROBLOXSTUDIO 0x0048c9b0
extern "C" __declspec(naked) void asm_0048c9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_007b3490 }
	__asm { test eax, eax }
	__asm { jne L_0048c9fb }
	__asm { mov bl, byte ptr [ebp + 0xc] }
	__asm { mov edi, edi }
	__asm { L_0048c9d0: }
	__asm { test bl, bl }
	__asm { je L_0048c9f9 }
	__asm { mov esi, dword ptr [esi + 0x124] }
	__asm { test esi, esi }
	__asm { je L_0048c9f9 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov bl, 1 }
	__asm { call fn_007b3490 }
	__asm { test eax, eax }
	__asm { je L_0048c9d0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0048c9f9: }
	__asm { xor eax, eax }
	__asm { L_0048c9fb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131e440[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0048ccd0
extern "C" __declspec(naked) void asm_0048ccd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b31e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131e440] }
	__asm { test al, 1 }
	__asm { jne L_0048cd3b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e440], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x1012f50 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131e448 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddcf70 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0048cd3b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131e448 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_00405b90();
// FUNCTION: ROBLOXSTUDIO 0x0048e330
extern "C" __declspec(naked) void asm_0048e330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c4b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_00405b90 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { push eax }
	__asm { mov edx, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [edx + 0xc] }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop esi }
	__asm { jb L_0048e380 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0048e380: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_0044dc00();
// FUNCTION: ROBLOXSTUDIO 0x0048e390
extern "C" __declspec(naked) void asm_0048e390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c4b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0x28] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_0044dc00 }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 0xc] }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop esi }
	__asm { jb L_0048e3e0 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0048e3e0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10508[];
extern "C" void fn_0048e3f0();
extern "C" void fn_007d5550();
// FUNCTION: ROBLOXSTUDIO 0x0048e500
extern "C" __declspec(naked) void asm_0048e500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8c4b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x24] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007d5550 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { call fn_0048e3f0 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop esi }
	__asm { jb L_0048e55a }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0048e55a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131b6fc[];
extern "C" void fn_0048e960();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0048e660
extern "C" __declspec(naked) void asm_0048e660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b2fe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131b6fc] }
	__asm { test al, 1 }
	__asm { jne L_0048e6cb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b6fc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x1013048 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0048e960 }
	__asm { push eax }
	__asm { mov ecx, 0x131b700 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddcf80 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0048e6cb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131b700 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131b82c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0048e6e0
extern "C" __declspec(naked) void asm_0048e6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b18e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131b82c] }
	__asm { test al, 1 }
	__asm { jne L_0048e74b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b82c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x101302c }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131b830 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddcf90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0048e74b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131b830 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131b95c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0048e760
extern "C" __declspec(naked) void asm_0048e760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b29e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131b95c] }
	__asm { test al, 1 }
	__asm { jne L_0048e7cb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b95c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x1013010 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131b960 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddcfa0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0048e7cb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131b960 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131ba8c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0048e7e0
extern "C" __declspec(naked) void asm_0048e7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b33e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131ba8c] }
	__asm { test al, 1 }
	__asm { jne L_0048e84b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ba8c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x1012fec }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131ba90 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddcfb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0048e84b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131ba90 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131bbbc[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0048e860
extern "C" __declspec(naked) void asm_0048e860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b2be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131bbbc] }
	__asm { test al, 1 }
	__asm { jne L_0048e8cb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131bbbc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x1012fd0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131bbc0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddcfc0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0048e8cb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131bbc0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131bcec[];
extern "C" void fn_0048e960();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0048e8e0
extern "C" __declspec(naked) void asm_0048e8e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b27e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131bcec] }
	__asm { test al, 1 }
	__asm { jne L_0048e94b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131bcec], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x1012f98 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_0048e960 }
	__asm { push eax }
	__asm { mov ecx, 0x131bcf0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddcfd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0048e94b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131bcf0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131be1c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0048e960
extern "C" __declspec(naked) void asm_0048e960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b2de }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131be1c] }
	__asm { test al, 1 }
	__asm { jne L_0048e9cb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131be1c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x1012f80 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131be20 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddcfe0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0048e9cb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131be20 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131bf4c[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0048e9e0
extern "C" __declspec(naked) void asm_0048e9e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b1ae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131bf4c] }
	__asm { test al, 1 }
	__asm { jne L_0048ea4b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131bf4c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x1012f64 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131bf50 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddcff0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0048ea4b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131bf50 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c07c[];
extern "C" char g_0131c080[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x0048f390
extern "C" __declspec(naked) void asm_0048f390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b13e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c07c] }
	__asm { test al, 1 }
	__asm { jne L_0048f3d2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c07c], eax }
	__asm { push 0xf1b29c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c080], eax }
	__asm { L_0048f3d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0048f6d0
extern "C" __declspec(naked) void asm_0048f6d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b0f0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0048f729 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0x1012f3c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0048f72b }
	__asm { L_0048f729: }
	__asm { xor eax, eax }
	__asm { L_0048f72b: }
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

extern "C" char g_0131c090[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0048f850
extern "C" __declspec(naked) void asm_0048f850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b1ce }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131c090] }
	__asm { test al, 1 }
	__asm { jne L_0048f8bb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c090], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x1012fb0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131c098 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddd010 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0048f8bb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131c098 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_0131b418[];
extern "C" void fn_00490d10();
extern "C" void fn_007b00e0();
// FUNCTION: ROBLOXSTUDIO 0x00490820
extern "C" __declspec(naked) void asm_00490820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b7e4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { lea ecx, [esi + 0xd8] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00490d10 }
	__asm { mov eax, dword ptr [esi + 0xc8] }
	__asm { test eax, eax }
	__asm { je L_00490883 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0xc8], 0 }
	__asm { mov dword ptr [esi + 0xcc], 0 }
	__asm { mov dword ptr [esi + 0xd0], 0 }
	__asm { L_00490883: }
	__asm { cmp dword ptr [esi + 0xc0], 0x10 }
	__asm { jb L_0049089b }
	__asm { push dword ptr [esi + 0xac] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0049089b: }
	__asm { mov dword ptr [esi + 0xc0], 0xf }
	__asm { mov dword ptr [esi + 0xbc], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov byte ptr [esi + 0xac], 0 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [g_0131b418], 0 }
	__asm { mov dword ptr [esi], 0x10139dc }
	__asm { mov dword ptr [esi + 4], 0x10139d4 }
	__asm { mov dword ptr [esi + 0x18], 0x10139c8 }
	__asm { mov dword ptr [esi + 0x1c], 0x10139b8 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
extern "C" void fn_00492fa0();
extern "C" void fn_006b9800();
// FUNCTION: ROBLOXSTUDIO 0x00490d10
extern "C" __declspec(naked) void asm_00490d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd92aa8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00492fa0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [esi] }
	__asm { test esi, esi }
	__asm { je L_00490d81 }
	__asm { add esi, 5 }
	__asm { je L_00490d53 }
	__asm { add esi, -5 }
	__asm { jmp L_00490d55 }
	__asm { L_00490d53: }
	__asm { xor esi, esi }
	__asm { L_00490d55: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00490d81 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00490d81 }
	__asm { push edi }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { L_00490d81: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004934d0();
// FUNCTION: ROBLOXSTUDIO 0x00490f20
extern "C" __declspec(naked) void asm_00490f20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_00490f61 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_00490f61 }
	__asm { sub edi, ecx }
	__asm { sar edi, 2 }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00490f49 }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_004934d0 }
	__asm { L_00490f49: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00490f79 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + edi*4] }
	__asm { mov dword ptr [ecx], eax }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00490f61: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00490f6e }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_004934d0 }
	__asm { L_00490f6e: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00490f79 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00490f79: }
	__asm { add dword ptr [esi + 4], 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131e6dc[];
extern "C" void fn_004115f0();
extern "C" void fn_0048f8d0();
extern "C" void fn_00494eb0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004913f0
extern "C" __declspec(naked) void asm_004913f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b90e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_0049141e }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00491420 }
	__asm { L_0049141e: }
	__asm { xor bl, bl }
	__asm { L_00491420: }
	__asm { push 0x4936d0 }
	__asm { push 0x131c29c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e6dc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00491463 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e6dc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048f8d0 }
	__asm { push 0xddd410 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00491463: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x131e6e0 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_00494eb0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131c270[];
extern "C" void fn_004115f0();
extern "C" void fn_0048fa50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00491490
extern "C" __declspec(naked) void asm_00491490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b92e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push 0x493730 }
	__asm { push 0x131c294 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c270] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004914e5 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c270], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048fa50 }
	__asm { push 0xddd400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_004914e5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131c1e8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c270[];
extern "C" void fn_004115f0();
extern "C" void fn_0048fa50();
extern "C" void fn_00494f40();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004919d0
extern "C" __declspec(naked) void asm_004919d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b92e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_004919fe }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00491a00 }
	__asm { L_004919fe: }
	__asm { xor bl, bl }
	__asm { L_00491a00: }
	__asm { push 0x493730 }
	__asm { push 0x131c294 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c270] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00491a43 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c270], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048fa50 }
	__asm { push 0xddd400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00491a43: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x131c1e8 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_00494f40 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131e768[];
extern "C" void fn_004115f0();
extern "C" void fn_0048fbe0();
extern "C" void fn_00494fd0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00491ed0
extern "C" __declspec(naked) void asm_00491ed0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b87e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00491efe }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00491f00 }
	__asm { L_00491efe: }
	__asm { xor bl, bl }
	__asm { L_00491f00: }
	__asm { push 0x493790 }
	__asm { push 0x131c28c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e768] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00491f43 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e768], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048fbe0 }
	__asm { push 0xddd3f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00491f43: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x131e770 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_00494fd0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131e7f8[];
extern "C" void fn_004115f0();
extern "C" void fn_0048fd60();
extern "C" void fn_00495060();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004923d0
extern "C" __declspec(naked) void asm_004923d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b85e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_004923fe }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00492400 }
	__asm { L_004923fe: }
	__asm { xor bl, bl }
	__asm { L_00492400: }
	__asm { push 0x4937f0 }
	__asm { push 0x131c284 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e7f8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00492443 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e7f8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048fd60 }
	__asm { push 0xddd3e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00492443: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x131e800 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_00495060 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131e888[];
extern "C" void fn_004115f0();
extern "C" void fn_0048fee0();
extern "C" void fn_004950f0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004928d0
extern "C" __declspec(naked) void asm_004928d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b89e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_004928fe }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00492900 }
	__asm { L_004928fe: }
	__asm { xor bl, bl }
	__asm { L_00492900: }
	__asm { push 0x493850 }
	__asm { push 0x131c27c }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e888] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00492943 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e888], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048fee0 }
	__asm { push 0xddd3d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00492943: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x131e890 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_004950f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_0131e918[];
extern "C" void fn_004115f0();
extern "C" void fn_00490100();
extern "C" void fn_00494e20();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00492dd0
extern "C" __declspec(naked) void asm_00492dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b8be }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp edx, dword ptr [ecx + 0x28] }
	__asm { jae L_00492dfe }
	__asm { mov eax, dword ptr [ecx + 0x70] }
	__asm { mov bl, 1 }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_00492e00 }
	__asm { L_00492dfe: }
	__asm { xor bl, bl }
	__asm { L_00492e00: }
	__asm { push 0x4938b0 }
	__asm { push 0x131c274 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131e918] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00492e43 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e918], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00490100 }
	__asm { push 0xddd3c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00492e43: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ecx], 0x131e920 }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_00494e20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00493650();
// FUNCTION: ROBLOXSTUDIO 0x004934d0
extern "C" __declspec(naked) void asm_004934d0()
{
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { sar eax, 2 }
	__asm { cmp eax, 1 }
	__asm { jae L_00493531 }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov edi, 0x3fffffff }
	__asm { sar esi, 2 }
	__asm { mov eax, edi }
	__asm { sub eax, esi }
	__asm { cmp eax, 1 }
	__asm { jae L_00493502 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00493502: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { inc esi }
	__asm { sar edx, 2 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub edi, eax }
	__asm { cmp edi, edx }
	__asm { pop edi }
	__asm { jae L_00493524 }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { cmovb edx, esi }
	__asm { push edx }
	__asm { call fn_00493650 }
	__asm { pop esi }
	__asm { ret 4 }
	__asm { L_00493524: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { cmovb edx, esi }
	__asm { push edx }
	__asm { call fn_00493650 }
	__asm { L_00493531: }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01319db0[];
extern "C" void fn_004933f0();
extern "C" void fn_006b9740();
extern "C" void fn_0092b8a0();
// FUNCTION: ROBLOXSTUDIO 0x00493540
extern "C" __declspec(naked) void asm_00493540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b6b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 0x1319db0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push 0 }
	__asm { push 0x1013534 }
	__asm { call fn_004933f0 }
	__asm { push eax }
	__asm { mov ecx, 0x1319db0 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [g_01319db0], 0x10139a0 }
	__asm { je L_004935e2 }
	__asm { push 0x12ca564 }
	__asm { mov ecx, 0x12ca564 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_004935e2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_004935cd }
	__asm { push 0x1e0 }
	__asm { push 0xf146d8 }
	__asm { push 0xf1367c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_004935e2 }
	__asm { L_004935cd: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x10135b0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_004935e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x1319db0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" void fn_00495580();
// FUNCTION: ROBLOXSTUDIO 0x00493650
extern "C" __declspec(naked) void asm_00493650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { je L_00493686 }
	__asm { cmp edi, 0x3fffffff }
	__asm { ja L_00493680 }
	__asm { lea eax, [edi*4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { test esi, esi }
	__asm { jne L_00493686 }
	__asm { L_00493680: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00493686: }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { call fn_00495580 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { sub eax, ecx }
	__asm { sar eax, 2 }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_004936b5 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004936b5: }
	__asm { lea eax, [esi + edi*4] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx], esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131e6dc[];
extern "C" void fn_0048f8d0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004936d0
extern "C" __declspec(naked) void asm_004936d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b90e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131e6dc] }
	__asm { test al, 1 }
	__asm { jne L_00493713 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e6dc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048f8d0 }
	__asm { push 0xddd410 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00493713: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c270[];
extern "C" void fn_0048fa50();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00493730
extern "C" __declspec(naked) void asm_00493730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b92e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131c270] }
	__asm { test al, 1 }
	__asm { jne L_00493773 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c270], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048fa50 }
	__asm { push 0xddd400 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00493773: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131e768[];
extern "C" void fn_0048fbe0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00493790
extern "C" __declspec(naked) void asm_00493790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b87e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131e768] }
	__asm { test al, 1 }
	__asm { jne L_004937d3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e768], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048fbe0 }
	__asm { push 0xddd3f0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_004937d3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131e7f8[];
extern "C" void fn_0048fd60();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004937f0
extern "C" __declspec(naked) void asm_004937f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b85e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131e7f8] }
	__asm { test al, 1 }
	__asm { jne L_00493833 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e7f8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048fd60 }
	__asm { push 0xddd3e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00493833: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131e888[];
extern "C" void fn_0048fee0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00493850
extern "C" __declspec(naked) void asm_00493850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b89e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131e888] }
	__asm { test al, 1 }
	__asm { jne L_00493893 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e888], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0048fee0 }
	__asm { push 0xddd3d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00493893: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131e918[];
extern "C" void fn_00490100();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004938b0
extern "C" __declspec(naked) void asm_004938b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b8be }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131e918] }
	__asm { test al, 1 }
	__asm { jne L_004938f3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e918], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00490100 }
	__asm { push 0xddd3c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_004938f3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00494d10
extern "C" __declspec(naked) void asm_00494d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push 0x18 }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00494d61 }
	__asm { mov dword ptr [edx], 0x1013658 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00494d61: }
	__asm { xor edx, edx }
	__asm { push edx }
	__asm { mov dword ptr [esi], edx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c1d4[];
extern "C" char g_0131c1d8[];
extern "C" char g_0131c1dc[];
extern "C" char g_0131c1e0[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00494e20
extern "C" __declspec(naked) void asm_00494e20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131c1e0] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00494e62 }
	__asm { or eax, 1 }
	__asm { push 0xddd470 }
	__asm { mov dword ptr [g_0131c1e0], eax }
	__asm { mov dword ptr [g_0131c1d4], 0x12ca588 }
	__asm { mov dword ptr [g_0131c1dc], 0x40d810 }
	__asm { mov dword ptr [g_0131c1d8], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00494e62: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131c1d4 }
	__asm { jne L_00494e7b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00494e7b: }
	__asm { test ecx, ecx }
	__asm { je L_00494e91 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00494e91: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00494e9f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00494e9f: }
	__asm { mov dword ptr [esi], 0x131c1d4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131e9a8[];
extern "C" char g_0131e9ac[];
extern "C" char g_0131e9b0[];
extern "C" char g_0131e9b4[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00494eb0
extern "C" __declspec(naked) void asm_00494eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131e9a8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00494ef2 }
	__asm { or eax, 1 }
	__asm { push 0xddd460 }
	__asm { mov dword ptr [g_0131e9a8], eax }
	__asm { mov dword ptr [g_0131e9ac], 0x12ca688 }
	__asm { mov dword ptr [g_0131e9b4], 0x40d810 }
	__asm { mov dword ptr [g_0131e9b0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00494ef2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131e9ac }
	__asm { jne L_00494f0b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00494f0b: }
	__asm { test ecx, ecx }
	__asm { je L_00494f21 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00494f21: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00494f2f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00494f2f: }
	__asm { mov dword ptr [esi], 0x131e9ac }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131c1c4[];
extern "C" char g_0131c1c8[];
extern "C" char g_0131c1cc[];
extern "C" char g_0131c1d0[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00494f40
extern "C" __declspec(naked) void asm_00494f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131c1d0] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00494f82 }
	__asm { or eax, 1 }
	__asm { push 0xddd450 }
	__asm { mov dword ptr [g_0131c1d0], eax }
	__asm { mov dword ptr [g_0131c1c4], 0x12ca658 }
	__asm { mov dword ptr [g_0131c1cc], 0x40d810 }
	__asm { mov dword ptr [g_0131c1c8], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00494f82: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131c1c4 }
	__asm { jne L_00494f9b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00494f9b: }
	__asm { test ecx, ecx }
	__asm { je L_00494fb1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00494fb1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00494fbf }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00494fbf: }
	__asm { mov dword ptr [esi], 0x131c1c4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131e9b8[];
extern "C" char g_0131e9bc[];
extern "C" char g_0131e9c0[];
extern "C" char g_0131e9c4[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00494fd0
extern "C" __declspec(naked) void asm_00494fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131e9b8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00495012 }
	__asm { or eax, 1 }
	__asm { push 0xddd440 }
	__asm { mov dword ptr [g_0131e9b8], eax }
	__asm { mov dword ptr [g_0131e9bc], 0x12ca620 }
	__asm { mov dword ptr [g_0131e9c4], 0x40d810 }
	__asm { mov dword ptr [g_0131e9c0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00495012: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131e9bc }
	__asm { jne L_0049502b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0049502b: }
	__asm { test ecx, ecx }
	__asm { je L_00495041 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00495041: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0049504f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0049504f: }
	__asm { mov dword ptr [esi], 0x131e9bc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131e9c8[];
extern "C" char g_0131e9cc[];
extern "C" char g_0131e9d0[];
extern "C" char g_0131e9d4[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00495060
extern "C" __declspec(naked) void asm_00495060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131e9c8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_004950a2 }
	__asm { or eax, 1 }
	__asm { push 0xddd430 }
	__asm { mov dword ptr [g_0131e9c8], eax }
	__asm { mov dword ptr [g_0131e9cc], 0x12ca5ec }
	__asm { mov dword ptr [g_0131e9d4], 0x40d810 }
	__asm { mov dword ptr [g_0131e9d0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_004950a2: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131e9cc }
	__asm { jne L_004950bb }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_004950bb: }
	__asm { test ecx, ecx }
	__asm { je L_004950d1 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_004950d1: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_004950df }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_004950df: }
	__asm { mov dword ptr [esi], 0x131e9cc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131e9d8[];
extern "C" char g_0131e9dc[];
extern "C" char g_0131e9e0[];
extern "C" char g_0131e9e4[];
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004950f0
extern "C" __declspec(naked) void asm_004950f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0131e9d8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00495132 }
	__asm { or eax, 1 }
	__asm { push 0xddd420 }
	__asm { mov dword ptr [g_0131e9d8], eax }
	__asm { mov dword ptr [g_0131e9dc], 0x12ca5bc }
	__asm { mov dword ptr [g_0131e9e4], 0x40d810 }
	__asm { mov dword ptr [g_0131e9e0], 0x403160 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00495132: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, 0x131e9dc }
	__asm { jne L_0049514b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0049514b: }
	__asm { test ecx, ecx }
	__asm { je L_00495161 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00495161: }
	__asm { lea ecx, [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0049516f }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_0049516f: }
	__asm { mov dword ptr [esi], 0x131e9dc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10518[];
extern "C" char g_00e10520[];
extern "C" void fn_00412260();
// FUNCTION: ROBLOXSTUDIO 0x00495220
extern "C" __declspec(naked) void asm_00495220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00495248 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0049524d }
	__asm { L_00495248: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0049524d: }
	__asm { cmp ecx, 0x12ca688 }
	__asm { je L_00495296 }
	__asm { test eax, eax }
	__asm { je L_0049525d }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00495262 }
	__asm { L_0049525d: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00495262: }
	__asm { push 0x12ca688 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00495296 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00495296: }
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
// FUNCTION: ROBLOXSTUDIO 0x004952b0
extern "C" __declspec(naked) void asm_004952b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_004952d8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_004952dd }
	__asm { L_004952d8: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_004952dd: }
	__asm { cmp ecx, 0x12ca658 }
	__asm { je L_00495326 }
	__asm { test eax, eax }
	__asm { je L_004952ed }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_004952f2 }
	__asm { L_004952ed: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_004952f2: }
	__asm { push 0x12ca658 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00495326 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00495326: }
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
// FUNCTION: ROBLOXSTUDIO 0x00495340
extern "C" __declspec(naked) void asm_00495340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00495368 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0049536d }
	__asm { L_00495368: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0049536d: }
	__asm { cmp ecx, 0x12ca620 }
	__asm { je L_004953b6 }
	__asm { test eax, eax }
	__asm { je L_0049537d }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00495382 }
	__asm { L_0049537d: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00495382: }
	__asm { push 0x12ca620 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_004953b6 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_004953b6: }
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
// FUNCTION: ROBLOXSTUDIO 0x004953d0
extern "C" __declspec(naked) void asm_004953d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_004953f8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_004953fd }
	__asm { L_004953f8: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_004953fd: }
	__asm { cmp ecx, 0x12ca5ec }
	__asm { je L_00495446 }
	__asm { test eax, eax }
	__asm { je L_0049540d }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00495412 }
	__asm { L_0049540d: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00495412: }
	__asm { push 0x12ca5ec }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00495446 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00495446: }
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
// FUNCTION: ROBLOXSTUDIO 0x00495460
extern "C" __declspec(naked) void asm_00495460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00495488 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0049548d }
	__asm { L_00495488: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0049548d: }
	__asm { cmp ecx, 0x12ca5bc }
	__asm { je L_004954d6 }
	__asm { test eax, eax }
	__asm { je L_0049549d }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_004954a2 }
	__asm { L_0049549d: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_004954a2: }
	__asm { push 0x12ca5bc }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_004954d6 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_004954d6: }
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
// FUNCTION: ROBLOXSTUDIO 0x004954f0
extern "C" __declspec(naked) void asm_004954f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd74218 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00495518 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_0049551d }
	__asm { L_00495518: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_0049551d: }
	__asm { cmp ecx, 0x12ca588 }
	__asm { je L_00495566 }
	__asm { test eax, eax }
	__asm { je L_0049552d }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00495532 }
	__asm { L_0049552d: }
	__asm { mov ecx, 0x12be320 }
	__asm { L_00495532: }
	__asm { push 0x12ca588 }
	__asm { call dword ptr [g_00e10520] }
	__asm { test al, al }
	__asm { je L_00495566 }
	__asm { push 0xf14720 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10518] }
	__asm { mov dword ptr [ebp - 0x18], 0xe4fb48 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00412260 }
	__asm { L_00495566: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + 4] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e809e8[];
extern "C" char g_0131c3e4[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x004959d0
extern "C" __declspec(naked) void asm_004959d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ba3e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131c3e4] }
	__asm { test al, 1 }
	__asm { jne L_00495a3c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c3e4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e809e8] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131c2b8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddd480 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_00495a3c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131c2b8 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e809e8[];
extern "C" char g_0131c2a4[];
extern "C" char g_0131c2a8[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00495cf0
extern "C" __declspec(naked) void asm_00495cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b96e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e809e8], 0 }
	__asm { jne L_00495d24 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00495d24: }
	__asm { push 0x495ec0 }
	__asm { push 0x131c2ac }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c2a8] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_00495d6e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c2a8], eax }
	__asm { push 0xe809e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c2a4], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00495d6e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c2a4] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" void fn_00410540();
extern "C" void fn_0092dc50();
// FUNCTION: ROBLOXSTUDIO 0x00495d90
extern "C" __declspec(naked) void asm_00495d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd88098 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 0x88] }
	__asm { test edx, edx }
	__asm { jne L_00495de3 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x20], 0xe19198 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00410540 }
	__asm { L_00495de3: }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 0x90] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0092dc50 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131c2a4[];
extern "C" char g_0131c2a8[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00495ec0
extern "C" __declspec(naked) void asm_00495ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7b96e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c2a8] }
	__asm { test al, 1 }
	__asm { jne L_00495f02 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c2a8], eax }
	__asm { push 0xe809e8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c2a4], eax }
	__asm { L_00495f02: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_007b00e0();
// FUNCTION: ROBLOXSTUDIO 0x00496060
extern "C" __declspec(naked) void asm_00496060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ba18 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x88] }
	__asm { test eax, eax }
	__asm { je L_004960b6 }
	__asm { test al, 1 }
	__asm { jne L_004960ac }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x90] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_004960ac }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_004960ac: }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { L_004960b6: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp dword ptr [esi + 0x84], 0x10 }
	__asm { jb L_004960d2 }
	__asm { push dword ptr [esi + 0x70] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004960d2: }
	__asm { mov dword ptr [esi + 0x84], 0xf }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x70], 0 }
	__asm { call fn_007b00e0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00496110
extern "C" __declspec(naked) void asm_00496110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b950 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00496169 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0x1013c64 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0049616b }
	__asm { L_00496169: }
	__asm { xor eax, eax }
	__asm { L_0049616b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004961a0
extern "C" __declspec(naked) void asm_004961a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7b940 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_004961f9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe3c9c8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_004961fb }
	__asm { L_004961f9: }
	__asm { xor eax, eax }
	__asm { L_004961fb: }
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

extern "C" char g_00e10524[];
// FUNCTION: ROBLOXSTUDIO 0x00496280
extern "C" __declspec(naked) void asm_00496280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_004962c8 }
	__asm { cmp eax, 1 }
	__asm { je L_004962c8 }
	__asm { cmp eax, 2 }
	__asm { je L_004962dc }
	__asm { cmp eax, 3 }
	__asm { jne L_004962b7 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push 0x12ca978 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004962b7: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [eax], 0x12ca978 }
	__asm { mov word ptr [eax + 4], 0 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004962c8: }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edx, edx }
	__asm { je L_004962dc }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { L_004962dc: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e1110c[];
extern "C" void fn_0045c140();
// FUNCTION: ROBLOXSTUDIO 0x00496550
extern "C" __declspec(naked) void asm_00496550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7bd24 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0x1013fe4 }
	__asm { mov dword ptr [esi + 8], 0x1013fd4 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { call fn_0045c140 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi + 8], 0x1014044 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e1110c] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_004965b1 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_004965b1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10e58[];
extern "C" char g_0131e9e8[];
extern "C" void fn_00496430();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00496b90
extern "C" __declspec(naked) void asm_00496b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7befe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131e9e8] }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00496bdf }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131e9e8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00496430 }
	__asm { push 0xddd590 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00496bdf: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push 0x12c0978 }
	__asm { push 0x131e9ec }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { call dword ptr [g_00e10e58] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e110fc[];
extern "C" char g_012fd425[];
extern "C" char g_0131eb88[];
extern "C" char g_0131eba0[];
extern "C" void fn_004a4c90();
extern "C" void fn_004c33e0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00496d00
extern "C" __declspec(naked) void asm_00496d00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7579e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_012fd425], 0 }
	__asm { push esi }
	__asm { je L_00496d7c }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_00496d54 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00496d54: }
	__asm { mov esi, dword ptr [g_0131eba0] }
	__asm { test esi, esi }
	__asm { je L_00496d7c }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push 1 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00496d6b }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00496d6b: }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov ecx, esi }
	__asm { call fn_004c33e0 }
	__asm { L_00496d7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e81e3c[];
extern "C" char g_0131ea00[];
extern "C" void fn_004118e0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00497750
extern "C" __declspec(naked) void asm_00497750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7bd7e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131ea00] }
	__asm { test al, 1 }
	__asm { jne L_004977bc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131ea00], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { push dword ptr [g_00e81e3c] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131ea08 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddd600 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_004977bc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131ea08 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_004999c0();
extern "C" void fn_00939ad0();
// FUNCTION: ROBLOXSTUDIO 0x00497ff0
extern "C" __declspec(naked) void asm_00497ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x80 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0049803f }
	__asm { mov ecx, eax }
	__asm { call fn_00939ad0 }
	__asm { mov esi, eax }
	__asm { jmp L_00498041 }
	__asm { L_0049803f: }
	__asm { xor esi, esi }
	__asm { L_00498041: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_004999c0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00498072 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00498072 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00498072: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00499a50();
extern "C" void fn_00939b10();
// FUNCTION: ROBLOXSTUDIO 0x00498090
extern "C" __declspec(naked) void asm_00498090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x88 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_004980df }
	__asm { mov ecx, eax }
	__asm { call fn_00939b10 }
	__asm { mov esi, eax }
	__asm { jmp L_004980e1 }
	__asm { L_004980df: }
	__asm { xor esi, esi }
	__asm { L_004980e1: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00499a50 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00498112 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00498112 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00498112: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00499ae0();
extern "C" void fn_009376d0();
// FUNCTION: ROBLOXSTUDIO 0x00498130
extern "C" __declspec(naked) void asm_00498130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x88 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0049817f }
	__asm { mov ecx, eax }
	__asm { call fn_009376d0 }
	__asm { mov esi, eax }
	__asm { jmp L_00498181 }
	__asm { L_0049817f: }
	__asm { xor esi, esi }
	__asm { L_00498181: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00499ae0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_004981b2 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_004981b2 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_004981b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00499b70();
extern "C" void fn_0093ae40();
// FUNCTION: ROBLOXSTUDIO 0x004981d0
extern "C" __declspec(naked) void asm_004981d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd72b16 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xf8 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0049821f }
	__asm { mov ecx, eax }
	__asm { call fn_0093ae40 }
	__asm { mov esi, eax }
	__asm { jmp L_00498221 }
	__asm { L_0049821f: }
	__asm { xor esi, esi }
	__asm { L_00498221: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00499b70 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00498252 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00498252 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_0040e0a0 }
	__asm { L_00498252: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e82238[];
extern "C" char g_0131c400[];
extern "C" char g_0131c404[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00498270
extern "C" __declspec(naked) void asm_00498270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bbbe }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e82238], 0 }
	__asm { jne L_004982a4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004982a4: }
	__asm { push 0x499740 }
	__asm { push 0x131c430 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c404] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004982ee }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c404], eax }
	__asm { push 0xe82238 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c400], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004982ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c400] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e82230[];
extern "C" char g_0131c3f8[];
extern "C" char g_0131c3fc[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00498310
extern "C" __declspec(naked) void asm_00498310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bbde }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e82230], 0 }
	__asm { jne L_00498344 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00498344: }
	__asm { push 0x499790 }
	__asm { push 0x131c428 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131c3fc] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0049838e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c3fc], eax }
	__asm { push 0xe82230 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131c3f8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0049838e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c3f8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e81e3c[];
extern "C" char g_0131eb60[];
extern "C" char g_0131eb64[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x004983b0
extern "C" __declspec(naked) void asm_004983b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bb9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e81e3c], 0 }
	__asm { jne L_004983e4 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004983e4: }
	__asm { push 0x4997e0 }
	__asm { push 0x131c420 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131eb60] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_0049842e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb60], eax }
	__asm { push 0xe81e3c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131eb64], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0049842e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131eb64] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e8291c[];
extern "C" char g_0131eb68[];
extern "C" char g_0131eb6c[];
extern "C" void fn_004115f0();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
// FUNCTION: ROBLOXSTUDIO 0x00498450
extern "C" __declspec(naked) void asm_00498450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bb7e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { cmp dword ptr [g_00e8291c], 0 }
	__asm { jne L_00498484 }
	__asm { call fn_007cb440 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00498484: }
	__asm { push 0x499830 }
	__asm { push 0x131c418 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_0131eb68] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_004984ce }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb68], eax }
	__asm { push 0xe8291c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0131eb6c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_004984ce: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131eb6c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00499da0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00499930
extern "C" __declspec(naked) void asm_00499930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7baf0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00499989 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0x1013f84 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0049998b }
	__asm { L_00499989: }
	__asm { xor eax, eax }
	__asm { L_0049998b: }
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
	__asm { call fn_00499da0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x004999c0
extern "C" __declspec(naked) void asm_004999c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7baa0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00499a19 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe384dc }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00499a1b }
	__asm { L_00499a19: }
	__asm { xor eax, eax }
	__asm { L_00499a1b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00499a50
extern "C" __declspec(naked) void asm_00499a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7bab0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00499aa9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe384f4 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00499aab }
	__asm { L_00499aa9: }
	__asm { xor eax, eax }
	__asm { L_00499aab: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00499ae0
extern "C" __declspec(naked) void asm_00499ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ba80 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00499b39 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5afb0 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00499b3b }
	__asm { L_00499b39: }
	__asm { xor eax, eax }
	__asm { L_00499b3b: }
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

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00499b70
extern "C" __declspec(naked) void asm_00499b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7bac0 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00499bc9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe5ae30 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_00499bcb }
	__asm { L_00499bc9: }
	__asm { xor eax, eax }
	__asm { L_00499bcb: }
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

extern "C" char g_00e10504[];
extern "C" char g_0131c3e8[];
extern "C" char g_0131c3ec[];
// FUNCTION: ROBLOXSTUDIO 0x00499eb0
extern "C" __declspec(naked) void asm_00499eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bf5e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c3ec] }
	__asm { test al, 1 }
	__asm { jne L_00499f24 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c3ec], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00499f0f }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0131c3e8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00499f0f: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131c3e8], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00499f24: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c3e8] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_0131c408[];
extern "C" char g_0131c40c[];
// FUNCTION: ROBLOXSTUDIO 0x0049a010
extern "C" __declspec(naked) void asm_0049a010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bf1e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c40c] }
	__asm { test al, 1 }
	__asm { jne L_0049a084 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c40c], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0049a06f }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0131c408], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0049a06f: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131c408], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0049a084: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c408] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_00410ec0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0049a0a0
extern "C" __declspec(naked) void asm_0049a0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7ba90 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0049a0f9 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe6162c }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { jmp L_0049a0fb }
	__asm { L_0049a0f9: }
	__asm { xor eax, eax }
	__asm { L_0049a0fb: }
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

extern "C" char g_00e10504[];
extern "C" char g_0131c45c[];
extern "C" char g_0131c460[];
// FUNCTION: ROBLOXSTUDIO 0x0049a240
extern "C" __declspec(naked) void asm_0049a240()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7bf3e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c460] }
	__asm { test al, 1 }
	__asm { jne L_0049a2b4 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c460], eax }
	__asm { push 8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0049a29f }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_0131c45c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0049a29f: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_0131c45c], eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0049a2b4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [g_0131c45c] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0131eb70[];
extern "C" void fn_0049a4b0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0049a540
extern "C" __declspec(naked) void asm_0049a540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd82dae }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131eb70] }
	__asm { test al, 1 }
	__asm { jne L_0049a582 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb70], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0049a4b0 }
	__asm { push 0xddd670 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { L_0049a582: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, 0x131eb74 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10c2c[];
extern "C" char g_00e10c30[];
extern "C" char g_00e10c34[];
extern "C" char g_00e10c38[];
extern "C" char g_00e10c3c[];
// FUNCTION: ROBLOXSTUDIO 0x0049a7b0
extern "C" __declspec(naked) void asm_0049a7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 1 }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10c30] }
	__asm { push 1 }
	__asm { push 8 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10c2c] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10c3c] }
	__asm { test al, al }
	__asm { je L_0049a810 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10c38] }
	__asm { test eax, eax }
	__asm { je L_0049a7fd }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { inc ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { call dword ptr [g_00e10c34] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0049a7fd: }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { xor ecx, ecx }
	__asm { inc ecx }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { call dword ptr [g_00e10c34] }
	__asm { L_0049a810: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_01318f9f[];
extern "C" void fn_0049a9d0();
extern "C" void fn_0049ac60();
extern "C" void fn_0057e300();
// FUNCTION: ROBLOXSTUDIO 0x0049a950
extern "C" __declspec(naked) void asm_0049a950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd8832c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp byte ptr [g_01318f9f], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { je L_0049a9bd }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_0049a9b5 }
	__asm { push edi }
	__asm { push 0x14 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0049a9a8 }
	__asm { call fn_0057e300 }
	__asm { push dword ptr [eax + 0x1c] }
	__asm { mov ecx, edi }
	__asm { call fn_0049a9d0 }
	__asm { jmp L_0049a9aa }
	__asm { L_0049a9a8: }
	__asm { xor eax, eax }
	__asm { L_0049a9aa: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { pop edi }
	__asm { L_0049a9b5: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { call fn_0049ac60 }
	__asm { L_0049a9bd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10bfc[];
extern "C" char g_00e10c88[];
extern "C" void fn_0049b790();
// FUNCTION: ROBLOXSTUDIO 0x0049b3a0
extern "C" __declspec(naked) void asm_0049b3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { js L_0049b3f6 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { sub eax, dword ptr [ecx + 8] }
	__asm { cmp edi, eax }
	__asm { jge L_0049b3f6 }
	__asm { cmp dword ptr [ecx], 1 }
	__asm { je L_0049b3cb }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_0049b790 }
	__asm { L_0049b3cb: }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { add eax, edi }
	__asm { mov ebx, dword ptr [ecx + eax*4 + 0x14] }
	__asm { test ebx, ebx }
	__asm { je L_0049b3ec }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10c88] }
	__asm { push ebx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 8 }
	__asm { L_0049b3ec: }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10bfc] }
	__asm { pop ebx }
	__asm { L_0049b3f6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0049b400
extern "C" __declspec(naked) void asm_0049b400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov esi, dword ptr [edi + 8] }
	__asm { mov eax, ecx }
	__asm { sub eax, esi }
	__asm { test eax, eax }
	__asm { jle L_0049b43d }
	__asm { lea edx, [edi + 0x14] }
	__asm { lea ebx, [esi*4 + 0x14] }
	__asm { lea edx, [edx + ecx*4] }
	__asm { lea eax, [ebx + edi] }
	__asm { cmp eax, edx }
	__asm { je L_0049b43d }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ecx] }
	__asm { nop }
	__asm { L_0049b430: }
	__asm { mov ecx, dword ptr [eax] }
	__asm { cmp dword ptr [ecx], esi }
	__asm { je L_0049b447 }
	__asm { add eax, 4 }
	__asm { cmp eax, edx }
	__asm { jne L_0049b430 }
	__asm { L_0049b43d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0049b447: }
	__asm { sub eax, ebx }
	__asm { sub eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { sar eax, 2 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}
