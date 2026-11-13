// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x0077e140
extern "C" __declspec(naked) void asm_0077e140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sub ebx, esi }
	__asm { sar ebx, 3 }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { sar eax, 1 }
	__asm { mov dword ptr [ebp + 0xc], ebx }
	__asm { test eax, eax }
	__asm { jle L_0077e228 }
	__asm { push edi }
	__asm { lea edx, [eax*2 + 2] }
	__asm { lea edi, [esi + eax*8] }
	__asm { L_0077e170: }
	__asm { mov ecx, dword ptr [edi - 8] }
	__asm { sub edi, 8 }
	__asm { dec eax }
	__asm { sub edx, 2 }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov eax, edx }
	__asm { cmp edx, ebx }
	__asm { jge L_0077e1b9 }
	__asm { L_0077e194: }
	__asm { mov ecx, dword ptr [esi + eax*8] }
	__asm { cmp ecx, dword ptr [esi + eax*8 - 8] }
	__asm { jae L_0077e19e }
	__asm { dec eax }
	__asm { L_0077e19e: }
	__asm { mov ecx, dword ptr [esi + eax*8] }
	__asm { mov dword ptr [esi + edi*8], ecx }
	__asm { mov ecx, dword ptr [esi + eax*8 + 4] }
	__asm { mov dword ptr [esi + edi*8 + 4], ecx }
	__asm { mov edi, eax }
	__asm { lea eax, [eax*2 + 2] }
	__asm { cmp eax, ebx }
	__asm { jl L_0077e194 }
	__asm { L_0077e1b9: }
	__asm { cmp eax, ebx }
	__asm { jne L_0077e1cf }
	__asm { mov eax, dword ptr [esi + ebx*8 - 8] }
	__asm { mov dword ptr [esi + edi*8], eax }
	__asm { mov eax, dword ptr [esi + ebx*8 - 4] }
	__asm { mov dword ptr [esi + edi*8 + 4], eax }
	__asm { lea edi, [ebx - 1] }
	__asm { L_0077e1cf: }
	__asm { lea eax, [edi - 1] }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sar ecx, 1 }
	__asm { cmp eax, edi }
	__asm { jge L_0077e20c }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { L_0077e1e3: }
	__asm { cmp dword ptr [esi + ecx*8], ebx }
	__asm { jae L_0077e209 }
	__asm { mov eax, dword ptr [esi + ecx*8] }
	__asm { mov dword ptr [esi + edi*8], eax }
	__asm { mov eax, dword ptr [esi + ecx*8 + 4] }
	__asm { mov dword ptr [esi + edi*8 + 4], eax }
	__asm { lea eax, [ecx - 1] }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov edi, ecx }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sar ecx, 1 }
	__asm { cmp eax, edi }
	__asm { jl L_0077e1e3 }
	__asm { L_0077e209: }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { L_0077e20c: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + edi*8], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [esi + edi*8 + 4], ecx }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { test eax, eax }
	__asm { jg L_0077e170 }
	__asm { pop edi }
	__asm { L_0077e228: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0077e230();
// FUNCTION: ROBLOXSTUDIO 0x0077e290
extern "C" __declspec(naked) void asm_0077e290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { sub eax, ebx }
	__asm { sar eax, 3 }
	__asm { cmp eax, 0x28 }
	__asm { jle L_0077e30b }
	__asm { inc eax }
	__asm { cdq }
	__asm { and edx, 7 }
	__asm { add eax, edx }
	__asm { sar eax, 3 }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { push edi }
	__asm { shl ecx, 4 }
	__asm { lea edi, [eax*8] }
	__asm { lea eax, [ecx + ebx] }
	__asm { push eax }
	__asm { lea edx, [edi + ebx] }
	__asm { push edx }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { call fn_0077e230 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [edi + ebx] }
	__asm { push eax }
	__asm { mov eax, ebx }
	__asm { sub eax, edi }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_0077e230 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov esi, eax }
	__asm { push eax }
	__asm { sub eax, dword ptr [ebp - 4] }
	__asm { sub esi, edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_0077e230 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, edi }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_0077e230 }
	__asm { add esp, 0x30 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0077e30b: }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call fn_0077e230 }
	__asm { add esp, 0xc }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0077ea60
extern "C" __declspec(naked) void asm_0077ea60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bb40 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe4efe8 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0077eaac }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { jmp L_0077eaae }
	__asm { L_0077eaac: }
	__asm { xor eax, eax }
	__asm { L_0077eaae: }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [esi + 0x10], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0077eace }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0077eace: }
	__asm { mov ecx, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], ecx }
	__asm { mov ecx, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], 0xe4f884 }
	__asm { mov dword ptr [esi + 0x10], 0xe4f890 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105c8[];
extern "C" char g_00e10608[];
extern "C" char g_012e07e4[];
extern "C" char g_012e07e8[];
extern "C" char g_012e07ec[];
// FUNCTION: ROBLOXSTUDIO 0x0077eca0
extern "C" __declspec(naked) void asm_0077eca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { xor ecx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { nop }
	__asm { L_0077ecb0: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [ebx + 0x10] }
	__asm { je L_0077ed83 }
	__asm { mov al, byte ptr [eax] }
	__asm { movzx edi, al }
	__asm { movsx esi, al }
	__asm { push edi }
	__asm { sub esi, 0x30 }
	__asm { call dword ptr [g_00e105c8] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_0077ecf3 }
	__asm { push edi }
	__asm { call dword ptr [g_00e10608] }
	__asm { lea ecx, [eax - 0x61] }
	__asm { add esp, 4 }
	__asm { cmp cl, 5 }
	__asm { ja L_0077ed80 }
	__asm { movsx esi, al }
	__asm { sub esi, 0x57 }
	__asm { L_0077ecf3: }
	__asm { mov eax, dword ptr [g_012e07e8] }
	__asm { test al, 1 }
	__asm { jne L_0077ed0f }
	__asm { or eax, 1 }
	__asm { or ecx, 0xffffffff }
	__asm { mov dword ptr [g_012e07e8], eax }
	__asm { mov dword ptr [g_012e07e4], ecx }
	__asm { jmp L_0077ed15 }
	__asm { L_0077ed0f: }
	__asm { mov ecx, dword ptr [g_012e07e4] }
	__asm { L_0077ed15: }
	__asm { test al, 2 }
	__asm { jne L_0077ed2c }
	__asm { or eax, 2 }
	__asm { shr ecx, 4 }
	__asm { mov dword ptr [g_012e07e8], eax }
	__asm { mov dword ptr [g_012e07ec], ecx }
	__asm { jmp L_0077ed32 }
	__asm { L_0077ed2c: }
	__asm { mov ecx, dword ptr [g_012e07ec] }
	__asm { L_0077ed32: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [edi] }
	__asm { cmp edx, ecx }
	__asm { ja L_0077ed77 }
	__asm { shl edx, 4 }
	__asm { mov dword ptr [edi], edx }
	__asm { mov eax, dword ptr [g_012e07e4] }
	__asm { sub eax, esi }
	__asm { cmp edx, eax }
	__asm { ja L_0077ed77 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { lea eax, [edx + esi] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { inc ecx }
	__asm { inc dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { inc dword ptr [eax] }
	__asm { cmp ecx, 4 }
	__asm { jb L_0077ecb0 }
	__asm { cmp ecx, 4 }
	__asm { pop edi }
	__asm { sbb eax, eax }
	__asm { pop esi }
	__asm { inc eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0077ed77: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0077ed80: }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { L_0077ed83: }
	__asm { cmp ecx, 4 }
	__asm { pop edi }
	__asm { sbb eax, eax }
	__asm { pop esi }
	__asm { inc eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10410[];
extern "C" void fn_0077ef40();
// FUNCTION: ROBLOXSTUDIO 0x0077ee90
extern "C" __declspec(naked) void asm_0077ee90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd37c10 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 1 }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e10410] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_0077eeeb }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_0077eeeb: }
	__asm { push ecx }
	__asm { mov eax, esp }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, edi }
	__asm { call fn_0077ef40 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov bl, al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [edx + 8] }
	__asm { test eax, eax }
	__asm { je L_0077ef21 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_0077ef21: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10528[];
extern "C" char g_00e105ac[];
extern "C" void fn_004038a0();
extern "C" void fn_0043ee70();
extern "C" void fn_0077d070();
extern "C" void fn_0077f070();
extern "C" void fn_00781520();
// FUNCTION: ROBLOXSTUDIO 0x0077ef40
extern "C" __declspec(naked) void asm_0077ef40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bbc0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x60 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0077f070 }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { je L_0077efc1 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov bl, byte ptr [ebp - 0xf] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0077efad }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { test eax, eax }
	__asm { je L_0077efad }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx] }
	__asm { L_0077efad: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0077efc1: }
	__asm { push 0x1c }
	__asm { push 0xe4f7e8 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x28], 0xf }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov byte ptr [ebp - 0x3c], 0 }
	__asm { call fn_004038a0 }
	__asm { push 0x13164e0 }
	__asm { mov ecx, 0x12bdfcc }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e105ac] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { call fn_0043ee70 }
	__asm { push 0xe4f7dc }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0043ee70 }
	__asm { add esp, 0x18 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { jb L_0077f026 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0077f026: }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e10528] }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov dword ptr [ebp - 0x24], 0xe4efe8 }
	__asm { call fn_0077d070 }
	__asm { push 0x28d }
	__asm { push 0xe4f520 }
	__asm { push 0xe4f590 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00781520 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_0077f1d0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0077f0e0
extern "C" __declspec(naked) void asm_0077f0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bbd0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { push 0x48 }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { test esi, esi }
	__asm { jne L_0077f11f }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0077f11f: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea edi, [ebx + 9] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0077f1d0 }
	__asm { mov ebx, eax }
	__asm { cmp ebx, esi }
	__asm { jne L_0077f189 }
	__asm { test edi, edi }
	__asm { je L_0077f146 }
	__asm { add edi, -9 }
	__asm { jmp L_0077f148 }
	__asm { L_0077f146: }
	__asm { xor edi, edi }
	__asm { L_0077f148: }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { test edx, edx }
	__asm { je L_0077f154 }
	__asm { add edx, 0x40 }
	__asm { jmp L_0077f156 }
	__asm { L_0077f154: }
	__asm { xor edx, edx }
	__asm { L_0077f156: }
	__asm { mov eax, dword ptr [edx] }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { inc dword ptr [eax + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov byte ptr [eax + 4], 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0077f189: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [eax], ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00403540();
extern "C" void fn_00781660();
extern "C" void fn_00787350();
extern "C" void fn_007873b0();
// FUNCTION: ROBLOXSTUDIO 0x0077f1d0
extern "C" __declspec(naked) void asm_0077f1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bbf9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push ebx }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_007873b0 }
	__asm { test al, al }
	__asm { jne L_0077f23e }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { test eax, eax }
	__asm { je L_0077f22a }
	__asm { pop edi }
	__asm { add eax, -0x34 }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0077f22a: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0077f23e: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0077f27d }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { lea eax, [ebx + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00781660 }
	__asm { L_0077f27d: }
	__asm { test edi, edi }
	__asm { je L_0077f286 }
	__asm { lea eax, [edi - 9] }
	__asm { jmp L_0077f288 }
	__asm { L_0077f286: }
	__asm { xor eax, eax }
	__asm { L_0077f288: }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { test eax, eax }
	__asm { je L_0077f294 }
	__asm { lea ecx, [eax + 0x34] }
	__asm { jmp L_0077f296 }
	__asm { L_0077f294: }
	__asm { xor ecx, ecx }
	__asm { L_0077f296: }
	__asm { test esi, esi }
	__asm { je L_0077f29f }
	__asm { lea eax, [esi + 0x34] }
	__asm { jmp L_0077f2a1 }
	__asm { L_0077f29f: }
	__asm { xor eax, eax }
	__asm { L_0077f2a1: }
	__asm { push ecx }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00787350 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0x10 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0077f660();
extern "C" void fn_00781220();
// FUNCTION: ROBLOXSTUDIO 0x0077f7e0
extern "C" __declspec(naked) void asm_0077f7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { mov eax, ecx }
	__asm { mov edi, dword ptr [edi] }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_0077f660 }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { js L_0077f87b }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx], edi }
	__asm { push dword ptr [eax + 4] }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00781220 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { js L_0077f835 }
	__asm { cmp eax, esi }
	__asm { jge L_0077f87b }
	__asm { L_0077f835: }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push ebx }
	__asm { push dword ptr [eax + 0xc] }
	__asm { push dword ptr [eax + 8] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00781220 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x10 }
	__asm { test eax, eax }
	__asm { js L_0077f868 }
	__asm { cmp eax, esi }
	__asm { jge L_0077f87b }
	__asm { L_0077f868: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0077f87b: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077f600();
// FUNCTION: ROBLOXSTUDIO 0x0077f890
extern "C" __declspec(naked) void asm_0077f890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0077f8f7 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { js L_0077f8f7 }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_0077f600 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { js L_0077f8e4 }
	__asm { cmp eax, esi }
	__asm { jge L_0077f8f7 }
	__asm { L_0077f8e4: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0077f8f7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077f660();
// FUNCTION: ROBLOXSTUDIO 0x0077f910
extern "C" __declspec(naked) void asm_0077f910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [eax], 0 }
	__asm { L_0077f928: }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { push ebx }
	__asm { mov edi, dword ptr [edi] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_0077f660 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { test ecx, ecx }
	__asm { js L_0077f9bd }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov edx, dword ptr [eax] }
	__asm { xor eax, eax }
	__asm { cmp edx, dword ptr [ebx + 0x10] }
	__asm { je L_0077f969 }
	__asm { cmp byte ptr [edx], 0xd }
	__asm { jne L_0077f969 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { inc dword ptr [eax] }
	__asm { mov eax, 1 }
	__asm { L_0077f969: }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { cmp ecx, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { je L_0077f990 }
	__asm { mov ebx, dword ptr [ebp - 8] }
	__asm { cmp byte ptr [ebx], 0xa }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { jne L_0077f990 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { inc dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { inc eax }
	__asm { L_0077f990: }
	__asm { test eax, eax }
	__asm { je L_0077f996 }
	__asm { jns L_0077f9a7 }
	__asm { L_0077f996: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [ebx + 0x10] }
	__asm { jne L_0077f9ab }
	__asm { xor eax, eax }
	__asm { L_0077f9a7: }
	__asm { cmp eax, ecx }
	__asm { jge L_0077f9bd }
	__asm { L_0077f9ab: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { jmp L_0077f928 }
	__asm { L_0077f9bd: }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077f910();
extern "C" void fn_00781220();
// FUNCTION: ROBLOXSTUDIO 0x0077fc20
extern "C" __declspec(naked) void asm_0077fc20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push dword ptr [ebx] }
	__asm { push eax }
	__asm { call fn_00781220 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x10 }
	__asm { test esi, esi }
	__asm { js L_0077fcc3 }
	__asm { mov ax, word ptr [ebx + 8] }
	__asm { mov word ptr [ebp + 0xc], ax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { shr eax, 8 }
	__asm { mov byte ptr [ebp + 0xf], al }
	__asm { push edi }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0xf] }
	__asm { call fn_0077f910 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test eax, eax }
	__asm { js L_0077fcc3 }
	__asm { lea edx, [eax + esi] }
	__asm { test edx, edx }
	__asm { js L_0077fcc3 }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, dword ptr [edi + 0x10] }
	__asm { je L_0077fc89 }
	__asm { cmp byte ptr [ecx], 0xd }
	__asm { jne L_0077fc89 }
	__asm { inc dword ptr [esi] }
	__asm { mov eax, 1 }
	__asm { L_0077fc89: }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { mov ebx, dword ptr [esi] }
	__asm { cmp ebx, dword ptr [edi + 0x10] }
	__asm { je L_0077fc9b }
	__asm { cmp byte ptr [ebx], 0xa }
	__asm { jne L_0077fc9b }
	__asm { inc dword ptr [esi] }
	__asm { inc eax }
	__asm { L_0077fc9b: }
	__asm { test eax, eax }
	__asm { je L_0077fca1 }
	__asm { jns L_0077fcb2 }
	__asm { L_0077fca1: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [edi + 0x10] }
	__asm { jne L_0077fcc3 }
	__asm { xor eax, eax }
	__asm { L_0077fcb2: }
	__asm { lea ecx, [eax + edx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0077fcc3: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10388[];
extern "C" void fn_00610420();
extern "C" void fn_007810b0();
// FUNCTION: ROBLOXSTUDIO 0x0077fe60
extern "C" __declspec(naked) void asm_0077fe60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { push esi }
	__asm { push dword ptr [esi] }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { call fn_007810b0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0077fe92 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push esi }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_0077fe95 }
	__asm { L_0077fe92: }
	__asm { or eax, 0xffffffff }
	__asm { L_0077fe95: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { js L_0077fee9 }
	__asm { mov edi, dword ptr [ebx + 4] }
	__asm { lea ebx, [edi + 0x18] }
	__asm { cmp ebx, edi }
	__asm { je L_0077fed1 }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10388] }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_00610420 }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [ebx + 0x14], eax }
	__asm { mov dword ptr [edi + 0x14], ecx }
	__asm { L_0077fed1: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov dword ptr [eax + 0x10], 0 }
	__asm { jb L_0077fee6 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0077fee6: }
	__asm { mov byte ptr [eax], 0 }
	__asm { L_0077fee9: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007801e0();
extern "C" void fn_007810b0();
extern "C" void fn_00781220();
// FUNCTION: ROBLOXSTUDIO 0x0077ff00
extern "C" __declspec(naked) void asm_0077ff00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { push edi }
	__asm { mov esi, dword ptr [esi] }
	__asm { push ebx }
	__asm { lea eax, [ebp - 4] }
	__asm { mov edi, ecx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0xc], edi }
	__asm { call fn_007801e0 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test eax, eax }
	__asm { jns L_0077ff72 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push ebx }
	__asm { mov dword ptr [eax], esi }
	__asm { push ebx }
	__asm { push dword ptr [ebx] }
	__asm { call fn_007810b0 }
	__asm { mov edx, dword ptr [ebx + 0xc] }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov ebx, dword ptr [edi + 0x10] }
	__asm { mov edi, dword ptr [edi + 0xc] }
	__asm { mov eax, ebx }
	__asm { add esp, 0xc }
	__asm { sub eax, edi }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { cmp edi, ebx }
	__asm { je L_0077ff6e }
	__asm { L_0077ff52: }
	__asm { mov ebx, dword ptr [edx] }
	__asm { cmp ebx, ecx }
	__asm { je L_0077ff82 }
	__asm { mov dl, byte ptr [edi] }
	__asm { cmp dl, byte ptr [ebx] }
	__asm { jne L_0077ff82 }
	__asm { lea edx, [ebx + 1] }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { inc edi }
	__asm { mov dword ptr [ebx], edx }
	__asm { mov edx, ebx }
	__asm { cmp edi, dword ptr [ebp - 8] }
	__asm { jne L_0077ff52 }
	__asm { L_0077ff6e: }
	__asm { test eax, eax }
	__asm { js L_0077ff82 }
	__asm { L_0077ff72: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0077ff82: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [eax], esi }
	__asm { push dword ptr [edi] }
	__asm { call fn_007810b0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { push dword ptr [eax + 0x18] }
	__asm { push dword ptr [eax + 0x14] }
	__asm { push esi }
	__asm { call fn_00781220 }
	__asm { add esp, 0x1c }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007804b0();
extern "C" void fn_00780520();
extern "C" void fn_00780760();
// FUNCTION: ROBLOXSTUDIO 0x0077ffd0
extern "C" __declspec(naked) void asm_0077ffd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { lea eax, [ebp - 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { push eax }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ebx, ecx }
	__asm { call fn_007804b0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { js L_00780001 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00780001: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [eax], esi }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 1] }
	__asm { call fn_00780520 }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { js L_0078003f }
	__asm { push edi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 3] }
	__asm { call fn_00780760 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { js L_0078003f }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0078003f: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ecx], 0xffffffff }
	__asm { mov eax, ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077ff00();
extern "C" void fn_007810b0();
extern "C" void fn_00784b80();
extern "C" void fn_00784f80();
// FUNCTION: ROBLOXSTUDIO 0x007800b0
extern "C" __declspec(naked) void asm_007800b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax] }
	__asm { push ebx }
	__asm { push ebx }
	__asm { push dword ptr [ebx] }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_007810b0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edi, dword ptr [edi] }
	__asm { add esp, 0xc }
	__asm { test ecx, ecx }
	__asm { je L_00780115 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { js L_00780112 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push dword ptr [eax] }
	__asm { add ecx, 4 }
	__asm { push edi }
	__asm { call fn_00784f80 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00780112: }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { L_00780115: }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov dword ptr [ecx], eax }
	__asm { push ebx }
	__asm { push dword ptr [ebx] }
	__asm { lea eax, [esi + 8] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_007810b0 }
	__asm { mov esi, dword ptr [ebx + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [esi] }
	__asm { add esp, 0xc }
	__asm { push ebx }
	__asm { push edi }
	__asm { call fn_0077ff00 }
	__asm { cmp dword ptr [edi], 0 }
	__asm { jl L_00780157 }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { push dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { lea ecx, [ecx + 0x1c] }
	__asm { call fn_00784b80 }
	__asm { L_00780157: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00780170
extern "C" __declspec(naked) void asm_00780170()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_007801a5 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { js L_007801a5 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007801a5: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007801ce }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_007801ce: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007810b0();
extern "C" void fn_00781220();
// FUNCTION: ROBLOXSTUDIO 0x007801e0
extern "C" __declspec(naked) void asm_007801e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [esi] }
	__asm { test ecx, ecx }
	__asm { je L_0078021a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { js L_0078021a }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0078021a: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { push edi }
	__asm { mov dword ptr [eax], esi }
	__asm { push edi }
	__asm { push dword ptr [edi] }
	__asm { call fn_007810b0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 8] }
	__asm { push dword ptr [ebx + 4] }
	__asm { push esi }
	__asm { call fn_00781220 }
	__asm { add esp, 0x1c }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007804b0();
// FUNCTION: ROBLOXSTUDIO 0x007806e0
extern "C" __declspec(naked) void asm_007806e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00780747 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { js L_00780747 }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { add ecx, 4 }
	__asm { call fn_007804b0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { js L_00780734 }
	__asm { cmp eax, esi }
	__asm { jge L_00780747 }
	__asm { L_00780734: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [eax], edi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00780747: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007806e0();
extern "C" void fn_00780a10();
// FUNCTION: ROBLOXSTUDIO 0x00780a70
extern "C" __declspec(naked) void asm_00780a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov eax, ecx }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_007806e0 }
	__asm { cmp dword ptr [ebp - 8], 0 }
	__asm { jl L_00780aeb }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { push ebx }
	__asm { mov edi, dword ptr [edi] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { lea ecx, [eax + 8] }
	__asm { xor esi, esi }
	__asm { call fn_00780a10 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { js L_00780acf }
	__asm { L_00780ab1: }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov edi, dword ptr [edi] }
	__asm { add esi, eax }
	__asm { push ebx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ecx + 8] }
	__asm { call fn_00780a10 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { jns L_00780ab1 }
	__asm { L_00780acf: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { test esi, esi }
	__asm { js L_00780aeb }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add ecx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00780aeb: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007803c0();
extern "C" void fn_00780a70();
// FUNCTION: ROBLOXSTUDIO 0x00780b00
extern "C" __declspec(naked) void asm_00780b00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { mov al, byte ptr [edi + 4] }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov byte ptr [ebp - 0x14], al }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x28], edx }
	__asm { mov dword ptr [ebp - 0x1c], edx }
	__asm { call fn_00780a70 }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { test esi, esi }
	__asm { js L_00780b6b }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 8] }
	__asm { call fn_007803c0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { js L_00780b6b }
	__asm { lea ecx, [eax + esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00780b6b: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0077ffd0();
extern "C" void fn_007804b0();
extern "C" void fn_00780950();
// FUNCTION: ROBLOXSTUDIO 0x00780b80
extern "C" __declspec(naked) void asm_00780b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { mov eax, ecx }
	__asm { mov edi, dword ptr [edi] }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_007804b0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { test esi, esi }
	__asm { jns L_00780baf }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [eax], edi }
	__asm { L_00780baf: }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { push ebx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [edi + 1] }
	__asm { call fn_0077ffd0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { js L_00780c1e }
	__asm { add esi, eax }
	__asm { js L_00780c1e }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [edi + 5] }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_007804b0 }
	__asm { mov edi, dword ptr [eax] }
	__asm { test edi, edi }
	__asm { js L_00780c03 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { inc ecx }
	__asm { call fn_00780950 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { test eax, eax }
	__asm { js L_00780c03 }
	__asm { add eax, edi }
	__asm { jns L_00780c0d }
	__asm { L_00780c03: }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx], eax }
	__asm { xor eax, eax }
	__asm { L_00780c0d: }
	__asm { lea ecx, [eax + esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00780c1e: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00780950();
extern "C" void fn_00780b80();
extern "C" void fn_00780d20();
// FUNCTION: ROBLOXSTUDIO 0x00780c30
extern "C" __declspec(naked) void asm_00780c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_00780b80 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { js L_00780ca6 }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { push ebx }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [edi + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_00780d20 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { test edi, edi }
	__asm { js L_00780c8b }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push ebx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { add ecx, 0x10 }
	__asm { call fn_00780950 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { js L_00780c8b }
	__asm { add eax, edi }
	__asm { jns L_00780c95 }
	__asm { L_00780c8b: }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { xor eax, eax }
	__asm { L_00780c95: }
	__asm { lea ecx, [eax + esi] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00780ca6: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10260[];
extern "C" void fn_004036a0();
// FUNCTION: ROBLOXSTUDIO 0x00781570
extern "C" __declspec(naked) void asm_00781570()
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
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov bl, byte ptr [edx] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test bl, bl }
	__asm { je L_00781637 }
	__asm { push edi }
	__asm { mov edi, edi }
	__asm { L_007815c0: }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { or eax, 0xffffffff }
	__asm { sub eax, ecx }
	__asm { cmp eax, 1 }
	__asm { jbe L_00781649 }
	__asm { lea edi, [ecx + 1] }
	__asm { cmp edi, -2 }
	__asm { ja L_00781649 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { cmp eax, edi }
	__asm { jae L_007815f9 }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_004036a0 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { test edi, edi }
	__asm { je L_0078162b }
	__asm { L_007815ec: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { jb L_00781613 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_00781615 }
	__asm { L_007815f9: }
	__asm { test edi, edi }
	__asm { jne L_007815ec }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { cmp eax, 0x10 }
	__asm { jb L_0078160c }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [eax], 0 }
	__asm { jmp L_0078162b }
	__asm { L_0078160c: }
	__asm { mov eax, esi }
	__asm { mov byte ptr [eax], 0 }
	__asm { jmp L_0078162b }
	__asm { L_00781613: }
	__asm { mov eax, esi }
	__asm { L_00781615: }
	__asm { mov byte ptr [eax + ecx], bl }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { jb L_00781625 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_00781627 }
	__asm { L_00781625: }
	__asm { mov eax, esi }
	__asm { L_00781627: }
	__asm { mov byte ptr [eax + edi], 0 }
	__asm { L_0078162b: }
	__asm { mov bl, byte ptr [edx + 1] }
	__asm { inc edx }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { test bl, bl }
	__asm { jne L_007815c0 }
	__asm { pop edi }
	__asm { L_00781637: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00781649: }
	__asm { push 0xf12f48 }
	__asm { call dword ptr [g_00e10260] }
}

extern "C" void fn_00403540();
extern "C" void fn_00783400();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00781660
extern "C" __declspec(naked) void asm_00781660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2b9d3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_007816db }
	__asm { push dword ptr [edi + 0x18] }
	__asm { mov ecx, eax }
	__asm { call fn_00783400 }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007816db: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00411c20();
extern "C" void fn_00783650();
// FUNCTION: ROBLOXSTUDIO 0x007819d0
extern "C" __declspec(naked) void asm_007819d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1be4c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00781a1c }
	__asm { mov dword ptr [esi + 0x54], 0xe4f8d0 }
	__asm { mov dword ptr [esi + 0x5c], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00781a1c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00783650 }
	__asm { mov dword ptr [esi], 0xe4f014 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00781a3d }
	__asm { lea edx, [edi + 0x40] }
	__asm { jmp L_00781a3f }
	__asm { L_00781a3d: }
	__asm { xor edx, edx }
	__asm { L_00781a3f: }
	__asm { lea ebx, [esi + 0x40] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00781a5d }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_00781a5d: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x54] }
	__asm { mov dword ptr [esi], 0xe4f8b0 }
	__asm { mov dword ptr [ebx], 0xe4f8bc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x54], 0xe4f8c4 }
	__asm { mov eax, dword ptr [esi + 0x54] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x50], eax }
	__asm { test edi, edi }
	__asm { je L_00781aa6 }
	__asm { add edi, 0x40 }
	__asm { jmp L_00781aa8 }
	__asm { L_00781aa6: }
	__asm { xor edi, edi }
	__asm { L_00781aa8: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00411c20();
extern "C" void fn_00783650();
// FUNCTION: ROBLOXSTUDIO 0x00781ad0
extern "C" __declspec(naked) void asm_00781ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1be4c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00781b1c }
	__asm { mov dword ptr [esi + 0x54], 0xe4f8d0 }
	__asm { mov dword ptr [esi + 0x5c], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00781b1c: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00783650 }
	__asm { mov dword ptr [esi], 0xe4f014 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00781b3d }
	__asm { lea edx, [edi + 0x40] }
	__asm { jmp L_00781b3f }
	__asm { L_00781b3d: }
	__asm { xor edx, edx }
	__asm { L_00781b3f: }
	__asm { lea ebx, [esi + 0x40] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebx], 0xe18224 }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00781b5d }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { L_00781b5d: }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x54] }
	__asm { mov dword ptr [esi], 0xe4f8b0 }
	__asm { mov dword ptr [ebx], 0xe4f8bc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [eax + esi + 0x54], 0xe4f8c4 }
	__asm { mov eax, dword ptr [esi + 0x54] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x50], eax }
	__asm { test edi, edi }
	__asm { je L_00781ba6 }
	__asm { add edi, 0x40 }
	__asm { jmp L_00781ba8 }
	__asm { L_00781ba6: }
	__asm { xor edi, edi }
	__asm { L_00781ba8: }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00783650();
// FUNCTION: ROBLOXSTUDIO 0x00781bd0
extern "C" __declspec(naked) void asm_00781bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1be84 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00781c1b }
	__asm { mov dword ptr [esi + 0x54], 0xe4f8d0 }
	__asm { mov dword ptr [esi + 0x5c], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00781c1b: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_00783650 }
	__asm { mov dword ptr [esi], 0xe4f014 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00781c3c }
	__asm { add edi, 0x40 }
	__asm { jmp L_00781c3e }
	__asm { L_00781c3c: }
	__asm { xor edi, edi }
	__asm { L_00781c3e: }
	__asm { mov dword ptr [esi + 0x40], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 0x44], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00781c54 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00781c54: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x50], eax }
	__asm { mov eax, dword ptr [esi + 0x54] }
	__asm { mov dword ptr [esi], 0xe4f8b0 }
	__asm { mov dword ptr [esi + 0x40], 0xe4f8bc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x54], 0xe4f8c4 }
	__asm { mov eax, dword ptr [esi + 0x54] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x50], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x00781cb0
extern "C" __declspec(naked) void asm_00781cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bec4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00781cfc }
	__asm { mov dword ptr [esi + 0x24], 0xe4f938 }
	__asm { mov dword ptr [esi + 0x2c], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00781cfc: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe4efe8 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00781d23 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { jmp L_00781d25 }
	__asm { L_00781d23: }
	__asm { xor eax, eax }
	__asm { L_00781d25: }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { lea ebx, [edi + 0x10] }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00781d4a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00781d4a: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [esi], 0xe4f918 }
	__asm { mov dword ptr [edi], 0xe4f924 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + esi + 0x24], 0xe4f92c }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x20], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x00781db0
extern "C" __declspec(naked) void asm_00781db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bec4 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00781dfc }
	__asm { mov dword ptr [esi + 0x24], 0xe4f938 }
	__asm { mov dword ptr [esi + 0x2c], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00781dfc: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe4efe8 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00781e23 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { jmp L_00781e25 }
	__asm { L_00781e23: }
	__asm { xor eax, eax }
	__asm { L_00781e25: }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { lea ebx, [edi + 0x10] }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00781e4a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00781e4a: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [esi], 0xe4f918 }
	__asm { mov dword ptr [edi], 0xe4f924 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + esi + 0x24], 0xe4f92c }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x20], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00781eb0
extern "C" __declspec(naked) void asm_00781eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1befc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_00781efb }
	__asm { mov dword ptr [esi + 0x24], 0xe4f938 }
	__asm { mov dword ptr [esi + 0x2c], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_00781efb: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe4efe8 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00781f22 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { jmp L_00781f24 }
	__asm { L_00781f22: }
	__asm { xor eax, eax }
	__asm { L_00781f24: }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [esi + 0x10], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00781f44 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00781f44: }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [esi], 0xe4f918 }
	__asm { mov dword ptr [esi + 0x10], 0xe4f924 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + esi + 0x24], 0xe4f92c }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00783380();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00782150
extern "C" __declspec(naked) void asm_00782150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1bf36 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0xf }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [esi + 0x18], 0 }
	__asm { lea edi, [esi + 0x30] }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { push 0x10 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test eax, eax }
	__asm { je L_007821e1 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00783380 }
	__asm { jmp L_007821e3 }
	__asm { L_007821e1: }
	__asm { xor eax, eax }
	__asm { L_007821e3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov dword ptr [esi + 0x54], 0 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x007830f0
extern "C" __declspec(naked) void asm_007830f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c1f0 }
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
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe4f508 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x10] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov dword ptr [esi + 0x28], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_0078316b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_0078316b: }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov dword ptr [esi], 0xe4f870 }
	__asm { mov dword ptr [esi + 0x28], 0xe4f87c }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00783230
extern "C" __declspec(naked) void asm_00783230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c230 }
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
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe4efe8 }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00783275 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { jmp L_00783277 }
	__asm { L_00783275: }
	__asm { xor eax, eax }
	__asm { L_00783277: }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov dword ptr [esi + 0x10], 0xe18224 }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x14], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00783297 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00783297: }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov dword ptr [esi], 0xe4f884 }
	__asm { mov dword ptr [esi + 0x10], 0xe4f890 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00786c90();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00783380
extern "C" __declspec(naked) void asm_00783380()
{
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x48 }
	__asm { mov edi, ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00783398 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00783398: }
	__asm { lea esi, [edi + 9] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { call fn_00786c90 }
	__asm { test esi, esi }
	__asm { je L_007833ae }
	__asm { lea eax, [esi - 9] }
	__asm { jmp L_007833b0 }
	__asm { L_007833ae: }
	__asm { xor eax, eax }
	__asm { L_007833b0: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007833bc }
	__asm { add ecx, 0x40 }
	__asm { jmp L_007833be }
	__asm { L_007833bc: }
	__asm { xor ecx, ecx }
	__asm { L_007833be: }
	__asm { test esi, esi }
	__asm { je L_007833c7 }
	__asm { lea eax, [esi - 9] }
	__asm { jmp L_007833c9 }
	__asm { L_007833c7: }
	__asm { xor eax, eax }
	__asm { L_007833c9: }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 0x44], ecx }
	__asm { test esi, esi }
	__asm { je L_007833ea }
	__asm { lea eax, [esi - 9] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 0x40], ecx }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 8 }
	__asm { L_007833ea: }
	__asm { xor eax, eax }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 0x40], ecx }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { ret 8 }
}

extern "C" char g_00e10528[];
extern "C" void fn_00403540();
extern "C" void fn_00786e10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007836f0
extern "C" __declspec(naked) void asm_007836f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c30b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00786e10 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jb L_00783737 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00783737: }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [esi], 0xe4efdc }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { jb L_00783761 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00783761: }
	__asm { push -1 }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov dword ptr [esi], 0xe4eff4 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { push -1 }
	__asm { lea ecx, [esi + 0x24] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x3c], edi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10268[];
extern "C" void fn_007869a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00783bb0
extern "C" __declspec(naked) void asm_00783bb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c386 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp dword ptr [esi + 0x4c], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_00783c08 }
	__asm { lea ecx, [esi + 0x4c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi + 0x4c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov dword ptr [esi + 0x54], 0 }
	__asm { L_00783c08: }
	__asm { lea edi, [esi + 0x30] }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov ebx, dword ptr [edi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { test ebx, ebx }
	__asm { je L_00783c3a }
	__asm { lea ecx, [ebx + 9] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_007869a0 }
	__asm { push dword ptr [ebx + 4] }
	__asm { call fn_00cf6522 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 8 }
	__asm { L_00783c3a: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { pop ebx }
	__asm { jb L_00783c4b }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00783c4b: }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { cmp dword ptr [esi + 0x2c], 0x10 }
	__asm { jb L_00783c6d }
	__asm { push dword ptr [esi + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00783c6d: }
	__asm { mov dword ptr [esi + 0x2c], 0xf }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { mov byte ptr [esi + 0x18], 0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00783c8f }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00783c8f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00783d70
extern "C" __declspec(naked) void asm_00783d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c410 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov ecx, dword ptr [esi + 0x4c] }
	__asm { mov dword ptr [ebp - 4], 8 }
	__asm { test ecx, ecx }
	__asm { je L_00783da3 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00783da3: }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { test ecx, ecx }
	__asm { je L_00783db4 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00783db4: }
	__asm { mov ecx, dword ptr [esi + 0x3c] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { test ecx, ecx }
	__asm { je L_00783dc5 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00783dc5: }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { test ecx, ecx }
	__asm { je L_00783dd6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00783dd6: }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test ecx, ecx }
	__asm { je L_00783de7 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00783de7: }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test ecx, ecx }
	__asm { je L_00783df8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00783df8: }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test ecx, ecx }
	__asm { je L_00783e09 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00783e09: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00783e1a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00783e1a: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00783e2b }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00783e2b: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { test ecx, ecx }
	__asm { je L_00783e40 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00783e40: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00781790();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00784700
extern "C" __declspec(naked) void asm_00784700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c4cb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x5c }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00cf661e }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00784789 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea esi, [ebx + 4] }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebx], 0xe4fa5c }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { call fn_00781790 }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { lea ecx, [esi + 0x40] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x40] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { pop edi }
	__asm { jmp L_0078478b }
	__asm { L_00784789: }
	__asm { xor ebx, ebx }
	__asm { L_0078478b: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [esi + 4], ebx }
	__asm { test ecx, ecx }
	__asm { je L_007847a2 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_007847a2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007800b0();
// FUNCTION: ROBLOXSTUDIO 0x007848c0
extern "C" __declspec(naked) void asm_007848c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov esi, dword ptr [esi] }
	__asm { push eax }
	__asm { mov ebx, ecx }
	__asm { call fn_007800b0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { jns L_00784931 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_007848fe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp L_00784901 }
	__asm { L_007848fe: }
	__asm { or eax, 0xffffffff }
	__asm { L_00784901: }
	__asm { test eax, eax }
	__asm { jns L_00784931 }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0078492e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { lea edx, [ebp + 0xc] }
	__asm { push edx }
	__asm { call dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0078492e: }
	__asm { or eax, 0xffffffff }
	__asm { L_00784931: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00411c20();
extern "C" void fn_007830f0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00785e30
extern "C" __declspec(naked) void asm_00785e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c6bf }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x48 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00785ef9 }
	__asm { mov dword ptr [esi + 0x3c], 0xe4f8fc }
	__asm { add edi, -0x44 }
	__asm { mov dword ptr [esi + 0x44], 0xe1822c }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_007830f0 }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [esi], 0xe4f8dc }
	__asm { lea edx, [esi + 0x28] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [edx], 0xe4f8e8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x3c], 0xe4f8f0 }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + esi + 0x38], eax }
	__asm { test edi, edi }
	__asm { je L_00785ed2 }
	__asm { lea eax, [edi + 0x28] }
	__asm { jmp L_00785ed4 }
	__asm { L_00785ed2: }
	__asm { xor eax, eax }
	__asm { L_00785ed4: }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00411c20 }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { add esp, 8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add eax, 0x3c }
	__asm { pop edi }
	__asm { add eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00785ef9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_00781790();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00786230
extern "C" __declspec(naked) void asm_00786230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c70b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push 0x5c }
	__asm { mov edi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_007862c3 }
	__asm { push esi }
	__asm { lea esi, [ebx + 4] }
	__asm { add edi, 4 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebx], 0xe4fa5c }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00781790 }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { lea ecx, [esi + 0x40] }
	__asm { push -1 }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { push 0 }
	__asm { lea edx, [edi + 0x40] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push edx }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_007862c3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00781fa0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007862e0
extern "C" __declspec(naked) void asm_007862e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c6e3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0x20 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { mov ebx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_0078635d }
	__asm { push edi }
	__asm { mov dword ptr [ebx], 0xe4fa8c }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ax, word ptr [esi + 8] }
	__asm { mov word ptr [ebx + 8], ax }
	__asm { movzx ecx, byte ptr [esi + 0xa] }
	__asm { add esi, 0xc }
	__asm { mov byte ptr [ebx + 0xa], cl }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00781fa0 }
	__asm { movzx ecx, byte ptr [esi + 0x10] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [ebx + 0x1c], cl }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0078635d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00403540();
extern "C" void fn_0077e320();
extern "C" void fn_00781660();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007863d0
extern "C" __declspec(naked) void asm_007863d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x48 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [edx + eax*8], ebx }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { jne L_00786418 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00786418: }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx + eax*8 + 4], edx }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov edi, dword ptr [ecx + eax*8 + 4] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_0078646e }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { lea eax, [ebx + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00781660 }
	__asm { L_0078646e: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp dword ptr [esi + 0x14], eax }
	__asm { jne L_00786498 }
	__asm { mov edx, dword ptr [esi + 0x10] }
	__asm { lea ecx, [edx + eax*8] }
	__asm { mov eax, ecx }
	__asm { sub eax, edx }
	__asm { sar eax, 3 }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { call fn_0077e320 }
	__asm { add esp, 0xc }
	__asm { L_00786498: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { push dword ptr [eax + ecx*8 + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00782210();
extern "C" void fn_008bbcc0();
extern "C" void fn_009209e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007868d0
extern "C" __declspec(naked) void asm_007868d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c783 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea esi, [eax + 4] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { sub eax, dword ptr [esi] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0xc] }
	__asm { sar eax, 2 }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp eax, edi }
	__asm { ja L_0078691c }
	__asm { lea eax, [edi + edi*2] }
	__asm { shr eax, 1 }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009209e0 }
	__asm { L_0078691c: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi*4] }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov eax, dword ptr [ecx + eax] }
	__asm { test eax, eax }
	__asm { jne L_0078697e }
	__asm { push 0x50 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00786953 }
	__asm { push ebx }
	__asm { mov ecx, eax }
	__asm { call fn_00782210 }
	__asm { mov edi, eax }
	__asm { jmp L_00786955 }
	__asm { L_00786953: }
	__asm { xor edi, edi }
	__asm { L_00786955: }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { mov ebx, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { call fn_008bbcc0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { inc dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ecx + eax], edi }
	__asm { mov eax, edi }
	__asm { L_0078697e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007839d0();
extern "C" void fn_007872b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007869a0
extern "C" __declspec(naked) void asm_007869a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e378 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { test ebx, ebx }
	__asm { je L_007869c6 }
	__asm { lea eax, [ebx - 9] }
	__asm { jmp L_007869c8 }
	__asm { L_007869c6: }
	__asm { xor eax, eax }
	__asm { L_007869c8: }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [eax + 0x44] }
	__asm { test esi, esi }
	__asm { je L_007869d7 }
	__asm { add esi, -0x40 }
	__asm { jmp L_007869d9 }
	__asm { L_007869d7: }
	__asm { xor esi, esi }
	__asm { L_007869d9: }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007872b0 }
	__asm { cmp esi, eax }
	__asm { je L_00786a45 }
	__asm { push edi }
	__asm { L_007869e6: }
	__asm { mov eax, dword ptr [esi + 0x44] }
	__asm { test eax, eax }
	__asm { je L_007869f2 }
	__asm { lea edi, [eax - 0x40] }
	__asm { jmp L_007869f4 }
	__asm { L_007869f2: }
	__asm { xor edi, edi }
	__asm { L_007869f4: }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007839d0 }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_00786a1a }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00786a1a: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00cf6522 }
	__asm { mov esi, edi }
	__asm { add esp, 4 }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007872b0 }
	__asm { cmp edi, eax }
	__asm { jne L_007869e6 }
	__asm { pop edi }
	__asm { L_00786a45: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102d4[];
extern "C" char g_00e1031c[];
extern "C" char g_00e10328[];
extern "C" char g_00e10460[];
extern "C" void fn_004270c0();
extern "C" void fn_004272a0();
extern "C" void fn_004276b0();
// FUNCTION: ROBLOXSTUDIO 0x00786e10
extern "C" __declspec(naked) void asm_00786e10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ab9d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xb8 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 0xc0], 0x1004fbc }
	__asm { mov dword ptr [ebp - 0xb0], 0x1004fb4 }
	__asm { call dword ptr [g_00e102d4] }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0xa8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xc0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 2 }
	__asm { call dword ptr [g_00e10328] }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0xc0], 0xe18340 }
	__asm { mov eax, dword ptr [ebp - 0xc0] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0x68] }
	__asm { mov dword ptr [ebp + ecx - 0xc4], eax }
	__asm { lea ecx, [ebp - 0xa8] }
	__asm { call dword ptr [g_00e1031c] }
	__asm { mov dword ptr [ebp - 0xa8], 0xe1827c }
	__asm { mov dword ptr [ebp - 0x70], 0 }
	__asm { mov dword ptr [ebp - 0x6c], 0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { cmp dword ptr [eax + 0x10], 0 }
	__asm { jne L_00786ede }
	__asm { mov eax, 0xe4effc }
	__asm { jmp L_00786ee6 }
	__asm { L_00786ede: }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00786ee6 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00786ee6: }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xb0] }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_00786f22 }
	__asm { push 0x29 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xb0] }
	__asm { push 0x28 }
	__asm { push eax }
	__asm { call fn_004272a0 }
	__asm { add esp, 8 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10460] }
	__asm { push eax }
	__asm { call fn_004272a0 }
	__asm { add esp, 8 }
	__asm { L_00786f22: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0xb0] }
	__asm { push 0xf1391c }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004270c0 }
	__asm { add esp, 8 }
}

extern "C" void fn_004038a0();
extern "C" void fn_0043ee70();
extern "C" void fn_006b9980();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00786fd0
extern "C" __declspec(naked) void asm_00786fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd36dd0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { cmp byte ptr [edx], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { jne L_00787011 }
	__asm { xor ecx, ecx }
	__asm { jmp L_0078701f }
	__asm { L_00787011: }
	__asm { mov ecx, edx }
	__asm { lea esi, [ecx + 1] }
	__asm { L_00787016: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00787016 }
	__asm { sub ecx, esi }
	__asm { L_0078701f: }
	__asm { push ecx }
	__asm { push edx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006b9980 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0xe4f054 }
	__asm { push eax }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0043ee70 }
	__asm { add esp, 0x14 }
	__asm { cmp dword ptr [ebp - 0x2c], 0x10 }
	__asm { jb L_00787064 }
	__asm { push dword ptr [ebp - 0x40] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00787064: }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 0x2c], 0xf }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov byte ptr [ebp - 0x40], 0 }
	__asm { jb L_00787087 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00787087: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0077f0e0();
// FUNCTION: ROBLOXSTUDIO 0x007872c0
extern "C" __declspec(naked) void asm_007872c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { test esi, esi }
	__asm { je L_007872d4 }
	__asm { lea ecx, [esi - 9] }
	__asm { jmp L_007872d6 }
	__asm { L_007872d4: }
	__asm { xor ecx, ecx }
	__asm { L_007872d6: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0077f0e0 }
	__asm { mov bl, byte ptr [eax + 4] }
	__asm { mov edi, dword ptr [eax] }
	__asm { test bl, bl }
	__asm { je L_00787338 }
	__asm { test esi, esi }
	__asm { je L_007872fb }
	__asm { add esi, -9 }
	__asm { jmp L_007872fd }
	__asm { L_007872fb: }
	__asm { xor esi, esi }
	__asm { L_007872fd: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_00787338 }
	__asm { test edi, edi }
	__asm { je L_0078730e }
	__asm { lea edx, [edi + 0x40] }
	__asm { jmp L_00787310 }
	__asm { L_0078730e: }
	__asm { xor edx, edx }
	__asm { L_00787310: }
	__asm { test eax, eax }
	__asm { je L_00787319 }
	__asm { lea esi, [eax + 0x40] }
	__asm { jmp L_0078731b }
	__asm { L_00787319: }
	__asm { xor esi, esi }
	__asm { L_0078731b: }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [edx + 4], esi }
	__asm { mov dword ptr [esi], edx }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { L_00787338: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov byte ptr [eax + 4], bl }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00783650();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00787be0
extern "C" __declspec(naked) void asm_00787be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c8c1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x64 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x5c] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe4f8d0 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x70] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call fn_00783650 }
	__asm { mov dword ptr [ebp - 0x70], 0xe4f014 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00787c42 }
	__asm { add esi, 0x40 }
	__asm { jmp L_00787c44 }
	__asm { L_00787c42: }
	__asm { xor esi, esi }
	__asm { L_00787c44: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00787c5a }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00787c5a: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x70], 0xe4f8b0 }
	__asm { mov dword ptr [ebp - 0x30], 0xe4f8bc }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x1106938 }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe4f8c4 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x70] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00787cc0
extern "C" __declspec(naked) void asm_00787cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c8f9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x34 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push esi }
	__asm { lea esi, [ecx - 0x2c] }
	__asm { mov dword ptr [ebp - 0x1c], 0xe4f938 }
	__asm { mov dword ptr [ebp - 0x14], 0xe1822c }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x40], 0xe4efe8 }
	__asm { test ecx, ecx }
	__asm { je L_00787d28 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 8] }
	__asm { jmp L_00787d2a }
	__asm { L_00787d28: }
	__asm { xor eax, eax }
	__asm { L_00787d2a: }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00787d3d }
	__asm { add esi, 0x10 }
	__asm { jmp L_00787d3f }
	__asm { L_00787d3d: }
	__asm { xor esi, esi }
	__asm { L_00787d3f: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x30], 0xe18224 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00787d55 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00787d55: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x40], 0xe4f918 }
	__asm { mov dword ptr [ebp - 0x30], 0xe4f924 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x1106b0c }
	__asm { mov dword ptr [ebp + eax - 0x1c], 0xe4f92c }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp + eax - 0x20], 0 }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x00787db0
extern "C" __declspec(naked) void asm_00787db0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00787dd1 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { and ecx, 1 }
	__asm { or ecx, edx }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00787dd1: }
	__asm { mov eax, dword ptr [esi] }
	__asm { xor eax, dword ptr [edx] }
	__asm { and eax, 1 }
	__asm { xor eax, dword ptr [edx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov ecx, edi }
	__asm { and ecx, 0xfffffffe }
	__asm { cmp edx, ecx }
	__asm { jne L_00787e01 }
	__asm { and edi, 1 }
	__asm { or edi, esi }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov eax, dword ptr [edx] }
	__asm { and eax, 1 }
	__asm { or eax, esi }
	__asm { pop edi }
	__asm { mov dword ptr [edx], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00787e01: }
	__asm { mov eax, dword ptr [edx] }
	__asm { and eax, 0xfffffffe }
	__asm { cmp edx, dword ptr [eax + 4] }
	__asm { jne L_00787e1e }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov eax, dword ptr [edx] }
	__asm { and eax, 1 }
	__asm { or eax, esi }
	__asm { pop edi }
	__asm { mov dword ptr [edx], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00787e1e: }
	__asm { mov dword ptr [eax + 8], esi }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov eax, dword ptr [edx] }
	__asm { and eax, 1 }
	__asm { or eax, esi }
	__asm { pop edi }
	__asm { mov dword ptr [edx], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00787e40
extern "C" __declspec(naked) void asm_00787e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx + 4] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_00787e61 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { and ecx, 1 }
	__asm { or ecx, edx }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_00787e61: }
	__asm { mov eax, dword ptr [esi] }
	__asm { xor eax, dword ptr [edx] }
	__asm { and eax, 1 }
	__asm { xor eax, dword ptr [edx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov ecx, edi }
	__asm { and ecx, 0xfffffffe }
	__asm { cmp edx, ecx }
	__asm { jne L_00787e91 }
	__asm { and edi, 1 }
	__asm { or edi, esi }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, dword ptr [edx] }
	__asm { and eax, 1 }
	__asm { or eax, esi }
	__asm { pop edi }
	__asm { mov dword ptr [edx], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00787e91: }
	__asm { mov eax, dword ptr [edx] }
	__asm { and eax, 0xfffffffe }
	__asm { cmp edx, dword ptr [eax + 8] }
	__asm { jne L_00787eae }
	__asm { mov dword ptr [eax + 8], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, dword ptr [edx] }
	__asm { and eax, 1 }
	__asm { or eax, esi }
	__asm { pop edi }
	__asm { mov dword ptr [edx], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00787eae: }
	__asm { mov dword ptr [eax + 4], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { mov eax, dword ptr [edx] }
	__asm { and eax, 1 }
	__asm { or eax, esi }
	__asm { pop edi }
	__asm { mov dword ptr [edx], eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x007887d0
extern "C" __declspec(naked) void asm_007887d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { lea eax, [edi*2 + 2] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { cmp eax, ebx }
	__asm { jge L_00788816 }
	__asm { nop }
	__asm { L_007887f0: }
	__asm { mov ecx, dword ptr [esi + eax*4] }
	__asm { mov edx, dword ptr [esi + eax*4 - 4] }
	__asm { mov ecx, dword ptr [ecx + 0x38] }
	__asm { cmp ecx, dword ptr [edx + 0x38] }
	__asm { jae L_00788800 }
	__asm { dec eax }
	__asm { L_00788800: }
	__asm { mov ecx, dword ptr [esi + eax*4] }
	__asm { mov dword ptr [esi + edi*4], ecx }
	__asm { mov edi, eax }
	__asm { lea eax, [eax*2 + 2] }
	__asm { cmp eax, ebx }
	__asm { jl L_007887f0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_00788816: }
	__asm { jne L_00788822 }
	__asm { mov eax, dword ptr [esi + ebx*4 - 4] }
	__asm { mov dword ptr [esi + edi*4], eax }
	__asm { lea edi, [ebx - 1] }
	__asm { L_00788822: }
	__asm { lea eax, [edi - 1] }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov edx, eax }
	__asm { sar edx, 1 }
	__asm { cmp ecx, edi }
	__asm { jge L_00788854 }
	__asm { L_00788830: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ebx, dword ptr [esi + edx*4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebx + 0x38] }
	__asm { cmp eax, dword ptr [ecx + 0x38] }
	__asm { jae L_00788854 }
	__asm { lea eax, [edx - 1] }
	__asm { mov dword ptr [esi + edi*4], ebx }
	__asm { mov edi, edx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov edx, eax }
	__asm { sar edx, 1 }
	__asm { cmp dword ptr [ebp + 0xc], edi }
	__asm { jl L_00788830 }
	__asm { L_00788854: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi + edi*4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0078c430();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00788870
extern "C" __declspec(naked) void asm_00788870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1c9f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { call fn_0078c430 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { lea esi, [edi + 0x10] }
	__asm { mov word ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_007888ea }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_007888e4 }
	__asm { lea eax, [esi + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebx + 0xc] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_007888e4: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { L_007888ea: }
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

extern "C" void fn_007889a0();
// FUNCTION: ROBLOXSTUDIO 0x00788920
extern "C" __declspec(naked) void asm_00788920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { push esi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_007889a0 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_00788986 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00788961 }
	__asm { L_00788957: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00788957 }
	__asm { L_00788961: }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_0078897c }
	__asm { L_00788971: }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00788971 }
	__asm { L_0078897c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00788986: }
	__asm { mov dword ptr [edx], edx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 8], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00788870();
extern "C" void fn_0078c4e0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007889a0
extern "C" __declspec(naked) void asm_007889a0()
{
	__asm { L_007889a0: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ca00 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { jne L_00788a1f }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { call fn_00788870 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ebx, eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov al, byte ptr [ecx + 0xc] }
	__asm { mov byte ptr [ebx + 0xc], al }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { cmp byte ptr [edi + 0xd], 0 }
	__asm { push ebx }
	__asm { push dword ptr [ecx] }
	__asm { cmovne edi, ebx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0xc], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call L_007889a0 }
	__asm { mov dword ptr [ebx], eax }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push dword ptr [eax + 8] }
	__asm { mov ecx, esi }
	__asm { call L_007889a0 }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { L_00788a1f: }
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
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_0078c4e0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10268[];
extern "C" void fn_00624b30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00788a50
extern "C" __declspec(naked) void asm_00788a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1ca18 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x14 }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { je L_00788add }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { L_00788a77: }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x20], ecx }
	__asm { mov cx, word ptr [eax + 4] }
	__asm { add eax, 8 }
	__asm { mov word ptr [ebp - 0x1c], cx }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_00624b30 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call eax }
	__asm { cmp dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00788ac3 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00788ac3: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { test eax, eax }
	__asm { je L_00788ad2 }
	__asm { add eax, -0x14 }
	__asm { jmp L_00788ad4 }
	__asm { L_00788ad2: }
	__asm { xor eax, eax }
	__asm { L_00788ad4: }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { cmp eax, dword ptr [ebp + 0xc] }
	__asm { jne L_00788a77 }
	__asm { pop esi }
	__asm { L_00788add: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_007cd690();
// FUNCTION: ROBLOXSTUDIO 0x00788bf0
extern "C" __declspec(naked) void asm_00788bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { cmp eax, dword ptr [ebp + 0x14] }
	__asm { je L_00788c74 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { L_00788c02: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { je L_00788c5a }
	__asm { test eax, eax }
	__asm { je L_00788c5a }
	__asm { push eax }
	__asm { call fn_007cd690 }
	__asm { test al, al }
	__asm { jne L_00788c5a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00788c45 }
	__asm { push 0x100 }
	__asm { push 0xe4fb58 }
	__asm { push 0x10080a0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00788c5a }
	__asm { L_00788c45: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe4fcb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00788c5a: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 4 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, dword ptr [ebp + 0x14] }
	__asm { jne L_00788c02 }
	__asm { pop esi }
	__asm { L_00788c74: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x00789380
extern "C" __declspec(naked) void asm_00789380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp edx, eax }
	__asm { je L_00789409 }
	__asm { push esi }
	__asm { lea esi, [edx + 4] }
	__asm { cmp esi, eax }
	__asm { je L_00789408 }
	__asm { mov eax, 4 }
	__asm { sub eax, edx }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { push edi }
	__asm { L_007893a2: }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { mov ebx, esi }
	__asm { cmp ecx, dword ptr [eax + 0x38] }
	__asm { jae L_007893dc }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { add eax, -4 }
	__asm { add eax, esi }
	__asm { sar eax, 2 }
	__asm { lea ecx, [eax*4] }
	__asm { push ecx }
	__asm { mov eax, esi }
	__asm { sub eax, ecx }
	__asm { push edx }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10500] }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [edx], edi }
	__asm { jmp L_007893fe }
	__asm { L_007893dc: }
	__asm { mov edx, dword ptr [esi - 4] }
	__asm { lea eax, [esi - 4] }
	__asm { cmp ecx, dword ptr [edx + 0x38] }
	__asm { jae L_007893f9 }
	__asm { L_007893e7: }
	__asm { mov dword ptr [ebx], edx }
	__asm { mov edx, dword ptr [eax - 4] }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { mov ebx, eax }
	__asm { sub eax, 4 }
	__asm { cmp ecx, dword ptr [edx + 0x38] }
	__asm { jb L_007893e7 }
	__asm { L_007893f9: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx], edi }
	__asm { L_007893fe: }
	__asm { add esi, 4 }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { jne L_007893a2 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_00789408: }
	__asm { pop esi }
	__asm { L_00789409: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00789640();
// FUNCTION: ROBLOXSTUDIO 0x00789410
extern "C" __declspec(naked) void asm_00789410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sub ebx, esi }
	__asm { sar ebx, 2 }
	__asm { mov eax, ebx }
	__asm { cdq }
	__asm { sub eax, edx }
	__asm { mov ecx, eax }
	__asm { sar ecx, 1 }
	__asm { test ecx, ecx }
	__asm { jle L_007894a1 }
	__asm { lea edx, [ecx*2 + 2] }
	__asm { push edi }
	__asm { L_00789436: }
	__asm { mov eax, dword ptr [esi + ecx*4 - 4] }
	__asm { dec ecx }
	__asm { sub edx, 2 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { mov edi, ecx }
	__asm { mov eax, edx }
	__asm { cmp edx, ebx }
	__asm { jge L_00789476 }
	__asm { nop }
	__asm { L_00789450: }
	__asm { mov ecx, dword ptr [esi + eax*4] }
	__asm { mov edx, dword ptr [esi + eax*4 - 4] }
	__asm { mov ecx, dword ptr [ecx + 0x38] }
	__asm { cmp ecx, dword ptr [edx + 0x38] }
	__asm { jae L_00789460 }
	__asm { dec eax }
	__asm { L_00789460: }
	__asm { mov ecx, dword ptr [esi + eax*4] }
	__asm { mov dword ptr [esi + edi*4], ecx }
	__asm { mov edi, eax }
	__asm { lea eax, [eax*2 + 2] }
	__asm { cmp eax, ebx }
	__asm { jl L_00789450 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_00789476: }
	__asm { cmp eax, ebx }
	__asm { jne L_00789484 }
	__asm { mov eax, dword ptr [esi + ebx*4 - 4] }
	__asm { mov dword ptr [esi + edi*4], eax }
	__asm { lea edi, [ebx - 1] }
	__asm { L_00789484: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00789640 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { add esp, 0x14 }
	__asm { test ecx, ecx }
	__asm { jg L_00789436 }
	__asm { pop edi }
	__asm { L_007894a1: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_0043bb80();
// FUNCTION: ROBLOXSTUDIO 0x00789a10
extern "C" __declspec(naked) void asm_00789a10()
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
	__asm { je L_00789a5b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00789a5b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00789aae }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe3cb14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe516c0 }
	__asm { mov dword ptr [esi + 8], 0xe516d0 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe516d8 }
	__asm { mov dword ptr [esi + 8], 0xe516e8 }
	__asm { jmp L_00789ab0 }
	__asm { L_00789aae: }
	__asm { xor esi, esi }
	__asm { L_00789ab0: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bb80 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00789acd }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00789acd: }
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
extern "C" void fn_0043bdb0();
// FUNCTION: ROBLOXSTUDIO 0x00789af0
extern "C" __declspec(naked) void asm_00789af0()
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
	__asm { je L_00789b3b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00789b3b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00789b8e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe51730 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe51738 }
	__asm { mov dword ptr [esi + 8], 0xe51748 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe51750 }
	__asm { mov dword ptr [esi + 8], 0xe51760 }
	__asm { jmp L_00789b90 }
	__asm { L_00789b8e: }
	__asm { xor esi, esi }
	__asm { L_00789b90: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0043bdb0 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00789bad }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00789bad: }
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
extern "C" void fn_0078ee40();
// FUNCTION: ROBLOXSTUDIO 0x00789bd0
extern "C" __declspec(naked) void asm_00789bd0()
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
	__asm { je L_00789c1b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_00789c1b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_00789c6e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0xe516f8 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0xe51700 }
	__asm { mov dword ptr [esi + 8], 0xe51710 }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [esi], 0xe51718 }
	__asm { mov dword ptr [esi + 8], 0xe51728 }
	__asm { jmp L_00789c70 }
	__asm { L_00789c6e: }
	__asm { xor esi, esi }
	__asm { L_00789c70: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_0078ee40 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_00789c8d }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_00789c8d: }
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
extern "C" void fn_00422570();
extern "C" void fn_004961a0();
extern "C" void fn_0078ad40();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00789d20
extern "C" __declspec(naked) void asm_00789d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1cab7 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0xa8 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00789d82 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { mov ecx, esi }
	__asm { call fn_0078ad40 }
	__asm { mov edi, eax }
	__asm { jmp L_00789d84 }
	__asm { L_00789d82: }
	__asm { xor edi, edi }
	__asm { L_00789d84: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [esi + 4] }
	__asm { push edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], edi }
	__asm { call fn_004961a0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test edi, edi }
	__asm { je L_00789daf }
	__asm { lea ecx, [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00789daf }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0040e0a0 }
	__asm { L_00789daf: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00789dda }
	__asm { test al, 1 }
	__asm { jne L_00789dda }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00789dda }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00789dda: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0078ac30();
extern "C" void fn_007cb250();
extern "C" void fn_007d5550();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x0078a950
extern "C" __declspec(naked) void asm_0078a950()
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
	__asm { call fn_0078ac30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe50290 }
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
	__asm { je L_0078a9fe }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0078a9fe: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_0078ac30();
extern "C" void fn_007cb250();
extern "C" void fn_007d5d30();
extern "C" void fn_00825140();
extern "C" void fn_00825670();
// FUNCTION: ROBLOXSTUDIO 0x0078aa20
extern "C" __declspec(naked) void asm_0078aa20()
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
	__asm { call fn_0078ac30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edi], 0xe50270 }
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
	__asm { je L_0078aace }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0078aace: }
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
// FUNCTION: ROBLOXSTUDIO 0x0078aaf0
extern "C" __declspec(naked) void asm_0078aaf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1cb90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x12be010 }
	__asm { mov edi, ecx }
	__asm { push 0xf1324c }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_007939d0 }
	__asm { mov dword ptr [edi], 0xe5022c }
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
	__asm { push 0xe50240 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00af37b0 }
	__asm { push 0xe5024c }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_00af37b0 }
	__asm { push 0xe50258 }
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

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e0ac4[];
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_007cbf10();
extern "C" void fn_0092b8a0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0078ac30
extern "C" __declspec(naked) void asm_0078ac30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1cbb6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [g_012e0ac4] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test al, 1 }
	__asm { jne L_0078acaa }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e0ac4], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe4faf0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x12e0998 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde1b40 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0078acaa: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12e0998 }
	__asm { call fn_0092b8a0 }
	__asm { mov dword ptr [esi], 0xe50264 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { je L_0078ad22 }
	__asm { push 0x11e57ac }
	__asm { mov ecx, 0x11e57ac }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0078ad22 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0078ad0d }
	__asm { push 0x1e0 }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0078ad22 }
	__asm { L_0078ad0d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51640 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0078ad22: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012ffaa0[];
extern "C" void fn_004959d0();
extern "C" void fn_007af680();
// FUNCTION: ROBLOXSTUDIO 0x0078ad40
extern "C" __declspec(naked) void asm_0078ad40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3a238 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe3baa4 }
	__asm { mov dword ptr [esi + 4], 0xe3bb1c }
	__asm { mov dword ptr [esi + 0x18], 0xe3bb24 }
	__asm { mov dword ptr [esi + 0x1c], 0xe3bb30 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_004959d0 }
	__asm { fldz }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012ffaa0] }
	__asm { fstp qword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi + 0x84], 0xf }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov byte ptr [esi + 0x70], 0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe3c6d4 }
	__asm { mov dword ptr [esi + 4], 0xe3c750 }
	__asm { mov dword ptr [esi + 0x18], 0xe3c758 }
	__asm { mov dword ptr [esi + 0x1c], 0xe3c764 }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0078ae44 }
	__asm { mov dword ptr [esi + 0x88], ecx }
	__asm { test cl, 1 }
	__asm { je L_0078ae2a }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x90], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x94], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [esi + 0x98], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x9c], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0xa0], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0xa4], eax }
	__asm { jmp L_0078ae44 }
	__asm { L_0078ae2a: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x90] }
	__asm { push eax }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 0xc }
	__asm { L_0078ae44: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ecx, ecx }
	__asm { je L_0078ae69 }
	__asm { test cl, 1 }
	__asm { jne L_0078ae69 }
	__asm { and ecx, 0xfffffffe }
	__asm { mov eax, dword ptr [ecx] }
	__asm { test eax, eax }
	__asm { je L_0078ae69 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0078ae69: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_004115f0();
extern "C" void fn_0043f5a0();
extern "C" void fn_00788510();
extern "C" void fn_00953940();
// FUNCTION: ROBLOXSTUDIO 0x0078ae80
extern "C" __declspec(naked) void asm_0078ae80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1cc48 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0xe4faf0 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { call fn_00788510 }
	__asm { mov byte ptr [edi + 0x68], 1 }
	__asm { mov dword ptr [edi + 0x64], 0xe39c90 }
	__asm { mov dword ptr [edi], 0xe4fe34 }
	__asm { mov dword ptr [edi + 4], 0xe4feb8 }
	__asm { mov dword ptr [edi + 0x18], 0xe4fec0 }
	__asm { mov dword ptr [edi + 0x1c], 0xe4fecc }
	__asm { mov dword ptr [edi + 0x64], 0xe4fedc }
	__asm { mov dword ptr [edi + 0x70], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x74], 0 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x78], 0 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x7c] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x7c], 0 }
	__asm { mov dword ptr [edi + 0x80], 0 }
	__asm { call fn_00953940 }
	__asm { mov dword ptr [edi + 0x7c], eax }
	__asm { mov dword ptr [edi + 0x84], 0 }
	__asm { mov dword ptr [edi + 0x88], 0 }
	__asm { mov dword ptr [edi + 0x8c], 0 }
	__asm { mov word ptr [edi + 0x90], 0 }
	__asm { mov dword ptr [edi + 0x94], 0 }
	__asm { mov dword ptr [edi + 0x98], 0 }
	__asm { mov dword ptr [edi + 0x9c], 0 }
	__asm { mov dword ptr [edi + 0xa0], 0 }
	__asm { mov dword ptr [edi + 0xa4], 0 }
	__asm { mov dword ptr [edi + 0xa8], 0 }
	__asm { mov dword ptr [edi + 0xac], 0 }
	__asm { mov dword ptr [edi + 0xb0], 0 }
	__asm { mov dword ptr [edi + 0xb4], 0 }
	__asm { mov dword ptr [edi + 0xb8], 0 }
	__asm { lea eax, [edi + 0xd8] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { push 0x43f590 }
	__asm { push 0x131b1a8 }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { call fn_004115f0 }
	__asm { add esp, 8 }
	__asm { call fn_0043f5a0 }
	__asm { mov eax, dword ptr [edi + 0x7c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x84], eax }
	__asm { mov dword ptr [edi + 0x88], eax }
	__asm { mov dword ptr [edi + 0x8c], eax }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ffaa0[];
extern "C" void fn_004038a0();
extern "C" void fn_004959d0();
extern "C" void fn_007af680();
extern "C" void fn_007b5bb0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0078b000
extern "C" __declspec(naked) void asm_0078b000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3ca38 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_007af680 }
	__asm { mov dword ptr [esi], 0xe3baa4 }
	__asm { mov dword ptr [esi + 4], 0xe3bb1c }
	__asm { mov dword ptr [esi + 0x18], 0xe3bb24 }
	__asm { mov dword ptr [esi + 0x1c], 0xe3bb30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004959d0 }
	__asm { fldz }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012ffaa0] }
	__asm { fstp qword ptr [esi + 0x68] }
	__asm { mov dword ptr [esi + 0x84], 0xf }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov byte ptr [esi + 0x70], 0 }
	__asm { push 0xd }
	__asm { push 0xe50388 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0xe502ec }
	__asm { mov dword ptr [esi + 4], 0xe50368 }
	__asm { mov dword ptr [esi + 0x18], 0xe50370 }
	__asm { mov dword ptr [esi + 0x1c], 0xe5037c }
	__asm { mov dword ptr [ebp - 0x14], 0xf }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x28], 0 }
	__asm { call fn_004038a0 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_007b5bb0 }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0078b0d8 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078b0d8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403110();
extern "C" void fn_0078c400();
// FUNCTION: ROBLOXSTUDIO 0x0078b220
extern "C" __declspec(naked) void asm_0078b220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1cca6 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { lea ecx, [edi + 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0 }
	__asm { call fn_0078c400 }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { push 0xf12e90 }
	__asm { mov byte ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_0078b2b4 }
	__asm { sub eax, 4 }
	__asm { L_0078b2b4: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { mov dword ptr [edi + 0x2c], 0x3f800000 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00788870();
extern "C" void fn_00789050();
extern "C" void fn_00825140();
// FUNCTION: ROBLOXSTUDIO 0x0078bda0
extern "C" __declspec(naked) void asm_0078bda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1cdd3 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x8c }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push esi }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { push edi }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { mov esi, eax }
	__asm { jne L_0078bde9 }
	__asm { mov edi, dword ptr [ecx] }
	__asm { L_0078bdd5: }
	__asm { cmp dword ptr [edx + 0x10], edi }
	__asm { jae L_0078bddf }
	__asm { mov edx, dword ptr [edx + 8] }
	__asm { jmp L_0078bde3 }
	__asm { L_0078bddf: }
	__asm { mov esi, edx }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_0078bde3: }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { je L_0078bdd5 }
	__asm { L_0078bde9: }
	__asm { cmp esi, eax }
	__asm { je L_0078bdf8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { jae L_0078be7d }
	__asm { L_0078bdf8: }
	__asm { mov edi, dword ptr [ecx] }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x98], eax }
	__asm { mov dword ptr [ebp - 0x94], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x54], edi }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00788870 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00789050 }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0078be5d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0078be5d: }
	__asm { mov eax, dword ptr [ebp - 0x94] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0078be7d }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x90] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0078be7d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x14] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00788870();
extern "C" void fn_00789050();
extern "C" void fn_00825140();
// FUNCTION: ROBLOXSTUDIO 0x0078bea0
extern "C" __declspec(naked) void asm_0078bea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1cdf3 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x90 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov esi, eax }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { jne L_0078beeb }
	__asm { mov edi, dword ptr [ebx] }
	__asm { L_0078bed5: }
	__asm { cmp dword ptr [edx + 0x10], edi }
	__asm { jae L_0078bedf }
	__asm { mov edx, dword ptr [edx + 8] }
	__asm { jmp L_0078bee3 }
	__asm { L_0078bedf: }
	__asm { mov esi, edx }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_0078bee3: }
	__asm { cmp byte ptr [edx + 0xd], 0 }
	__asm { je L_0078bed5 }
	__asm { mov edi, ecx }
	__asm { L_0078beeb: }
	__asm { cmp esi, eax }
	__asm { je L_0078befa }
	__asm { mov eax, dword ptr [ebx] }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { jae L_0078bf7f }
	__asm { L_0078befa: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x9c], eax }
	__asm { mov dword ptr [ebp - 0x98], 0 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x58], ecx }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov dword ptr [ebp - 0x50], 0 }
	__asm { lea eax, [ebp - 0x58] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00788870 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00789050 }
	__asm { mov eax, dword ptr [ebp - 0x50] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0078bf5f }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0078bf5f: }
	__asm { mov eax, dword ptr [ebp - 0x98] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0078bf7f }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x94] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0078bf7f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x14] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0078a540();
extern "C" void fn_0078b220();
extern "C" void fn_0078ba60();
extern "C" void fn_0078d010();
extern "C" void fn_0078df60();
extern "C" void fn_00790f10();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0078c0e0
extern "C" __declspec(naked) void asm_0078c0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1ce39 }
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
	__asm { je L_0078c117 }
	__asm { inc eax }
	__asm { jmp L_0078c119 }
	__asm { L_0078c117: }
	__asm { xor eax, eax }
	__asm { L_0078c119: }
	__asm { push eax }
	__asm { push ecx }
	__asm { push ebx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0078a540 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_0078c1c7 }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_0078c13c }
	__asm { inc eax }
	__asm { jmp L_0078c13e }
	__asm { L_0078c13c: }
	__asm { xor eax, eax }
	__asm { L_0078c13e: }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x14], 0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0078df60 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { test ecx, ecx }
	__asm { je L_0078c166 }
	__asm { mov dword ptr [ecx], esi }
	__asm { L_0078c166: }
	__asm { add ecx, 4 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_0078c17a }
	__asm { call fn_0078b220 }
	__asm { L_0078c17a: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x13], 1 }
	__asm { call fn_00790f10 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_0078d010 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0078c1c5 }
	__asm { cmp byte ptr [ebp - 0x13], 0 }
	__asm { je L_0078c1bc }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_0078ba60 }
	__asm { L_0078c1bc: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078c1c5: }
	__asm { mov eax, edi }
	__asm { L_0078c1c7: }
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
extern "C" void fn_00403540();
extern "C" void fn_00410540();
extern "C" void fn_004225e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0078c1e0
extern "C" __declspec(naked) void asm_0078c1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1ce70 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { jne L_0078c232 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x10], 0xf139f0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { mov dword ptr [ebp - 0x20], 0xe19198 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00410540 }
	__asm { L_0078c232: }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { sub esp, 0x20 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_004225e0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { and ecx, 0xfffffffe }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 0x3c }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0078c2aa }
	__asm { test al, 1 }
	__asm { jne L_0078c2a3 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0078c2a3 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0078c2a3: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_0078c2aa: }
	__asm { cmp dword ptr [ebp + 0x3c], 0x10 }
	__asm { jb L_0078c2bb }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078c2bb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x38 }
}

extern "C" char g_00e10268[];
extern "C" void fn_0078cbe0();
extern "C" void fn_00a09af0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0078cdb0
extern "C" __declspec(naked) void asm_0078cdb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1cf68 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test edi, edi }
	__asm { je L_0078ce66 }
	__asm { cmp dword ptr [edi + 0x18], 0 }
	__asm { je L_0078ce66 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00a09af0 }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { xor ecx, ecx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { add eax, edx }
	__asm { je L_0078ce46 }
	__asm { push ebx }
	__asm { xor ebx, ebx }
	__asm { L_0078ce17: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { lea eax, [ebx + esi] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_0078cbe0 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov esi, dword ptr [ebp - 0x1c] }
	__asm { inc dword ptr [ebp + 8] }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { lea ebx, [ebx + 6] }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { jb L_0078ce17 }
	__asm { pop ebx }
	__asm { L_0078ce46: }
	__asm { test esi, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop esi }
	__asm { je L_0078ce66 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078ce66: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e07f0[];
extern "C" void fn_00426930();
extern "C" void fn_0044e270();
extern "C" void fn_0044e2e0();
extern "C" void fn_0078bda0();
extern "C" void fn_00825140();
// FUNCTION: ROBLOXSTUDIO 0x0078ce80
extern "C" __declspec(naked) void asm_0078ce80()
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
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov ecx, esi }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0078cf4b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { jne L_0078cf4b }
	__asm { mov ecx, esi }
	__asm { call fn_0044e2e0 }
	__asm { test al, al }
	__asm { je L_0078cf4b }
	__asm { mov ecx, esi }
	__asm { call fn_0044e270 }
	__asm { test al, al }
	__asm { jne L_0078ceea }
	__asm { cmp byte ptr [g_012e07f0], al }
	__asm { je L_0078cf4b }
	__asm { cmp esi, 0x12fc414 }
	__asm { jne L_0078cf4b }
	__asm { L_0078ceea: }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { mov dword ptr [ebp - 0x4c], 0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0078cf0c }
	__asm { lea ecx, [eax + 0x1c] }
	__asm { jmp L_0078cf0e }
	__asm { L_0078cf0c: }
	__asm { xor ecx, ecx }
	__asm { L_0078cf0e: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea edx, [ebp - 0x50] }
	__asm { push edx }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x10] }
	__asm { lea eax, [ebp - 0x50] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x18] }
	__asm { call fn_0078bda0 }
	__asm { mov ecx, eax }
	__asm { call fn_00426930 }
	__asm { mov eax, dword ptr [ebp - 0x4c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0078cf4b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0078cf4b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0078cf80
extern "C" __declspec(naked) void asm_0078cf80()
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
	__asm { mov dword ptr [ebx + 0x18], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_0078cfdd }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_0078cfd0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x14] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0078cfd0: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x14] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_0078cfe8 }
	__asm { L_0078cfdd: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x14] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_0078cfe8: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_0078cffe }
	__asm { add ecx, -0x14 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0078cffe: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x0078d010
extern "C" __declspec(naked) void asm_0078d010()
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
	__asm { mov dword ptr [ebx + 0x44], eax }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov esi, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [esi + edx*4] }
	__asm { lea edx, [esi + edx*4] }
	__asm { mov dword ptr [ebp + 0x10], edx }
	__asm { test eax, eax }
	__asm { jne L_0078d06d }
	__asm { mov eax, dword ptr [esi + ecx*4] }
	__asm { lea esi, [esi + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_0078d060 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0x40] }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { L_0078d060: }
	__asm { mov dword ptr [edx], esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [ebx + 0x40] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov dword ptr [esi], ecx }
	__asm { jmp L_0078d078 }
	__asm { L_0078d06d: }
	__asm { mov eax, dword ptr [eax] }
	__asm { lea ecx, [ebx + 0x40] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { L_0078d078: }
	__asm { inc dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { je L_0078d08e }
	__asm { add ecx, -0x40 }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0078d08e: }
	__asm { mov dword ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0078a400();
extern "C" void fn_0078b670();
extern "C" void fn_009b53d0();
extern "C" void fn_00b34640();
extern "C" void fn_00c876a0();
// FUNCTION: ROBLOXSTUDIO 0x0078d200
extern "C" __declspec(naked) void asm_0078d200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1cfa8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { fld dword ptr [edi + 0xc] }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { call fn_00b34640 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_0078d23d }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { je L_0078d309 }
	__asm { L_0078d23d: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { cmp eax, dword ptr [esi + 0x10] }
	__asm { jb L_0078d257 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c876a0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_009b53d0 }
	__asm { jmp L_0078d271 }
	__asm { L_0078d257: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { lea eax, [ecx + eax*4] }
	__asm { cmp ecx, eax }
	__asm { je L_0078d271 }
	__asm { L_0078d264: }
	__asm { mov dword ptr [ecx], 0 }
	__asm { add ecx, 4 }
	__asm { cmp ecx, eax }
	__asm { jne L_0078d264 }
	__asm { L_0078d271: }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_0078d27b }
	__asm { inc eax }
	__asm { jmp L_0078d27d }
	__asm { L_0078d27b: }
	__asm { xor eax, eax }
	__asm { L_0078d27d: }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0078d2bf }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov eax, dword ptr [edx + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_0078d2ac }
	__asm { add eax, -0x14 }
	__asm { jmp L_0078d2ae }
	__asm { L_0078d2ac: }
	__asm { xor eax, eax }
	__asm { L_0078d2ae: }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [edx + ecx*4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_0078d2bf: }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_0078d2e1 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_0078d2e1 }
	__asm { add eax, -0x14 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { jmp L_0078d2e8 }
	__asm { L_0078d2e1: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_0078d2e8: }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push esi }
	__asm { push dword ptr [eax] }
	__asm { call fn_0078a400 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0078b670 }
	__asm { L_0078d309: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0043f040();
extern "C" void fn_0078a110();
extern "C" void fn_0078b2f0();
extern "C" void fn_0078bb60();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0078dcb0
extern "C" __declspec(naked) void asm_0078dcb0()
{
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebx + 0x78] }
	__asm { test esi, esi }
	__asm { je L_0078dce5 }
	__asm { mov ecx, esi }
	__asm { call fn_0078bb60 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { push 0x38 }
	__asm { call fn_00cf661e }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_0078dce0 }
	__asm { push ebx }
	__asm { mov ecx, eax }
	__asm { call fn_0078b2f0 }
	__asm { jmp L_0078dce2 }
	__asm { L_0078dce0: }
	__asm { xor eax, eax }
	__asm { L_0078dce2: }
	__asm { mov dword ptr [ebx + 0x78], eax }
	__asm { L_0078dce5: }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebx + 0x7c] }
	__asm { mov esi, dword ptr [edi] }
	__asm { cmp esi, edi }
	__asm { je L_0078dd01 }
	__asm { nop }
	__asm { L_0078dcf0: }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_0078a110 }
	__asm { mov esi, dword ptr [esi] }
	__asm { add esp, 4 }
	__asm { cmp esi, edi }
	__asm { jne L_0078dcf0 }
	__asm { L_0078dd01: }
	__asm { mov eax, dword ptr [ebx + 0x7c] }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [ebx + 0x7c] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov dword ptr [ebx + 0x80], 0 }
	__asm { cmp ecx, dword ptr [ebx + 0x7c] }
	__asm { je L_0078dd32 }
	__asm { mov edi, edi }
	__asm { L_0078dd20: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { cmp esi, dword ptr [ebx + 0x7c] }
	__asm { jne L_0078dd20 }
	__asm { L_0078dd32: }
	__asm { mov eax, dword ptr [ebx + 0x7c] }
	__asm { mov dword ptr [ebx + 0x84], eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0x88], eax }
	__asm { mov dword ptr [ebx + 0x94], 0 }
	__asm { lea ecx, [ebx + 0xd8] }
	__asm { pop ebx }
	__asm { jmp fn_0043f040 }
}

extern "C" void fn_0040c260();
extern "C" void fn_00789e50();
extern "C" void fn_00789f50();
// FUNCTION: ROBLOXSTUDIO 0x0078e060
extern "C" __declspec(naked) void asm_0078e060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00789e50 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x1c }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov ebx, esp }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0xaad680 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { mov edi, 0xe51764 }
	__asm { test al, al }
	__asm { jne L_0078e103 }
	__asm { lea ecx, [ebx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0078e0fa }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_0078e0fa: }
	__asm { mov eax, edi }
	__asm { or eax, 1 }
	__asm { mov dword ptr [ebx], eax }
	__asm { jmp L_0078e109 }
	__asm { L_0078e103: }
	__asm { mov dword ptr [ebx], 0 }
	__asm { L_0078e109: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0xe50398 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { call fn_00789f50 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { sub esp, 0x20 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov ebx, esp }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0x4bb180 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0078e16f }
	__asm { lea ecx, [ebx + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0078e168 }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { L_0078e168: }
	__asm { or edi, 1 }
	__asm { mov dword ptr [ebx], edi }
	__asm { jmp L_0078e175 }
	__asm { L_0078e16f: }
	__asm { mov dword ptr [ebx], 0 }
	__asm { L_0078e175: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push 0xe503a4 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { call fn_00789f50 }
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

extern "C" void fn_0057db00();
extern "C" void fn_0078e220();
// FUNCTION: ROBLOXSTUDIO 0x0078e820
extern "C" __declspec(naked) void asm_0078e820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { jne L_0078e837 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0078e837: }
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
	__asm { je L_0078e898 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { je L_0078e898 }
	__asm { L_0078e868: }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea eax, [ecx - 0x40] }
	__asm { xor edx, edx }
	__asm { mov eax, esi }
	__asm { div dword ptr [ebp - 4] }
	__asm { cmp edx, dword ptr [ebp + 8] }
	__asm { jne L_0078e898 }
	__asm { cmp esi, ebx }
	__asm { jne L_0078e890 }
	__asm { test ecx, ecx }
	__asm { je L_0078e887 }
	__asm { lea eax, [ecx - 0x40] }
	__asm { jmp L_0078e889 }
	__asm { L_0078e887: }
	__asm { xor eax, eax }
	__asm { L_0078e889: }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { cmp edx, dword ptr [eax] }
	__asm { je L_0078e8a3 }
	__asm { L_0078e890: }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { test ecx, ecx }
	__asm { jne L_0078e868 }
	__asm { L_0078e898: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0078e8a3: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_0078e8ae }
	__asm { add eax, -0x40 }
	__asm { jmp L_0078e8b0 }
	__asm { L_0078e8ae: }
	__asm { xor eax, eax }
	__asm { L_0078e8b0: }
	__asm { push dword ptr [eax + 0x40] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { push edi }
	__asm { call fn_0078e220 }
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

extern "C" void fn_0078bb60();
extern "C" void fn_0078c690();
extern "C" void fn_0078dd60();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0078f210
extern "C" __declspec(naked) void asm_0078f210()
{
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 0x7c] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov esi, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_0078c690 }
	__asm { mov eax, dword ptr [edi + 0x88] }
	__asm { cmp eax, esi }
	__asm { jne L_0078f239 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 0x88], eax }
	__asm { L_0078f239: }
	__asm { cmp dword ptr [edi + 0x8c], esi }
	__asm { jne L_0078f24a }
	__asm { mov eax, dword ptr [edi + 0x7c] }
	__asm { mov dword ptr [edi + 0x8c], eax }
	__asm { L_0078f24a: }
	__asm { mov eax, dword ptr [edi + 0x84] }
	__asm { cmp eax, esi }
	__asm { jne L_0078f25c }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0x84], eax }
	__asm { L_0078f25c: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + 8] }
	__asm { test ebx, ebx }
	__asm { je L_0078f274 }
	__asm { mov ecx, ebx }
	__asm { call fn_0078bb60 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0078f274: }
	__asm { pop ebx }
	__asm { cmp esi, dword ptr [edi + 0x7c] }
	__asm { je L_0078f298 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { dec dword ptr [edi + 0x80] }
	__asm { L_0078f298: }
	__asm { mov ecx, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { jmp fn_0078dd60 }
}

extern "C" void fn_004039a0();
extern "C" void fn_00408d90();
extern "C" void fn_007885d0();
extern "C" void fn_00788af0();
extern "C" void fn_0078c1e0();
extern "C" void fn_007902c0();
extern "C" void fn_007b5ea0();
// FUNCTION: ROBLOXSTUDIO 0x007900f0
extern "C" __declspec(naked) void asm_007900f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { dec eax }
	__asm { je L_00790186 }
	__asm { dec eax }
	__asm { je L_0079011e }
	__asm { dec eax }
	__asm { jne L_007901cd }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push eax }
	__asm { push eax }
	__asm { call fn_007b5ea0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0079011e: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 8], 0x78d0a0 }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_00788af0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [eax + 0xb8], 0 }
	__asm { je L_00790179 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0xe50638 }
	__asm { call fn_004039a0 }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { push esi }
	__asm { push 0x7902c0 }
	__asm { call fn_007885d0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add ecx, 0xb8 }
	__asm { call fn_0078c1e0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00790179: }
	__asm { mov ecx, esi }
	__asm { call fn_007902c0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00790186: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 8], 0x78d0a0 }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_00788af0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0x12e1e0c }
	__asm { call fn_00408d90 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [esi + 0x18] }
	__asm { jne L_007901cd }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_007b5ea0 }
	__asm { L_007901cd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_004033d0();
extern "C" void fn_007737e0();
extern "C" void fn_007739a0();
extern "C" void fn_0078eb20();
extern "C" void fn_007900f0();
extern "C" void fn_007911e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007901e0
extern "C" __declspec(naked) void asm_007901e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d170 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov edi, ecx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { call fn_0078eb20 }
	__asm { xor esi, esi }
	__asm { L_00790211: }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { sub eax, dword ptr [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { sar eax, 2 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp esi, eax }
	__asm { jae L_00790279 }
	__asm { mov ecx, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [ecx + esi*4] }
	__asm { call fn_007900f0 }
	__asm { inc esi }
	__asm { jmp L_00790211 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [eax + 4] }
	__asm { push eax }
	__asm { push 2 }
	__asm { mov ecx, esi }
	__asm { call fn_007737e0 }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_004033d0 }
	__asm { mov eax, 0x790270 }
	__asm { ret }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { inc esi }
	__asm { jmp L_00790211 }
	__asm { L_00790279: }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { call fn_007911e0 }
	__asm { cmp dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_007902a3 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007902a3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_005db6e0();
extern "C" void fn_0078a5f0();
extern "C" void fn_0078bfa0();
extern "C" void fn_0078c470();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007903c0
extern "C" __declspec(naked) void asm_007903c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1d188 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { movzx eax, byte ptr [ecx + 0x20] }
	__asm { sub esp, 0xc }
	__asm { inc eax }
	__asm { push esi }
	__asm { lea esi, [ecx + 0x20] }
	__asm { push edi }
	__asm { add eax, esi }
	__asm { je L_007903ec }
	__asm { inc eax }
	__asm { jmp L_007903ee }
	__asm { L_007903ec: }
	__asm { xor eax, eax }
	__asm { L_007903ee: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { movsx ecx, word ptr [edi + 4] }
	__asm { movsx eax, word ptr [edi + 2] }
	__asm { shl ecx, 5 }
	__asm { add ecx, eax }
	__asm { movsx eax, word ptr [edi] }
	__asm { shl ecx, 5 }
	__asm { add ecx, eax }
	__asm { push edi }
	__asm { push ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0078a5f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_00790493 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0x4000 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_0078c470 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0078bfa0 }
	__asm { lea ecx, [eax + 8] }
	__asm { call fn_005db6e0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_0078bfa0 }
	__asm { cmp dword ptr [ebp - 0x18], 0 }
	__asm { lea esi, [eax + 8] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_0079047f }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079047f: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00790493: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { add eax, 8 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e07f0[];
extern "C" void fn_00789df0();
extern "C" void fn_00789ef0();
extern "C" void fn_0078da80();
extern "C" void fn_007916a0();
extern "C" void fn_0090d630();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00790dd0
extern "C" __declspec(naked) void asm_00790dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd4a488 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { lea esi, [ebp + 8] }
	__asm { cmovae esi, dword ptr [ebp + 8] }
	__asm { cmp byte ptr [g_012e07f0], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { je L_00790e31 }
	__asm { push edi }
	__asm { push ebx }
	__asm { call fn_00789df0 }
	__asm { push ebx }
	__asm { mov edi, eax }
	__asm { call fn_00789ef0 }
	__asm { add esp, 8 }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call fn_0090d630 }
	__asm { mov ecx, esi }
	__asm { call fn_0090d630 }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { pop edi }
	__asm { L_00790e31: }
	__asm { mov ecx, ebx }
	__asm { call fn_0078da80 }
	__asm { test eax, eax }
	__asm { jne L_00790e44 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { call fn_007916a0 }
	__asm { L_00790e44: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { jb L_00790e57 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00790e57: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012e07f0[];
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_004cc990();
extern "C" void fn_00789df0();
extern "C" void fn_00789ef0();
extern "C" void fn_0078da80();
extern "C" void fn_007916a0();
extern "C" void fn_007cd560();
extern "C" void fn_0090d630();
// FUNCTION: ROBLOXSTUDIO 0x00790e70
extern "C" __declspec(naked) void asm_00790e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00790f0b }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00790e93 }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00790e95 }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00790e95 }
	__asm { L_00790e93: }
	__asm { mov eax, ecx }
	__asm { L_00790e95: }
	__asm { test eax, eax }
	__asm { je L_00790f0b }
	__asm { push edi }
	__asm { lea edi, [eax + 0x1c] }
	__asm { test edi, edi }
	__asm { je L_00790f0a }
	__asm { push esi }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00790f09 }
	__asm { lea ecx, [edi - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00790f09 }
	__asm { push ebx }
	__asm { call fn_004cc990 }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_00790f08 }
	__asm { cmp byte ptr [g_012e07f0], 0 }
	__asm { je L_00790ef3 }
	__asm { push ebx }
	__asm { call fn_00789df0 }
	__asm { push ebx }
	__asm { mov edi, eax }
	__asm { call fn_00789ef0 }
	__asm { add esp, 8 }
	__asm { mov ecx, edi }
	__asm { mov esi, eax }
	__asm { call fn_0090d630 }
	__asm { mov ecx, esi }
	__asm { call fn_0090d630 }
	__asm { L_00790ef3: }
	__asm { mov ecx, ebx }
	__asm { call fn_0078da80 }
	__asm { test eax, eax }
	__asm { jne L_00790f08 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_007916a0 }
	__asm { L_00790f08: }
	__asm { pop ebx }
	__asm { L_00790f09: }
	__asm { pop esi }
	__asm { L_00790f0a: }
	__asm { pop edi }
	__asm { L_00790f0b: }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e07f4[];
extern "C" void fn_004033d0();
extern "C" void fn_00412550();
extern "C" void fn_00421eb0();
extern "C" void fn_0043f040();
extern "C" void fn_0078b2f0();
extern "C" void fn_0078dd60();
extern "C" void fn_0078eff0();
extern "C" void fn_0078ff20();
extern "C" void fn_00790310();
extern "C" void fn_007908a0();
extern "C" void fn_007918e0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007916a0
extern "C" __declspec(naked) void asm_007916a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd4d6e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi + 0x91], 0 }
	__asm { je L_007917ae }
	__asm { cmp dword ptr [g_012e07f4], 1 }
	__asm { jne L_00791737 }
	__asm { mov eax, dword ptr [edi + 0x98] }
	__asm { test eax, eax }
	__asm { je L_00791737 }
	__asm { cmp dword ptr [eax + 0x78], 1 }
	__asm { jne L_00791737 }
	__asm { mov eax, dword ptr [edi + 0x6c] }
	__asm { push dword ptr [eax + 0xba0] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { mov esi, eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_007908a0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { L_00791737: }
	__asm { mov ecx, edi }
	__asm { call fn_007918e0 }
	__asm { mov esi, dword ptr [edi + 0x78] }
	__asm { lea ebx, [edi + 0x78] }
	__asm { test esi, esi }
	__asm { je L_007917a3 }
	__asm { mov ecx, esi }
	__asm { call fn_0078eff0 }
	__asm { test al, al }
	__asm { jne L_007917a3 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x20] }
	__asm { call fn_00412550 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { call fn_0078ff20 }
	__asm { push ebx }
	__asm { lea ecx, [edi + 0x7c] }
	__asm { call fn_00790310 }
	__asm { mov ecx, edi }
	__asm { call fn_0078dd60 }
	__asm { mov eax, dword ptr [edi + 0x7c] }
	__asm { mov dword ptr [edi + 0x84], eax }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push 0x38 }
	__asm { mov dword ptr [edi + 0x88], eax }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0079179f }
	__asm { push edi }
	__asm { mov ecx, eax }
	__asm { call fn_0078b2f0 }
	__asm { jmp L_007917a1 }
	__asm { L_0079179f: }
	__asm { xor eax, eax }
	__asm { L_007917a1: }
	__asm { mov dword ptr [ebx], eax }
	__asm { L_007917a3: }
	__asm { lea ecx, [edi + 0xd8] }
	__asm { call fn_0043f040 }
	__asm { L_007917ae: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10528[];
extern "C" void fn_0043f040();
extern "C" void fn_00791b30();
extern "C" void fn_00846f90();
extern "C" void fn_00848ef0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x007919f0
extern "C" __declspec(naked) void asm_007919f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1d220 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp byte ptr [esi + 0x90], 0 }
	__asm { lea edi, [esi + 0x90] }
	__asm { je L_00791a48 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x10], 0xe50de0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x28], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00791a48: }
	__asm { cmp byte ptr [esi + 0x91], 0 }
	__asm { jne L_00791a7a }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x10], 0xe50e0c }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x28], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00791a7a: }
	__asm { mov eax, dword ptr [esi + 0x7c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp dword ptr [esi + 0x88], eax }
	__asm { jne L_00791ab0 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x18], 0xe50ef0 }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x34], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_00791ab0: }
	__asm { push 1 }
	__asm { push dword ptr [esi + 0x6c] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00846f90 }
	__asm { mov bl, byte ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov byte ptr [ebp - 0x10], bl }
	__asm { mov byte ptr [edi], 1 }
	__asm { mov ecx, dword ptr [esi + 0x88] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [ecx + 8] }
	__asm { call fn_00791b30 }
	__asm { mov eax, dword ptr [esi + 0x88] }
	__asm { mov dword ptr [esi + 0x84], eax }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { lea ecx, [esi + 0xd8] }
	__asm { mov dword ptr [esi + 0x88], eax }
	__asm { call fn_0043f040 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [edi], bl }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00848ef0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_0040c260();
extern "C" void fn_00788a50();
extern "C" void fn_00788af0();
extern "C" void fn_0078c1e0();
// FUNCTION: ROBLOXSTUDIO 0x00791c90
extern "C" __declspec(naked) void asm_00791c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 8], 0x7921a0 }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_00788af0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [eax + 0xb8], 0 }
	__asm { je L_00791d54 }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push 0x13 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push 0xe5064c }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_004038a0 }
	__asm { sub esp, 0x20 }
	__asm { mov edi, esp }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [ebp - 8], 0x791da0 }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00791d3b }
	__asm { lea ecx, [edi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_00791d1e }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_00791d1e: }
	__asm { mov eax, 0xe51784 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add ecx, 0xb8 }
	__asm { call fn_0078c1e0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00791d3b: }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { add ecx, 0xb8 }
	__asm { call fn_0078c1e0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00791d54: }
	__asm { cmp dword ptr [esi + 0x28], 0 }
	__asm { je L_00791d6f }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { test eax, eax }
	__asm { je L_00791d6f }
	__asm { add eax, -0x14 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_00791d76 }
	__asm { L_00791d6f: }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00791d76: }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 4] }
	__asm { push 0 }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x10], 0x791df0 }
	__asm { mov dword ptr [ebp - 0xc], esi }
	__asm { call fn_00788a50 }
	__asm { add esp, 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403540();
extern "C" void fn_004038a0();
// FUNCTION: ROBLOXSTUDIO 0x00793050
extern "C" __declspec(naked) void asm_00793050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { cmp eax, 2 }
	__asm { jne L_00793075 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp ecx, eax }
	__asm { je L_0079306f }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00403540 }
	__asm { L_0079306f: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00793075: }
	__asm { cmp eax, 1 }
	__asm { jne L_007930c8 }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { test edx, edx }
	__asm { je L_007930b1 }
	__asm { add edx, 4 }
	__asm { cmp dword ptr [edx + 0x14], 0x10 }
	__asm { jb L_0079308c }
	__asm { mov edx, dword ptr [edx] }
	__asm { L_0079308c: }
	__asm { cmp byte ptr [edx], 0 }
	__asm { je L_007930b6 }
	__asm { mov ecx, edx }
	__asm { push esi }
	__asm { lea esi, [ecx + 1] }
	__asm { L_00793097: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00793097 }
	__asm { sub ecx, esi }
	__asm { pop esi }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { call fn_004038a0 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007930b1: }
	__asm { mov edx, 0xf12f2d }
	__asm { L_007930b6: }
	__asm { xor ecx, ecx }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push edx }
	__asm { call fn_004038a0 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_007930c8: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb440();
extern "C" void fn_007cb490();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x00793730
extern "C" __declspec(naked) void asm_00793730()
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
	__asm { mov dword ptr [esi + 0x10], 0x11e6648 }
	__asm { call fn_007cb490 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { mov word ptr [esi + 4], 1 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_007937d9 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_007937d9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007937c4 }
	__asm { push 0x47 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_007937d9 }
	__asm { L_007937c4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe521a8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_007937d9: }
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

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x00793e10
extern "C" __declspec(naked) void asm_00793e10()
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
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi], 0xe51be0 }
	__asm { call fn_007cb250 }
	__asm { mov cl, byte ptr [ebp + 0x18] }
	__asm { mov byte ptr [esi + 0x18], cl }
	__asm { mov cl, byte ptr [ebp + 0x14] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov byte ptr [esi + 0x19], cl }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00793eb8 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_00793eb8 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00793ea3 }
	__asm { push 0x67 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00793eb8 }
	__asm { L_00793ea3: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe51c30 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00793eb8: }
	__asm { mov ecx, esi }
	__asm { call fn_00825770 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e106f8[];
extern "C" void fn_007938b0();
extern "C" void fn_0090c590();
extern "C" void fn_00a4a760();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x007942a0
extern "C" __declspec(naked) void asm_007942a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1d3f8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { call dword ptr [g_00e106f8] }
	__asm { mov ebx, eax }
	__asm { shr ebx, 3 }
	__asm { add ebx, eax }
	__asm { movzx eax, byte ptr [edi] }
	__asm { inc eax }
	__asm { add eax, edi }
	__asm { je L_007942dd }
	__asm { inc eax }
	__asm { jmp L_007942df }
	__asm { L_007942dd: }
	__asm { xor eax, eax }
	__asm { L_007942df: }
	__asm { push eax }
	__asm { push esi }
	__asm { push ebx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_007938b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_0079438f }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_00794302 }
	__asm { inc eax }
	__asm { jmp L_00794304 }
	__asm { L_00794302: }
	__asm { xor eax, eax }
	__asm { L_00794304: }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { push 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov word ptr [ebp - 0x14], 0 }
	__asm { call fn_00cf661e }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { jne L_00794333 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00794333: }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx + 0xc], 0 }
	__asm { mov dword ptr [ebp - 0x18], ecx }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov byte ptr [ebp - 0x14], 1 }
	__asm { add ecx, 4 }
	__asm { je L_0079435b }
	__asm { mov dword ptr [ecx], 0 }
	__asm { L_0079435b: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 0x13], 1 }
	__asm { call fn_0090c590 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00a4a760 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov esi, dword ptr [eax] }
	__asm { test ecx, ecx }
	__asm { je L_0079438d }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079438d: }
	__asm { mov eax, esi }
	__asm { L_0079438f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012e0d8c[];
extern "C" void fn_0044e2e0();
extern "C" void fn_004831d0();
extern "C" void fn_007936a0();
extern "C" void fn_00793ee0();
extern "C" void fn_00794230();
// FUNCTION: ROBLOXSTUDIO 0x00794c40
extern "C" __declspec(naked) void asm_00794c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d446 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { jne L_00794c8b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00794c80 }
	__asm { L_00794c6d: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00794c80: }
	__asm { mov ecx, esi }
	__asm { call fn_0044e2e0 }
	__asm { test al, al }
	__asm { je L_00794c6d }
	__asm { L_00794c8b: }
	__asm { push edi }
	__asm { push 0x28 }
	__asm { call fn_00794230 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00794cb5 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { push dword ptr [ecx + 0x14] }
	__asm { mov ecx, eax }
	__asm { call fn_00793ee0 }
	__asm { mov edi, eax }
	__asm { jmp L_00794cb7 }
	__asm { L_00794cb5: }
	__asm { xor edi, edi }
	__asm { L_00794cb7: }
	__asm { mov eax, dword ptr [g_012e0d8c] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + 0xc] }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call fn_004831d0 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00794cef }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { call fn_007936a0 }
	__asm { jmp L_00794cf1 }
	__asm { L_00794cef: }
	__asm { xor eax, eax }
	__asm { L_00794cf1: }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { pop ebx }
	__asm { test ecx, ecx }
	__asm { jne L_00794d05 }
	__asm { mov dword ptr [edi + 0x20], eax }
	__asm { jmp L_00794d07 }
	__asm { L_00794d05: }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00794d07: }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0x30] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10524[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131de68[];
extern "C" void fn_0040bac0();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_0079b370();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00794d30
extern "C" __declspec(naked) void asm_00794d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d476 }
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
	__asm { call fn_0079b370 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131de68] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00794dec }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131de68], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5223c }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0xb }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131de70 }
	__asm { call fn_007cbf10 }
	__asm { push 0xddc690 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00794dec: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131de70 }
	__asm { call fn_0040bac0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe5312c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00794e6a }
	__asm { push 0x11e688c }
	__asm { mov ecx, 0x11e688c }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00794e6a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00794e55 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00794e6a }
	__asm { L_00794e55: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00794e6a: }
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
extern "C" char g_012e1864[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_0079b3c0();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00794e80
extern "C" __declspec(naked) void asm_00794e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d4a6 }
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
	__asm { call fn_0079b3c0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_012e1864] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_00794f3c }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e1864], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5221c }
	__asm { mov byte ptr [ebp - 4], 2 }
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
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_00794f3c: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x12e1738 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe52d0c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00794fba }
	__asm { push 0x11e6860 }
	__asm { mov ecx, 0x11e6860 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_00794fba }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00794fa5 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00794fba }
	__asm { L_00794fa5: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00794fba: }
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
extern "C" char g_0131b144[];
extern "C" void fn_004118e0();
extern "C" void fn_0048d4a0();
extern "C" void fn_006b9740();
extern "C" void fn_0079b410();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00794fd0
extern "C" __declspec(naked) void asm_00794fd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d4d6 }
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
	__asm { call fn_0079b410 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0x10 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131b144] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_0079508f }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b144], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5222c }
	__asm { mov byte ptr [ebp - 4], 2 }
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
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_0079508f: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131b018 }
	__asm { call fn_0048d4a0 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe52f7c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0079510d }
	__asm { push 0x12c2f58 }
	__asm { mov ecx, 0x12c2f58 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0079510d }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_007950f8 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0079510d }
	__asm { L_007950f8: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0079510d: }
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
extern "C" char g_0131b144[];
extern "C" void fn_0040bac0();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_0079b470();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00795120
extern "C" __declspec(naked) void asm_00795120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d546 }
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
	__asm { call fn_0079b470 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131b144] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_007951dc }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b144], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5222c }
	__asm { mov byte ptr [ebp - 4], 2 }
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
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_007951dc: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131b018 }
	__asm { call fn_0040bac0 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe53018 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0079525a }
	__asm { push 0x12c2f58 }
	__asm { mov ecx, 0x12c2f58 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0079525a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00795245 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0079525a }
	__asm { L_00795245: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0079525a: }
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
extern "C" char g_0131b144[];
extern "C" void fn_0040ba00();
extern "C" void fn_004118e0();
extern "C" void fn_006b9740();
extern "C" void fn_0079b510();
extern "C" void fn_007cbf10();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00795430
extern "C" __declspec(naked) void asm_00795430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d546 }
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
	__asm { call fn_0079b510 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x18], esp }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [g_0131b144] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, 1 }
	__asm { jne L_007954ec }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131b144], eax }
	__asm { push 3 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { push 0xe5222c }
	__asm { mov byte ptr [ebp - 4], 2 }
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
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { L_007954ec: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push 0x131b018 }
	__asm { call fn_0040ba00 }
	__asm { push dword ptr [ebp + 0x28] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0xe52fc4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0079556a }
	__asm { push 0x12c2f58 }
	__asm { mov ecx, 0x12c2f58 }
	__asm { call dword ptr [g_00e10524] }
	__asm { test al, al }
	__asm { jne L_0079556a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00795555 }
	__asm { push 0xae }
	__asm { push 0xe51300 }
	__asm { push 0xf1367c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0079556a }
	__asm { L_00795555: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54398 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0079556a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_007a0ac0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00795580
extern "C" __declspec(naked) void asm_00795580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d558 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x2c }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_007955e0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe54b40 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov byte ptr [eax + 0x10], 0 }
	__asm { jmp L_007955e2 }
	__asm { L_007955e0: }
	__asm { xor eax, eax }
	__asm { L_007955e2: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { je L_007955fb }
	__asm { cmp dword ptr [ebp + 0x24], 0x10 }
	__asm { jb L_007955fb }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007955fb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007a0ac0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_007a0b00();
extern "C" void fn_007a3000();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00795630
extern "C" __declspec(naked) void asm_00795630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d578 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x1c }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00795690 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe54aa8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov byte ptr [eax + 0x10], 0 }
	__asm { jmp L_00795692 }
	__asm { L_00795690: }
	__asm { xor eax, eax }
	__asm { L_00795692: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_007956be }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_007a3000 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_007956be: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007a0b00 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x007956f0
extern "C" __declspec(naked) void asm_007956f0()
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
	__asm { mov dword ptr [esi + 8], 0xe54230 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe546d8 }
	__asm { mov dword ptr [esi + 8], 0xe546e8 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0079579a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00795786 }
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
	__asm { L_00795786: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0079579a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x007957b0
extern "C" __declspec(naked) void asm_007957b0()
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
	__asm { mov dword ptr [esi + 8], 0xe3cb0c }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe546a8 }
	__asm { mov dword ptr [esi + 8], 0xe546b8 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0079585a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00795846 }
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
	__asm { L_00795846: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0079585a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00795870
extern "C" __declspec(naked) void asm_00795870()
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
	__asm { mov dword ptr [esi + 8], 0xe39c68 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe54708 }
	__asm { mov dword ptr [esi + 8], 0xe54718 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0079591a }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { test cl, 1 }
	__asm { je L_00795906 }
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
	__asm { L_00795906: }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edx + 8] }
	__asm { and ecx, 0xfffffffe }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0079591a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10268[];
extern "C" void fn_0041fe80();
extern "C" void fn_007a0b40();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00795930
extern "C" __declspec(naked) void asm_00795930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d598 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x20 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00795990 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe54a58 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov byte ptr [eax + 0x10], 0 }
	__asm { jmp L_00795992 }
	__asm { L_00795990: }
	__asm { xor eax, eax }
	__asm { L_00795992: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_007959cd }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { je L_007959cd }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_007959cd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_007a0b40 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00426f50();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00795a00
extern "C" __declspec(naked) void asm_00795a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d5b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0x20 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00795a60 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe54af8 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov byte ptr [eax + 0x10], 0 }
	__asm { jmp L_00795a62 }
	__asm { L_00795a60: }
	__asm { xor eax, eax }
	__asm { L_00795a62: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00795a79 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_00426f50 }
	__asm { L_00795a79: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00795aa0 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_00426f50 }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { L_00795aa0: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00412590();
extern "C" void fn_006b9740();
extern "C" void fn_007cb250();
extern "C" void fn_007cb440();
extern "C" void fn_00825770();
// FUNCTION: ROBLOXSTUDIO 0x00795b40
extern "C" __declspec(naked) void asm_00795b40()
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
	__asm { mov dword ptr [esi + 0x10], 0x11e670c }
	__asm { call fn_007cb250 }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], edi }
	__asm { mov word ptr [esi + 0x18], 0 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00795be3 }
	__asm { call fn_007cb440 }
	__asm { cmp eax, edi }
	__asm { jne L_00795be3 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00795bce }
	__asm { push 0x52 }
	__asm { push 0xe51be8 }
	__asm { push 0xf13ebc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00795be3 }
	__asm { L_00795bce: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe549d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00795be3: }
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

extern "C" void fn_00610280();
extern "C" void fn_00831780();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00795c00
extern "C" __declspec(naked) void asm_00795c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d5f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push 0 }
	__asm { sub esp, 0x10 }
	__asm { mov edi, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { cmp eax, 8 }
	__asm { ja L_00795c48 }
	__asm { mov eax, edi }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { jmp L_00795c56 }
	__asm { L_00795c48: }
	__asm { push eax }
	__asm { call fn_00cf64a0 }
	__asm { mov dword ptr [edi], eax }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { add esp, 4 }
	__asm { L_00795c56: }
	__asm { push dword ptr [edi + 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { add esp, 0xc }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { call fn_00831780 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov byte ptr [esi + 0x30], 0 }
	__asm { cmp eax, ecx }
	__asm { je L_00795cca }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00795ca8 }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00610280 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { jmp L_00795caa }
	__asm { L_00795ca8: }
	__asm { mov edx, ecx }
	__asm { L_00795caa: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { cmp edx, eax }
	__asm { jne L_00795cbe }
	__asm { cmp ecx, eax }
	__asm { jne L_00795cbe }
	__asm { cmp dword ptr [esi + 0x24], eax }
	__asm { jne L_00795cbe }
	__asm { mov byte ptr [esi + 0x30], 1 }
	__asm { L_00795cbe: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov dword ptr [esi + 0x24], edx }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { L_00795cca: }
	__asm { cmp dword ptr [ebp + 0x18], 8 }
	__asm { jbe L_00795ce0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00795ce0 }
	__asm { push eax }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00795ce0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x00795d00
extern "C" __declspec(naked) void asm_00795d00()
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
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { jae L_00795d4e }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { inc eax }
	__asm { je L_00795d58 }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00795d58 }
	__asm { L_00795d4e: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_00795d58: }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov ecx, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00795da0 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edi + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00795da0: }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10500[];
// FUNCTION: ROBLOXSTUDIO 0x00795dc0
extern "C" __declspec(naked) void asm_00795dc0()
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
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { jae L_00795e0e }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { inc eax }
	__asm { je L_00795e18 }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { jmp L_00795e18 }
	__asm { L_00795e0e: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [edi], 0 }
	__asm { L_00795e18: }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { mov byte ptr [edi], 0 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00795e62 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00795e62: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00403540();
extern "C" void fn_00798fa0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00795e80
extern "C" __declspec(naked) void asm_00795e80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d660 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_00798fa0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00795f29 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00795f29: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_00795f3a }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00795f3a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_007995f0();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x007963d0
extern "C" __declspec(naked) void asm_007963d0()
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
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x40 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { lea esi, [edx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b25b30 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { call fn_007995f0 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00796452 }
	__asm { test al, 1 }
	__asm { jne L_00796452 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00796452 }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00796452: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" void fn_007963d0();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00796470
extern "C" __declspec(naked) void asm_00796470()
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
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
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
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { call fn_007963d0 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007964ee }
	__asm { test al, 1 }
	__asm { jne L_007964ee }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007964ee }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007964ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" void fn_00796510();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x007965b0
extern "C" __declspec(naked) void asm_007965b0()
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
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
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
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { call fn_00796510 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0079662e }
	__asm { test al, 1 }
	__asm { jne L_0079662e }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0079662e }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0079662e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" void fn_00799730();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x00796650
extern "C" __declspec(naked) void asm_00796650()
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
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x40 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { lea esi, [edx + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b25b30 }
	__asm { mov eax, dword ptr [ebp + 0x38] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { call fn_00799730 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_007966d2 }
	__asm { test al, 1 }
	__asm { jne L_007966d2 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_007966d2 }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_007966d2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" void fn_00796650();
extern "C" void fn_00b25b30();
// FUNCTION: ROBLOXSTUDIO 0x007966f0
extern "C" __declspec(naked) void asm_007966f0()
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
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
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
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { call fn_00796650 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0079676e }
	__asm { test al, 1 }
	__asm { jne L_0079676e }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0079676e }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0079676e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" void fn_00403540();
extern "C" void fn_007999c0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x007968b0
extern "C" __declspec(naked) void asm_007968b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d660 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 4] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { call fn_007999c0 }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00796959 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00796959: }
	__asm { cmp dword ptr [ebp + 0x20], 0x10 }
	__asm { jb L_0079696a }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0079696a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x24 }
}

extern "C" void fn_007a06e0();
// FUNCTION: ROBLOXSTUDIO 0x007978e0
extern "C" __declspec(naked) void asm_007978e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 0x30] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], 0 }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { test edx, edx }
	__asm { je L_00797940 }
	__asm { mov dword ptr [ecx], edx }
	__asm { test dl, 1 }
	__asm { je L_0079792c }
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
	__asm { jmp L_00797940 }
	__asm { L_0079792c: }
	__asm { lea eax, [ecx + 8] }
	__asm { push 0 }
	__asm { push eax }
	__asm { and edx, 0xfffffffe }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00797940: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [eax] }
	__asm { push dword ptr [esi] }
	__asm { call fn_007a06e0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00797af0
extern "C" __declspec(naked) void asm_00797af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d771 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push edi }
	__asm { push dword ptr [eax] }
	__asm { mov edx, ecx }
	__asm { push dword ptr [edx + 0x18] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push edx }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { lea eax, [ebp - 0x54] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 0x24 }
	__asm { mov edi, eax }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], ecx }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00797b7c }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { L_00797b7c: }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ecx, dword ptr [ebp - 0x50] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00797ba0 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { call ecx }
	__asm { add esp, 4 }
	__asm { L_00797ba0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}
