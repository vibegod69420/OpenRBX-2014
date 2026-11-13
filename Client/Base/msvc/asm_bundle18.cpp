// Bundled inline-assembly functions (merged from the recursion output).

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cd96c0();
extern "C" void fn_00cdb160();
extern "C" void fn_00cdb3a0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cdbb40
extern "C" __declspec(naked) void asm_00cdbb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd508b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { movzx eax, byte ptr [ebx + 0xa8] }
	__asm { lea edi, [ebx + 0xa8] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { add eax, edi }
	__asm { je L_00cdbb7a }
	__asm { inc eax }
	__asm { jmp L_00cdbb7c }
	__asm { L_00cdbb7a: }
	__asm { xor eax, eax }
	__asm { L_00cdbb7c: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { shr ecx, 3 }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00cd96c0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test al, al }
	__asm { je L_00cdbbde }
	__asm { test esi, esi }
	__asm { jne L_00cdbbde }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cdbbcd }
	__asm { push 0x10f }
	__asm { push 0xf02708 }
	__asm { push 0xf02b14 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cdbbde }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00cdbbcd: }
	__asm { movzx eax, al }
	__asm { push 0xf02b30 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cdbbde: }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { push ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xc8] }
	__asm { call fn_00cdb160 }
	__asm { mov eax, dword ptr [esi + 0x68] }
	__asm { cmp eax, dword ptr [ebx + 0xc0] }
	__asm { je L_00cdbc21 }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push eax }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { dec dword ptr [ebx + 0xc4] }
	__asm { L_00cdbc21: }
	__asm { lea eax, [esi + 0x70] }
	__asm { test eax, eax }
	__asm { je L_00cdbc2d }
	__asm { add eax, -0x70 }
	__asm { jmp L_00cdbc2f }
	__asm { L_00cdbc2d: }
	__asm { xor eax, eax }
	__asm { L_00cdbc2f: }
	__asm { mov eax, dword ptr [eax + 0x70] }
	__asm { test eax, eax }
	__asm { je L_00cdbc3b }
	__asm { add eax, -0x70 }
	__asm { jmp L_00cdbc3d }
	__asm { L_00cdbc3b: }
	__asm { xor eax, eax }
	__asm { L_00cdbc3d: }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00cdb3a0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00cdbc7a }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00cdbc7a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00cdbc7a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cdbc7a: }
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
extern "C" void fn_004226b0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9cb0();
extern "C" void fn_006b9e50();
extern "C" void fn_006da0e0();
extern "C" void fn_007a62e0();
extern "C" void fn_008a67e0();
extern "C" void fn_00c4ae10();
extern "C" void fn_00c9eb40();
extern "C" void fn_00cd9370();
extern "C" void fn_00cd9440();
extern "C" void fn_00cd9770();
extern "C" void fn_00cd9900();
extern "C" void fn_00cda8f0();
extern "C" void fn_00cdad70();
extern "C" void fn_00cdb160();
extern "C" void fn_00cdbb40();
extern "C" void fn_00cdd950();
// FUNCTION: ROBLOXSTUDIO 0x00cdc720
extern "C" __declspec(naked) void asm_00cdc720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6d630 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp dword ptr [edi + 0xe8], 0 }
	__asm { jne L_00cdc924 }
	__asm { push dword ptr [edi + 0x50] }
	__asm { call fn_00c9eb40 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_008a67e0 }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [edi + 0xe8], ecx }
	__asm { mov esi, dword ptr [edi + 0xec] }
	__asm { or ebx, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi + 0xec], edx }
	__asm { test esi, esi }
	__asm { je L_00cdc7b8 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cdc7b8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00cdc7b8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cdc7b8: }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00cdc7e9 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cdc7e9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00cdc7e9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cdc7e9: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00cdc82e }
	__asm { cmp dword ptr [edi + 0xe8], 0 }
	__asm { jne L_00cdc82e }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cdc819 }
	__asm { push 0x40 }
	__asm { push 0xf02708 }
	__asm { push 0xef3c18 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cdc82e }
	__asm { L_00cdc819: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf02750 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cdc82e: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov eax, dword ptr [edi + 0xe8] }
	__asm { mov esi, dword ptr [eax + 0x74] }
	__asm { je L_00cdc886 }
	__asm { test esi, esi }
	__asm { je L_00cdc886 }
	__asm { lea ecx, [esi + 0xc8] }
	__asm { call fn_007a62e0 }
	__asm { test al, al }
	__asm { jne L_00cdc886 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cdc871 }
	__asm { push 0x68 }
	__asm { push 0xe53f10 }
	__asm { push 0xe53fb4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cdc886 }
	__asm { L_00cdc871: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54318 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cdc886: }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { mov dword ptr [ecx], 0xcda830 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], edi }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00cd9770 }
	__asm { mov ecx, dword ptr [edi + 0xe8] }
	__asm { add esp, 0x1c }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { add ecx, 0xe4 }
	__asm { mov dword ptr [ebp - 0x2c], 0xcdb5f0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], edi }
	__asm { call fn_00cd9440 }
	__asm { mov ebx, eax }
	__asm { push ebx }
	__asm { lea ecx, [edi + 0xfc] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_006b9cb0 }
	__asm { test al, al }
	__asm { je L_00cdc90a }
	__asm { lea ecx, [edi + 0xfc] }
	__asm { call fn_006b9e50 }
	__asm { push ebx }
	__asm { lea ecx, [edi + 0xfc] }
	__asm { call fn_006b9b80 }
	__asm { L_00cdc90a: }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00cdc924 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00cdc924: }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [edi + 0xa0] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x2c], 0xcda5e0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], edi }
	__asm { call fn_00cd9370 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [edi + 0xa0] }
	__asm { call fn_00cda8f0 }
	__asm { lea ecx, [ebp - 0x5c] }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_006da0e0 }
	__asm { mov ecx, dword ptr [edi + 0x50] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x90] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00cdc990 }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c4ae10 }
	__asm { test eax, eax }
	__asm { je L_00cdc990 }
	__asm { mov eax, dword ptr [esi + 0x64] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { L_00cdc990: }
	__asm { inc dword ptr [edi + 0xe4] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { lea edx, [edi + 0xc0] }
	__asm { L_00cdc9a3: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov esi, dword ptr [eax] }
	__asm { cmp esi, eax }
	__asm { je L_00cdcb42 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov ebx, dword ptr [esi + 8] }
	__asm { je L_00cdc9f9 }
	__asm { mov eax, dword ptr [ebx + 0x20] }
	__asm { cmp eax, dword ptr [edi + 0xe4] }
	__asm { jle L_00cdc9f9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cdc9e4 }
	__asm { push 0x65 }
	__asm { push 0xf02708 }
	__asm { push 0xf027b8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cdc9f9 }
	__asm { L_00cdc9e4: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf027d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cdc9f9: }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { add ecx, 0xc8 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { je L_00cdca64 }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { jne L_00cdca1d }
	__asm { cmp dword ptr [ecx + 8], 0 }
	__asm { jne L_00cdca1d }
	__asm { xor edx, edx }
	__asm { jmp L_00cdca22 }
	__asm { L_00cdca1d: }
	__asm { mov edx, 1 }
	__asm { L_00cdca22: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [ecx + 4], eax }
	__asm { setne al }
	__asm { cmp eax, edx }
	__asm { je L_00cdca64 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00cdca4c }
	__asm { push 0x58 }
	__asm { push 0xe53f10 }
	__asm { push 0xe54240 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cdca61 }
	__asm { L_00cdca4c: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54280 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cdca61: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { L_00cdca64: }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { jne L_00cdca9c }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00cdca8a }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00cdca8a: }
	__asm { mov ecx, edi }
	__asm { call fn_00cdbb40 }
	__asm { lea edx, [edi + 0xc0] }
	__asm { jmp L_00cdcb38 }
	__asm { L_00cdca9c: }
	__asm { mov eax, dword ptr [ebx + 0x20] }
	__asm { mov ecx, dword ptr [edi + 0xe4] }
	__asm { cmp eax, ecx }
	__asm { je L_00cdcb42 }
	__asm { test eax, eax }
	__asm { jle L_00cdcab4 }
	__asm { inc dword ptr [ebp - 0x10] }
	__asm { L_00cdcab4: }
	__asm { push ecx }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00cdad70 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { push ecx }
	__asm { lea ecx, [edi + 0xc8] }
	__asm { call fn_00cdb160 }
	__asm { lea eax, [edi + 0xcc] }
	__asm { test eax, eax }
	__asm { je L_00cdcae9 }
	__asm { lea ecx, [eax + 0x10] }
	__asm { jmp L_00cdcaeb }
	__asm { L_00cdcae9: }
	__asm { xor ecx, ecx }
	__asm { L_00cdcaeb: }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { call fn_00cd9900 }
	__asm { inc dword ptr [edi + 0xc8] }
	__asm { lea edx, [edi + 0xc0] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { add esp, 0xc }
	__asm { cmp esi, eax }
	__asm { je L_00cdcb30 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp eax, ecx }
	__asm { je L_00cdcb30 }
	__asm { push 1 }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edx }
	__asm { push eax }
	__asm { mov ecx, edx }
	__asm { call fn_00cdd950 }
	__asm { lea edx, [edi + 0xc0] }
	__asm { L_00cdcb30: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebx + 0x60], eax }
	__asm { L_00cdcb38: }
	__asm { cmp dword ptr [ebp - 0x10], 0x64 }
	__asm { jl L_00cdc9a3 }
	__asm { L_00cdcb42: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b89440();
// FUNCTION: ROBLOXSTUDIO 0x00cdccb0
extern "C" __declspec(naked) void asm_00cdccb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00b89440 }
	__asm { mov edi, eax }
	__asm { lea edx, [edi + 8] }
	__asm { test edx, edx }
	__asm { je L_00cdcd0d }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00cdcce6 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00cdcce6: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov al, byte ptr [esi + 0x18] }
	__asm { mov byte ptr [edx + 0x18], al }
	__asm { fld dword ptr [esi + 0x1c] }
	__asm { fstp dword ptr [edx + 0x1c] }
	__asm { mov eax, edi }
	__asm { pop esi }
	__asm { L_00cdcd0d: }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_004b0770();
extern "C" void fn_004b2110();
extern "C" void fn_0086e8d0();
extern "C" void fn_00cde850();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cdcf90
extern "C" __declspec(naked) void asm_00cdcf90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6d678 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { movzx eax, byte ptr [esi] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { shr edi, 3 }
	__asm { add edi, dword ptr [ecx] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_00cdcfc4 }
	__asm { inc eax }
	__asm { jmp L_00cdcfc6 }
	__asm { L_00cdcfc4: }
	__asm { xor eax, eax }
	__asm { L_00cdcfc6: }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b2110 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00cdcff6 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00cdcff6: }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_00cdd000 }
	__asm { inc eax }
	__asm { jmp L_00cdd002 }
	__asm { L_00cdd000: }
	__asm { xor eax, eax }
	__asm { L_00cdd002: }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0086e8d0 }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { test edx, edx }
	__asm { je L_00cdd04e }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00cdd048 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00cdd048: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { L_00cdd04e: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 0xf], 1 }
	__asm { call fn_00cde850 }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004b0770 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov byte ptr [esi + 4], 1 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test ebx, ebx }
	__asm { je L_00cdd0c6 }
	__asm { cmp byte ptr [ebp - 0xf], 0 }
	__asm { je L_00cdd0bd }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { test esi, esi }
	__asm { je L_00cdd0ba }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00cdd0ba }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00cdd0ba }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00cdd0ba: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { L_00cdd0bd: }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cdd0c6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00cdd0e0
extern "C" __declspec(naked) void asm_00cdd0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1d739 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { test edx, edx }
	__asm { je L_00cdd11a }
	__asm { lea eax, [edx + 4] }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00cdd11a: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], edi }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { test edi, edi }
	__asm { je L_00cdd180 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00cdd16d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [edi + 8] }
	__asm { lock xadd dword ptr [edx], ebx }
	__asm { dec ebx }
	__asm { jne L_00cdd16d }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00cdd16d: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cdd180: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00403110();
extern "C" void fn_008a67e0();
extern "C" void fn_00941e40();
extern "C" void fn_00953940();
extern "C" void fn_00b89440();
extern "C" void fn_00cd7090();
extern "C" void fn_00cd9660();
extern "C" void fn_00cd9aa0();
extern "C" void fn_00cde4d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cdd230
extern "C" __declspec(naked) void asm_00cdd230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6d738 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { call fn_00cd7090 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 0xf12f28 }
	__asm { mov dword ptr [edi], 0xf02e1c }
	__asm { push 0xf12e90 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edi + 0xa0], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00cdd298 }
	__asm { sub eax, 4 }
	__asm { L_00cdd298: }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0xa4], eax }
	__asm { mov dword ptr [edi + 0xa8], 0 }
	__asm { mov dword ptr [edi + 0xac], 0x3f800000 }
	__asm { mov dword ptr [edi + 0xb0], 0 }
	__asm { mov dword ptr [edi + 0xb4], 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0xb8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0xb8], 0 }
	__asm { mov dword ptr [edi + 0xbc], 0 }
	__asm { call fn_00953940 }
	__asm { mov dword ptr [edi + 0xb8], eax }
	__asm { lea ebx, [edi + 0xc0] }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { mov dword ptr [edi + 0xcc], 0 }
	__asm { mov dword ptr [edi + 0xd0], 0 }
	__asm { mov dword ptr [edi + 0xd4], 0 }
	__asm { mov dword ptr [edi + 0xd8], 0 }
	__asm { mov dword ptr [edi + 0xdc], 0 }
	__asm { mov dword ptr [edi + 0xe0], 0 }
	__asm { mov dword ptr [edi + 0xe8], 0 }
	__asm { mov dword ptr [edi + 0xec], 0 }
	__asm { lea ecx, [edi + 0xf0] }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_00cd9aa0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { mov eax, dword ptr [eax + 0xa8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00cdd423 }
	__asm { push esi }
	__asm { call fn_00cd9660 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_008a67e0 }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [edi + 0xdc], ecx }
	__asm { mov esi, dword ptr [edi + 0xe0] }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 9 }
	__asm { mov dword ptr [edi + 0xe0], edx }
	__asm { test esi, esi }
	__asm { je L_00cdd3ef }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cdd3ef }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00cdd3ef }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cdd3ef: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { test esi, esi }
	__asm { je L_00cdd41d }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cdd41d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00cdd41d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cdd41d: }
	__asm { lea ebx, [edi + 0xc0] }
	__asm { L_00cdd423: }
	__asm { mov esi, 4 }
	__asm { L_00cdd428: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { call fn_00b89440 }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 0xa }
	__asm { call fn_00cde4d0 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_00941e40 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { dec esi }
	__asm { jne L_00cdd428 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004226b0();
extern "C" void fn_006b9e50();
extern "C" void fn_00cd7450();
extern "C" void fn_00cda3f0();
extern "C" void fn_00cda8f0();
extern "C" void fn_00cdda50();
extern "C" void fn_00cde1d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cdd5a0
extern "C" __declspec(naked) void asm_00cdd5a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6d7bc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xf02e1c }
	__asm { lea ecx, [edi + 0xf0] }
	__asm { mov dword ptr [ebp - 4], 6 }
	__asm { call fn_00cda8f0 }
	__asm { push dword ptr [edi + 0xf0] }
	__asm { lea ecx, [edi + 0xf0] }
	__asm { call fn_00cda3f0 }
	__asm { lea esi, [edi + 0xec] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { test eax, eax }
	__asm { je L_00cdd615 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00cdd615: }
	__asm { lea esi, [edi + 0xe8] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { test eax, eax }
	__asm { je L_00cdd63f }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00cdd63f: }
	__asm { mov esi, dword ptr [edi + 0xe0] }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test esi, esi }
	__asm { je L_00cdd675 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cdd675 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00cdd675 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cdd675: }
	__asm { mov esi, dword ptr [edi + 0xd8] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_00cdd6a6 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cdd6a6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00cdd6a6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cdd6a6: }
	__asm { lea ecx, [edi + 0xc0] }
	__asm { call fn_00cdda50 }
	__asm { mov eax, dword ptr [edi + 0xb8] }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [edi + 0xb8] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov dword ptr [edi + 0xbc], 0 }
	__asm { cmp ecx, dword ptr [edi + 0xb8] }
	__asm { je L_00cdd6ec }
	__asm { L_00cdd6d7: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { cmp esi, dword ptr [edi + 0xb8] }
	__asm { jne L_00cdd6d7 }
	__asm { L_00cdd6ec: }
	__asm { push dword ptr [edi + 0xb8] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [edi + 0xb4] }
	__asm { lea esi, [edi + 0xa0] }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00cdd73d }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_00cdd724 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00cde1d0 }
	__asm { L_00cdd724: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00cdd73d: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00cd7450 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cddac0
extern "C" __declspec(naked) void asm_00cddac0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { cmp edi, dword ptr [ebx] }
	__asm { je L_00cddb18 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00cddb0b }
	__asm { lea ecx, [esi + 4] }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00cddb0b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cddb0b }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cddb0b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { dec dword ptr [ebx + 4] }
	__asm { pop esi }
	__asm { L_00cddb18: }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00cdcc90();
extern "C" void fn_00cdcf90();
extern "C" void fn_00cdd0e0();
extern "C" void fn_00cde590();
// FUNCTION: ROBLOXSTUDIO 0x00cddb20
extern "C" __declspec(naked) void asm_00cddb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6d7f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov eax, dword ptr [ebx + 0xb8] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cdd0e0 }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x2c], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [ebp - 0x28], ecx }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xa0] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00cdcf90 }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov esi, dword ptr [ebp - 0x28] }
	__asm { mov al, byte ptr [eax + 4] }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00cddbe7 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cddbe7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00cddbe7 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cddbe7: }
	__asm { mov esi, dword ptr [ebp - 0x34] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00cddc16 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cddc16 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00cddc16 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cddc16: }
	__asm { cmp byte ptr [ebp - 0xd], 0 }
	__asm { je L_00cddcc2 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00cddc43 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00cddc43: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { mov ecx, dword ptr [ecx + 0xc0] }
	__asm { push eax }
	__asm { call fn_00cde590 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { add ecx, 0xb8 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push edx }
	__asm { push dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { push eax }
	__asm { call fn_00cdcc90 }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [edx + 0xbc] }
	__asm { mov ecx, 0x15555554 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00cddc9f }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00cddc9f: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { inc eax }
	__asm { mov dword ptr [edx + 0xbc], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov eax, dword ptr [edx + 0xb8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov dword ptr [esi + 0x1c], edi }
	__asm { L_00cddcc2: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00cddcf3 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cddcf3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00cddcf3 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cddcf3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_009a9cd0();
// FUNCTION: ROBLOXSTUDIO 0x00cdde40
extern "C" __declspec(naked) void asm_00cdde40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd508b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { lea esi, [ecx + 0x10] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00cdde88 }
	__asm { add eax, 4 }
	__asm { mov edx, 1 }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { L_00cdde88: }
	__asm { push dword ptr [esi + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_009a9cd0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00cddec6 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00cddec6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00cddec6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cddec6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cde1d0
extern "C" __declspec(naked) void asm_00cde1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00cde1e6: }
	__asm { mov edi, dword ptr [ebx] }
	__asm { test edi, edi }
	__asm { je L_00cde1f1 }
	__asm { add edi, -0xc }
	__asm { jmp L_00cde1f3 }
	__asm { L_00cde1f1: }
	__asm { xor edi, edi }
	__asm { L_00cde1f3: }
	__asm { mov eax, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00cde225 }
	__asm { lea eax, [esi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cde225 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cde225 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cde225: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { dec dword ptr [ecx + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { inc eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp dword ptr [ebx], ecx }
	__asm { jne L_00cde1e6 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cde250
extern "C" __declspec(naked) void asm_00cde250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp esi, dword ptr [ecx] }
	__asm { je L_00cde2c2 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00cde2a3 }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00cde2a2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00cde2a2 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cde2a2: }
	__asm { pop ebx }
	__asm { L_00cde2a3: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { dec dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cde2c2: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cde2d0
extern "C" __declspec(naked) void asm_00cde2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov edi, ecx }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { add esi, 0xc }
	__asm { mov ecx, edx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov edi, dword ptr [eax + ecx*4] }
	__asm { L_00cde2f5: }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, esi }
	__asm { je L_00cde300 }
	__asm { mov edi, eax }
	__asm { jmp L_00cde2f5 }
	__asm { nop }
	__asm { L_00cde300: }
	__asm { mov ebx, dword ptr [edi] }
	__asm { test ebx, ebx }
	__asm { je L_00cde30b }
	__asm { add ebx, -0xc }
	__asm { jmp L_00cde30d }
	__asm { L_00cde30b: }
	__asm { xor ebx, ebx }
	__asm { L_00cde30d: }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { test esi, esi }
	__asm { je L_00cde33f }
	__asm { lea eax, [esi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cde33f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00cde33f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cde33f: }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { dec dword ptr [ebx + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 4 }
	__asm { mov edx, ecx }
	__asm { test eax, eax }
	__asm { je L_00cde36b }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { xor edx, edx }
	__asm { div dword ptr [ebx + 4] }
	__asm { cmp ecx, edx }
	__asm { je L_00cde37a }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { mov dword ptr [eax + edx*4], edi }
	__asm { L_00cde36b: }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { cmp dword ptr [eax + ecx*4], edi }
	__asm { jne L_00cde37a }
	__asm { mov dword ptr [eax + ecx*4], 0 }
	__asm { L_00cde37a: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { test eax, eax }
	__asm { je L_00cde389 }
	__asm { add eax, 0xc }
	__asm { jmp L_00cde38b }
	__asm { L_00cde389: }
	__asm { xor eax, eax }
	__asm { L_00cde38b: }
	__asm { cmp dword ptr [edi], eax }
	__asm { jne L_00cde300 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0052a020();
extern "C" void fn_006b9740();
extern "C" void fn_00cd9250();
extern "C" void fn_00cda560();
// FUNCTION: ROBLOXSTUDIO 0x00cde3a0
extern "C" __declspec(naked) void asm_00cde3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd65d60 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0052a020 }
	__asm { add esp, 8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test al, al }
	__asm { je L_00cde422 }
	__asm { cmp dword ptr [ebp - 0x14], 0 }
	__asm { jne L_00cde422 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cde411 }
	__asm { push 0x156 }
	__asm { push 0xf02e38 }
	__asm { push 0xe67470 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cde422 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00cde411: }
	__asm { movzx eax, al }
	__asm { push 0xf035c8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cde422: }
	__asm { mov ebx, dword ptr [edi + 0xf0] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push dword ptr [ebx + 4] }
	__asm { lea ecx, [edi + 0xf0] }
	__asm { push ebx }
	__asm { call fn_00cd9250 }
	__asm { push 1 }
	__asm { lea ecx, [edi + 0xf0] }
	__asm { mov esi, eax }
	__asm { call fn_00cda560 }
	__asm { mov dword ptr [ebx + 4], esi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00cde484 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cde484 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00cde484 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cde484: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00cde4b5 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cde4b5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00cde4b5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cde4b5: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00cdccb0();
extern "C" void fn_00cdd4a0();
// FUNCTION: ROBLOXSTUDIO 0x00cde590
extern "C" __declspec(naked) void asm_00cde590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6d820 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { je L_00cde5dd }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00cde5dd: }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call fn_00cdd4a0 }
	__asm { mov esi, dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { lea ecx, [ebx + 4] }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cdccb0 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov ecx, 0x6666665 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00cde615 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00cde615: }
	__asm { inc eax }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [eax], edx }
	__asm { mov esi, dword ptr [ebp - 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00cde653 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cde653 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00cde653 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cde653: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { cmp dword ptr [ecx + 8], 1 }
	__asm { jne L_00cde663 }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ecx], eax }
	__asm { L_00cde663: }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00cde69f }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00cde69f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00cde69f }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00cde69f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004b2110();
extern "C" void fn_006b9740();
extern "C" void fn_00cde250();
extern "C" void fn_00cde2d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cde6c0
extern "C" __declspec(naked) void asm_00cde6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd508b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { movzx eax, byte ptr [ebx + 0xa0] }
	__asm { lea edi, [ebx + 0xa0] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { add eax, edi }
	__asm { je L_00cde6fc }
	__asm { inc eax }
	__asm { jmp L_00cde6fe }
	__asm { L_00cde6fc: }
	__asm { xor eax, eax }
	__asm { L_00cde6fe: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { shr ecx, 3 }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004b2110 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { test al, al }
	__asm { je L_00cde760 }
	__asm { test esi, esi }
	__asm { jne L_00cde760 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cde74f }
	__asm { push 0x17a }
	__asm { push 0xf02e38 }
	__asm { push 0xf02b14 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cde760 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00cde74f: }
	__asm { movzx eax, al }
	__asm { push 0xf03628 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cde760: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { lea edx, [ecx + ecx*4] }
	__asm { mov ecx, dword ptr [ebx + 0xc0] }
	__asm { cmp dword ptr [ecx + edx*4], eax }
	__asm { lea ecx, [ecx + edx*4] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { push eax }
	__asm { jne L_00cde7a5 }
	__asm { lea edi, [ecx + 4] }
	__asm { mov ecx, edi }
	__asm { call fn_00cde250 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { lea edi, [ebx + 0xa0] }
	__asm { mov dword ptr [edx], ecx }
	__asm { cmp ecx, eax }
	__asm { jne L_00cde7ad }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edx], eax }
	__asm { jmp L_00cde7ad }
	__asm { L_00cde7a5: }
	__asm { add ecx, 4 }
	__asm { call fn_00cde250 }
	__asm { L_00cde7ad: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp eax, dword ptr [ebx + 0xb8] }
	__asm { je L_00cde7d6 }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push eax }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { dec dword ptr [ebx + 0xbc] }
	__asm { L_00cde7d6: }
	__asm { lea eax, [esi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00cde7e2 }
	__asm { add eax, -0xc }
	__asm { jmp L_00cde7e4 }
	__asm { L_00cde7e2: }
	__asm { xor eax, eax }
	__asm { L_00cde7e4: }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00cde7f0 }
	__asm { add eax, -0xc }
	__asm { jmp L_00cde7f2 }
	__asm { L_00cde7f0: }
	__asm { xor eax, eax }
	__asm { L_00cde7f2: }
	__asm { push eax }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00cde2d0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00cde82f }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00cde82f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00cde82f }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cde82f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004033d0();
extern "C" void fn_006b9740();
extern "C" void fn_007737e0();
extern "C" void fn_007739a0();
extern "C" void fn_00c5b1d0();
extern "C" void fn_00c5d1a0();
extern "C" void fn_00c6c2f0();
extern "C" void fn_00c6c320();
extern "C" void fn_00c6cb20();
extern "C" void fn_00cd8bc0();
// FUNCTION: ROBLOXSTUDIO 0x00cdf7e0
extern "C" __declspec(naked) void asm_00cdf7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6d893 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x11c }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0xdc] }
	__asm { test ecx, ecx }
	__asm { je L_00cdf91d }
	__asm { movzx eax, byte ptr [edi + 0xe4] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c5b1d0 }
	__asm { test al, al }
	__asm { jne L_00cdf90b }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x128] }
	__asm { call fn_00c6c2f0 }
	__asm { mov esi, dword ptr [ebx] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push ebx }
	__asm { call fn_00cd8bc0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { sub eax, esi }
	__asm { push eax }
	__asm { mov dword ptr [ebx + 8], esi }
	__asm { movzx eax, byte ptr [edi + 0xe4] }
	__asm { mov ecx, dword ptr [edi + 0xdc] }
	__asm { push esi }
	__asm { push ebx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c5d1a0 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { jne L_00cdf8e1 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 0xf02ba0 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007737e0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_004033d0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00cdf8e1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cdf8d0 }
	__asm { push 0x1b6 }
	__asm { push 0xf02e38 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cdf8e1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00cdf8d0: }
	__asm { movzx eax, al }
	__asm { push 0xf03698 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cdf8e1: }
	__asm { lea eax, [ebp - 0x128] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 0x120], 0 }
	__asm { call fn_00c6cb20 }
	__asm { lea ecx, [ebp - 0x128] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c6c320 }
	__asm { L_00cdf90b: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00cdf91d: }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cd8bc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_006d19a0();
extern "C" void fn_00892440();
extern "C" void fn_0099c7f0();
extern "C" void fn_00cd81b0();
extern "C" void fn_00cdd950();
// FUNCTION: ROBLOXSTUDIO 0x00cdf940
extern "C" __declspec(naked) void asm_00cdf940()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { mov al, byte ptr [edi + 0x18] }
	__asm { mov byte ptr [ebx + 0xe4], al }
	__asm { mov ecx, dword ptr [edi] }
	__asm { call fn_00892440 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { lea eax, [ebx + 0x98] }
	__asm { push eax }
	__asm { movzx eax, byte ptr [ebx + 0xe4] }
	__asm { push eax }
	__asm { push dword ptr [edi] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cd81b0 }
	__asm { test al, al }
	__asm { jne L_00cdf9b8 }
	__asm { mov eax, dword ptr [ebx + 0xd0] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cdf9b8: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [eax + 0xe0] }
	__asm { call fn_0099c7f0 }
	__asm { test eax, eax }
	__asm { je L_00cdfa25 }
	__asm { mov eax, dword ptr [ebx + 0xd0] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0x1c], 0x40000000 }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [ebx + 0xb8] }
	__asm { lea esi, [ebx + 0xb8] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { je L_00cdfa10 }
	__asm { mov edx, dword ptr [eax] }
	__asm { cmp ecx, eax }
	__asm { je L_00cdfa10 }
	__asm { cmp ecx, edx }
	__asm { je L_00cdfa10 }
	__asm { push 1 }
	__asm { push edx }
	__asm { push eax }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_00cdd950 }
	__asm { nop }
	__asm { L_00cdfa10: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cdfa25: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00cdfa66 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00cdfa55 }
	__asm { push 0x14e }
	__asm { push 0xf02e38 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00cdfa66 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00cdfa55: }
	__asm { movzx eax, al }
	__asm { push 0xf03568 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00cdfa66: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_005735a0();
extern "C" void fn_006c0990();
extern "C" void fn_00c6a860();
extern "C" void fn_00c70570();
extern "C" void fn_00c72310();
extern "C" void fn_00c89ff0();
// FUNCTION: ROBLOXSTUDIO 0x00cdfdb0
extern "C" __declspec(naked) void asm_00cdfdb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0x14] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [edi + 0x20] }
	__asm { jbe L_00cdfe97 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov edx, dword ptr [eax + 0x50] }
	__asm { mov al, byte ptr [edx + 0x45dc] }
	__asm { test al, al }
	__asm { je L_00cdfde4 }
	__asm { push 1 }
	__asm { push ecx }
	__asm { call fn_00c70570 }
	__asm { add esp, 8 }
	__asm { jmp L_00cdfdee }
	__asm { L_00cdfde4: }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov ecx, edx }
	__asm { call fn_00c72310 }
	__asm { L_00cdfdee: }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov ecx, dword ptr [ecx + 0x50] }
	__asm { call fn_00c89ff0 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push 0 }
	__asm { mov esi, dword ptr [ecx + 0x50] }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, dword ptr [esi + 0xeb0] }
	__asm { mov edx, esp }
	__asm { mov ebx, eax }
	__asm { mov eax, dword ptr [esi + 0xeb4] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [esi + 0xeb8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xebc] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0xec0] }
	__asm { sub esp, 8 }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00cdfe5b }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00cdfe5b: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { call fn_00c6a860 }
	__asm { mov ecx, ebx }
	__asm { call fn_005735a0 }
	__asm { lea ecx, [ebx + 0x40] }
	__asm { call fn_005735a0 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { lea ecx, [ebx + 0xb0] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { push eax }
	__asm { call fn_006c0990 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { push dword ptr [edi + 0x28] }
	__asm { add ecx, 0x60 }
	__asm { call fn_006c0990 }
	__asm { L_00cdfe97: }
	__asm { mov dword ptr [edi + 0x14], 0 }
	__asm { mov esi, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { test esi, esi }
	__asm { je L_00cdfed2 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00cdfed2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00cdfed2 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cdfed2: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c20020();
extern "C" void fn_00c6c1f0();
extern "C" void fn_00c702e0();
extern "C" void fn_00c70300();
extern "C" void fn_00ccfe40();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00cdfee0
extern "C" __declspec(naked) void asm_00cdfee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd613ab }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x114 }
	__asm { mov esi, ecx }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00cdff26 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { mov ecx, eax }
	__asm { call fn_00c6c1f0 }
	__asm { jmp L_00cdff28 }
	__asm { L_00cdff26: }
	__asm { xor eax, eax }
	__asm { L_00cdff28: }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c20020 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [esi + 0x14], edx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x18], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { je L_00cdff7d }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00cdff7c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00cdff7c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00cdff7c: }
	__asm { pop ebx }
	__asm { L_00cdff7d: }
	__asm { push 0x1b }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00c70300 }
	__asm { call fn_00ccfe40 }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x14] }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { call fn_00c702e0 }
	__asm { push 0x85 }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00c70300 }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 0x18 }
	__asm { inc dword ptr [esi + 0x24] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov dword ptr [esi + 0x28], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043eed0();
extern "C" void fn_006b9740();
extern "C" void fn_006c0990();
extern "C" void fn_006d19a0();
extern "C" void fn_00891b10();
extern "C" void fn_00892440();
extern "C" void fn_00b5bb60();
extern "C" void fn_00c70570();
extern "C" void fn_00c72310();
extern "C" void fn_00c72750();
extern "C" void fn_00c862f0();
extern "C" void fn_00cd7770();
extern "C" void fn_00cd7e10();
// FUNCTION: ROBLOXSTUDIO 0x00ce0260
extern "C" __declspec(naked) void asm_00ce0260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0x38 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00ce02bb }
	__asm { test esi, esi }
	__asm { jne L_00ce02c3 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ce02a2 }
	__asm { push 0x2d }
	__asm { push 0xf037c0 }
	__asm { push 0xef3850 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ce0409 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ce02a2: }
	__asm { movzx eax, al }
	__asm { push 0xf03808 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce02bb: }
	__asm { test esi, esi }
	__asm { je L_00ce0409 }
	__asm { L_00ce02c3: }
	__asm { mov ecx, dword ptr [edi + 0x50] }
	__asm { mov dword ptr [edi + 0x54], 0 }
	__asm { mov eax, dword ptr [ecx + 0x21c0] }
	__asm { cmp byte ptr [eax + 0x73], 0 }
	__asm { je L_00ce02e2 }
	__asm { lea eax, [ecx + 0x18b0] }
	__asm { mov dword ptr [edi + 0x54], eax }
	__asm { L_00ce02e2: }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00b5bb60 }
	__asm { push eax }
	__asm { call fn_00891b10 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov ecx, edi }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_00cd7770 }
	__asm { test al, al }
	__asm { je L_00ce0408 }
	__asm { mov ecx, dword ptr [edi + 0x50] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x90] }
	__asm { test eax, eax }
	__asm { je L_00ce0331 }
	__asm { mov ecx, dword ptr [eax + 0x64] }
	__asm { test ecx, ecx }
	__asm { je L_00ce0331 }
	__asm { push esi }
	__asm { call fn_0043eed0 }
	__asm { mov byte ptr [ebp + 0xc], 1 }
	__asm { test al, al }
	__asm { jne L_00ce0335 }
	__asm { L_00ce0331: }
	__asm { mov byte ptr [ebp + 0xc], 0 }
	__asm { L_00ce0335: }
	__asm { mov ecx, dword ptr [edi + 0x50] }
	__asm { cmp byte ptr [ecx + 0x45dc], 0 }
	__asm { je L_00ce0376 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { call fn_00c70570 }
	__asm { push 0 }
	__asm { push ebx }
	__asm { call fn_00c70570 }
	__asm { mov ecx, dword ptr [edi + 0x50] }
	__asm { add esp, 0x10 }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00c72750 }
	__asm { test al, al }
	__asm { jne L_00ce0385 }
	__asm { mov ecx, dword ptr [edi + 0x50] }
	__asm { push 0 }
	__asm { push ebx }
	__asm { call fn_00c72310 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce0376: }
	__asm { push esi }
	__asm { push ebx }
	__asm { call fn_00c72750 }
	__asm { test al, al }
	__asm { je L_00ce0408 }
	__asm { L_00ce0385: }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_00892440 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { lea eax, [edi + 0x98] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { push eax }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_00cd7e10 }
	__asm { mov ecx, dword ptr [edi + 0x54] }
	__asm { test ecx, ecx }
	__asm { je L_00ce0408 }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00ce0408 }
	__asm { push 1 }
	__asm { add ecx, 0x240 }
	__asm { call fn_00c862f0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edi + 0x54] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { sub eax, dword ptr [ebp + 8] }
	__asm { add ecx, 0x258 }
	__asm { push eax }
	__asm { call fn_006c0990 }
	__asm { L_00ce0408: }
	__asm { pop ebx }
	__asm { L_00ce0409: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00adee70();
extern "C" void fn_00ce0980();
extern "C" void fn_00ce0b30();
extern "C" void fn_00ce1310();
extern "C" void fn_00ce1600();
extern "C" void fn_00ce1a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ce0840
extern "C" __declspec(naked) void asm_00ce0840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6d961 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { movzx eax, byte ptr [esi] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ecx] }
	__asm { shr edi, 3 }
	__asm { add edi, dword ptr [ecx] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_00ce0874 }
	__asm { inc eax }
	__asm { jmp L_00ce0876 }
	__asm { L_00ce0874: }
	__asm { xor eax, eax }
	__asm { L_00ce0876: }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edi }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00ce0980 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00ce08a6 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov byte ptr [eax + 4], 0 }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ce08a6: }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_00ce08b0 }
	__asm { inc eax }
	__asm { jmp L_00ce08b2 }
	__asm { L_00ce08b0: }
	__asm { xor eax, eax }
	__asm { L_00ce08b2: }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov word ptr [ebp - 0x14], 0 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ce1600 }
	__asm { mov edx, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp + 0xc], edx }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { test edx, edx }
	__asm { je L_00ce090f }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00ce08fe }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00ce08fe: }
	__asm { lea eax, [ebx + 8] }
	__asm { push eax }
	__asm { lea ecx, [edx + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00ce0b30 }
	__asm { pop ebx }
	__asm { L_00ce090f: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0x13], 1 }
	__asm { call fn_00ce1a30 }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00ce1310 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov byte ptr [edi + 4], 1 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ce0962 }
	__asm { cmp byte ptr [ebp - 0x13], 0 }
	__asm { je L_00ce0959 }
	__asm { mov ecx, esi }
	__asm { call fn_00adee70 }
	__asm { L_00ce0959: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ce0962: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e1025c[];
extern "C" void fn_00adee70();
extern "C" void fn_00ce0b30();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ce0a30
extern "C" __declspec(naked) void asm_00ce0a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6d9a1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x64 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x70], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x6c], eax }
	__asm { test eax, eax }
	__asm { je L_00ce0a70 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00ce0a70: }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea ecx, [ebp - 0x68] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_00ce0b30 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp - 0x70] }
	__asm { mov ecx, dword ptr [ebp - 0x6c] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x6c], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov dword ptr [ebp - 0x70], 0 }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { lea ecx, [esi + 8] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00ce0b30 }
	__asm { lea ecx, [ebp - 0x70] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00adee70 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 8 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00ce0b19 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00ce0b19: }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_006d19a0();
// FUNCTION: ROBLOXSTUDIO 0x00ce0b30
extern "C" __declspec(naked) void asm_00ce0b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd53888 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
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
	__asm { je L_00ce0b6e }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00ce0b6e: }
	__asm { fld dword ptr [esi + 8] }
	__asm { add esi, 0xc }
	__asm { fstp dword ptr [ebx + 8] }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006d19a0 }
	__asm { mov eax, dword ptr [esi + 0x24] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebx + 0x30], eax }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [ebx + 0x34], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [ebx + 0x38], eax }
	__asm { mov al, byte ptr [ecx + 0x3c] }
	__asm { mov byte ptr [ebx + 0x3c], al }
	__asm { fld dword ptr [ecx + 0x40] }
	__asm { fstp dword ptr [ebx + 0x40] }
	__asm { pop edi }
	__asm { fld dword ptr [ecx + 0x44] }
	__asm { pop esi }
	__asm { fstp dword ptr [ebx + 0x44] }
	__asm { mov eax, dword ptr [ecx + 0x48] }
	__asm { mov dword ptr [ebx + 0x48], eax }
	__asm { mov eax, dword ptr [ecx + 0x4c] }
	__asm { mov dword ptr [ebx + 0x4c], eax }
	__asm { fld dword ptr [ecx + 0x50] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { fstp dword ptr [ebx + 0x50] }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006da0e0();
// FUNCTION: ROBLOXSTUDIO 0x00ce0be0
extern "C" __declspec(naked) void asm_00ce0be0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6d9c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00ce0c22 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00ce0c22: }
	__asm { lea ecx, [esi + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { call fn_006da0e0 }
	__asm { fldz }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [esi + 0x3c], 1 }
	__asm { mov dword ptr [esi + 0x40], 0x40000000 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { fstp qword ptr [esi + 0x48] }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test edi, edi }
	__asm { je L_00ce0c9d }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [edi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00ce0c88 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00ce0c88 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00ce0c88: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ce0c9d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004226b0();
extern "C" void fn_006b9e50();
extern "C" void fn_00cd7450();
extern "C" void fn_00cda3f0();
extern "C" void fn_00cda8f0();
extern "C" void fn_00ce1670();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ce0f30
extern "C" __declspec(naked) void asm_00ce0f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6dabc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [edi], 0xf03878 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { lea esi, [edi + 0xf0] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 7 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { test eax, eax }
	__asm { je L_00ce0f89 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00ce0f89: }
	__asm { lea esi, [edi + 0xec] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 8 }
	__asm { call fn_006b9e50 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { test eax, eax }
	__asm { je L_00ce0fb3 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00ce0fb3: }
	__asm { mov esi, dword ptr [edi + 0xd8] }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { test esi, esi }
	__asm { je L_00ce0fe9 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00ce0fe9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, ebx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00ce0fe9 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00ce0fe9: }
	__asm { mov esi, dword ptr [edi + 0xd0] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { test esi, esi }
	__asm { je L_00ce101a }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, ebx }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00ce101a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00ce101a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00ce101a: }
	__asm { mov eax, dword ptr [edi + 0xc0] }
	__asm { pop ebx }
	__asm { test eax, eax }
	__asm { je L_00ce104c }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0xc0], 0 }
	__asm { mov dword ptr [edi + 0xc4], 0 }
	__asm { mov dword ptr [edi + 0xc8], 0 }
	__asm { L_00ce104c: }
	__asm { mov ecx, dword ptr [edi + 0xbc] }
	__asm { lea esi, [edi + 0xa8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_00ce108f }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_00ce1076 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00ce1670 }
	__asm { L_00ce1076: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00ce108f: }
	__asm { lea ecx, [edi + 0xa0] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00cda8f0 }
	__asm { push dword ptr [edi + 0xa0] }
	__asm { lea ecx, [edi + 0xa0] }
	__asm { call fn_00cda3f0 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00cd7450 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00adee70();
extern "C" void fn_00c34a10();
extern "C" void fn_00ce0840();
extern "C" void fn_00ce0a30();
extern "C" void fn_00ce0b30();
extern "C" void fn_00ce0be0();
// FUNCTION: ROBLOXSTUDIO 0x00ce1160
extern "C" __declspec(naked) void asm_00ce1160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6dafe }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x12c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00ce11b0 }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00ce11b0: }
	__asm { lea ecx, [ebp - 0xd8] }
	__asm { call fn_00ce0be0 }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x138] }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00ce0a30 }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x7c], 0 }
	__asm { mov dword ptr [ebp - 0x80], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [ebp - 0x7c], ecx }
	__asm { mov dword ptr [eax], 0 }
	__asm { add eax, 8 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x78] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00ce0b30 }
	__asm { lea eax, [ebp - 0x80] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x80] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0xa8] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00ce0840 }
	__asm { mov esi, dword ptr [eax] }
	__asm { mov al, byte ptr [eax + 4] }
	__asm { lea ecx, [ebp - 0x80] }
	__asm { mov byte ptr [ebp - 0xd], al }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00adee70 }
	__asm { lea ecx, [ebp - 0x138] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00adee70 }
	__asm { mov ebx, dword ptr [ebp - 0xd4] }
	__asm { or edi, 0xffffffff }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00ce127b }
	__asm { lea eax, [ebx + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00ce127b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [ebx + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00ce127b }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00ce127b: }
	__asm { cmp byte ptr [ebp - 0xd], 0 }
	__asm { je L_00ce1299 }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { add esi, 8 }
	__asm { push eax }
	__asm { add ecx, 0xc0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00c34a10 }
	__asm { L_00ce1299: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ce12ca }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00ce12ca }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00ce12ca }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00ce12ca: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10500[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01314cb8[];
extern "C" void fn_004226b0();
extern "C" void fn_006b9740();
extern "C" void fn_006b9b80();
extern "C" void fn_006b9cb0();
extern "C" void fn_006b9e50();
extern "C" void fn_006c54a0();
extern "C" void fn_006da0e0();
extern "C" void fn_007a62e0();
extern "C" void fn_00892440();
extern "C" void fn_008a67e0();
extern "C" void fn_00c4ae10();
extern "C" void fn_00c89ff0();
extern "C" void fn_00c9eb40();
extern "C" void fn_00cd9370();
extern "C" void fn_00cd9770();
extern "C" void fn_00cda8f0();
extern "C" void fn_00ce0540();
extern "C" void fn_00ce0760();
extern "C" void fn_00ce0980();
extern "C" void fn_00ce13c0();
extern "C" void fn_00ce1760();
extern "C" void fn_00cf6840();
// FUNCTION: ROBLOXSTUDIO 0x00ce2200
extern "C" __declspec(naked) void asm_00ce2200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6db50 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x60 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push eax }
	__asm { mov ebx, ecx }
	__asm { call fn_006c54a0 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebx + 0x98], ecx }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [ebx + 0xcc], 0 }
	__asm { mov dword ptr [ebx + 0x9c], eax }
	__asm { jne L_00ce2421 }
	__asm { push dword ptr [ebx + 0x50] }
	__asm { call fn_00c9eb40 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_008a67e0 }
	__asm { add esp, 0xc }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [ebx + 0xcc], ecx }
	__asm { mov esi, dword ptr [ebx + 0xd0] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebx + 0xd0], edx }
	__asm { test esi, esi }
	__asm { je L_00ce22b5 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00ce22b5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00ce22b5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00ce22b5: }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ce22e6 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00ce22e6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00ce22e6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00ce22e6: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00ce232b }
	__asm { cmp dword ptr [ebx + 0xcc], 0 }
	__asm { jne L_00ce232b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ce2316 }
	__asm { push 0x45 }
	__asm { push 0xf038d0 }
	__asm { push 0xef3c18 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ce232b }
	__asm { L_00ce2316: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf03918 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ce232b: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov eax, dword ptr [ebx + 0xcc] }
	__asm { mov esi, dword ptr [eax + 0x74] }
	__asm { je L_00ce2383 }
	__asm { test esi, esi }
	__asm { je L_00ce2383 }
	__asm { lea ecx, [esi + 0xc8] }
	__asm { call fn_007a62e0 }
	__asm { test al, al }
	__asm { jne L_00ce2383 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ce236e }
	__asm { push 0x68 }
	__asm { push 0xe53f10 }
	__asm { push 0xe53fb4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ce2383 }
	__asm { L_00ce236e: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54318 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ce2383: }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { push 0 }
	__asm { mov dword ptr [ecx], 0xce12e0 }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { mov dword ptr [ecx + 8], ebx }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00cd9770 }
	__asm { mov ecx, dword ptr [ebx + 0xcc] }
	__asm { add esp, 0x1c }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { add ecx, 0xe4 }
	__asm { mov dword ptr [ebp - 0x3c], 0xce1890 }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov dword ptr [ebp - 0x34], ebx }
	__asm { call fn_00ce0760 }
	__asm { mov edi, eax }
	__asm { push edi }
	__asm { lea ecx, [ebx + 0xec] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_006b9cb0 }
	__asm { test al, al }
	__asm { je L_00ce2407 }
	__asm { lea ecx, [ebx + 0xec] }
	__asm { call fn_006b9e50 }
	__asm { push edi }
	__asm { lea ecx, [ebx + 0xec] }
	__asm { call fn_006b9b80 }
	__asm { L_00ce2407: }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00ce2421 }
	__asm { add eax, 5 }
	__asm { push eax }
	__asm { call fn_004226b0 }
	__asm { add esp, 4 }
	__asm { L_00ce2421: }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebx + 0xa0] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x2c], 0xce1160 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], ebx }
	__asm { call fn_00cd9370 }
	__asm { add esp, 0xc }
	__asm { lea ecx, [ebx + 0xa0] }
	__asm { call fn_00cda8f0 }
	__asm { lea ecx, [ebp - 0x6c] }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { call fn_006da0e0 }
	__asm { mov ecx, dword ptr [ebx + 0x50] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x90] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_00ce248d }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c4ae10 }
	__asm { test eax, eax }
	__asm { je L_00ce248d }
	__asm { mov eax, dword ptr [esi + 0x64] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { L_00ce248d: }
	__asm { inc dword ptr [ebx + 0xdc] }
	__asm { cmp byte ptr [g_01314cb8], 0 }
	__asm { mov ecx, dword ptr [ebx + 0xdc] }
	__asm { je L_00ce24c3 }
	__asm { mov edx, dword ptr [ebx + 0xe4] }
	__asm { mov eax, ecx }
	__asm { sub eax, edx }
	__asm { cmp eax, 2 }
	__asm { jge L_00ce24bd }
	__asm { cmp edx, dword ptr [ebx + 0xe0] }
	__asm { jg L_00ce26d8 }
	__asm { L_00ce24bd: }
	__asm { mov dword ptr [ebx + 0xe4], ecx }
	__asm { L_00ce24c3: }
	__asm { mov edi, dword ptr [ebx + 0xc0] }
	__asm { mov dword ptr [ebp - 0x20], edi }
	__asm { cmp edi, dword ptr [ebx + 0xc4] }
	__asm { je L_00ce26a6 }
	__asm { lea eax, [edi + 4] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov edi, edi }
	__asm { L_00ce24e0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { mov esi, dword ptr [edx] }
	__asm { je L_00ce2550 }
	__asm { cmp dword ptr [esi + 0xc8], 0 }
	__asm { jne L_00ce2506 }
	__asm { cmp dword ptr [esi + 0xd0], 0 }
	__asm { jne L_00ce2506 }
	__asm { xor ecx, ecx }
	__asm { jmp L_00ce250b }
	__asm { L_00ce2506: }
	__asm { mov ecx, 1 }
	__asm { L_00ce250b: }
	__asm { xor eax, eax }
	__asm { cmp dword ptr [esi + 0xcc], eax }
	__asm { setne al }
	__asm { cmp eax, ecx }
	__asm { je L_00ce2550 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ce2538 }
	__asm { push 0x58 }
	__asm { push 0xe53f10 }
	__asm { push 0xe54240 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ce254d }
	__asm { L_00ce2538: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe54280 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ce254d: }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { L_00ce2550: }
	__asm { cmp dword ptr [esi + 0xcc], 0 }
	__asm { jne L_00ce261c }
	__asm { movzx eax, byte ptr [ebx + 0xa8] }
	__asm { lea esi, [ebx + 0xa8] }
	__asm { inc eax }
	__asm { add eax, esi }
	__asm { je L_00ce2572 }
	__asm { inc eax }
	__asm { jmp L_00ce2574 }
	__asm { L_00ce2572: }
	__asm { xor eax, eax }
	__asm { L_00ce2574: }
	__asm { push eax }
	__asm { mov eax, dword ptr [edx] }
	__asm { shr eax, 3 }
	__asm { add eax, dword ptr [edx] }
	__asm { push edx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00ce0980 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { je L_00ce25da }
	__asm { test esi, esi }
	__asm { jne L_00ce25de }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00ce25b7 }
	__asm { push 0x6e }
	__asm { push 0xf038d0 }
	__asm { push 0xf03980 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ce25cc }
	__asm { L_00ce25b7: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf039a0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ce25cc: }
	__asm { xor eax, eax }
	__asm { L_00ce25ce: }
	__asm { mov eax, dword ptr [eax + 0x60] }
	__asm { test eax, eax }
	__asm { je L_00ce25ea }
	__asm { add eax, -0x60 }
	__asm { jmp L_00ce25ec }
	__asm { L_00ce25da: }
	__asm { test esi, esi }
	__asm { je L_00ce25cc }
	__asm { L_00ce25de: }
	__asm { lea eax, [esi + 0x60] }
	__asm { test eax, eax }
	__asm { je L_00ce25cc }
	__asm { add eax, -0x60 }
	__asm { jmp L_00ce25ce }
	__asm { L_00ce25ea: }
	__asm { xor eax, eax }
	__asm { L_00ce25ec: }
	__asm { push eax }
	__asm { push esi }
	__asm { lea ecx, [ebx + 0xa8] }
	__asm { call fn_00ce1760 }
	__asm { mov eax, dword ptr [ebx + 0xc4] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { sub eax, esi }
	__asm { and eax, 0xfffffffc }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { add dword ptr [ebx + 0xc4], -4 }
	__asm { jmp L_00ce269a }
	__asm { L_00ce261c: }
	__asm { mov ecx, dword ptr [ebx + 0x50] }
	__asm { push dword ptr [edx] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x84] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00ce2647 }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { push ebx }
	__asm { push dword ptr [ebx + 0xdc] }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00ce13c0 }
	__asm { jmp L_00ce2690 }
	__asm { L_00ce2647: }
	__asm { mov eax, dword ptr [ebx + 0x98] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { mov eax, dword ptr [ebx + 0x9c] }
	__asm { mov dword ptr [esi + 0x4c], eax }
	__asm { call fn_00892440 }
	__asm { lea edx, [esi + 0xc] }
	__asm { mov esi, eax }
	__asm { mov ecx, 9 }
	__asm { mov edi, edx }
	__asm { rep movsd }
	__asm { fld dword ptr [eax + 0x24] }
	__asm { fstp dword ptr [edx + 0x24] }
	__asm { fld dword ptr [eax + 0x28] }
	__asm { fstp dword ptr [edx + 0x28] }
	__asm { fld dword ptr [eax + 0x2c] }
	__asm { fstp dword ptr [edx + 0x2c] }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov edi, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { L_00ce2690: }
	__asm { add edi, 4 }
	__asm { add dword ptr [ebp - 0x14], 4 }
	__asm { mov dword ptr [ebp - 0x20], edi }
	__asm { L_00ce269a: }
	__asm { cmp edi, dword ptr [ebx + 0xc4] }
	__asm { jne L_00ce24e0 }
	__asm { L_00ce26a6: }
	__asm { mov ecx, dword ptr [ebx + 0x50] }
	__asm { mov esi, dword ptr [ebx + 0xc4] }
	__asm { call fn_00c89ff0 }
	__asm { fld qword ptr [eax + 0xf8] }
	__asm { mov edi, dword ptr [ebx + 0xc0] }
	__asm { push 0xce13a0 }
	__asm { push esi }
	__asm { call fn_00cf6840 }
	__asm { lea eax, [edi + eax*4] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00ce0540 }
	__asm { add esp, 0x10 }
	__asm { L_00ce26d8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004033d0();
extern "C" void fn_006b9740();
extern "C" void fn_007737e0();
extern "C" void fn_007739a0();
extern "C" void fn_00c5b1d0();
extern "C" void fn_00c5d1a0();
extern "C" void fn_00cd8bc0();
// FUNCTION: ROBLOXSTUDIO 0x00ce26f0
extern "C" __declspec(naked) void asm_00ce26f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ecx, dword ptr [edi + 0xd4] }
	__asm { test ecx, ecx }
	__asm { je L_00ce280d }
	__asm { xor al, al }
	__asm { cmp byte ptr [edi + 0xe8], 0 }
	__asm { movzx eax, al }
	__asm { mov edx, 1 }
	__asm { cmovne eax, edx }
	__asm { cmp byte ptr [ebp + 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { je L_00ce273e }
	__asm { or al, 2 }
	__asm { mov byte ptr [ebp - 0x10], al }
	__asm { L_00ce273e: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c5b1d0 }
	__asm { test al, al }
	__asm { jne L_00ce27fb }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call fn_00cd8bc0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { sub eax, esi }
	__asm { push eax }
	__asm { push esi }
	__asm { push ebx }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebx + 8], esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edi + 0xd4] }
	__asm { call fn_00c5d1a0 }
	__asm { pop esi }
	__asm { test al, al }
	__asm { jne L_00ce27fb }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_007739a0 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push 0xf02ba0 }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007737e0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004033d0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ce27fb }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ce27ea }
	__asm { push 0x13b }
	__asm { push 0xf038d0 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ce27fb }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ce27ea: }
	__asm { movzx eax, al }
	__asm { push 0xf03ca0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ce27fb: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00ce280d: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cd8bc0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_006603f0();
extern "C" void fn_006904a0();
extern "C" void fn_00ce34b0();
extern "C" void fn_00ce4590();
extern "C" void fn_00cf6522();
extern "C" void fn_00d0ce00();
// FUNCTION: ROBLOXSTUDIO 0x00ce3380
extern "C" __declspec(naked) void asm_00ce3380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6c408 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { call fn_00d0ce00 }
	__asm { movzx edx, byte ptr [esi] }
	__asm { lea ecx, [esi + 1] }
	__asm { add esp, 4 }
	__asm { mov ebx, eax }
	__asm { add ecx, edx }
	__asm { je L_00ce33b9 }
	__asm { inc ecx }
	__asm { jmp L_00ce33bb }
	__asm { L_00ce33b9: }
	__asm { xor ecx, ecx }
	__asm { L_00ce33bb: }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00ce34b0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { test ecx, ecx }
	__asm { je L_00ce33ed }
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
	__asm { L_00ce33ed: }
	__asm { lea eax, [esi + 3] }
	__asm { test eax, eax }
	__asm { je L_00ce33f7 }
	__asm { inc eax }
	__asm { jmp L_00ce33f9 }
	__asm { L_00ce33f7: }
	__asm { xor eax, eax }
	__asm { L_00ce33f9: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ce4590 }
	__asm { mov edx, dword ptr [ebp - 0x14] }
	__asm { test edx, edx }
	__asm { je L_00ce3452 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [edx + 0xc], eax }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [edx + 0x10], eax }
	__asm { mov eax, dword ptr [ecx + 0x14] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { mov dword ptr [edx + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov dword ptr [edx + 0x1c], eax }
	__asm { L_00ce3452: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 0xf], 1 }
	__asm { call fn_006603f0 }
	__asm { push ebx }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_006904a0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [esi + 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00ce348d }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ce348d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012dbea4[];
extern "C" char g_012dbea8[];
extern "C" char g_012dbeac[];
extern "C" char g_012dbeb0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00403110();
extern "C" void fn_006b9740();
extern "C" void fn_006c54a0();
extern "C" void fn_006dea00();
extern "C" void fn_00865d20();
extern "C" void fn_008bbcc0();
extern "C" void fn_00953940();
extern "C" void fn_00c7bf10();
// FUNCTION: ROBLOXSTUDIO 0x00ce3d30
extern "C" __declspec(naked) void asm_00ce3d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6dc82 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edi, ecx }
	__asm { push 0xf03f48 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { call fn_00c7bf10 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ebx, [edi + 0x210] }
	__asm { push 0xf12f28 }
	__asm { mov dword ptr [ebx], 0xeb03e0 }
	__asm { mov dword ptr [edi], 0xf03dcc }
	__asm { mov dword ptr [ebx], 0xf03dec }
	__asm { push 0xf12e90 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [edi + 0x218], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0xb }
	__asm { call fn_00403110 }
	__asm { add esp, 0x10 }
	__asm { cmp eax, 0xf12f28 }
	__asm { jne L_00ce3db0 }
	__asm { sub eax, 4 }
	__asm { L_00ce3db0: }
	__asm { mov eax, dword ptr [eax] }
	__asm { push esi }
	__asm { mov dword ptr [edi + 0x21c], eax }
	__asm { mov dword ptr [edi + 0x220], 0 }
	__asm { mov dword ptr [edi + 0x224], 0x3f800000 }
	__asm { mov dword ptr [edi + 0x228], 0 }
	__asm { mov dword ptr [edi + 0x22c], 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [edi + 0x230] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edi + 0x230], 0 }
	__asm { mov dword ptr [edi + 0x234], 0 }
	__asm { call fn_00953940 }
	__asm { mov dword ptr [edi + 0x230], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [edi + 0x238], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edi + 0x23c], ecx }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [edi + 0x240], eax }
	__asm { mov dword ptr [edi + 0x244], 0 }
	__asm { mov dword ptr [edi + 0x248], 0 }
	__asm { mov dword ptr [edi + 0x24c], 0 }
	__asm { mov dword ptr [edi + 0x250], 0x46fffe00 }
	__asm { mov dword ptr [edi + 0x254], 0x7fff7fff }
	__asm { mov eax, dword ptr [g_012dbeb0] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_00ce3e8b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dbeb0], eax }
	__asm { mov eax, 0x7fffffff }
	__asm { mov dword ptr [g_012dbea4], eax }
	__asm { mov dword ptr [g_012dbea8], eax }
	__asm { mov dword ptr [g_012dbeac], eax }
	__asm { jmp L_00ce3e90 }
	__asm { L_00ce3e8b: }
	__asm { mov eax, dword ptr [g_012dbea4] }
	__asm { L_00ce3e90: }
	__asm { mov dword ptr [edi + 0x258], eax }
	__asm { mov eax, dword ptr [g_012dbea8] }
	__asm { mov dword ptr [edi + 0x25c], eax }
	__asm { mov eax, dword ptr [g_012dbeac] }
	__asm { mov dword ptr [edi + 0x260], eax }
	__asm { lea eax, [edi + 0x268] }
	__asm { push eax }
	__asm { call fn_006c54a0 }
	__asm { lea eax, [edi + 0x270] }
	__asm { push eax }
	__asm { call fn_006c54a0 }
	__asm { mov dword ptr [edi + 0x278], 0 }
	__asm { mov dword ptr [edi + 0x27c], 0 }
	__asm { mov dword ptr [edi + 0x280], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00865d20 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_00ce3f19 }
	__asm { mov ecx, dword ptr [eax + 0x148] }
	__asm { test ecx, ecx }
	__asm { je L_00ce3f0e }
	__asm { mov ecx, dword ptr [ecx + 0xb4] }
	__asm { mov ecx, dword ptr [ecx + 0x24] }
	__asm { mov dword ptr [edi + 0x214], ecx }
	__asm { L_00ce3f0e: }
	__asm { add eax, 0x238 }
	__asm { mov dword ptr [edi + 0x24c], eax }
	__asm { L_00ce3f19: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ce3f63 }
	__asm { cmp dword ptr [edi + 0x214], 0 }
	__asm { jne L_00ce3f63 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ce3f52 }
	__asm { push 0x82 }
	__asm { push 0xf03f58 }
	__asm { push 0xef3fdc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ce3f63 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ce3f52: }
	__asm { movzx eax, al }
	__asm { push 0xf03fa0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ce3f63: }
	__asm { mov ecx, dword ptr [edi + 0x214] }
	__asm { test ecx, ecx }
	__asm { je L_00ce3f7c }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { add ecx, 0x78 }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { call fn_008bbcc0 }
	__asm { L_00ce3f7c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0041fe80();
extern "C" void fn_006c4220();
extern "C" void fn_00ce4600();
extern "C" void fn_00ce5940();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ce4070
extern "C" __declspec(naked) void asm_00ce4070()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6dcca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [edi], 0xf03dcc }
	__asm { mov dword ptr [edi + 0x210], 0xf03dec }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_00ce5940 }
	__asm { mov eax, dword ptr [edi + 0x278] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00ce40fb }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { push ecx }
	__asm { push dword ptr [edi + 0x27c] }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [edi + 0x278] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 0x278], 0 }
	__asm { mov dword ptr [edi + 0x27c], 0 }
	__asm { mov dword ptr [edi + 0x280], 0 }
	__asm { L_00ce40fb: }
	__asm { mov eax, dword ptr [edi + 0x230] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [edi + 0x230] }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov dword ptr [edi + 0x234], 0 }
	__asm { cmp ecx, dword ptr [edi + 0x230] }
	__asm { je L_00ce4135 }
	__asm { L_00ce4120: }
	__asm { mov esi, dword ptr [ecx] }
	__asm { push ecx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov ecx, esi }
	__asm { cmp esi, dword ptr [edi + 0x230] }
	__asm { jne L_00ce4120 }
	__asm { L_00ce4135: }
	__asm { push dword ptr [edi + 0x230] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [edi + 0x22c] }
	__asm { lea esi, [edi + 0x218] }
	__asm { add esp, 4 }
	__asm { test ecx, ecx }
	__asm { je L_00ce4182 }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { je L_00ce4169 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00ce4600 }
	__asm { L_00ce4169: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00ce4182: }
	__asm { mov esi, dword ptr [edi + 0x20c] }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { test esi, esi }
	__asm { je L_00ce41bb }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00ce41ba }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00ce41ba }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00ce41ba: }
	__asm { pop ebx }
	__asm { L_00ce41bb: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006c4220 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0041fe80();
extern "C" void fn_00b0d5e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ce41e0
extern "C" __declspec(naked) void asm_00ce41e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6dcf8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { sub esp, 8 }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { test eax, eax }
	__asm { je L_00ce422c }
	__asm { add eax, 4 }
	__asm { mov ecx, 1 }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { L_00ce422c: }
	__asm { sub esp, 0xc }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00b0d5e0 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { add ecx, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { call eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00ce4287 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { mov dword ptr [ebp + 0x14], 0 }
	__asm { L_00ce4287: }
	__asm { mov esi, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ce42bb }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00ce42bb }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00ce42bb }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00ce42bb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_008f1ee0();
extern "C" void fn_00ce4d60();
// FUNCTION: ROBLOXSTUDIO 0x00ce4350
extern "C" __declspec(naked) void asm_00ce4350()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd508b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [ecx + 0x30] }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov edi, dword ptr [ecx + 0x2c] }
	__asm { lea ebx, [ecx + 0x2c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { cmp edi, esi }
	__asm { je L_00ce43ab }
	__asm { L_00ce4391: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_008f1ee0 }
	__asm { test al, al }
	__asm { jne L_00ce43a7 }
	__asm { add edi, 8 }
	__asm { cmp edi, esi }
	__asm { jne L_00ce4391 }
	__asm { L_00ce43a7: }
	__asm { cmp edi, esi }
	__asm { jne L_00ce43ba }
	__asm { L_00ce43ab: }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00ce4d60 }
	__asm { mov bl, 1 }
	__asm { jmp L_00ce43bc }
	__asm { L_00ce43ba: }
	__asm { xor bl, bl }
	__asm { L_00ce43bc: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ce43f0 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00ce43f0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [esi + 8] }
	__asm { lock xadd dword ptr [edx], edi }
	__asm { dec edi }
	__asm { jne L_00ce43f0 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_00ce43f0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012b1da8[];
extern "C" char g_012b1dac[];
extern "C" char g_012b1db0[];
extern "C" void fn_00421eb0();
extern "C" void fn_00891b10();
extern "C" void fn_00892440();
extern "C" void fn_00a08bf0();
extern "C" void fn_00c5e790();
extern "C" void fn_00ce3570();
extern "C" void fn_00ce4b90();
// FUNCTION: ROBLOXSTUDIO 0x00ce4410
extern "C" __declspec(naked) void asm_00ce4410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x44] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x44], 0 }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { mov dword ptr [ebp - 0x3c], 0 }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { mov dword ptr [ebp - 0x34], 0 }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call fn_00c5e790 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00ce4552 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00891b10 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 0xc }
	__asm { push 0 }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00ce3570 }
	__asm { test al, al }
	__asm { jne L_00ce451d }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00892440 }
	__asm { add eax, 0x24 }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { call fn_00a08bf0 }
	__asm { mov ecx, dword ptr [g_012b1db0] }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov edx, dword ptr [ebp - 0x1c] }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { sar esi, cl }
	__asm { mov ecx, dword ptr [g_012b1dac] }
	__asm { sar edx, cl }
	__asm { mov ecx, dword ptr [g_012b1da8] }
	__asm { sar eax, cl }
	__asm { add esp, 8 }
	__asm { lea ecx, [edi - 0x210] }
	__asm { mov dword ptr [ebp - 0x1c], edx }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { call fn_00ce4b90 }
	__asm { L_00ce451d: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ce4551 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00ce4551 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00ce4551 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00ce4551: }
	__asm { pop esi }
	__asm { L_00ce4552: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ce4590
extern "C" __declspec(naked) void asm_00ce4590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { cmp dword ptr [ebx + 4], 0 }
	__asm { jne L_00ce45e3 }
	__asm { push 0x28 }
	__asm { mov word ptr [ebx + 8], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { jne L_00ce45b9 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00ce45b9: }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, 0xa }
	__asm { lea esi, [ebp - 0x28] }
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
	__asm { L_00ce45e3: }
	__asm { cmp byte ptr [ebx + 9], 0 }
	__asm { je L_00ce45ed }
	__asm { mov byte ptr [ebx + 9], 0 }
	__asm { L_00ce45ed: }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01314e00[];
extern "C" void fn_00421eb0();
extern "C" void fn_007cd560();
extern "C" void fn_00b0e690();
extern "C" void fn_00c45220();
extern "C" void fn_00cab6d0();
extern "C" void fn_00ce3b30();
extern "C" void fn_00ce4350();
// FUNCTION: ROBLOXSTUDIO 0x00ce4730
extern "C" __declspec(naked) void asm_00ce4730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6dd20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { mov esi, ecx }
	__asm { push ebx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x278] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b0e690 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { or edi, 0xffffffff }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ce47ab }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00ce47ab }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00ce47ab }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00ce47ab: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { mov esi, eax }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_00ce4350 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ce481d }
	__asm { lea ecx, [esi + 4] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [ecx], edx }
	__asm { jne L_00ce481d }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00ce481a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00ce481a: }
	__asm { mov al, byte ptr [ebp + 0xb] }
	__asm { L_00ce481d: }
	__asm { test al, al }
	__asm { je L_00ce4871 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 0x28], 0xce4350 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { call fn_00ce3b30 }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { mov edi, dword ptr [edi + 0x208] }
	__asm { mov esi, dword ptr [edi + 0x28] }
	__asm { call fn_00c45220 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00ce4861 }
	__asm { mov ecx, edi }
	__asm { jmp L_00ce4863 }
	__asm { L_00ce4861: }
	__asm { xor ecx, ecx }
	__asm { L_00ce4863: }
	__asm { movzx eax, byte ptr [g_01314e00] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call fn_00cab6d0 }
	__asm { L_00ce4871: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007cd560();
extern "C" void fn_00c45220();
extern "C" void fn_00cc7530();
extern "C" void fn_00ce3920();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ce4c50
extern "C" __declspec(naked) void asm_00ce4c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd508b8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0x28 }
	__asm { mov esi, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { test edi, edi }
	__asm { je L_00ce4cc3 }
	__asm { mov ecx, dword ptr [ebx + 0x208] }
	__asm { fldz }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { mov dword ptr [edi + 0xc], 0 }
	__asm { mov dword ptr [edi + 0x10], ecx }
	__asm { fstp qword ptr [edi + 0x18] }
	__asm { mov dword ptr [edi], 0xf03f40 }
	__asm { mov dword ptr [edi + 0x20], esi }
	__asm { mov dword ptr [edi + 0x24], eax }
	__asm { jmp L_00ce4cc5 }
	__asm { L_00ce4cc3: }
	__asm { xor edi, edi }
	__asm { L_00ce4cc5: }
	__asm { mov ebx, dword ptr [ebx + 0x208] }
	__asm { mov esi, dword ptr [ebx + 0x28] }
	__asm { call fn_00c45220 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00ce4ce3 }
	__asm { mov ecx, ebx }
	__asm { jmp L_00ce4ce5 }
	__asm { L_00ce4ce3: }
	__asm { xor ecx, ecx }
	__asm { L_00ce4ce5: }
	__asm { push edi }
	__asm { add ecx, 0x2108 }
	__asm { call fn_00cc7530 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x24], 0xce4c50 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { call fn_00ce3920 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00ce4d45 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00ce4d45 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00ce4d45 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00ce4d45: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012afa4c[];
// FUNCTION: ROBLOXSTUDIO 0x00ce8180
extern "C" __declspec(naked) void asm_00ce8180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { cmp dword ptr [ebx + 8], 0 }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { jle L_00ce81fc }
	__asm { mov ebx, dword ptr [ebx] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebx] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebx + 8] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, ebx }
	__asm { add esp, 0x18 }
	__asm { mov ebx, dword ptr [ecx + 0xc] }
	__asm { cmp ebx, dword ptr [eax] }
	__asm { je L_00ce81ed }
	__asm { mov edi, edi }
	__asm { L_00ce81c0: }
	__asm { push esi }
	__asm { push edi }
	__asm { push ecx }
	__asm { call dword ptr [g_012afa4c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebx] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebx + 8] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, ebx }
	__asm { mov ebx, dword ptr [ebx + 0xc] }
	__asm { add esp, 0x24 }
	__asm { cmp ebx, dword ptr [eax] }
	__asm { jne L_00ce81c0 }
	__asm { L_00ce81ed: }
	__asm { push esi }
	__asm { push edi }
	__asm { push ecx }
	__asm { call dword ptr [g_012afa4c] }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { add esp, 0xc }
	__asm { L_00ce81fc: }
	__asm { cmp dword ptr [ebx + 0xc], 0 }
	__asm { jle L_00ce8274 }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { call dword ptr [g_012afa4c] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [eax + 8] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 0x18 }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, dword ptr [ebx + 4] }
	__asm { je L_00ce8268 }
	__asm { L_00ce8231: }
	__asm { push esi }
	__asm { push edi }
	__asm { push ecx }
	__asm { call dword ptr [g_012afa4c] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [eax] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [eax + 8] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { add esp, 0x24 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { cmp eax, dword ptr [ebx + 4] }
	__asm { jne L_00ce8231 }
	__asm { L_00ce8268: }
	__asm { push esi }
	__asm { push edi }
	__asm { push ecx }
	__asm { call dword ptr [g_012afa4c] }
	__asm { add esp, 0xc }
	__asm { L_00ce8274: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0xc], 0 }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00ce8180();
extern "C" void fn_00ceedf0();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00ce8410
extern "C" __declspec(naked) void asm_00ce8410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00cf40a0 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { xor ebx, ebx }
	__asm { L_00ce8425: }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov edx, dword ptr [esi + 0x34] }
	__asm { cmp ecx, edx }
	__asm { ja L_00ce8433 }
	__asm { sub edx, ecx }
	__asm { jmp L_00ce843a }
	__asm { L_00ce8433: }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { sub eax, ecx }
	__asm { add edx, eax }
	__asm { L_00ce843a: }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { cmp ebx, edx }
	__asm { jae L_00ce84ce }
	__asm { lea edx, [ecx + ebx] }
	__asm { cmp edx, eax }
	__asm { jb L_00ce8458 }
	__asm { sub ecx, eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { add ecx, ebx }
	__asm { lea eax, [eax + ecx*4] }
	__asm { jmp L_00ce845e }
	__asm { L_00ce8458: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { lea eax, [eax + edx*4] }
	__asm { L_00ce845e: }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp dword ptr [eax + 8], 0 }
	__asm { jbe L_00ce848b }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00ce848b }
	__asm { push 0xce69d0 }
	__asm { push dword ptr [eax - 4] }
	__asm { lea edi, [eax - 4] }
	__asm { push 8 }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { push edi }
	__asm { call fn_00cf6698 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { L_00ce848b: }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { lea edx, [ecx + ebx] }
	__asm { cmp edx, eax }
	__asm { jb L_00ce84b5 }
	__asm { sub ecx, eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { add ecx, ebx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [eax + ecx*4] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax] }
	__asm { call fn_00ceedf0 }
	__asm { inc ebx }
	__asm { jmp L_00ce8425 }
	__asm { L_00ce84b5: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [eax + edx*4] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [eax] }
	__asm { call fn_00ceedf0 }
	__asm { inc ebx }
	__asm { jmp L_00ce8425 }
	__asm { L_00ce84ce: }
	__asm { test eax, eax }
	__asm { je L_00ce84f7 }
	__asm { cmp eax, 0x20 }
	__asm { jbe L_00ce84e9 }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { L_00ce84e9: }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { L_00ce84f7: }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00cf40b0 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00cf40a0 }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00ce8180 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { call fn_00cf40b0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012fc981[];
extern "C" void fn_006b8a90();
extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00c688f0();
extern "C" void fn_00c68910();
extern "C" void fn_00ce7460();
extern "C" void fn_00ce8a80();
extern "C" void fn_00cee3a0();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00ce88a0
extern "C" __declspec(naked) void asm_00ce88a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x2c }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x30] }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { lea eax, [ebp + 8] }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push 0 }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00ce8a80 }
	__asm { test bl, bl }
	__asm { jne L_00ce8a69 }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { mov ecx, esi }
	__asm { call fn_00c687d0 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ax, word ptr [ebp + 0x10] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c688b0 }
	__asm { mov ebx, dword ptr [ebp - 4] }
	__asm { mov ecx, ebx }
	__asm { mov eax, dword ptr [ebx] }
	__asm { call dword ptr [eax + 0x6c] }
	__asm { cmp eax, 2 }
	__asm { jne L_00ce8a69 }
	__asm { mov al, byte ptr [g_012fc981] }
	__asm { test al, al }
	__asm { je L_00ce892b }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xf04638 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00ce892b: }
	__asm { push 0x5c6 }
	__asm { push 0xf045f0 }
	__asm { push 1 }
	__asm { mov ecx, ebx }
	__asm { call fn_00ce7460 }
	__asm { mov esi, eax }
	__asm { push 0x12b1ef8 }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov byte ptr [ecx], 0x16 }
	__asm { lea ecx, [ebp + 8] }
	__asm { call fn_00c688f0 }
	__asm { test al, al }
	__asm { je L_00ce8987 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [edx + 0xc8] }
	__asm { mov ecx, eax }
	__asm { jmp L_00ce898a }
	__asm { L_00ce8987: }
	__asm { lea ecx, [ebp + 8] }
	__asm { L_00ce898a: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { mov ax, word ptr [ecx + 8] }
	__asm { push 0x131581c }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { mov word ptr [esi + 0x20], ax }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { je L_00ce89da }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [edx + 0xcc] }
	__asm { jmp L_00ce89fb }
	__asm { L_00ce89da: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { L_00ce89fb: }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00c688b0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [edx + 0x74] }
	__asm { lea ecx, [ebx + 0x5a0] }
	__asm { mov word ptr [esi + 0x12], ax }
	__asm { mov word ptr [esi + 0x20], ax }
	__asm { mov byte ptr [esi + 0x35], 1 }
	__asm { mov dword ptr [ebp + 0x38], esi }
	__asm { call fn_00cf40a0 }
	__asm { push 0x1009 }
	__asm { push 0xf045f0 }
	__asm { lea eax, [ebp + 0x38] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x5b8] }
	__asm { call fn_00cee3a0 }
	__asm { lea ecx, [ebx + 0x5a0] }
	__asm { call fn_00cf40b0 }
	__asm { L_00ce8a69: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x34 }
}

extern "C" char g_012b1ef8[];
extern "C" char g_012b1efc[];
extern "C" char g_012b1f00[];
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00c688f0();
extern "C" void fn_00c68910();
extern "C" void fn_00c68960();
extern "C" void fn_00c689e0();
extern "C" void fn_00cc0350();
extern "C" void fn_00ce6f10();
extern "C" void fn_00ce7880();
extern "C" void fn_00cea1a0();
extern "C" void fn_00ceb770();
extern "C" void fn_00cee480();
extern "C" void fn_00ceefe0();
extern "C" void fn_00cf2130();
// FUNCTION: ROBLOXSTUDIO 0x00ce8a80
extern "C" __declspec(naked) void asm_00ce8a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x12b1ef8 }
	__asm { mov ecx, esi }
	__asm { call fn_00c688f0 }
	__asm { test al, al }
	__asm { je L_00ce8ab3 }
	__asm { push 0x131581c }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { jne L_00ce8c7d }
	__asm { L_00ce8ab3: }
	__asm { cmp dword ptr [edi + 0x22c], 0 }
	__asm { je L_00ce8c7d }
	__asm { cmp byte ptr [edi + 4], 1 }
	__asm { je L_00ce8c7d }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_00c68890 }
	__asm { lea ebx, [esi + 0x10] }
	__asm { push 0x131581c }
	__asm { mov ecx, ebx }
	__asm { call fn_00c68960 }
	__asm { test al, al }
	__asm { je L_00ce8ae8 }
	__asm { push ebx }
	__asm { jmp L_00ce8b12 }
	__asm { L_00ce8ae8: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [edi] }
	__asm { sub esp, 0x10 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 0xcc] }
	__asm { push eax }
	__asm { L_00ce8b12: }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_00c688b0 }
	__asm { push 0x131581c }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_00c68960 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { test al, al }
	__asm { je L_00ce8b46 }
	__asm { test bl, bl }
	__asm { je L_00ce8b46 }
	__asm { mov eax, dword ptr [edi + 0x42c] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { add eax, 8 }
	__asm { push eax }
	__asm { call fn_00c689e0 }
	__asm { L_00ce8b46: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00ce8b85 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, edi }
	__asm { call fn_00ceb770 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00ce8b85: }
	__asm { test bl, bl }
	__asm { je L_00ce8c34 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00cea1a0 }
	__asm { mov esi, eax }
	__asm { cmp esi, -1 }
	__asm { je L_00ce8c7d }
	__asm { mov ecx, dword ptr [edi + 0x22c] }
	__asm { imul esi, esi, 0x1208 }
	__asm { cmp byte ptr [esi + ecx], 0 }
	__asm { je L_00ce8c7d }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00ceefe0 }
	__asm { mov eax, dword ptr [edi + 0x22c] }
	__asm { push 0 }
	__asm { mov byte ptr [esi + eax], 0 }
	__asm { mov ecx, dword ptr [edi + 0x22c] }
	__asm { mov eax, dword ptr [g_012b1ef8] }
	__asm { mov dword ptr [ecx + esi + 0x11e0], eax }
	__asm { mov eax, dword ptr [g_012b1efc] }
	__asm { mov dword ptr [ecx + esi + 0x11e4], eax }
	__asm { mov ax, word ptr [g_012b1f00] }
	__asm { mov word ptr [ecx + esi + 0x11e8], ax }
	__asm { mov eax, dword ptr [edi + 0x22c] }
	__asm { push dword ptr [esi + eax + 0x11f0] }
	__asm { lea ecx, [eax + 0xf8] }
	__asm { push 0 }
	__asm { add ecx, esi }
	__asm { call fn_00cc0350 }
	__asm { mov ecx, dword ptr [edi + 0x22c] }
	__asm { add ecx, 0x11f4 }
	__asm { add ecx, esi }
	__asm { call fn_00cf2130 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00ce8c34: }
	__asm { push 0xef0 }
	__asm { push 0xf045f0 }
	__asm { lea ecx, [edi + 0x310] }
	__asm { call fn_00ce7880 }
	__asm { mov esi, eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov dword ptr [esi + 0x6c], 1 }
	__asm { call fn_00ce6f10 }
	__asm { mov dl, byte ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x310] }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { mov byte ptr [esi + 0xc], dl }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { call fn_00cee480 }
	__asm { L_00ce8c7d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00c68910();
extern "C" void fn_00c68960();
// FUNCTION: ROBLOXSTUDIO 0x00ce9500
extern "C" __declspec(naked) void asm_00ce9500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_00c68890 }
	__asm { push 0x131581c }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_00c688b0 }
	__asm { push 0x131581c }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { je L_00ce9565 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x470] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [esi + 0x474] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [esi + 0x478] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [esi + 0x47c] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [esi + 0x480] }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_00ce9565: }
	__asm { push ebx }
	__asm { xor eax, eax }
	__asm { xor ebx, ebx }
	__asm { push edi }
	__asm { cmp ax, word ptr [esi + 0xe] }
	__asm { jae L_00ce95cd }
	__asm { xor edi, edi }
	__asm { L_00ce9573: }
	__asm { mov ecx, dword ptr [esi + 0x22c] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { add ecx, 4 }
	__asm { push eax }
	__asm { add ecx, edi }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { je L_00ce95be }
	__asm { mov eax, dword ptr [esi + 0x22c] }
	__asm { cmp byte ptr [eax + edi], 0 }
	__asm { jne L_00ce95f6 }
	__asm { lea ecx, [eax + 0x18] }
	__asm { push 0x131581c }
	__asm { add ecx, edi }
	__asm { call fn_00c68960 }
	__asm { test al, al }
	__asm { je L_00ce95be }
	__asm { mov eax, dword ptr [esi + 0x22c] }
	__asm { add eax, 0x18 }
	__asm { add eax, edi }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_00c688b0 }
	__asm { L_00ce95be: }
	__asm { movzx eax, word ptr [esi + 0xe] }
	__asm { inc ebx }
	__asm { add edi, 0x1208 }
	__asm { cmp ebx, eax }
	__asm { jb L_00ce9573 }
	__asm { L_00ce95cd: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { pop ebx }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_00ce95f6: }
	__asm { imul ebx, ebx, 0x1208 }
	__asm { mov ecx, dword ptr [ebx + eax + 0x18] }
	__asm { lea edx, [ebx + eax] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 0x1c] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 0x20] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx + 0x24] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [edx + 0x28] }
	__asm { pop ebx }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_012b1ef8[];
extern "C" char g_012b1efc[];
extern "C" char g_012b1f00[];
extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00ccfe40();
extern "C" void fn_00ce6e00();
extern "C" void fn_00ce7540();
extern "C" void fn_00cee3a0();
extern "C" void fn_00ceedf0();
extern "C" void fn_00cf4080();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00cea210
extern "C" __declspec(naked) void asm_00cea210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e2b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x324] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf40a0 }
	__asm { push 0xa14 }
	__asm { push 0xf045f0 }
	__asm { lea ecx, [esi + 0x310] }
	__asm { call fn_00ce7540 }
	__asm { mov ebx, eax }
	__asm { lea ecx, [esi + 0x324] }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call fn_00cf40b0 }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test ebx, ebx }
	__asm { je L_00cea287 }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { call fn_00c687d0 }
	__asm { lea ecx, [ebx + 0x20] }
	__asm { call fn_00c68890 }
	__asm { jmp L_00cea289 }
	__asm { L_00cea287: }
	__asm { xor ebx, ebx }
	__asm { L_00cea289: }
	__asm { mov dword ptr [ebx + 0x6c], 2 }
	__asm { mov eax, dword ptr [g_012b1ef8] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [g_012b1efc] }
	__asm { mov dword ptr [ebx + 0x14], eax }
	__asm { mov ax, word ptr [g_012b1f00] }
	__asm { mov word ptr [ebx + 0x18], ax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x20] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00c688b0 }
	__asm { lea ecx, [esi + 0x34c] }
	__asm { mov dword ptr [ebx + 0x4c], 0 }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { call fn_00cf40a0 }
	__asm { push 0x30 }
	__asm { push 0xf04780 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x33c] }
	__asm { call fn_00cee3a0 }
	__asm { lea ecx, [esi + 0x34c] }
	__asm { call fn_00cf40b0 }
	__asm { call fn_00ccfe40 }
	__asm { xor edi, edi }
	__asm { lea ebx, [eax + 0x3e8] }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x24], edi }
	__asm { mov dword ptr [ebp - 0x20], edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00ccfe40 }
	__asm { cmp eax, ebx }
	__asm { jae L_00cea3b3 }
	__asm { L_00cea321: }
	__asm { cmp byte ptr [esi + 5], 0 }
	__asm { je L_00cea500 }
	__asm { push 0 }
	__asm { call fn_00cf4080 }
	__asm { add esp, 4 }
	__asm { lea ecx, [esi + 0x3f4] }
	__asm { call fn_00cf40a0 }
	__asm { mov ecx, dword ptr [esi + 0x3e8] }
	__asm { cmp ecx, dword ptr [esi + 0x3ec] }
	__asm { jne L_00cea35b }
	__asm { lea ecx, [esi + 0x3f4] }
	__asm { call fn_00cf40b0 }
	__asm { jmp L_00cea3a3 }
	__asm { L_00cea35b: }
	__asm { inc ecx }
	__asm { mov dword ptr [esi + 0x3e8], ecx }
	__asm { xor edx, edx }
	__asm { cmp ecx, dword ptr [esi + 0x3f0] }
	__asm { mov eax, ecx }
	__asm { cmove eax, edx }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [esi + 0x3e8], eax }
	__asm { mov eax, dword ptr [esi + 0x3e4] }
	__asm { test ebx, ebx }
	__asm { jne L_00cea38d }
	__asm { mov ecx, dword ptr [esi + 0x3f0] }
	__asm { mov ebx, dword ptr [eax + ecx*4 - 4] }
	__asm { jmp L_00cea391 }
	__asm { L_00cea38d: }
	__asm { mov ebx, dword ptr [eax + ebx*4 - 4] }
	__asm { L_00cea391: }
	__asm { lea ecx, [esi + 0x3f4] }
	__asm { call fn_00cf40b0 }
	__asm { test ebx, ebx }
	__asm { jne L_00cea409 }
	__asm { mov ebx, dword ptr [ebp - 0x18] }
	__asm { L_00cea3a3: }
	__asm { call fn_00ccfe40 }
	__asm { cmp eax, ebx }
	__asm { jb L_00cea321 }
	__asm { L_00cea3b0: }
	__asm { mov edi, dword ptr [ebp - 0x24] }
	__asm { L_00cea3b3: }
	__asm { cmp dword ptr [ebp - 0x1c], 0 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jbe L_00cea3f4 }
	__asm { test edi, edi }
	__asm { je L_00cea3f4 }
	__asm { push 0xce69d0 }
	__asm { push dword ptr [edi - 4] }
	__asm { lea esi, [edi - 4] }
	__asm { push 8 }
	__asm { push edi }
	__asm { call fn_00cf669e }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00cea3f4: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_00cea409: }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call fn_00ce6e00 }
	__asm { cmp dword ptr [ebx + 8], 0 }
	__asm { je L_00cea44e }
	__asm { mov eax, dword ptr [ebx] }
	__asm { test eax, eax }
	__asm { je L_00cea43a }
	__asm { push 0xce69d0 }
	__asm { push dword ptr [eax - 4] }
	__asm { lea edi, [eax - 4] }
	__asm { push 8 }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { push edi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00cea43a: }
	__asm { mov dword ptr [ebx + 8], 0 }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [ebx + 4], 0 }
	__asm { L_00cea44e: }
	__asm { cmp dword ptr [ebx + 8], 0 }
	__asm { lea edi, [esi + 0x3b8] }
	__asm { jbe L_00cea47c }
	__asm { mov eax, dword ptr [ebx] }
	__asm { test eax, eax }
	__asm { je L_00cea47c }
	__asm { push 0xce69d0 }
	__asm { push dword ptr [eax - 4] }
	__asm { lea esi, [eax - 4] }
	__asm { push 8 }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00cea47c: }
	__asm { lea ecx, [edi + 0x14] }
	__asm { call fn_00cf40a0 }
	__asm { push 0xa2a }
	__asm { push 0xf045f0 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_00ceedf0 }
	__asm { lea ecx, [edi + 0x14] }
	__asm { call fn_00cf40b0 }
	__asm { cmp dword ptr [ebp - 0x20], 0 }
	__asm { je L_00cea3b0 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00cea4be }
	__asm { inc dword ptr [eax] }
	__asm { L_00cea4be: }
	__asm { cmp dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jbe L_00cea4eb }
	__asm { push 0xce69d0 }
	__asm { push dword ptr [ecx - 4] }
	__asm { lea esi, [ecx - 4] }
	__asm { push 8 }
	__asm { push ecx }
	__asm { call fn_00cf669e }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00cea4eb: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_00cea500: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" void fn_00c68910();
extern "C" void fn_00cbd3b0();
extern "C" void fn_00ce6f50();
extern "C" void fn_00cea0a0();
// FUNCTION: ROBLOXSTUDIO 0x00cea7b0
extern "C" __declspec(naked) void asm_00cea7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xe8 }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { test eax, eax }
	__asm { mov esi, ecx }
	__asm { mov edi, 0x1316280 }
	__asm { cmovne edi, eax }
	__asm { push 0x131581c }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { mov dword ptr [ebp - 8], edi }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { je L_00cea858 }
	__asm { xor eax, eax }
	__asm { xor ebx, ebx }
	__asm { mov byte ptr [ebp + 0x1f], 0 }
	__asm { cmp ax, word ptr [esi + 0xe] }
	__asm { jae L_00cea84d }
	__asm { L_00cea7f0: }
	__asm { mov eax, dword ptr [esi + 0x22c] }
	__asm { movzx ecx, bx }
	__asm { imul ecx, ecx, 0x1208 }
	__asm { cmp byte ptr [ecx + eax], 0 }
	__asm { je L_00cea846 }
	__asm { lea edx, [ebp - 0xe8] }
	__asm { add ecx, 0xf8 }
	__asm { push edx }
	__asm { add ecx, eax }
	__asm { call fn_00cbd3b0 }
	__asm { cmp byte ptr [ebp + 0x1f], 0 }
	__asm { jne L_00cea838 }
	__asm { mov ecx, 0x38 }
	__asm { lea esi, [ebp - 0xe8] }
	__asm { rep movsd }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov byte ptr [ebp + 0x1f], 1 }
	__asm { jmp L_00cea846 }
	__asm { L_00cea838: }
	__asm { lea eax, [ebp - 0xe8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00ce6f50 }
	__asm { L_00cea846: }
	__asm { inc ebx }
	__asm { cmp bx, word ptr [esi + 0xe] }
	__asm { jb L_00cea7f0 }
	__asm { L_00cea84d: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_00cea858: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, esi }
	__asm { call fn_00cea0a0 }
	__asm { test eax, eax }
	__asm { je L_00cea8a6 }
	__asm { cmp byte ptr [esi + 4], 0 }
	__asm { jne L_00cea8a6 }
	__asm { push edi }
	__asm { lea ecx, [eax + 0xf8] }
	__asm { call fn_00cbd3b0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
	__asm { L_00cea8a6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_0131581c[];
extern "C" char g_01315820[];
extern "C" char g_01315824[];
extern "C" char g_01315828[];
extern "C" char g_0131582c[];
extern "C" void fn_00c688f0();
// FUNCTION: ROBLOXSTUDIO 0x00cea900
extern "C" __declspec(naked) void asm_00cea900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x12b1ef8 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00c688f0 }
	__asm { test al, al }
	__asm { jne L_00ceaa1a }
	__asm { lea eax, [edi + 0x458] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { call fn_00c688f0 }
	__asm { test al, al }
	__asm { je L_00cea975 }
	__asm { mov eax, dword ptr [g_0131581c] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [edi] }
	__asm { push 0 }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { push esi }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [g_01315820] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [g_01315824] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [g_01315828] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [g_0131582c] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [edx + 0xb8] }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00cea975: }
	__asm { mov ax, word ptr [ebp + 0x14] }
	__asm { mov ecx, 0xffff }
	__asm { cmp ax, cx }
	__asm { je L_00cea9e3 }
	__asm { cmp ax, word ptr [edi + 0xe] }
	__asm { jae L_00cea9e3 }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { push ecx }
	__asm { movzx ecx, ax }
	__asm { mov eax, dword ptr [edi + 0x22c] }
	__asm { imul ecx, ecx, 0x1208 }
	__asm { add eax, 0x11e0 }
	__asm { add ecx, eax }
	__asm { call fn_00c688f0 }
	__asm { test al, al }
	__asm { je L_00cea9e3 }
	__asm { movzx edx, word ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { imul edx, edx, 0x1208 }
	__asm { add edx, dword ptr [edi + 0x22c] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00cea9e3: }
	__asm { xor eax, eax }
	__asm { xor esi, esi }
	__asm { cmp ax, word ptr [edi + 0xe] }
	__asm { jae L_00ceaa1a }
	__asm { xor ebx, ebx }
	__asm { nop }
	__asm { L_00cea9f0: }
	__asm { mov ecx, dword ptr [edi + 0x22c] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { add ecx, 0x11e0 }
	__asm { push eax }
	__asm { add ecx, ebx }
	__asm { call fn_00c688f0 }
	__asm { test al, al }
	__asm { jne L_00ceaa50 }
	__asm { movzx eax, word ptr [edi + 0xe] }
	__asm { inc esi }
	__asm { add ebx, 0x1208 }
	__asm { cmp esi, eax }
	__asm { jb L_00cea9f0 }
	__asm { L_00ceaa1a: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_0131581c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [g_01315820] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [g_01315824] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [g_01315828] }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [g_0131582c] }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00ceaa50: }
	__asm { mov edx, dword ptr [edi + 0x22c] }
	__asm { imul esi, esi, 0x1208 }
	__asm { mov ecx, dword ptr [edx + esi + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add edx, esi }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx + 0x10] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov ecx, dword ptr [edx + 0x14] }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 0x10], ecx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00ce6180();
extern "C" void fn_00cf4e70();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf669e();
// FUNCTION: ROBLOXSTUDIO 0x00ceb1b0
extern "C" __declspec(naked) void asm_00ceb1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { cmp dword ptr [edi + 4], eax }
	__asm { jne L_00ceb29b }
	__asm { test eax, eax }
	__asm { jne L_00ceb1d4 }
	__asm { mov dword ptr [edi + 8], 0x10 }
	__asm { jmp L_00ceb1d9 }
	__asm { L_00ceb1d4: }
	__asm { add eax, eax }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { L_00ceb1d9: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [edi + 8] }
	__asm { call fn_00ce6180 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [edi], 0 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { je L_00ceb296 }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp + 0x10], ebx }
	__asm { cmp dword ptr [edi + 4], ebx }
	__asm { jbe L_00ceb274 }
	__asm { mov eax, 0xfffffffc }
	__asm { sub eax, ecx }
	__asm { lea esi, [ecx + 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { nop }
	__asm { L_00ceb210: }
	__asm { lea ecx, [eax + esi] }
	__asm { add ecx, dword ptr [edi] }
	__asm { lea eax, [esi - 4] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { cmp eax, ecx }
	__asm { je L_00ceb265 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00ceb252 }
	__asm { dec dword ptr [eax] }
	__asm { jne L_00ceb252 }
	__asm { mov ebx, dword ptr [esi - 4] }
	__asm { test ebx, ebx }
	__asm { je L_00ceb240 }
	__asm { mov ecx, ebx }
	__asm { call fn_00cf4e70 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ceb240: }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00ceb24f }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ceb24f: }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { L_00ceb252: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi - 4], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { test eax, eax }
	__asm { je L_00ceb265 }
	__asm { inc dword ptr [eax] }
	__asm { L_00ceb265: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { inc ebx }
	__asm { add esi, 8 }
	__asm { mov dword ptr [ebp + 0x10], ebx }
	__asm { cmp ebx, dword ptr [edi + 4] }
	__asm { jb L_00ceb210 }
	__asm { L_00ceb274: }
	__asm { mov eax, dword ptr [edi] }
	__asm { test eax, eax }
	__asm { je L_00ceb296 }
	__asm { push 0xce69d0 }
	__asm { push dword ptr [eax - 4] }
	__asm { lea esi, [eax - 4] }
	__asm { push 8 }
	__asm { push eax }
	__asm { call fn_00cf669e }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00ceb296: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [edi], eax }
	__asm { L_00ceb29b: }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea esi, [eax + ecx*8] }
	__asm { cmp esi, dword ptr [ebp + 8] }
	__asm { je L_00ceb2ec }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00ceb2d9 }
	__asm { dec dword ptr [eax] }
	__asm { jne L_00ceb2d9 }
	__asm { mov ebx, dword ptr [esi] }
	__asm { test ebx, ebx }
	__asm { je L_00ceb2c9 }
	__asm { mov ecx, ebx }
	__asm { call fn_00cf4e70 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ceb2c9: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { test eax, eax }
	__asm { je L_00ceb2d9 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ceb2d9: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { test eax, eax }
	__asm { je L_00ceb2ec }
	__asm { inc dword ptr [eax] }
	__asm { L_00ceb2ec: }
	__asm { inc dword ptr [edi + 4] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012afa4c[];
extern "C" void fn_00ccfe40();
extern "C" void fn_00ceef30();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ceb3b0
extern "C" __declspec(naked) void asm_00ceb3b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { test esi, esi }
	__asm { je L_00ceb4d6 }
	__asm { cmp byte ptr [esi], 0 }
	__asm { je L_00ceb4d6 }
	__asm { mov edx, esi }
	__asm { lea ecx, [edx + 1] }
	__asm { L_00ceb3d6: }
	__asm { mov al, byte ptr [edx] }
	__asm { inc edx }
	__asm { test al, al }
	__asm { jne L_00ceb3d6 }
	__asm { sub edx, ecx }
	__asm { cmp edx, 0xf }
	__asm { ja L_00ceb4d6 }
	__asm { push ebx }
	__asm { xor ebx, ebx }
	__asm { cmp dword ptr [edi + 0x2c8], ebx }
	__asm { je L_00ceb4b8 }
	__asm { call fn_00ccfe40 }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [edi + 0x2ac] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_00cf40a0 }
	__asm { mov edx, edi }
	__asm { cmp dword ptr [edx + 0x2c8], ebx }
	__asm { jbe L_00ceb4b0 }
	__asm { L_00ceb41d: }
	__asm { mov ecx, dword ptr [edx + 0x2c4] }
	__asm { lea eax, [edx + 0x2c4] }
	__asm { mov edi, dword ptr [ecx + ebx*4] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { test eax, eax }
	__asm { je L_00ceb475 }
	__asm { cmp eax, dword ptr [ebp - 8] }
	__asm { jae L_00ceb475 }
	__asm { mov eax, dword ptr [edx + 0x2c8] }
	__asm { mov eax, dword ptr [ecx + eax*4 - 4] }
	__asm { mov dword ptr [ecx + ebx*4], eax }
	__asm { mov eax, dword ptr [edx + 0x2c8] }
	__asm { dec eax }
	__asm { push eax }
	__asm { lea ecx, [edx + 0x2c4] }
	__asm { call fn_00ceef30 }
	__asm { push 0x714 }
	__asm { push 0xf045f0 }
	__asm { push dword ptr [edi] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00ceb4a1 }
	__asm { L_00ceb475: }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov cl, byte ptr [esi] }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [edx], cl }
	__asm { jne L_00ceb48e }
	__asm { nop }
	__asm { L_00ceb480: }
	__asm { test cl, cl }
	__asm { je L_00ceb4c3 }
	__asm { mov cl, byte ptr [eax + esi + 1] }
	__asm { inc eax }
	__asm { cmp byte ptr [edx + eax], cl }
	__asm { je L_00ceb480 }
	__asm { L_00ceb48e: }
	__asm { mov cl, byte ptr [edx + eax] }
	__asm { test cl, cl }
	__asm { je L_00ceb4a0 }
	__asm { cmp byte ptr [eax + esi], 0 }
	__asm { je L_00ceb4a0 }
	__asm { cmp cl, 0x2a }
	__asm { je L_00ceb4c3 }
	__asm { L_00ceb4a0: }
	__asm { inc ebx }
	__asm { L_00ceb4a1: }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { cmp ebx, dword ptr [edx + 0x2c8] }
	__asm { jb L_00ceb41d }
	__asm { L_00ceb4b0: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00cf40b0 }
	__asm { L_00ceb4b8: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ceb4c3: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00cf40b0 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00ceb4d6: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012b1ef8[];
extern "C" char g_012b1efc[];
extern "C" char g_012b1f00[];
extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00c68910();
extern "C" void fn_00c6c1f0();
extern "C" void fn_00c6c320();
extern "C" void fn_00c6cf00();
extern "C" void fn_00ccfe60();
extern "C" void fn_00cea1a0();
extern "C" void fn_00cf1250();
extern "C" void fn_00cf1ac0();
// FUNCTION: ROBLOXSTUDIO 0x00ceb770
extern "C" __declspec(naked) void asm_00ceb770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e2fb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x12c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x138] }
	__asm { call fn_00c6c1f0 }
	__asm { push 1 }
	__asm { push 8 }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x138] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0xd], 0x15 }
	__asm { call fn_00c6cf00 }
	__asm { cmp byte ptr [ebp + 0x1c], 0 }
	__asm { push 0 }
	__asm { je L_00ceb887 }
	__asm { call fn_00ccfe60 }
	__asm { push edx }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { mov ecx, esi }
	__asm { call fn_00c687d0 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [g_012b1ef8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_012b1efc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ax, word ptr [g_012b1f00] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c688b0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov ecx, ebx }
	__asm { push 3 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp - 0x138] }
	__asm { push dword ptr [ebp - 0x12c] }
	__asm { call fn_00cf1ac0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push 0x131581c }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { jne L_00ceb879 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00cea1a0 }
	__asm { cmp eax, -1 }
	__asm { je L_00ceb879 }
	__asm { imul eax, eax, 0x1208 }
	__asm { add eax, dword ptr [ebx + 0x22c] }
	__asm { cmp byte ptr [eax], 1 }
	__asm { je L_00ceb87b }
	__asm { L_00ceb879: }
	__asm { xor eax, eax }
	__asm { L_00ceb87b: }
	__asm { mov dword ptr [eax + 0x1200], 1 }
	__asm { jmp L_00ceb8df }
	__asm { L_00ceb887: }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { mov ecx, esi }
	__asm { call fn_00c687d0 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [g_012b1ef8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_012b1efc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ax, word ptr [g_012b1f00] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c688b0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov ecx, ebx }
	__asm { push 3 }
	__asm { push dword ptr [ebp + 0x24] }
	__asm { push dword ptr [ebp - 0x138] }
	__asm { push dword ptr [ebp - 0x12c] }
	__asm { call fn_00cf1250 }
	__asm { L_00ceb8df: }
	__asm { lea ecx, [ebp - 0x138] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c6c320 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_012b1ef8[];
extern "C" char g_012b1efc[];
extern "C" char g_012b1f00[];
extern "C" char g_01313910[];
extern "C" char g_01313914[];
extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00c68a80();
extern "C" void fn_00c68aa0();
extern "C" void fn_00c6c2f0();
extern "C" void fn_00c6c320();
extern "C" void fn_00c6c4d0();
extern "C" void fn_00c6ca80();
extern "C" void fn_00c6cf00();
extern "C" void fn_00ccfe40();
extern "C" void fn_00ccfe60();
extern "C" void fn_00ce6360();
extern "C" void fn_00ce98d0();
extern "C" void fn_00cf1ac0();
// FUNCTION: ROBLOXSTUDIO 0x00ceba90
extern "C" __declspec(naked) void asm_00ceba90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e365 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x144 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x150] }
	__asm { mov dword ptr [ebp - 0x20], esi }
	__asm { call fn_00c6c2f0 }
	__asm { push 1 }
	__asm { push 8 }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x150] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0xd], 0x10 }
	__asm { call fn_00c6cf00 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { add ebx, 4 }
	__asm { push ebx }
	__asm { lea ecx, [ebp - 0x150] }
	__asm { call fn_00ce6360 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 1 }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, esi }
	__asm { call fn_00ce98d0 }
	__asm { movzx eax, ax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [g_01313914] }
	__asm { test al, 1 }
	__asm { jne L_00cebb46 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313914], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00c6c4d0 }
	__asm { mov byte ptr [g_01313910], al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00cebb4b }
	__asm { L_00cebb46: }
	__asm { mov al, byte ptr [g_01313910] }
	__asm { L_00cebb4b: }
	__asm { test al, al }
	__asm { jne L_00cebb66 }
	__asm { push 2 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00c6ca80 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp + 8] }
	__asm { jmp L_00cebb69 }
	__asm { L_00cebb66: }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { L_00cebb69: }
	__asm { push 1 }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x150] }
	__asm { call fn_00c6cf00 }
	__asm { add esi, 0x498 }
	__asm { mov edi, 0xa }
	__asm { L_00cebb84: }
	__asm { mov ecx, esi }
	__asm { call fn_00c68a80 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp + 0xb], al }
	__asm { push 8 }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x150] }
	__asm { call fn_00c6cf00 }
	__asm { mov ecx, esi }
	__asm { call fn_00c68a80 }
	__asm { cmp al, 4 }
	__asm { jne L_00cebc05 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 0x3c], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { not eax }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { push 0x20 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x150] }
	__asm { call fn_00c6cf00 }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_00c68aa0 }
	__asm { movzx eax, ax }
	__asm { push 1 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { push 0x10 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x150] }
	__asm { call fn_00c6cf00 }
	__asm { L_00cebc05: }
	__asm { add esi, 0x14 }
	__asm { dec edi }
	__asm { jne L_00cebb84 }
	__asm { mov eax, dword ptr [g_01313914] }
	__asm { test al, 1 }
	__asm { jne L_00cebc34 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313914], eax }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00c6c4d0 }
	__asm { mov byte ptr [g_01313910], al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00cebc39 }
	__asm { L_00cebc34: }
	__asm { mov al, byte ptr [g_01313910] }
	__asm { L_00cebc39: }
	__asm { test al, al }
	__asm { jne L_00cebc54 }
	__asm { push 8 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00c6ca80 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x18] }
	__asm { jmp L_00cebc57 }
	__asm { L_00cebc54: }
	__asm { lea eax, [ebp + 0xc] }
	__asm { L_00cebc57: }
	__asm { push 1 }
	__asm { push 0x40 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x150] }
	__asm { call fn_00c6cf00 }
	__asm { call fn_00ccfe40 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [g_01313914] }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { test al, 1 }
	__asm { jne L_00cebc97 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01313914], eax }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call fn_00c6c4d0 }
	__asm { mov byte ptr [g_01313910], al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_00cebc9c }
	__asm { L_00cebc97: }
	__asm { mov al, byte ptr [g_01313910] }
	__asm { L_00cebc9c: }
	__asm { test al, al }
	__asm { jne L_00cebcb7 }
	__asm { push 8 }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00c6ca80 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x28] }
	__asm { jmp L_00cebcba }
	__asm { L_00cebcb7: }
	__asm { lea eax, [ebp - 0x18] }
	__asm { L_00cebcba: }
	__asm { push 1 }
	__asm { push 0x40 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x150] }
	__asm { call fn_00c6cf00 }
	__asm { push 0 }
	__asm { call fn_00ccfe60 }
	__asm { push edx }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov edi, esp }
	__asm { mov ecx, edi }
	__asm { call fn_00c687d0 }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [g_012b1ef8] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [g_012b1efc] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov ax, word ptr [g_012b1f00] }
	__asm { push ebx }
	__asm { lea ecx, [edi + 0x10] }
	__asm { mov word ptr [edi + 8], ax }
	__asm { call fn_00c688b0 }
	__asm { mov ecx, dword ptr [ebp - 0x20] }
	__asm { push 0 }
	__asm { push 3 }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 0x150] }
	__asm { push dword ptr [ebp - 0x144] }
	__asm { call fn_00cf1ac0 }
	__asm { lea ecx, [ebp - 0x150] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c6c320 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012b1ef8[];
extern "C" char g_012b1efc[];
extern "C" char g_012b1f00[];
extern "C" char g_01313910[];
extern "C" char g_01313914[];
extern "C" char g_0131581c[];
extern "C" char g_01315820[];
extern "C" char g_01315824[];
extern "C" char g_01315828[];
extern "C" char g_0131582c[];
extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00c6c260();
extern "C" void fn_00c6c2f0();
extern "C" void fn_00c6c320();
extern "C" void fn_00c6c4c0();
extern "C" void fn_00c6c4d0();
extern "C" void fn_00c6c7a0();
extern "C" void fn_00c6ca80();
extern "C" void fn_00c6cf00();
extern "C" void fn_00c6e2e0();
extern "C" void fn_00ccfe60();
extern "C" void fn_00ceba90();
extern "C" void fn_00cf1ac0();
// FUNCTION: ROBLOXSTUDIO 0x00cebd50
extern "C" __declspec(naked) void asm_00cebd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e394 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x248 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push 0 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ebx, ecx }
	__asm { lea ecx, [ebp - 0x140] }
	__asm { call fn_00c6c260 }
	__asm { push 1 }
	__asm { lea ecx, [ebp - 0x140] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c6c4c0 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_00c687d0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x140] }
	__asm { call fn_00c6e2e0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x140] }
	__asm { call fn_00c6e2e0 }
	__asm { push 1 }
	__asm { push 8 }
	__asm { lea eax, [ebp + 0x13] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x140] }
	__asm { call fn_00c6c7a0 }
	__asm { mov ecx, dword ptr [ebp - 0x138] }
	__asm { movzx edi, byte ptr [ebx + 0x228] }
	__asm { mov edx, dword ptr [ebp - 0x134] }
	__asm { lea ecx, [ecx + 7] }
	__asm { shr ecx, 3 }
	__asm { sub esi, ecx }
	__asm { add edx, ecx }
	__asm { cmp edi, esi }
	__asm { jne L_00cebe63 }
	__asm { lea ecx, [ebx + 0x128] }
	__asm { sub edi, 4 }
	__asm { jb L_00cebe11 }
	__asm { L_00cebe00: }
	__asm { mov eax, dword ptr [edx] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_00cebe16 }
	__asm { add edx, 4 }
	__asm { add ecx, 4 }
	__asm { sub edi, 4 }
	__asm { jae L_00cebe00 }
	__asm { L_00cebe11: }
	__asm { cmp edi, -4 }
	__asm { je L_00cebe43 }
	__asm { L_00cebe16: }
	__asm { mov al, byte ptr [edx] }
	__asm { cmp al, byte ptr [ecx] }
	__asm { jne L_00cebe63 }
	__asm { cmp edi, -3 }
	__asm { je L_00cebe43 }
	__asm { mov al, byte ptr [edx + 1] }
	__asm { cmp al, byte ptr [ecx + 1] }
	__asm { jne L_00cebe63 }
	__asm { cmp edi, -2 }
	__asm { je L_00cebe43 }
	__asm { mov al, byte ptr [edx + 2] }
	__asm { cmp al, byte ptr [ecx + 2] }
	__asm { jne L_00cebe63 }
	__asm { cmp edi, -1 }
	__asm { je L_00cebe43 }
	__asm { mov al, byte ptr [edx + 3] }
	__asm { cmp al, byte ptr [ecx + 3] }
	__asm { jne L_00cebe63 }
	__asm { L_00cebe43: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, ebx }
	__asm { push eax }
	__asm { mov dword ptr [eax + 0x1200], 5 }
	__asm { call fn_00ceba90 }
	__asm { jmp L_00cebf9c }
	__asm { L_00cebe63: }
	__asm { lea ecx, [ebp - 0x254] }
	__asm { call fn_00c6c2f0 }
	__asm { push 1 }
	__asm { push 8 }
	__asm { lea eax, [ebp + 0x17] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x254] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov byte ptr [ebp + 0x17], 0x18 }
	__asm { call fn_00c6cf00 }
	__asm { mov eax, dword ptr [g_0131581c] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [g_01315820] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [g_01315824] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [g_01315828] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [g_0131582c] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [edx + 0xc8] }
	__asm { mov ecx, dword ptr [g_01313914] }
	__asm { mov esi, eax }
	__asm { test cl, 1 }
	__asm { jne L_00cebee9 }
	__asm { or ecx, 1 }
	__asm { mov dword ptr [g_01313914], ecx }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call fn_00c6c4d0 }
	__asm { mov byte ptr [g_01313910], al }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { jmp L_00cebeee }
	__asm { L_00cebee9: }
	__asm { mov al, byte ptr [g_01313910] }
	__asm { L_00cebeee: }
	__asm { test al, al }
	__asm { jne L_00cebf0b }
	__asm { push 8 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00c6ca80 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 1 }
	__asm { push 0x40 }
	__asm { push eax }
	__asm { jmp L_00cebf10 }
	__asm { L_00cebf0b: }
	__asm { push 1 }
	__asm { push 0x40 }
	__asm { push esi }
	__asm { L_00cebf10: }
	__asm { lea ecx, [ebp - 0x254] }
	__asm { call fn_00c6cf00 }
	__asm { push 0 }
	__asm { call fn_00ccfe60 }
	__asm { push edx }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { mov ecx, esi }
	__asm { call fn_00c687d0 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [g_012b1ef8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_012b1efc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ax, word ptr [g_012b1f00] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { call fn_00c688b0 }
	__asm { mov eax, dword ptr [ebp - 0x254] }
	__asm { push 0 }
	__asm { push 2 }
	__asm { add eax, 7 }
	__asm { push 0 }
	__asm { shr eax, 3 }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x248] }
	__asm { mov ecx, ebx }
	__asm { call fn_00cf1ac0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x254] }
	__asm { mov dword ptr [eax + 0x1200], 2 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00c6c320 }
	__asm { L_00cebf9c: }
	__asm { lea ecx, [ebp - 0x140] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c6c320 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_012b1ef8[];
extern "C" char g_012b1efc[];
extern "C" char g_012b1f00[];
extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00c6c1f0();
extern "C" void fn_00c6c320();
extern "C" void fn_00c6cf00();
extern "C" void fn_00c6e430();
extern "C" void fn_00ccfe40();
extern "C" void fn_00ccfe60();
extern "C" void fn_00cf1ac0();
// FUNCTION: ROBLOXSTUDIO 0x00cec1e0
extern "C" __declspec(naked) void asm_00cec1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd6e3cb }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x120 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push edi }
	__asm { mov eax, dword ptr [eax + 0x3c] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00cec321 }
	__asm { push 9 }
	__asm { lea ecx, [ebp - 0x12c] }
	__asm { call fn_00c6c1f0 }
	__asm { push 1 }
	__asm { push 8 }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x12c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [ebp - 0xd], 0 }
	__asm { call fn_00c6cf00 }
	__asm { call fn_00ccfe40 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x12c] }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { call fn_00c6e430 }
	__asm { cmp byte ptr [ebp + 0x1c], 0 }
	__asm { push 0 }
	__asm { je L_00cec2bf }
	__asm { call fn_00ccfe60 }
	__asm { push edx }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { mov ecx, esi }
	__asm { call fn_00c687d0 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [g_012b1ef8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_012b1efc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ax, word ptr [g_012b1f00] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c688b0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov ecx, ebx }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 0x12c] }
	__asm { push dword ptr [ebp - 0x120] }
	__asm { call fn_00cf1ac0 }
	__asm { jmp L_00cec30f }
	__asm { L_00cec2bf: }
	__asm { push 0 }
	__asm { sub esp, 0x28 }
	__asm { mov esi, esp }
	__asm { mov ecx, esi }
	__asm { call fn_00c687d0 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [g_012b1ef8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [g_012b1efc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov ax, word ptr [g_012b1f00] }
	__asm { mov word ptr [esi + 8], ax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call fn_00c688b0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { lea ecx, [ebp - 0x12c] }
	__asm { push 0 }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { L_00cec30f: }
	__asm { lea ecx, [ebp - 0x12c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00c6c320 }
	__asm { L_00cec321: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" void fn_00c68910();
extern "C" void fn_00cbd6c0();
extern "C" void fn_00cea1a0();
extern "C" void fn_00cec4b0();
extern "C" void fn_00cf4e70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cec340
extern "C" __declspec(naked) void asm_00cec340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e3e8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { lea eax, [ebp - 0xd] }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { sub esp, 8 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { test eax, eax }
	__asm { je L_00cec386 }
	__asm { inc dword ptr [eax] }
	__asm { L_00cec386: }
	__asm { mov esi, dword ptr [ebp + 0x24] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { call fn_00cec4b0 }
	__asm { add esp, 0x34 }
	__asm { test al, al }
	__asm { jne L_00cec45b }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x28], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push 0x131581c }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { jne L_00cec45b }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00cea1a0 }
	__asm { cmp eax, -1 }
	__asm { je L_00cec45b }
	__asm { mov edx, dword ptr [esi + 0x22c] }
	__asm { imul eax, eax, 0x1208 }
	__asm { add edx, eax }
	__asm { cmp byte ptr [edx], 1 }
	__asm { jne L_00cec45b }
	__asm { test edx, edx }
	__asm { je L_00cec45b }
	__asm { cmp byte ptr [ebp - 0xd], 0 }
	__asm { jne L_00cec45b }
	__asm { push dword ptr [ebp + 0x38] }
	__asm { mov ecx, dword ptr [ebp + 0x28] }
	__asm { push dword ptr [ebp + 0x34] }
	__asm { movzx eax, word ptr [ecx + 0x24] }
	__asm { push dword ptr [ebp + 0x30] }
	__asm { push dword ptr [ecx + 0x28] }
	__asm { push eax }
	__asm { push 0x1315830 }
	__asm { push dword ptr [ecx] }
	__asm { lea eax, [esi + 0x2dc] }
	__asm { push dword ptr [edx + 0x11f0] }
	__asm { lea ecx, [edx + 0xf8] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { call fn_00cbd6c0 }
	__asm { L_00cec45b: }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00cec497 }
	__asm { dec dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { jne L_00cec497 }
	__asm { mov esi, dword ptr [ebp + 0x28] }
	__asm { test esi, esi }
	__asm { je L_00cec48a }
	__asm { mov ecx, esi }
	__asm { call fn_00cf4e70 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { add esp, 4 }
	__asm { L_00cec48a: }
	__asm { test eax, eax }
	__asm { je L_00cec497 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cec497: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c688b0();
extern "C" void fn_00c68960();
extern "C" void fn_00c68c80();
extern "C" void fn_00cbbae0();
extern "C" void fn_00ce8f20();
extern "C" void fn_00cea1a0();
// FUNCTION: ROBLOXSTUDIO 0x00cee9d0
extern "C" __declspec(naked) void asm_00cee9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { imul ebx, ebx, 0x1208 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push 0x131581c }
	__asm { mov edx, dword ptr [edi + 0x22c] }
	__asm { add edx, ebx }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edx + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [edx + 0x14] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call fn_00c68960 }
	__asm { test al, al }
	__asm { je L_00ceea54 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00cea1a0 }
	__asm { mov ecx, eax }
	__asm { cmp ecx, -1 }
	__asm { jne L_00ceea31 }
	__asm { xor ecx, ecx }
	__asm { jmp L_00ceea3d }
	__asm { L_00ceea31: }
	__asm { imul ecx, ecx, 0x1208 }
	__asm { add ecx, dword ptr [edi + 0x22c] }
	__asm { L_00ceea3d: }
	__asm { mov eax, dword ptr [edi + 0x22c] }
	__asm { add eax, ebx }
	__asm { cmp ecx, eax }
	__asm { jne L_00ceea54 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00ce8f20 }
	__asm { L_00ceea54: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00ce8f20 }
	__asm { lea ecx, [ebx + 4] }
	__asm { add ecx, dword ptr [edi + 0x22c] }
	__asm { push esi }
	__asm { call fn_00c688b0 }
	__asm { push esi }
	__asm { call fn_00c68c80 }
	__asm { movzx ecx, word ptr [edi + 0xe] }
	__asm { shl ecx, 3 }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { add esp, 4 }
	__asm { lea ecx, [edi + 0x240] }
	__asm { push 0xde7 }
	__asm { push 0xf045f0 }
	__asm { lea ebx, [edx*4] }
	__asm { call fn_00cbbae0 }
	__asm { mov ecx, dword ptr [edi + 0x23c] }
	__asm { mov edx, eax }
	__asm { mov esi, dword ptr [ebx + ecx] }
	__asm { test esi, esi }
	__asm { jne L_00ceeac7 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 4], esi }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edi + 0x23c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + eax], edx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00ceeac7: }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { lea eax, [esi + 4] }
	__asm { je L_00ceeadb }
	__asm { L_00ceead0: }
	__asm { mov esi, dword ptr [eax] }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { lea eax, [esi + 4] }
	__asm { jne L_00ceead0 }
	__asm { L_00ceeadb: }
	__asm { push 0xdf6 }
	__asm { push 0xf045f0 }
	__asm { lea ecx, [edi + 0x240] }
	__asm { call fn_00cbbae0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012afa4c[];
// FUNCTION: ROBLOXSTUDIO 0x00ceecf0
extern "C" __declspec(naked) void asm_00ceecf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov ebx, dword ptr [ecx + 0x608] }
	__asm { mov edx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { test edx, edx }
	__asm { jne L_00ceed70 }
	__asm { mov dword ptr [eax], ecx }
	__asm { inc dword ptr [ebx + 4] }
	__asm { dec dword ptr [esi + 0xc] }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { cmp dword ptr [esi + 0xc], edx }
	__asm { jle L_00ceed35 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp ebx, eax }
	__asm { jne L_00ceed35 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_00ceed35: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { lea eax, [ecx + 1] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { test ecx, ecx }
	__asm { jne L_00ceed50 }
	__asm { mov dword ptr [esi], ebx }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 0xc], ebx }
	__asm { mov dword ptr [ebx + 0x10], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ceed50: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebx + 0xc], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov dword ptr [eax + 0xc], ebx }
	__asm { mov eax, dword ptr [esi] }
	__asm { pop esi }
	__asm { mov dword ptr [eax + 0x10], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00ceed70: }
	__asm { mov dword ptr [eax + edx*4], ecx }
	__asm { inc dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { mov eax, 0x51d07eaf }
	__asm { mul ecx }
	__asm { sub ecx, edx }
	__asm { shr ecx, 1 }
	__asm { add ecx, edx }
	__asm { shr ecx, 0xa }
	__asm { cmp dword ptr [ebx + 4], ecx }
	__asm { jne L_00ceeddb }
	__asm { cmp dword ptr [esi + 8], 4 }
	__asm { jl L_00ceeddb }
	__asm { cmp ebx, dword ptr [esi] }
	__asm { jne L_00ceed9d }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [esi], eax }
	__asm { L_00ceed9d: }
	__asm { mov ecx, dword ptr [ebx + 0x10] }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov ecx, dword ptr [ebx + 0xc] }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { dec dword ptr [esi + 8] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebx] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebx + 8] }
	__asm { call dword ptr [g_012afa4c] }
	__asm { push edi }
	__asm { push esi }
	__asm { push ebx }
	__asm { call dword ptr [g_012afa4c] }
	__asm { add esp, 0x24 }
	__asm { pop edi }
	__asm { L_00ceeddb: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cc8890();
extern "C" void fn_00ceb670();
extern "C" void fn_00ceb740();
extern "C" void fn_00cf1250();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00cf1020
extern "C" __declspec(naked) void asm_00cf1020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { je L_00cf111e }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { test esi, esi }
	__asm { js L_00cf111e }
	__asm { cmp dword ptr [edi + 0x22c], 0 }
	__asm { je L_00cf111e }
	__asm { cmp byte ptr [edi + 4], 1 }
	__asm { je L_00cf111e }
	__asm { cmp byte ptr [ebp + 0x44], 0 }
	__asm { jne L_00cf106d }
	__asm { lea ecx, [ebp + 0x1c] }
	__asm { call fn_00ceb740 }
	__asm { test al, al }
	__asm { jne L_00cf111e }
	__asm { L_00cf106d: }
	__asm { mov ebx, dword ptr [ebp + 0x48] }
	__asm { test ebx, ebx }
	__asm { jne L_00cf107d }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x48] }
	__asm { mov ebx, eax }
	__asm { L_00cf107d: }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { test al, al }
	__asm { jne L_00cf10e5 }
	__asm { push 1 }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00ceb670 }
	__asm { test al, al }
	__asm { je L_00cf10e2 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi] }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x54] }
	__asm { cmp dword ptr [ebp + 0x14], 5 }
	__asm { jl L_00cf10d7 }
	__asm { lea ecx, [edi + 0x5c8] }
	__asm { mov byte ptr [ebp - 8], 0xe }
	__asm { call fn_00cf40a0 }
	__asm { mov eax, dword ptr [edi + 0x5e0] }
	__asm { lea ecx, [edi + 0x5c8] }
	__asm { mov dword ptr [ebp - 7], eax }
	__asm { call fn_00cf40b0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 5 }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x54] }
	__asm { L_00cf10d7: }
	__asm { mov eax, ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
	__asm { L_00cf10e2: }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { L_00cf10e5: }
	__asm { push ebx }
	__asm { push 0 }
	__asm { push eax }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00cc8890 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [esi*8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call fn_00cf1250 }
	__asm { mov eax, ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
	__asm { L_00cf111e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" void fn_00cc8890();
extern "C" void fn_00ceb670();
extern "C" void fn_00ceb740();
extern "C" void fn_00cf1250();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
// FUNCTION: ROBLOXSTUDIO 0x00cf1130
extern "C" __declspec(naked) void asm_00cf1130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { add eax, 7 }
	__asm { mov ebx, ecx }
	__asm { test eax, 0xfffffff8 }
	__asm { je L_00cf1237 }
	__asm { cmp dword ptr [ebx + 0x22c], 0 }
	__asm { je L_00cf1237 }
	__asm { cmp byte ptr [ebx + 4], 1 }
	__asm { je L_00cf1237 }
	__asm { cmp byte ptr [ebp + 0x40], 0 }
	__asm { jne L_00cf117b }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { call fn_00ceb740 }
	__asm { test al, al }
	__asm { jne L_00cf1237 }
	__asm { L_00cf117b: }
	__asm { mov edi, dword ptr [ebp + 0x44] }
	__asm { test edi, edi }
	__asm { jne L_00cf118e }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x48] }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp + 0x44], edi }
	__asm { L_00cf118e: }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { test al, al }
	__asm { jne L_00cf11fd }
	__asm { push 1 }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00ceb670 }
	__asm { test al, al }
	__asm { je L_00cf11fa }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { add eax, 7 }
	__asm { shr eax, 3 }
	__asm { push eax }
	__asm { push dword ptr [esi + 0xc] }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [edx + 0x54] }
	__asm { cmp dword ptr [ebp + 0x10], 5 }
	__asm { jl L_00cf11ef }
	__asm { lea ecx, [ebx + 0x5c8] }
	__asm { mov byte ptr [ebp - 8], 0xe }
	__asm { call fn_00cf40a0 }
	__asm { mov eax, dword ptr [ebx + 0x5e0] }
	__asm { lea ecx, [ebx + 0x5c8] }
	__asm { mov dword ptr [ebp - 7], eax }
	__asm { call fn_00cf40b0 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 5 }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax + 0x54] }
	__asm { L_00cf11ef: }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
	__asm { L_00cf11fa: }
	__asm { mov eax, dword ptr [ebp + 0x40] }
	__asm { L_00cf11fd: }
	__asm { push dword ptr [ebp + 0x44] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov edi, dword ptr [edi + 0xc] }
	__asm { push 0 }
	__asm { push eax }
	__asm { sub esp, 0x28 }
	__asm { lea eax, [ebp + 0x18] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00cc8890 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, ebx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00cf1250 }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
	__asm { L_00cf1237: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x40 }
}

extern "C" char g_012afa44[];
extern "C" char g_012afa50[];
extern "C" void fn_00c687d0();
extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00ce7540();
extern "C" void fn_00cee3a0();
extern "C" void fn_00ceeb10();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
extern "C" void fn_00cf4f40();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00cf1250
extern "C" __declspec(naked) void asm_00cf1250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e651 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea esi, [eax + 0x310] }
	__asm { push edi }
	__asm { lea edi, [esi + 0x14] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00cf40a0 }
	__asm { push 0xeff }
	__asm { push 0xf045f0 }
	__asm { mov ecx, esi }
	__asm { call fn_00ce7540 }
	__asm { mov ebx, eax }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call fn_00cf40b0 }
	__asm { mov dword ptr [ebp - 0x1c], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00cf12c3 }
	__asm { lea ecx, [ebx + 0x10] }
	__asm { call fn_00c687d0 }
	__asm { lea ecx, [ebx + 0x20] }
	__asm { call fn_00c68890 }
	__asm { jmp L_00cf12c5 }
	__asm { L_00cf12c3: }
	__asm { xor ebx, ebx }
	__asm { L_00cf12c5: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 7 }
	__asm { push 0xf00 }
	__asm { shr eax, 3 }
	__asm { push 0xf045f0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { call dword ptr [g_012afa44] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebx + 0x4c], eax }
	__asm { test eax, eax }
	__asm { jne L_00cf1339 }
	__asm { push 0xf03 }
	__asm { push 0xf045f0 }
	__asm { call dword ptr [g_012afa50] }
	__asm { add esp, 8 }
	__asm { mov ecx, edi }
	__asm { call fn_00cf40a0 }
	__asm { push 0xf04 }
	__asm { push 0xf045f0 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call fn_00ceeb10 }
	__asm { mov ecx, edi }
	__asm { call fn_00cf40b0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
	__asm { L_00cf1339: }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov al, byte ptr [ebp + 0x18] }
	__asm { mov byte ptr [ebx + 0xc], al }
	__asm { mov dword ptr [ebx + 4], edi }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebx + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [ebx + 0x14], eax }
	__asm { mov ax, word ptr [ebp + 0x24] }
	__asm { add esp, 0xc }
	__asm { mov word ptr [ebx + 0x18], ax }
	__asm { lea eax, [ebp + 0x2c] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x20] }
	__asm { call fn_00c688b0 }
	__asm { mov al, byte ptr [ebp + 0x44] }
	__asm { mov byte ptr [ebx + 0x38], al }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [ebx + 0x3c], eax }
	__asm { mov eax, dword ptr [ebp + 0x4c] }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { mov dword ptr [ebx + 0x68], eax }
	__asm { mov dword ptr [ebx + 0x6c], 0 }
	__asm { mov dword ptr [ebp + 0x18], ebx }
	__asm { call fn_00cf40a0 }
	__asm { mov ebx, dword ptr [ebp - 0x14] }
	__asm { push 0x30 }
	__asm { push 0xf04780 }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x33c] }
	__asm { call fn_00cee3a0 }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { call fn_00cf40b0 }
	__asm { test edi, edi }
	__asm { jne L_00cf13d3 }
	__asm { lea ecx, [ebx + 0x56c] }
	__asm { call fn_00cf4f40 }
	__asm { L_00cf13d3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x48 }
}

extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00c68910();
extern "C" void fn_00c68a50();
extern "C" void fn_00c68a80();
extern "C" void fn_00ccfe40();
extern "C" void fn_00ce5f10();
extern "C" void fn_00cea0a0();
extern "C" void fn_00cee3a0();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
extern "C" void fn_00cf4e70();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00cf1610
extern "C" __declspec(naked) void asm_00cf1610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { call fn_00c68890 }
	__asm { mov eax, dword ptr [ebx + 0x42c] }
	__asm { mov edi, dword ptr [ebp + 0x1c] }
	__asm { mov ecx, dword ptr [eax + edi*8] }
	__asm { lea ecx, [ecx + 8] }
	__asm { call fn_00c68a80 }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c68a50 }
	__asm { test al, al }
	__asm { jne L_00cf165e }
	__asm { mov eax, 2 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
	__asm { L_00cf165e: }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00cea0a0 }
	__asm { test eax, eax }
	__asm { je L_00cf169d }
	__asm { mov eax, 3 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
	__asm { L_00cf169d: }
	__asm { push 0xb88 }
	__asm { push 0xf045f0 }
	__asm { call fn_00ce5f10 }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp + 0x1c], esi }
	__asm { call fn_00c688b0 }
	__asm { call fn_00ccfe40 }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov byte ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x130], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x12c], edi }
	__asm { mov dword ptr [esi + 0x14c], 1 }
	__asm { mov dword ptr [esi + 0x134], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x138], eax }
	__asm { lea eax, [esi + 0x2a] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [esi + 0x12a], bl }
	__asm { mov dword ptr [esi + 0x13c], eax }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { add esp, 0xc }
	__asm { lea ebx, [esi + 0x2f8] }
	__asm { mov ecx, ebx }
	__asm { xor edi, edi }
	__asm { call fn_00cf40a0 }
	__asm { add esi, 0x2e8 }
	__asm { mov edi, edi }
	__asm { L_00cf1740: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { cmp eax, edx }
	__asm { ja L_00cf174e }
	__asm { sub edx, eax }
	__asm { jmp L_00cf1755 }
	__asm { L_00cf174e: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { sub ecx, eax }
	__asm { add edx, ecx }
	__asm { L_00cf1755: }
	__asm { cmp edi, edx }
	__asm { jae L_00cf17e5 }
	__asm { mov edx, dword ptr [esi + 0xc] }
	__asm { lea ecx, [eax + edi] }
	__asm { cmp ecx, edx }
	__asm { jb L_00cf1772 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { sub eax, edx }
	__asm { add eax, edi }
	__asm { lea ecx, [ecx + eax*4] }
	__asm { jmp L_00cf1777 }
	__asm { L_00cf1772: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { L_00cf1777: }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { jne L_00cf1789 }
	__asm { inc edi }
	__asm { jmp L_00cf1740 }
	__asm { L_00cf1789: }
	__asm { mov ecx, ebx }
	__asm { call fn_00cf40b0 }
	__asm { mov esi, dword ptr [ebp + 0x1c] }
	__asm { mov eax, dword ptr [esi + 0x148] }
	__asm { test eax, eax }
	__asm { je L_00cf17ce }
	__asm { dec dword ptr [eax] }
	__asm { jne L_00cf17ce }
	__asm { mov edi, dword ptr [esi + 0x144] }
	__asm { test edi, edi }
	__asm { je L_00cf17bb }
	__asm { mov ecx, edi }
	__asm { call fn_00cf4e70 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cf17bb: }
	__asm { mov eax, dword ptr [esi + 0x148] }
	__asm { test eax, eax }
	__asm { je L_00cf17ce }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cf17ce: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, 4 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
	__asm { L_00cf17e5: }
	__asm { push 0xbad }
	__asm { push 0xf045f0 }
	__asm { lea eax, [ebp + 0x1c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00cee3a0 }
	__asm { mov ecx, ebx }
	__asm { call fn_00cf40b0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" void fn_00c68890();
extern "C" void fn_00c688b0();
extern "C" void fn_00c68910();
extern "C" void fn_00c68a50();
extern "C" void fn_00ccfe40();
extern "C" void fn_00cea0a0();
extern "C" void fn_00cee3a0();
extern "C" void fn_00cf40a0();
extern "C" void fn_00cf40b0();
extern "C" void fn_00cf4e70();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00cf1810
extern "C" __declspec(naked) void asm_00cf1810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e693 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c68890 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c68a50 }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { push 1 }
	__asm { push 0 }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx + 0x10], eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00cea0a0 }
	__asm { test eax, eax }
	__asm { je L_00cf188d }
	__asm { mov esi, 3 }
	__asm { jmp L_00cf1a64 }
	__asm { L_00cf188d: }
	__asm { push 0x150 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00cf18c7 }
	__asm { mov ecx, esi }
	__asm { call fn_00c68890 }
	__asm { mov dword ptr [esi + 0x144], 0 }
	__asm { mov dword ptr [esi + 0x148], 0 }
	__asm { jmp L_00cf18cc }
	__asm { L_00cf18c7: }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { L_00cf18cc: }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00c688b0 }
	__asm { call fn_00ccfe40 }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov byte ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [esi + 0x24], 0 }
	__asm { mov dword ptr [esi + 0x130], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [esi + 0x12c], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [esi + 0x14c], 1 }
	__asm { mov dword ptr [esi + 0x134], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [esi + 0x138], eax }
	__asm { lea eax, [esi + 0x2a] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov byte ptr [esi + 0x12a], bl }
	__asm { mov dword ptr [esi + 0x13c], eax }
	__asm { lea ebx, [esi + 0x144] }
	__asm { lea eax, [ebp + 0x30] }
	__asm { add esp, 0xc }
	__asm { cmp ebx, eax }
	__asm { je L_00cf199a }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { test eax, eax }
	__asm { je L_00cf1986 }
	__asm { dec dword ptr [eax] }
	__asm { jne L_00cf1986 }
	__asm { mov esi, dword ptr [ebx] }
	__asm { test esi, esi }
	__asm { je L_00cf1976 }
	__asm { mov ecx, esi }
	__asm { call fn_00cf4e70 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cf1976: }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { test eax, eax }
	__asm { je L_00cf1986 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cf1986: }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { test eax, eax }
	__asm { je L_00cf199a }
	__asm { inc dword ptr [eax] }
	__asm { L_00cf199a: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { xor edi, edi }
	__asm { lea eax, [esi + 0x2f8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call fn_00cf40a0 }
	__asm { add esi, 0x2e8 }
	__asm { L_00cf19b5: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { cmp ecx, edx }
	__asm { ja L_00cf19c3 }
	__asm { sub edx, ecx }
	__asm { jmp L_00cf19ca }
	__asm { L_00cf19c3: }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { sub eax, ecx }
	__asm { add edx, eax }
	__asm { L_00cf19ca: }
	__asm { cmp edi, edx }
	__asm { jae L_00cf1a45 }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { lea edx, [ecx + edi] }
	__asm { cmp edx, eax }
	__asm { jb L_00cf19e3 }
	__asm { sub ecx, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { add ecx, edi }
	__asm { lea ecx, [eax + ecx*4] }
	__asm { jmp L_00cf19e8 }
	__asm { L_00cf19e3: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [eax + edx*4] }
	__asm { L_00cf19e8: }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { call fn_00c68910 }
	__asm { test al, al }
	__asm { jne L_00cf19fa }
	__asm { inc edi }
	__asm { jmp L_00cf19b5 }
	__asm { L_00cf19fa: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00cf40b0 }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { test eax, eax }
	__asm { je L_00cf1a33 }
	__asm { dec dword ptr [eax] }
	__asm { jne L_00cf1a33 }
	__asm { mov esi, dword ptr [ebx] }
	__asm { test esi, esi }
	__asm { je L_00cf1a23 }
	__asm { mov ecx, esi }
	__asm { call fn_00cf4e70 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cf1a23: }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { test eax, eax }
	__asm { je L_00cf1a33 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cf1a33: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov esi, 4 }
	__asm { jmp L_00cf1a64 }
	__asm { L_00cf1a45: }
	__asm { push 0xbe2 }
	__asm { push 0xf045f0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00cee3a0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00cf40b0 }
	__asm { xor esi, esi }
	__asm { L_00cf1a64: }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00cf1aa0 }
	__asm { dec dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { jne L_00cf1aa0 }
	__asm { mov edi, dword ptr [ebp + 0x30] }
	__asm { test edi, edi }
	__asm { je L_00cf1a93 }
	__asm { mov ecx, edi }
	__asm { call fn_00cf4e70 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { add esp, 4 }
	__asm { L_00cf1a93: }
	__asm { test eax, eax }
	__asm { je L_00cf1aa0 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00cf1aa0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e1058c[];
extern "C" char g_01316458[];
extern "C" void fn_00cf5d70();
extern "C" void fn_00cf5ff0();
// FUNCTION: ROBLOXSTUDIO 0x00cf54d0
extern "C" __declspec(naked) void asm_00cf54d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { lea esi, [ecx*8] }
	__asm { test edi, edi }
	__asm { jne L_00cf54f2 }
	__asm { lea eax, [edi - 3] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cf54f2: }
	__asm { push ebx }
	__asm { mov bl, byte ptr [ebp + 0xc] }
	__asm { test bl, bl }
	__asm { je L_00cf5509 }
	__asm { cmp bl, 1 }
	__asm { je L_00cf5509 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cf5509: }
	__asm { mov byte ptr [edi], bl }
	__asm { cmp esi, 0x80 }
	__asm { je L_00cf5527 }
	__asm { cmp esi, 0xc0 }
	__asm { je L_00cf5527 }
	__asm { cmp esi, 0x100 }
	__asm { jne L_00cf55d1 }
	__asm { L_00cf5527: }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { test edx, edx }
	__asm { je L_00cf55d1 }
	__asm { push ecx }
	__asm { lea eax, [edi + 8] }
	__asm { push edx }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call dword ptr [g_00e1058c] }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { and edx, 0x1f }
	__asm { add eax, edx }
	__asm { sar eax, 5 }
	__asm { add eax, 6 }
	__asm { mov dword ptr [g_01316458], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cdq }
	__asm { and edx, 7 }
	__asm { add eax, edx }
	__asm { sar eax, 3 }
	__asm { add esp, 0xc }
	__asm { xor esi, esi }
	__asm { test eax, eax }
	__asm { jle L_00cf55a1 }
	__asm { mov edi, eax }
	__asm { mov edi, edi }
	__asm { L_00cf5570: }
	__asm { mov eax, esi }
	__asm { cdq }
	__asm { and edx, 3 }
	__asm { add eax, edx }
	__asm { mov ecx, esi }
	__asm { sar eax, 2 }
	__asm { and ecx, 0x80000003 }
	__asm { jns L_00cf558a }
	__asm { dec ecx }
	__asm { or ecx, 0xfffffffc }
	__asm { inc ecx }
	__asm { L_00cf558a: }
	__asm { lea edx, [ebp - 0x24] }
	__asm { add edx, ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { inc esi }
	__asm { mov cl, byte ptr [ecx + esi - 1] }
	__asm { mov byte ptr [edx + eax*4], cl }
	__asm { cmp esi, edi }
	__asm { jl L_00cf5570 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_00cf55a1: }
	__asm { lea esi, [edi + 0x30] }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_00cf5ff0 }
	__asm { add esp, 0xc }
	__asm { cmp bl, 1 }
	__asm { jne L_00cf55c5 }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { call fn_00cf5d70 }
	__asm { add esp, 8 }
	__asm { L_00cf55c5: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cf55d1: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, 0xfffffffe }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01316458[];
// FUNCTION: ROBLOXSTUDIO 0x00cf5d70
extern "C" __declspec(naked) void asm_00cf5d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [g_01316458] }
	__asm { cmp ecx, 1 }
	__asm { jle L_00cf5fdd }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { add eax, 0x12 }
	__asm { dec ecx }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { push edi }
	__asm { L_00cf5d90: }
	__asm { movzx ebx, byte ptr [eax - 2] }
	__asm { movzx edi, byte ptr [eax - 1] }
	__asm { movzx ecx, byte ptr [ebx*4 + 0x12b44f0] }
	__asm { xor cl, byte ptr [edi*4 + 0x12b48f0] }
	__asm { movzx esi, byte ptr [eax] }
	__asm { movzx edx, byte ptr [eax + 1] }
	__asm { xor cl, byte ptr [esi*4 + 0x12b4cf0] }
	__asm { xor cl, byte ptr [edx*4 + 0x12b50f0] }
	__asm { mov byte ptr [eax - 2], cl }
	__asm { movzx ecx, byte ptr [ebx*4 + 0x12b44f1] }
	__asm { xor cl, byte ptr [edi*4 + 0x12b48f1] }
	__asm { xor cl, byte ptr [esi*4 + 0x12b4cf1] }
	__asm { xor cl, byte ptr [edx*4 + 0x12b50f1] }
	__asm { mov byte ptr [eax - 1], cl }
	__asm { movzx ecx, byte ptr [ebx*4 + 0x12b44f2] }
	__asm { xor cl, byte ptr [edi*4 + 0x12b48f2] }
	__asm { xor cl, byte ptr [esi*4 + 0x12b4cf2] }
	__asm { xor cl, byte ptr [edx*4 + 0x12b50f2] }
	__asm { mov byte ptr [eax], cl }
	__asm { movzx ecx, byte ptr [ebx*4 + 0x12b44f3] }
	__asm { xor cl, byte ptr [edi*4 + 0x12b48f3] }
	__asm { movzx ebx, byte ptr [eax + 2] }
	__asm { xor cl, byte ptr [esi*4 + 0x12b4cf3] }
	__asm { movzx edi, byte ptr [eax + 3] }
	__asm { xor cl, byte ptr [edx*4 + 0x12b50f3] }
	__asm { movzx esi, byte ptr [eax + 4] }
	__asm { mov byte ptr [eax + 1], cl }
	__asm { movzx ecx, byte ptr [ebx*4 + 0x12b44f0] }
	__asm { xor cl, byte ptr [edi*4 + 0x12b48f0] }
	__asm { movzx edx, byte ptr [eax + 5] }
	__asm { xor cl, byte ptr [esi*4 + 0x12b4cf0] }
	__asm { xor cl, byte ptr [edx*4 + 0x12b50f0] }
	__asm { mov byte ptr [eax + 2], cl }
	__asm { movzx ecx, byte ptr [ebx*4 + 0x12b44f1] }
	__asm { xor cl, byte ptr [edi*4 + 0x12b48f1] }
	__asm { xor cl, byte ptr [esi*4 + 0x12b4cf1] }
	__asm { xor cl, byte ptr [edx*4 + 0x12b50f1] }
	__asm { mov byte ptr [eax + 3], cl }
	__asm { movzx ecx, byte ptr [ebx*4 + 0x12b44f2] }
	__asm { xor cl, byte ptr [edi*4 + 0x12b48f2] }
	__asm { xor cl, byte ptr [esi*4 + 0x12b4cf2] }
	__asm { xor cl, byte ptr [edx*4 + 0x12b50f2] }
	__asm { mov byte ptr [eax + 4], cl }
	__asm { movzx ecx, byte ptr [ebx*4 + 0x12b44f3] }
	__asm { xor cl, byte ptr [edi*4 + 0x12b48f3] }
	__asm { movzx ebx, byte ptr [eax + 6] }
	__asm { xor cl, byte ptr [esi*4 + 0x12b4cf3] }
	__asm { movzx edi, byte ptr [eax + 7] }
	__asm { xor cl, byte ptr [edx*4 + 0x12b50f3] }
	__asm { movzx esi, byte ptr [eax + 8] }
	__asm { movzx edx, byte ptr [eax + 9] }
	__asm { mov byte ptr [eax + 5], cl }
	__asm { movzx ecx, byte ptr [ebx*4 + 0x12b44f0] }
	__asm { xor cl, byte ptr [edi*4 + 0x12b48f0] }
	__asm { xor cl, byte ptr [esi*4 + 0x12b4cf0] }
	__asm { xor cl, byte ptr [edx*4 + 0x12b50f0] }
	__asm { mov byte ptr [eax + 6], cl }
	__asm { movzx ecx, byte ptr [ebx*4 + 0x12b44f1] }
	__asm { xor cl, byte ptr [edi*4 + 0x12b48f1] }
	__asm { xor cl, byte ptr [esi*4 + 0x12b4cf1] }
	__asm { xor cl, byte ptr [edx*4 + 0x12b50f1] }
	__asm { mov byte ptr [eax + 7], cl }
	__asm { movzx ecx, byte ptr [ebx*4 + 0x12b44f2] }
	__asm { xor cl, byte ptr [edi*4 + 0x12b48f2] }
	__asm { xor cl, byte ptr [esi*4 + 0x12b4cf2] }
	__asm { xor cl, byte ptr [edx*4 + 0x12b50f2] }
	__asm { mov byte ptr [eax + 8], cl }
	__asm { movzx ecx, byte ptr [ebx*4 + 0x12b44f3] }
	__asm { xor cl, byte ptr [edi*4 + 0x12b48f3] }
	__asm { movzx ebx, byte ptr [eax + 0xa] }
	__asm { xor cl, byte ptr [esi*4 + 0x12b4cf3] }
	__asm { movzx edi, byte ptr [eax + 0xb] }
	__asm { xor cl, byte ptr [edx*4 + 0x12b50f3] }
	__asm { movzx esi, byte ptr [eax + 0xc] }
	__asm { movzx edx, byte ptr [eax + 0xd] }
	__asm { mov byte ptr [eax + 9], cl }
	__asm { movzx ecx, byte ptr [ebx*4 + 0x12b44f0] }
	__asm { xor cl, byte ptr [edi*4 + 0x12b48f0] }
	__asm { xor cl, byte ptr [esi*4 + 0x12b4cf0] }
	__asm { xor cl, byte ptr [edx*4 + 0x12b50f0] }
	__asm { mov byte ptr [eax + 0xa], cl }
	__asm { movzx ecx, byte ptr [ebx*4 + 0x12b44f1] }
	__asm { xor cl, byte ptr [edi*4 + 0x12b48f1] }
	__asm { lea eax, [eax + 0x10] }
	__asm { xor cl, byte ptr [esi*4 + 0x12b4cf1] }
	__asm { xor cl, byte ptr [edx*4 + 0x12b50f1] }
	__asm { mov byte ptr [eax - 5], cl }
	__asm { movzx ecx, byte ptr [ebx*4 + 0x12b44f2] }
	__asm { xor cl, byte ptr [edi*4 + 0x12b48f2] }
	__asm { xor cl, byte ptr [esi*4 + 0x12b4cf2] }
	__asm { xor cl, byte ptr [edx*4 + 0x12b50f2] }
	__asm { mov byte ptr [eax - 4], cl }
	__asm { movzx ecx, byte ptr [ebx*4 + 0x12b44f3] }
	__asm { xor cl, byte ptr [edi*4 + 0x12b48f3] }
	__asm { xor cl, byte ptr [esi*4 + 0x12b4cf3] }
	__asm { xor cl, byte ptr [edx*4 + 0x12b50f3] }
	__asm { dec dword ptr [ebp - 4] }
	__asm { mov byte ptr [eax - 3], cl }
	__asm { jne L_00cf5d90 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_00cf5fdd: }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1007c[];
extern "C" char g_00e10080[];
extern "C" char g_00e10084[];
extern "C" char g_00e101f8[];
extern "C" char g_00e10200[];
extern "C" void fn_00460330();
extern "C" void fn_00cf6269();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cf628d
extern "C" __declspec(naked) void asm_00cf628d()
{
	__asm { L_00cf628d: }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mul dword ptr [ebp + 0x10] }
	__asm { test edx, edx }
	__asm { jne L_00cf62a8 }
	__asm { cmp eax, -1 }
	__asm { ja L_00cf62a8 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cf62a8: }
	__asm { mov eax, 0x80070216 }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cf62af: }
	__asm { cmp byte ptr [ecx + 8], 0 }
	__asm { mov dword ptr [ecx], 0xf04bb0 }
	__asm { je L_00cf62ca }
	__asm { cmp dword ptr [ecx + 4], 0 }
	__asm { je L_00cf62ca }
	__asm { push dword ptr [ecx + 4] }
	__asm { call dword ptr [g_00e10084] }
	__asm { L_00cf62ca: }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xf04bc4 }
	__asm { je L_00cf62e4 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { pop ecx }
	__asm { L_00cf62e4: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call L_00cf62af }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00cf6303 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { pop ecx }
	__asm { L_00cf6303: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { add esi, 8 }
	__asm { and esi, 0xfffffff8 }
	__asm { lea eax, [ebp + 8] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call L_00cf628d }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { js L_00cf636a }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 8] }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { call fn_00cf6269 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { js L_00cf636a }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax] }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { je L_00cf636a }
	__asm { and dword ptr [ecx + 4], 0 }
	__asm { lea eax, [esi - 1] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov dword ptr [ecx], edi }
	__asm { mov dword ptr [ecx + 0xc], 1 }
	__asm { mov eax, ecx }
	__asm { jmp L_00cf636c }
	__asm { L_00cf636a: }
	__asm { xor eax, eax }
	__asm { L_00cf636c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push dword ptr [ecx + 4] }
	__asm { call dword ptr [g_00e10200] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov eax, ecx }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { pop ebp }
	__asm { jmp dword ptr [eax + 4] }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { je L_00cf63ad }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push dword ptr [ecx + 4] }
	__asm { call dword ptr [g_00e101f8] }
	__asm { L_00cf63ad: }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { xor edx, edx }
	__asm { lea eax, [ecx + 0x14] }
	__asm { inc edx }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { lea eax, [ecx + 8] }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push dword ptr [ecx + 4] }
	__asm { call dword ptr [g_00e1007c] }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { add esi, 8 }
	__asm { and esi, 0xfffffff8 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push esi }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call L_00cf628d }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { js L_00cf642b }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push 0x10 }
	__asm { push eax }
	__asm { call fn_00460330 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { js L_00cf642b }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, eax }
	__asm { test ecx, ecx }
	__asm { je L_00cf642b }
	__asm { lea eax, [esi - 1] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, ecx }
	__asm { jmp L_00cf642d }
	__asm { L_00cf642b: }
	__asm { xor eax, eax }
	__asm { L_00cf642d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { test edx, edx }
	__asm { jne L_00cf6446 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [eax] }
	__asm { jmp L_00cf6465 }
	__asm { L_00cf6446: }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00cf6456 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 4] }
	__asm { xor eax, eax }
	__asm { jmp L_00cf6465 }
	__asm { L_00cf6456: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edx }
	__asm { push 0 }
	__asm { push dword ptr [ecx + 4] }
	__asm { call dword ptr [g_00e10080] }
	__asm { L_00cf6465: }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
extern "C" void fn_00cf7873();
// FUNCTION: ROBLOXSTUDIO 0x00cf796f
extern "C" __declspec(naked) void asm_00cf796f()
{
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edx, ecx }
	__asm { push 5 }
	__asm { pop ecx }
	__asm { mov dword ptr [edx], eax }
	__asm { lea edi, [edx + 4] }
	__asm { rep movsd }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { lea ebx, [edx + 0x34] }
	__asm { push ebx }
	__asm { lea edi, [edx + 0x2c] }
	__asm { push edi }
	__asm { push 1 }
	__asm { mov dword ptr [edx + 0x1c], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 0x20], ecx }
	__asm { xor ecx, ecx }
	__asm { push eax }
	__asm { mov dword ptr [edx + 0x18], esi }
	__asm { mov dword ptr [edx + 0x24], ecx }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov dword ptr [ebx], ecx }
	__asm { call fn_00cf7873 }
	__asm { movzx eax, word ptr [esi + 8] }
	__asm { imul eax, dword ptr [edi] }
	__asm { mov dword ptr [edx + 0x28], eax }
	__asm { movzx eax, word ptr [esi + 8] }
	__asm { imul eax, dword ptr [ebx] }
	__asm { mov dword ptr [edx + 0x30], eax }
	__asm { xor eax, eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [edx + 0x38], eax }
	__asm { mov dword ptr [edx + 0x3c], eax }
	__asm { mov dword ptr [edx + 0x40], eax }
	__asm { mov eax, edx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00cf79e0: }
	__asm { mov edi, edi }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { xor ebx, ebx }
	__asm { cmp dword ptr [esi + 0x38], ebx }
	__asm { push edi }
	__asm { je L_00cf7a24 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { cmp word ptr [eax + 0xa], bx }
	__asm { jbe L_00cf7a1b }
	__asm { L_00cf79f7: }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov edi, dword ptr [eax + ebx*4] }
	__asm { test edi, edi }
	__asm { je L_00cf7a0f }
	__asm { mov ecx, edi }
	__asm { call L_00cf79e0 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { pop ecx }
	__asm { L_00cf7a0f: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { movzx eax, word ptr [eax + 0xa] }
	__asm { inc ebx }
	__asm { cmp ebx, eax }
	__asm { jb L_00cf79f7 }
	__asm { L_00cf7a1b: }
	__asm { push dword ptr [esi + 0x38] }
	__asm { call fn_00cf6522 }
	__asm { pop ecx }
	__asm { L_00cf7a24: }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [esi + 0x3c], edi }
	__asm { je L_00cf7a61 }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { cmp word ptr [eax + 8], di }
	__asm { jbe L_00cf7a58 }
	__asm { L_00cf7a34: }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov ebx, dword ptr [eax + edi*4] }
	__asm { test ebx, ebx }
	__asm { je L_00cf7a4c }
	__asm { mov ecx, ebx }
	__asm { call L_00cf79e0 }
	__asm { push ebx }
	__asm { call fn_00cf6522 }
	__asm { pop ecx }
	__asm { L_00cf7a4c: }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { movzx eax, word ptr [eax + 8] }
	__asm { inc edi }
	__asm { cmp edi, eax }
	__asm { jb L_00cf7a34 }
	__asm { L_00cf7a58: }
	__asm { push dword ptr [esi + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { pop ecx }
	__asm { L_00cf7a61: }
	__asm { push dword ptr [esi + 0x40] }
	__asm { call fn_00cf6522 }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_01038034[];
extern "C" void fn_00cf6522();
extern "C" void fn_00cf79e0();
// FUNCTION: ROBLOXSTUDIO 0x00cf7f4a
extern "C" __declspec(naked) void asm_00cf7f4a()
{
	__asm { L_00cf7f4a: }
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00cf79e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00cf7f64 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { pop ecx }
	__asm { L_00cf7f64: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov edi, edi }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi], 0xf06eb8 }
	__asm { je L_00cf7fa5 }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { cmp dword ptr [esi + 0x18], edi }
	__asm { jbe L_00cf7f9b }
	__asm { L_00cf7f84: }
	__asm { mov eax, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [eax + edi*4] }
	__asm { test ecx, ecx }
	__asm { je L_00cf7f95 }
	__asm { push 1 }
	__asm { call L_00cf7f4a }
	__asm { L_00cf7f95: }
	__asm { inc edi }
	__asm { cmp edi, dword ptr [esi + 0x18] }
	__asm { jb L_00cf7f84 }
	__asm { L_00cf7f9b: }
	__asm { push dword ptr [esi + 0x14] }
	__asm { call fn_00cf6522 }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { L_00cf7fa5: }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00cf6522 }
	__asm { push dword ptr [esi + 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { pop ecx }
	__asm { pop ecx }
	__asm { pop esi }
	__asm { ret }
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x188] }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0x18], 0 }
	__asm { jbe L_00cf7fff }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { sub ecx, eax }
	__asm { L_00cf7fee: }
	__asm { xor edx, edx }
	__asm { cmp dword ptr [ecx + eax], edx }
	__asm { setne dl }
	__asm { mov dword ptr [eax], edx }
	__asm { add eax, 4 }
	__asm { dec esi }
	__asm { jne L_00cf7fee }
	__asm { pop esi }
	__asm { L_00cf7fff: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x188] }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0x18], 0 }
	__asm { jbe L_00cf8051 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { sub edx, ecx }
	__asm { L_00cf802f: }
	__asm { fld dword ptr [g_01038034] }
	__asm { fld dword ptr [edx + ecx] }
	__asm { fucompp }
	__asm { fnstsw ax }
	__asm { test ah, 0x44 }
	__asm { jnp L_00cf8046 }
	__asm { xor eax, eax }
	__asm { inc eax }
	__asm { jmp L_00cf8048 }
	__asm { L_00cf8046: }
	__asm { xor eax, eax }
	__asm { L_00cf8048: }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { dec esi }
	__asm { jne L_00cf802f }
	__asm { pop esi }
	__asm { L_00cf8051: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x188] }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x180] }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x18] }
	__asm { mov edx, edi }
	__asm { shl edx, 2 }
	__asm { je L_00cf80b4 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { sub ecx, eax }
	__asm { mov esi, edx }
	__asm { L_00cf80a3: }
	__asm { xor edx, edx }
	__asm { cmp dword ptr [ecx + eax], edx }
	__asm { setne dl }
	__asm { mov dword ptr [eax], edx }
	__asm { add eax, 4 }
	__asm { dec esi }
	__asm { jne L_00cf80a3 }
	__asm { pop esi }
	__asm { L_00cf80b4: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x180] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov edx, esi }
	__asm { shl edx, 2 }
	__asm { fnstcw word ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { or eax, 0xc00 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { fldcw word ptr [ebp - 4] }
	__asm { test edx, edx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jbe L_00cf8117 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { sub ecx, eax }
	__asm { push edi }
	__asm { L_00cf80ff: }
	__asm { fld dword ptr [ecx + eax] }
	__asm { fstp dword ptr [ebp + 0x18] }
	__asm { fld dword ptr [ebp + 0x18] }
	__asm { fistp dword ptr [ebp + 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [eax], edi }
	__asm { add eax, 4 }
	__asm { dec edx }
	__asm { jne L_00cf80ff }
	__asm { pop edi }
	__asm { L_00cf8117: }
	__asm { fldcw word ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x180] }
	__asm { pop esi }
	__asm { leave }
	__asm { ret 0x14 }
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x18] }
	__asm { mov edx, edi }
	__asm { shl edx, 2 }
	__asm { je L_00cf8164 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { sub ecx, eax }
	__asm { mov esi, edx }
	__asm { L_00cf814d: }
	__asm { xor edx, edx }
	__asm { cmp dword ptr [ecx + eax], edx }
	__asm { setne dl }
	__asm { mov dword ptr [ebp + 0x18], edx }
	__asm { fild dword ptr [ebp + 0x18] }
	__asm { fstp dword ptr [eax] }
	__asm { add eax, 4 }
	__asm { dec esi }
	__asm { jne L_00cf814d }
	__asm { pop esi }
	__asm { L_00cf8164: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x178] }
	__asm { pop edi }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { mov edx, esi }
	__asm { shl edx, 2 }
	__asm { je L_00cf819f }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { sub ecx, eax }
	__asm { L_00cf8194: }
	__asm { fild dword ptr [ecx + eax] }
	__asm { fstp dword ptr [eax] }
	__asm { add eax, 4 }
	__asm { dec edx }
	__asm { jne L_00cf8194 }
	__asm { L_00cf819f: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x178] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x178] }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x1c4] }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0x18], 0 }
	__asm { jbe L_00cf821b }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { sub ecx, eax }
	__asm { L_00cf820a: }
	__asm { xor edx, edx }
	__asm { cmp dword ptr [ecx + eax], edx }
	__asm { setne dl }
	__asm { mov dword ptr [eax], edx }
	__asm { add eax, 4 }
	__asm { dec esi }
	__asm { jne L_00cf820a }
	__asm { pop esi }
	__asm { L_00cf821b: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x1c4] }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp dword ptr [ebp + 0x18], 0 }
	__asm { jbe L_00cf826d }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { sub edx, ecx }
	__asm { L_00cf824b: }
	__asm { fld dword ptr [g_01038034] }
	__asm { fld dword ptr [edx + ecx] }
	__asm { fucompp }
	__asm { fnstsw ax }
	__asm { test ah, 0x44 }
	__asm { jnp L_00cf8262 }
	__asm { xor eax, eax }
	__asm { inc eax }
	__asm { jmp L_00cf8264 }
	__asm { L_00cf8262: }
	__asm { xor eax, eax }
	__asm { L_00cf8264: }
	__asm { mov dword ptr [ecx], eax }
	__asm { add ecx, 4 }
	__asm { dec esi }
	__asm { jne L_00cf824b }
	__asm { pop esi }
	__asm { L_00cf826d: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [ecx + 0x1c4] }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf8286
extern "C" __declspec(naked) void asm_00cf8286()
{
	__asm { L_00cf8286: }
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov esi, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { movzx eax, word ptr [esi] }
	__asm { xor ecx, ecx }
	__asm { sub eax, ecx }
	__asm { je L_00cf83fb }
	__asm { dec eax }
	__asm { je L_00cf83e4 }
	__asm { dec eax }
	__asm { je L_00cf83d7 }
	__asm { dec eax }
	__asm { je L_00cf8352 }
	__asm { dec eax }
	__asm { dec eax }
	__asm { je L_00cf82d3 }
	__asm { mov eax, 0x80004001 }
	__asm { jmp L_00cf851e }
	__asm { L_00cf82d3: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 0x34] }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { movzx eax, word ptr [esi + 8] }
	__asm { cmp dword ptr [ebp + 0x14], eax }
	__asm { jbe L_00cf82ea }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { L_00cf82ea: }
	__asm { cmp dword ptr [ebp + 0x14], ecx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { jbe L_00cf851c }
	__asm { L_00cf82f6: }
	__asm { and dword ptr [ebp + 0x10], 0 }
	__asm { cmp word ptr [esi + 0xa], 0 }
	__asm { jbe L_00cf8342 }
	__asm { L_00cf8301: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov ebx, dword ptr [eax + ecx*4] }
	__asm { push dword ptr [ebx + 0x30] }
	__asm { push dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call L_00cf8286 }
	__asm { test eax, eax }
	__asm { jl L_00cf851e }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ebx + 0x30] }
	__asm { lea eax, [ecx + eax*4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { add dword ptr [ebp + 0x18], eax }
	__asm { movzx eax, word ptr [esi + 0xa] }
	__asm { inc dword ptr [ebp + 0x10] }
	__asm { cmp dword ptr [ebp + 0x10], eax }
	__asm { jb L_00cf8301 }
	__asm { L_00cf8342: }
	__asm { inc dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ebp + 0x14] }
	__asm { jb L_00cf82f6 }
	__asm { jmp L_00cf851c }
	__asm { L_00cf8352: }
	__asm { movzx ecx, word ptr [esi + 4] }
	__asm { movzx eax, word ptr [esi + 6] }
	__asm { mov ebx, ecx }
	__asm { imul ebx, eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { xor edx, edx }
	__asm { div ebx }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { movzx eax, word ptr [esi + 8] }
	__asm { cmp dword ptr [ebp + 0x14], eax }
	__asm { jbe L_00cf8375 }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { L_00cf8375: }
	__asm { and dword ptr [ebp - 0xc], 0 }
	__asm { cmp dword ptr [ebp + 0x14], 0 }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { jbe L_00cf83cf }
	__asm { L_00cf8382: }
	__asm { movzx eax, word ptr [esi + 6] }
	__asm { and dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { jbe L_00cf83c4 }
	__asm { L_00cf838e: }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { jbe L_00cf83b8 }
	__asm { L_00cf8394: }
	__asm { imul ecx, dword ptr [ebp - 0xc] }
	__asm { movzx ebx, word ptr [esi + 6] }
	__asm { add ecx, eax }
	__asm { imul ecx, ebx }
	__asm { add ecx, dword ptr [ebp - 4] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebx + ecx*4] }
	__asm { mov dword ptr [edx], ecx }
	__asm { movzx ecx, word ptr [esi + 4] }
	__asm { add edx, 4 }
	__asm { inc eax }
	__asm { cmp eax, ecx }
	__asm { jb L_00cf8394 }
	__asm { L_00cf83b8: }
	__asm { movzx eax, word ptr [esi + 6] }
	__asm { inc dword ptr [ebp - 4] }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { jb L_00cf838e }
	__asm { L_00cf83c4: }
	__asm { inc dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { cmp eax, dword ptr [ebp + 0x14] }
	__asm { jb L_00cf8382 }
	__asm { L_00cf83cf: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_00cf840c }
	__asm { L_00cf83d7: }
	__asm { movzx ecx, word ptr [esi + 6] }
	__asm { movzx eax, word ptr [esi + 4] }
	__asm { imul ecx, eax }
	__asm { jmp L_00cf83e8 }
	__asm { L_00cf83e4: }
	__asm { movzx ecx, word ptr [esi + 6] }
	__asm { L_00cf83e8: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { movzx eax, word ptr [esi + 8] }
	__asm { cmp dword ptr [ebp + 0x14], eax }
	__asm { jmp L_00cf8407 }
	__asm { L_00cf83fb: }
	__asm { movzx eax, word ptr [esi + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp + 0x14], ecx }
	__asm { cmp ecx, eax }
	__asm { L_00cf8407: }
	__asm { jbe L_00cf840c }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { L_00cf840c: }
	__asm { mov cx, word ptr [edi + 8] }
	__asm { test cx, cx }
	__asm { je L_00cf84f2 }
	__asm { cmp word ptr [esi], 3 }
	__asm { je L_00cf8429 }
	__asm { movzx ebx, word ptr [esi + 6] }
	__asm { movzx eax, word ptr [esi + 4] }
	__asm { jmp L_00cf8431 }
	__asm { L_00cf8429: }
	__asm { movzx ebx, word ptr [esi + 4] }
	__asm { movzx eax, word ptr [esi + 6] }
	__asm { L_00cf8431: }
	__asm { test bl, 3 }
	__asm { je L_00cf84f2 }
	__asm { cmp cx, 1 }
	__asm { mov dword ptr [ebp - 0x10], 0xf06f24 }
	__asm { je L_00cf844e }
	__asm { mov dword ptr [ebp - 0x10], 0xf06f34 }
	__asm { L_00cf844e: }
	__asm { imul eax, dword ptr [ebp + 0x14] }
	__asm { lea esi, [ebx + 3] }
	__asm { and esi, 0xfffffffc }
	__asm { test eax, eax }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { jbe L_00cf84ec }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { lea edx, [eax*4 + 4] }
	__asm { imul eax, esi }
	__asm { mov ecx, edx }
	__asm { imul edx, esi }
	__asm { imul ecx, ebx }
	__asm { add ecx, dword ptr [ebp - 4] }
	__asm { add eax, ebx }
	__asm { add edx, edi }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edi + eax*4] }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_00cf848b: }
	__asm { mov edi, esi }
	__asm { shl edi, 2 }
	__asm { sub dword ptr [ebp - 0xc], edi }
	__asm { mov edx, ebx }
	__asm { shl edx, 2 }
	__asm { sub eax, edi }
	__asm { sub ecx, edx }
	__asm { cmp esi, ebx }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { jbe L_00cf84c5 }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { L_00cf84a6: }
	__asm { dec dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { sub edx, 4 }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { and edx, 3 }
	__asm { cmp dword ptr [ebp + 0x10], ebx }
	__asm { mov edi, dword ptr [edi + edx*4] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edx], edi }
	__asm { ja L_00cf84a6 }
	__asm { L_00cf84c5: }
	__asm { test ebx, ebx }
	__asm { jbe L_00cf84e4 }
	__asm { mov edx, eax }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { L_00cf84d1: }
	__asm { sub dword ptr [ebp + 0x10], 4 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [edi] }
	__asm { sub edx, 4 }
	__asm { dec dword ptr [ebp - 4] }
	__asm { mov dword ptr [edx], edi }
	__asm { jne L_00cf84d1 }
	__asm { L_00cf84e4: }
	__asm { dec dword ptr [ebp - 0x14] }
	__asm { jne L_00cf848b }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_00cf84ec: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00cf84f2: }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { imul eax, dword ptr [ebp + 0x14] }
	__asm { movzx ecx, word ptr [edi + 0xc] }
	__asm { cmp eax, ecx }
	__asm { jbe L_00cf8503 }
	__asm { mov eax, ecx }
	__asm { L_00cf8503: }
	__asm { push eax }
	__asm { push dword ptr [ebp - 8] }
	__asm { movzx eax, word ptr [edi + 0xa] }
	__asm { push dword ptr [ebp - 4] }
	__asm { add eax, dword ptr [ebp + 0x18] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [edi + 0x1c] }
	__asm { test eax, eax }
	__asm { jl L_00cf851e }
	__asm { L_00cf851c: }
	__asm { xor eax, eax }
	__asm { L_00cf851e: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { leave }
	__asm { ret 0x14 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf8525
extern "C" __declspec(naked) void asm_00cf8525()
{
	__asm { L_00cf8525: }
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov esi, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { movzx eax, word ptr [esi] }
	__asm { xor ecx, ecx }
	__asm { sub eax, ecx }
	__asm { je L_00cf869c }
	__asm { dec eax }
	__asm { je L_00cf8685 }
	__asm { dec eax }
	__asm { je L_00cf8678 }
	__asm { dec eax }
	__asm { je L_00cf85f3 }
	__asm { dec eax }
	__asm { dec eax }
	__asm { je L_00cf8572 }
	__asm { mov eax, 0x80004001 }
	__asm { jmp L_00cf8820 }
	__asm { L_00cf8572: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 0x34] }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { movzx eax, word ptr [esi + 8] }
	__asm { cmp dword ptr [ebp + 0x14], eax }
	__asm { jbe L_00cf8589 }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { L_00cf8589: }
	__asm { cmp dword ptr [ebp + 0x14], ecx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { jbe L_00cf881e }
	__asm { jmp L_00cf8599 }
	__asm { L_00cf8597: }
	__asm { xor ecx, ecx }
	__asm { L_00cf8599: }
	__asm { cmp word ptr [esi + 0xa], cx }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { jbe L_00cf85e3 }
	__asm { L_00cf85a2: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov ebx, dword ptr [eax + ecx*4] }
	__asm { push dword ptr [ebx + 0x30] }
	__asm { push dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call L_00cf8525 }
	__asm { test eax, eax }
	__asm { jl L_00cf8820 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ebx + 0x30] }
	__asm { lea eax, [ecx + eax*4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { add dword ptr [ebp + 0x18], eax }
	__asm { movzx eax, word ptr [esi + 0xa] }
	__asm { inc dword ptr [ebp + 0x10] }
	__asm { cmp dword ptr [ebp + 0x10], eax }
	__asm { jb L_00cf85a2 }
	__asm { L_00cf85e3: }
	__asm { inc dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ebp + 0x14] }
	__asm { jb L_00cf8597 }
	__asm { jmp L_00cf881e }
	__asm { L_00cf85f3: }
	__asm { movzx ecx, word ptr [esi + 4] }
	__asm { movzx eax, word ptr [esi + 6] }
	__asm { mov ebx, ecx }
	__asm { imul ebx, eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { xor edx, edx }
	__asm { div ebx }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { movzx eax, word ptr [esi + 8] }
	__asm { cmp dword ptr [ebp + 0x14], eax }
	__asm { jbe L_00cf8616 }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { L_00cf8616: }
	__asm { and dword ptr [ebp - 0xc], 0 }
	__asm { cmp dword ptr [ebp + 0x14], 0 }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { jbe L_00cf8670 }
	__asm { L_00cf8623: }
	__asm { movzx eax, word ptr [esi + 6] }
	__asm { and dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { jbe L_00cf8665 }
	__asm { L_00cf862f: }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { jbe L_00cf8659 }
	__asm { L_00cf8635: }
	__asm { imul ecx, dword ptr [ebp - 0xc] }
	__asm { movzx ebx, word ptr [esi + 6] }
	__asm { add ecx, eax }
	__asm { imul ecx, ebx }
	__asm { add ecx, dword ptr [ebp - 4] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebx + ecx*4] }
	__asm { mov dword ptr [edx], ecx }
	__asm { movzx ecx, word ptr [esi + 4] }
	__asm { add edx, 4 }
	__asm { inc eax }
	__asm { cmp eax, ecx }
	__asm { jb L_00cf8635 }
	__asm { L_00cf8659: }
	__asm { movzx eax, word ptr [esi + 6] }
	__asm { inc dword ptr [ebp - 4] }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { jb L_00cf862f }
	__asm { L_00cf8665: }
	__asm { inc dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { cmp eax, dword ptr [ebp + 0x14] }
	__asm { jb L_00cf8623 }
	__asm { L_00cf8670: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_00cf86ad }
	__asm { L_00cf8678: }
	__asm { movzx ecx, word ptr [esi + 6] }
	__asm { movzx eax, word ptr [esi + 4] }
	__asm { imul ecx, eax }
	__asm { jmp L_00cf8689 }
	__asm { L_00cf8685: }
	__asm { movzx ecx, word ptr [esi + 6] }
	__asm { L_00cf8689: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { movzx eax, word ptr [esi + 8] }
	__asm { cmp dword ptr [ebp + 0x14], eax }
	__asm { jmp L_00cf86a8 }
	__asm { L_00cf869c: }
	__asm { movzx eax, word ptr [esi + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp + 0x14], ecx }
	__asm { cmp ecx, eax }
	__asm { L_00cf86a8: }
	__asm { jbe L_00cf86ad }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { L_00cf86ad: }
	__asm { mov cx, word ptr [esi + 2] }
	__asm { cmp cx, 1 }
	__asm { je L_00cf870e }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { imul eax, dword ptr [ebp + 0x14] }
	__asm { movzx ecx, cx }
	__asm { dec ecx }
	__asm { je L_00cf8708 }
	__asm { dec ecx }
	__asm { je L_00cf86ec }
	__asm { dec ecx }
	__asm { jne L_00cf8708 }
	__asm { test eax, eax }
	__asm { jbe L_00cf8708 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { sub edx, ecx }
	__asm { L_00cf86d6: }
	__asm { cmp dword ptr [edx + ecx], 0 }
	__asm { je L_00cf86e0 }
	__asm { fld1 }
	__asm { jmp L_00cf86e2 }
	__asm { L_00cf86e0: }
	__asm { fldz }
	__asm { L_00cf86e2: }
	__asm { fstp dword ptr [ecx] }
	__asm { add ecx, 4 }
	__asm { dec eax }
	__asm { jne L_00cf86d6 }
	__asm { jmp L_00cf8708 }
	__asm { L_00cf86ec: }
	__asm { test eax, eax }
	__asm { jbe L_00cf8708 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { sub edx, ecx }
	__asm { L_00cf86f8: }
	__asm { xor ebx, ebx }
	__asm { cmp dword ptr [ecx + edx], ebx }
	__asm { setne bl }
	__asm { mov dword ptr [ecx], ebx }
	__asm { add ecx, 4 }
	__asm { dec eax }
	__asm { jne L_00cf86f8 }
	__asm { L_00cf8708: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00cf870e: }
	__asm { mov cx, word ptr [edi + 8] }
	__asm { test cx, cx }
	__asm { je L_00cf87f4 }
	__asm { cmp word ptr [esi], 3 }
	__asm { je L_00cf872b }
	__asm { movzx ebx, word ptr [esi + 6] }
	__asm { movzx eax, word ptr [esi + 4] }
	__asm { jmp L_00cf8733 }
	__asm { L_00cf872b: }
	__asm { movzx ebx, word ptr [esi + 4] }
	__asm { movzx eax, word ptr [esi + 6] }
	__asm { L_00cf8733: }
	__asm { test bl, 3 }
	__asm { je L_00cf87f4 }
	__asm { cmp cx, 1 }
	__asm { mov dword ptr [ebp - 0x10], 0xf06f24 }
	__asm { je L_00cf8750 }
	__asm { mov dword ptr [ebp - 0x10], 0xf06f34 }
	__asm { L_00cf8750: }
	__asm { imul eax, dword ptr [ebp + 0x14] }
	__asm { lea esi, [ebx + 3] }
	__asm { and esi, 0xfffffffc }
	__asm { test eax, eax }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { jbe L_00cf87ee }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { lea edx, [eax*4 + 4] }
	__asm { imul eax, esi }
	__asm { mov ecx, edx }
	__asm { imul edx, esi }
	__asm { imul ecx, ebx }
	__asm { add ecx, dword ptr [ebp - 4] }
	__asm { add eax, ebx }
	__asm { add edx, edi }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edi + eax*4] }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_00cf878d: }
	__asm { mov edi, esi }
	__asm { shl edi, 2 }
	__asm { sub dword ptr [ebp - 0xc], edi }
	__asm { mov edx, ebx }
	__asm { shl edx, 2 }
	__asm { sub eax, edi }
	__asm { sub ecx, edx }
	__asm { cmp esi, ebx }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { jbe L_00cf87c7 }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { L_00cf87a8: }
	__asm { dec dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { sub edx, 4 }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { and edx, 3 }
	__asm { cmp dword ptr [ebp + 0x10], ebx }
	__asm { mov edi, dword ptr [edi + edx*4] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edx], edi }
	__asm { ja L_00cf87a8 }
	__asm { L_00cf87c7: }
	__asm { test ebx, ebx }
	__asm { jbe L_00cf87e6 }
	__asm { mov edx, eax }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { L_00cf87d3: }
	__asm { sub dword ptr [ebp + 0x10], 4 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [edi] }
	__asm { sub edx, 4 }
	__asm { dec dword ptr [ebp - 4] }
	__asm { mov dword ptr [edx], edi }
	__asm { jne L_00cf87d3 }
	__asm { L_00cf87e6: }
	__asm { dec dword ptr [ebp - 0x14] }
	__asm { jne L_00cf878d }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_00cf87ee: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00cf87f4: }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { imul eax, dword ptr [ebp + 0x14] }
	__asm { movzx ecx, word ptr [edi + 0xc] }
	__asm { cmp eax, ecx }
	__asm { jbe L_00cf8805 }
	__asm { mov eax, ecx }
	__asm { L_00cf8805: }
	__asm { push eax }
	__asm { push dword ptr [ebp - 8] }
	__asm { movzx eax, word ptr [edi + 0xa] }
	__asm { push dword ptr [ebp - 4] }
	__asm { add eax, dword ptr [ebp + 0x18] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [edi + 0x1c] }
	__asm { test eax, eax }
	__asm { jl L_00cf8820 }
	__asm { L_00cf881e: }
	__asm { xor eax, eax }
	__asm { L_00cf8820: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { leave }
	__asm { ret 0x14 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf8827
extern "C" __declspec(naked) void asm_00cf8827()
{
	__asm { L_00cf8827: }
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, dword ptr [edi + 0x18] }
	__asm { mov ebx, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { movzx eax, word ptr [esi] }
	__asm { sub eax, 0 }
	__asm { mov dword ptr [ebp - 8], ebx }
	__asm { je L_00cf899d }
	__asm { dec eax }
	__asm { je L_00cf8986 }
	__asm { dec eax }
	__asm { je L_00cf8979 }
	__asm { dec eax }
	__asm { je L_00cf88f4 }
	__asm { dec eax }
	__asm { dec eax }
	__asm { je L_00cf8873 }
	__asm { mov eax, 0x80004001 }
	__asm { jmp L_00cf8b16 }
	__asm { L_00cf8873: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { xor edx, edx }
	__asm { div dword ptr [edi + 0x34] }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { movzx eax, word ptr [esi + 8] }
	__asm { cmp dword ptr [ebp + 0x14], eax }
	__asm { jbe L_00cf888a }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { L_00cf888a: }
	__asm { and dword ptr [ebp + 8], 0 }
	__asm { cmp dword ptr [ebp + 0x14], 0 }
	__asm { jbe L_00cf8b14 }
	__asm { L_00cf8898: }
	__asm { and dword ptr [ebp + 0x10], 0 }
	__asm { cmp word ptr [esi + 0xa], 0 }
	__asm { jbe L_00cf88e4 }
	__asm { L_00cf88a3: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov ebx, dword ptr [eax + ecx*4] }
	__asm { push dword ptr [ebx + 0x30] }
	__asm { push dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call L_00cf8827 }
	__asm { test eax, eax }
	__asm { jl L_00cf8b16 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ebx + 0x30] }
	__asm { lea eax, [ecx + eax*4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { add dword ptr [ebp + 0x18], eax }
	__asm { movzx eax, word ptr [esi + 0xa] }
	__asm { inc dword ptr [ebp + 0x10] }
	__asm { cmp dword ptr [ebp + 0x10], eax }
	__asm { jb L_00cf88a3 }
	__asm { L_00cf88e4: }
	__asm { inc dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [ebp + 0x14] }
	__asm { jb L_00cf8898 }
	__asm { jmp L_00cf8b14 }
	__asm { L_00cf88f4: }
	__asm { movzx ecx, word ptr [esi + 4] }
	__asm { movzx eax, word ptr [esi + 6] }
	__asm { mov ebx, ecx }
	__asm { imul ebx, eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { xor edx, edx }
	__asm { div ebx }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { movzx eax, word ptr [esi + 8] }
	__asm { cmp dword ptr [ebp + 0x14], eax }
	__asm { jbe L_00cf8917 }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { L_00cf8917: }
	__asm { and dword ptr [ebp - 0xc], 0 }
	__asm { cmp dword ptr [ebp + 0x14], 0 }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { jbe L_00cf8971 }
	__asm { L_00cf8924: }
	__asm { movzx eax, word ptr [esi + 6] }
	__asm { and dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { jbe L_00cf8966 }
	__asm { L_00cf8930: }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { jbe L_00cf895a }
	__asm { L_00cf8936: }
	__asm { imul ecx, dword ptr [ebp - 0xc] }
	__asm { movzx ebx, word ptr [esi + 6] }
	__asm { add ecx, eax }
	__asm { imul ecx, ebx }
	__asm { add ecx, dword ptr [ebp - 4] }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebx + ecx*4] }
	__asm { mov dword ptr [edx], ecx }
	__asm { movzx ecx, word ptr [esi + 4] }
	__asm { add edx, 4 }
	__asm { inc eax }
	__asm { cmp eax, ecx }
	__asm { jb L_00cf8936 }
	__asm { L_00cf895a: }
	__asm { movzx eax, word ptr [esi + 6] }
	__asm { inc dword ptr [ebp - 4] }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { jb L_00cf8930 }
	__asm { L_00cf8966: }
	__asm { inc dword ptr [ebp - 0xc] }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { cmp eax, dword ptr [ebp + 0x14] }
	__asm { jb L_00cf8924 }
	__asm { L_00cf8971: }
	__asm { mov ebx, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { jmp L_00cf89ae }
	__asm { L_00cf8979: }
	__asm { movzx ecx, word ptr [esi + 6] }
	__asm { movzx eax, word ptr [esi + 4] }
	__asm { imul ecx, eax }
	__asm { jmp L_00cf898a }
	__asm { L_00cf8986: }
	__asm { movzx ecx, word ptr [esi + 6] }
	__asm { L_00cf898a: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { xor edx, edx }
	__asm { div ecx }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { movzx eax, word ptr [esi + 8] }
	__asm { cmp dword ptr [ebp + 0x14], eax }
	__asm { jmp L_00cf89a9 }
	__asm { L_00cf899d: }
	__asm { movzx eax, word ptr [esi + 8] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp + 0x14], ecx }
	__asm { cmp ecx, eax }
	__asm { L_00cf89a9: }
	__asm { jbe L_00cf89ae }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { L_00cf89ae: }
	__asm { mov cx, word ptr [esi + 2] }
	__asm { cmp cx, 2 }
	__asm { je L_00cf8a04 }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { imul eax, dword ptr [ebp + 0x14] }
	__asm { movzx ecx, cx }
	__asm { dec ecx }
	__asm { je L_00cf89e3 }
	__asm { dec ecx }
	__asm { je L_00cf89fe }
	__asm { dec ecx }
	__asm { jne L_00cf89fe }
	__asm { test eax, eax }
	__asm { jbe L_00cf89fe }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov ecx, ebx }
	__asm { sub edx, ebx }
	__asm { L_00cf89d6: }
	__asm { fild dword ptr [edx + ecx] }
	__asm { fstp dword ptr [ecx] }
	__asm { add ecx, 4 }
	__asm { dec eax }
	__asm { jne L_00cf89d6 }
	__asm { jmp L_00cf89fe }
	__asm { L_00cf89e3: }
	__asm { test eax, eax }
	__asm { jbe L_00cf89fe }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov ecx, ebx }
	__asm { sub edx, ebx }
	__asm { L_00cf89ee: }
	__asm { xor ebx, ebx }
	__asm { cmp dword ptr [ecx + edx], ebx }
	__asm { setne bl }
	__asm { mov dword ptr [ecx], ebx }
	__asm { add ecx, 4 }
	__asm { dec eax }
	__asm { jne L_00cf89ee }
	__asm { L_00cf89fe: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00cf8a04: }
	__asm { mov cx, word ptr [edi + 8] }
	__asm { test cx, cx }
	__asm { je L_00cf8aea }
	__asm { cmp word ptr [esi], 3 }
	__asm { je L_00cf8a21 }
	__asm { movzx ebx, word ptr [esi + 6] }
	__asm { movzx eax, word ptr [esi + 4] }
	__asm { jmp L_00cf8a29 }
	__asm { L_00cf8a21: }
	__asm { movzx ebx, word ptr [esi + 4] }
	__asm { movzx eax, word ptr [esi + 6] }
	__asm { L_00cf8a29: }
	__asm { test bl, 3 }
	__asm { je L_00cf8aea }
	__asm { cmp cx, 1 }
	__asm { mov dword ptr [ebp - 0x10], 0xf06f24 }
	__asm { je L_00cf8a46 }
	__asm { mov dword ptr [ebp - 0x10], 0xf06f34 }
	__asm { L_00cf8a46: }
	__asm { imul eax, dword ptr [ebp + 0x14] }
	__asm { lea esi, [ebx + 3] }
	__asm { and esi, 0xfffffffc }
	__asm { test eax, eax }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { jbe L_00cf8ae4 }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { lea edx, [eax*4 + 4] }
	__asm { imul eax, esi }
	__asm { mov ecx, edx }
	__asm { imul edx, esi }
	__asm { imul ecx, ebx }
	__asm { add ecx, dword ptr [ebp - 4] }
	__asm { add eax, ebx }
	__asm { add edx, edi }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { lea eax, [edi + eax*4] }
	__asm { mov dword ptr [ebp - 0x14], edx }
	__asm { L_00cf8a83: }
	__asm { mov edi, esi }
	__asm { shl edi, 2 }
	__asm { sub dword ptr [ebp - 0xc], edi }
	__asm { mov edx, ebx }
	__asm { shl edx, 2 }
	__asm { sub eax, edi }
	__asm { sub ecx, edx }
	__asm { cmp esi, ebx }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { jbe L_00cf8abd }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { L_00cf8a9e: }
	__asm { dec dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { sub edx, 4 }
	__asm { mov dword ptr [ebp - 4], edx }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { and edx, 3 }
	__asm { cmp dword ptr [ebp + 0x10], ebx }
	__asm { mov edi, dword ptr [edi + edx*4] }
	__asm { mov edx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [edx], edi }
	__asm { ja L_00cf8a9e }
	__asm { L_00cf8abd: }
	__asm { test ebx, ebx }
	__asm { jbe L_00cf8adc }
	__asm { mov edx, eax }
	__asm { mov dword ptr [ebp + 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { L_00cf8ac9: }
	__asm { sub dword ptr [ebp + 0x10], 4 }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov edi, dword ptr [edi] }
	__asm { sub edx, 4 }
	__asm { dec dword ptr [ebp - 4] }
	__asm { mov dword ptr [edx], edi }
	__asm { jne L_00cf8ac9 }
	__asm { L_00cf8adc: }
	__asm { dec dword ptr [ebp - 0x14] }
	__asm { jne L_00cf8a83 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_00cf8ae4: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00cf8aea: }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { imul eax, dword ptr [ebp + 0x14] }
	__asm { movzx ecx, word ptr [edi + 0xc] }
	__asm { cmp eax, ecx }
	__asm { jbe L_00cf8afb }
	__asm { mov eax, ecx }
	__asm { L_00cf8afb: }
	__asm { push eax }
	__asm { push dword ptr [ebp - 8] }
	__asm { movzx eax, word ptr [edi + 0xa] }
	__asm { push dword ptr [ebp - 4] }
	__asm { add eax, dword ptr [ebp + 0x18] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [edi + 0x1c] }
	__asm { test eax, eax }
	__asm { jl L_00cf8b16 }
	__asm { L_00cf8b14: }
	__asm { xor eax, eax }
	__asm { L_00cf8b16: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { leave }
	__asm { ret 0x14 }
}

extern "C" void fn_00cf661e();
extern "C" void fn_00cf796f();
extern "C" void fn_00cf7f4a();
extern "C" void fn_00cfa6e4();
// FUNCTION: ROBLOXSTUDIO 0x00cfa44c
extern "C" __declspec(naked) void asm_00cfa44c()
{
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov ecx, dword ptr [eax + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov eax, 0xffff0000 }
	__asm { push edi }
	__asm { xor ebx, ebx }
	__asm { xor edi, edi }
	__asm { and ecx, eax }
	__asm { cmp word ptr [esi + 0xa], bx }
	__asm { jne L_00cfa650 }
	__asm { cmp ecx, 0x54580000 }
	__asm { je L_00cfa618 }
	__asm { cmp ecx, 0xfffe0000 }
	__asm { je L_00cfa54e }
	__asm { cmp ecx, eax }
	__asm { jne L_00cfa69b }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movzx eax, word ptr [eax + 4] }
	__asm { sub eax, ebx }
	__asm { je L_00cfa511 }
	__asm { dec eax }
	__asm { je L_00cfa4da }
	__asm { dec eax }
	__asm { jne L_00cfa69b }
	__asm { movzx eax, word ptr [esi + 2] }
	__asm { sub eax, ebx }
	__asm { je L_00cfa4d0 }
	__asm { dec eax }
	__asm { je L_00cfa4c6 }
	__asm { dec eax }
	__asm { jne L_00cfa66e }
	__asm { mov edi, 0xcf7e18 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa4c6: }
	__asm { mov edi, 0xcf7dce }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa4d0: }
	__asm { mov edi, 0xcf7db0 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa4da: }
	__asm { movzx eax, word ptr [esi + 2] }
	__asm { sub eax, ebx }
	__asm { je L_00cfa507 }
	__asm { dec eax }
	__asm { je L_00cfa4fd }
	__asm { dec eax }
	__asm { je L_00cfa678 }
	__asm { dec eax }
	__asm { jne L_00cfa69b }
	__asm { mov edi, 0xcf7d4a }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa4fd: }
	__asm { mov edi, 0xcf7d06 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa507: }
	__asm { mov edi, 0xcf7ce8 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa511: }
	__asm { movzx eax, word ptr [esi + 2] }
	__asm { sub eax, ebx }
	__asm { je L_00cfa544 }
	__asm { dec eax }
	__asm { je L_00cfa53a }
	__asm { dec eax }
	__asm { je L_00cfa530 }
	__asm { dec eax }
	__asm { jne L_00cfa69b }
	__asm { mov edi, 0xcf8234 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa530: }
	__asm { mov edi, 0xcf81f3 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa53a: }
	__asm { mov edi, 0xcf81d5 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa544: }
	__asm { mov edi, 0xcf81d5 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa54e: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movzx eax, word ptr [eax + 4] }
	__asm { sub eax, ebx }
	__asm { je L_00cfa5e1 }
	__asm { dec eax }
	__asm { je L_00cfa5a4 }
	__asm { dec eax }
	__asm { jne L_00cfa69b }
	__asm { movzx eax, word ptr [esi + 2] }
	__asm { sub eax, ebx }
	__asm { je L_00cfa59a }
	__asm { dec eax }
	__asm { je L_00cfa590 }
	__asm { dec eax }
	__asm { je L_00cfa586 }
	__asm { L_00cfa575: }
	__asm { dec eax }
	__asm { jne L_00cfa69b }
	__asm { mov edi, 0xcf81b7 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa586: }
	__asm { mov edi, 0xcf817c }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa590: }
	__asm { mov edi, 0xcf8132 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa59a: }
	__asm { mov edi, 0xcf81b7 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa5a4: }
	__asm { movzx eax, word ptr [esi + 2] }
	__asm { sub eax, ebx }
	__asm { je L_00cfa5d7 }
	__asm { dec eax }
	__asm { je L_00cfa5cd }
	__asm { dec eax }
	__asm { je L_00cfa5c3 }
	__asm { dec eax }
	__asm { jne L_00cfa69b }
	__asm { mov edi, 0xcf80cc }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa5c3: }
	__asm { mov edi, 0xcf806a }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa5cd: }
	__asm { mov edi, 0xcf8088 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa5d7: }
	__asm { mov edi, 0xcf806a }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa5e1: }
	__asm { movzx eax, word ptr [esi + 2] }
	__asm { sub eax, ebx }
	__asm { je L_00cfa60e }
	__asm { dec eax }
	__asm { je L_00cfa696 }
	__asm { dec eax }
	__asm { je L_00cfa604 }
	__asm { dec eax }
	__asm { jne L_00cfa69b }
	__asm { mov edi, 0xcf8018 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa604: }
	__asm { mov edi, 0xcf7fd7 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa60e: }
	__asm { mov edi, 0xcf7fb9 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa618: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movzx eax, word ptr [eax + 4] }
	__asm { dec eax }
	__asm { dec eax }
	__asm { jne L_00cfa69b }
	__asm { movzx eax, word ptr [esi + 2] }
	__asm { sub eax, ebx }
	__asm { je L_00cfa649 }
	__asm { dec eax }
	__asm { je L_00cfa642 }
	__asm { dec eax }
	__asm { je L_00cfa63b }
	__asm { dec eax }
	__asm { jne L_00cfa69b }
	__asm { mov edi, 0xcf7e53 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa63b: }
	__asm { mov edi, 0xcf7ef4 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa642: }
	__asm { mov edi, 0xcf7e90 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa649: }
	__asm { mov edi, 0xcf7e53 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa650: }
	__asm { cmp ecx, 0xfffe0000 }
	__asm { je L_00cfa67f }
	__asm { cmp ecx, eax }
	__asm { jne L_00cfa69b }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movzx eax, word ptr [eax + 4] }
	__asm { sub eax, ebx }
	__asm { je L_00cfa53a }
	__asm { dec eax }
	__asm { je L_00cfa678 }
	__asm { L_00cfa66e: }
	__asm { dec eax }
	__asm { jne L_00cfa69b }
	__asm { mov edi, 0xcf7db0 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa678: }
	__asm { mov edi, 0xcf7ce8 }
	__asm { jmp L_00cfa69b }
	__asm { L_00cfa67f: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movzx eax, word ptr [eax + 4] }
	__asm { sub eax, ebx }
	__asm { je L_00cfa696 }
	__asm { dec eax }
	__asm { je L_00cfa5c3 }
	__asm { jmp L_00cfa575 }
	__asm { L_00cfa696: }
	__asm { mov edi, 0xcf7fb9 }
	__asm { L_00cfa69b: }
	__asm { push 0x44 }
	__asm { call fn_00cf661e }
	__asm { cmp eax, ebx }
	__asm { pop ecx }
	__asm { je L_00cfa6bd }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, eax }
	__asm { push edi }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf796f }
	__asm { mov esi, eax }
	__asm { jmp L_00cfa6bf }
	__asm { L_00cfa6bd: }
	__asm { xor esi, esi }
	__asm { L_00cfa6bf: }
	__asm { cmp esi, ebx }
	__asm { je L_00cfa6d7 }
	__asm { mov ecx, esi }
	__asm { call fn_00cfa6e4 }
	__asm { test eax, eax }
	__asm { jge L_00cfa6db }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00cf7f4a }
	__asm { L_00cfa6d7: }
	__asm { xor eax, eax }
	__asm { jmp L_00cfa6dd }
	__asm { L_00cfa6db: }
	__asm { mov eax, esi }
	__asm { L_00cfa6dd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// branches use labels; absolute references use relocation symbols.

extern "C" void fn_00cf67da();
extern "C" void fn_00cf67e0();
extern "C" void fn_00cf67e6();
extern "C" void fn_00cf792e();
extern "C" void fn_00cf7b7d();
extern "C" void fn_00cfa85a();
// FUNCTION: ROBLOXSTUDIO 0x00cfac44
extern "C" __declspec(naked) void asm_00cfac44()
{
	__asm { mov edi, edi }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { jmp L_00cfac56 }
	__asm { L_00cfac55: }
	__asm { inc esi }
	__asm { L_00cfac56: }
	__asm { movsx eax, byte ptr [esi] }
	__asm { push eax }
	__asm { call fn_00cf67e6 }
	__asm { test eax, eax }
	__asm { pop ecx }
	__asm { jne L_00cfac55 }
	__asm { mov al, byte ptr [esi] }
	__asm { xor ebx, ebx }
	__asm { cmp al, bl }
	__asm { je L_00cfad84 }
	__asm { cmp al, 0x5b }
	__asm { jne L_00cface6 }
	__asm { L_00cfac74: }
	__asm { inc esi }
	__asm { movsx eax, byte ptr [esi] }
	__asm { push eax }
	__asm { call fn_00cf67e6 }
	__asm { test eax, eax }
	__asm { pop ecx }
	__asm { jne L_00cfac74 }
	__asm { movsx eax, byte ptr [esi] }
	__asm { push eax }
	__asm { call fn_00cf67e0 }
	__asm { test eax, eax }
	__asm { pop ecx }
	__asm { je L_00cfad89 }
	__asm { xor edi, edi }
	__asm { jmp L_00cfaca4 }
	__asm { L_00cfac99: }
	__asm { movsx ecx, byte ptr [esi] }
	__asm { lea eax, [edi + edi*4] }
	__asm { lea edi, [ecx + eax*2 - 0x30] }
	__asm { inc esi }
	__asm { L_00cfaca4: }
	__asm { movsx eax, byte ptr [esi] }
	__asm { push eax }
	__asm { call fn_00cf67e0 }
	__asm { test eax, eax }
	__asm { pop ecx }
	__asm { jne L_00cfac99 }
	__asm { jmp L_00cfacb5 }
	__asm { L_00cfacb4: }
	__asm { inc esi }
	__asm { L_00cfacb5: }
	__asm { movsx eax, byte ptr [esi] }
	__asm { push eax }
	__asm { call fn_00cf67e6 }
	__asm { test eax, eax }
	__asm { pop ecx }
	__asm { jne L_00cfacb4 }
	__asm { cmp byte ptr [esi], 0x5d }
	__asm { jne L_00cfad89 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { push edi }
	__asm { call fn_00cfa85a }
	__asm { cmp eax, ebx }
	__asm { je L_00cfad89 }
	__asm { mov dword ptr [ebp + 0xc], ebx }
	__asm { inc esi }
	__asm { jmp L_00cfad7c }
	__asm { L_00cface6: }
	__asm { cmp al, 0x2e }
	__asm { je L_00cfacf7 }
	__asm { cmp dword ptr [ebp + 0xc], ebx }
	__asm { je L_00cfad89 }
	__asm { cmp al, 0x2e }
	__asm { jne L_00cfacf8 }
	__asm { L_00cfacf7: }
	__asm { inc esi }
	__asm { L_00cfacf8: }
	__asm { movsx eax, byte ptr [esi] }
	__asm { push eax }
	__asm { call fn_00cf67e6 }
	__asm { test eax, eax }
	__asm { pop ecx }
	__asm { jne L_00cfacf7 }
	__asm { xor edi, edi }
	__asm { L_00cfad08: }
	__asm { movsx eax, byte ptr [edi + esi] }
	__asm { push eax }
	__asm { call fn_00cf67da }
	__asm { test eax, eax }
	__asm { pop ecx }
	__asm { jne L_00cfad1d }
	__asm { cmp byte ptr [edi + esi], 0x5f }
	__asm { jne L_00cfad20 }
	__asm { L_00cfad1d: }
	__asm { inc edi }
	__asm { jmp L_00cfad08 }
	__asm { L_00cfad20: }
	__asm { cmp edi, ebx }
	__asm { je L_00cfad89 }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov eax, dword ptr [ecx + 0x18] }
	__asm { movzx eax, word ptr [eax + 0xa] }
	__asm { mov dword ptr [ebp + 0xc], ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { L_00cfad34: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ebp + 0xc], eax }
	__asm { jae L_00cfad89 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax + edx*4] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { test eax, eax }
	__asm { je L_00cfad5f }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { add ebx, eax }
	__asm { push edi }
	__asm { mov eax, esi }
	__asm { call fn_00cf792e }
	__asm { test eax, eax }
	__asm { je L_00cfad67 }
	__asm { L_00cfad5f: }
	__asm { inc dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { jmp L_00cfad34 }
	__asm { L_00cfad67: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { call fn_00cf7b7d }
	__asm { test eax, eax }
	__asm { je L_00cfad89 }
	__asm { and dword ptr [ebp + 0xc], 0 }
	__asm { add esi, edi }
	__asm { L_00cfad7c: }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { jmp L_00cfac56 }
	__asm { L_00cfad84: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { jmp L_00cfad8b }
	__asm { L_00cfad89: }
	__asm { xor eax, eax }
	__asm { L_00cfad8b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { leave }
	__asm { ret 8 }
}

extern "C" char g_00e10e94[];
extern "C" char g_00e10e98[];
extern "C" char g_00e10e9c[];
extern "C" char g_00e10ea0[];
extern "C" char g_00e10ea4[];
extern "C" char g_012b55c0[];
extern "C" void fn_00cf67ec();
extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00cfb920
extern "C" __declspec(naked) void asm_00cfb920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e7a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov eax, dword ptr [g_012b55c0] }
	__asm { xor eax, ebp }
	__asm { push eax }
	__asm { lea eax, [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], eax }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov esi, dword ptr [edi] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { jne L_00cfb966 }
	__asm { cmp dword ptr [esi], 1 }
	__asm { je L_00cfba63 }
	__asm { L_00cfb966: }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 4 }
	__asm { cmp dword ptr [eax], 1 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { je L_00cfb9d3 }
	__asm { lea eax, [ebx*4 + 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x1c], 4 }
	__asm { mov dword ptr [ebp - 0x20], 4 }
	__asm { call dword ptr [g_00e10e94] }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { jne L_00cfb9a7 }
	__asm { call dword ptr [g_00e10ea0] }
	__asm { test esi, esi }
	__asm { jne L_00cfb9a7 }
	__asm { call dword ptr [g_00e10ea0] }
	__asm { L_00cfb9a7: }
	__asm { mov edx, dword ptr [edi] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { cmp ebx, dword ptr [edx + 4] }
	__asm { lea eax, [edx + 4] }
	__asm { cmovge ecx, eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea eax, [eax*4 + 0x10] }
	__asm { push eax }
	__asm { push edx }
	__asm { push esi }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [edi] }
	__asm { add esp, 0xc }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { jmp L_00cfba43 }
	__asm { L_00cfb9d3: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x24], 4 }
	__asm { lea eax, [eax*4 + 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebx*4 + 0x10] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 0x28], 4 }
	__asm { call dword ptr [g_00e10e9c] }
	__asm { mov esi, eax }
	__asm { add esp, 0x10 }
	__asm { test esi, esi }
	__asm { jne L_00cfba13 }
	__asm { call dword ptr [g_00e10ea0] }
	__asm { L_00cfba13: }
	__asm { mov dword ptr [edi], esi }
	__asm { jmp L_00cfba3c }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jle L_00cfba2d }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00cfba2d: }
	__asm { mov eax, 0xcfba33 }
	__asm { ret }
	__asm { mov edi, dword ptr [ebp - 0x14] }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { L_00cfba3c: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00cfba43: }
	__asm { mov dword ptr [esi], 1 }
	__asm { or dword ptr [esi + 0xc], 1 }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [esi + 4], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { and ecx, 1 }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { and eax, 2 }
	__asm { or eax, ecx }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { L_00cfba63: }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { cmp ebx, ecx }
	__asm { jle L_00cfba87 }
	__asm { mov eax, ebx }
	__asm { sub eax, ecx }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { lea eax, [ecx + 4] }
	__asm { push 0 }
	__asm { lea eax, [esi + eax*4] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10e98] }
	__asm { add esp, 0xc }
	__asm { L_00cfba87: }
	__asm { mov dword ptr [esi + 8], ebx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp ecx, esi }
	__asm { je L_00cfbaa8 }
	__asm { or eax, 0xffffffff }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00cfbaa6 }
	__asm { push 4 }
	__asm { push dword ptr [edi] }
	__asm { call dword ptr [g_00e10ea4] }
	__asm { add esp, 8 }
	__asm { L_00cfbaa6: }
	__asm { mov dword ptr [edi], esi }
	__asm { L_00cfbaa8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00f101a0[];
extern "C" void fn_00cfd260();
extern "C" void fn_00cfd590();
// FUNCTION: ROBLOXSTUDIO 0x00cfd340
extern "C" __declspec(naked) void asm_00cfd340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { mov esi, 1 }
	__asm { test eax, eax }
	__asm { je L_00cfd55f }
	__asm { cmp byte ptr [eax], 0x31 }
	__asm { jne L_00cfd55f }
	__asm { cmp dword ptr [ebp + 0x24], 0x38 }
	__asm { jne L_00cfd55f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { jne L_00cfd378 }
	__asm { pop edi }
	__asm { lea eax, [esi - 3] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x20 }
	__asm { L_00cfd378: }
	__asm { cmp dword ptr [edi + 0x20], 0 }
	__asm { mov dword ptr [edi + 0x18], 0 }
	__asm { jne L_00cfd393 }
	__asm { mov dword ptr [edi + 0x20], 0xcffcc0 }
	__asm { mov dword ptr [edi + 0x28], 0 }
	__asm { L_00cfd393: }
	__asm { cmp dword ptr [edi + 0x24], 0 }
	__asm { jne L_00cfd3a0 }
	__asm { mov dword ptr [edi + 0x24], 0xcffce0 }
	__asm { L_00cfd3a0: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp ecx, -1 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { mov eax, 6 }
	__asm { cmove ecx, eax }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { test ebx, ebx }
	__asm { jns L_00cfd3bf }
	__asm { xor esi, esi }
	__asm { neg ebx }
	__asm { jmp L_00cfd3cc }
	__asm { L_00cfd3bf: }
	__asm { cmp ebx, 0xf }
	__asm { jle L_00cfd3cc }
	__asm { mov esi, 2 }
	__asm { sub ebx, 0x10 }
	__asm { L_00cfd3cc: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { dec eax }
	__asm { cmp eax, 8 }
	__asm { ja L_00cfd553 }
	__asm { cmp dword ptr [ebp + 0x10], 8 }
	__asm { jne L_00cfd553 }
	__asm { lea eax, [ebx - 8] }
	__asm { cmp eax, 7 }
	__asm { ja L_00cfd553 }
	__asm { cmp ecx, 9 }
	__asm { ja L_00cfd553 }
	__asm { cmp dword ptr [ebp + 0x1c], 4 }
	__asm { ja L_00cfd553 }
	__asm { push 0x16c4 }
	__asm { mov eax, 9 }
	__asm { cmp ebx, 8 }
	__asm { push 1 }
	__asm { push dword ptr [edi + 0x28] }
	__asm { cmove ebx, eax }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_00cfd547 }
	__asm { mov dword ptr [edi + 0x1c], eax }
	__asm { mov dword ptr [eax + 0x18], esi }
	__asm { mov dword ptr [eax + 0x30], ebx }
	__asm { mov ecx, ebx }
	__asm { mov ebx, eax }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [eax + 0x1c], 0 }
	__asm { mov esi, 1 }
	__asm { shl esi, cl }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { add ecx, 7 }
	__asm { mov dword ptr [ebx + 0x50], ecx }
	__asm { push 2 }
	__asm { lea eax, [esi - 1] }
	__asm { mov dword ptr [ebx + 0x34], eax }
	__asm { mov eax, 1 }
	__asm { shl eax, cl }
	__asm { add ecx, 2 }
	__asm { mov dword ptr [ebx + 0x2c], esi }
	__asm { push esi }
	__asm { mov dword ptr [ebx + 0x4c], eax }
	__asm { dec eax }
	__asm { mov dword ptr [ebx + 0x54], eax }
	__asm { mov eax, 0xaaaaaaab }
	__asm { mul ecx }
	__asm { shr edx, 1 }
	__asm { mov dword ptr [ebx + 0x58], edx }
	__asm { push dword ptr [edi + 0x28] }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { call eax }
	__asm { push 2 }
	__asm { push dword ptr [ebx + 0x2c] }
	__asm { mov dword ptr [ebx + 0x38], eax }
	__asm { push dword ptr [edi + 0x28] }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { call eax }
	__asm { push 2 }
	__asm { push dword ptr [ebx + 0x4c] }
	__asm { mov dword ptr [ebx + 0x40], eax }
	__asm { push dword ptr [edi + 0x28] }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { call eax }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebx + 0x44], eax }
	__asm { lea ecx, [ecx + 6] }
	__asm { mov eax, 1 }
	__asm { shl eax, cl }
	__asm { push 4 }
	__asm { mov dword ptr [ebx + 0x16c0], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebx + 0x169c], eax }
	__asm { push dword ptr [edi + 0x28] }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { call eax }
	__asm { mov esi, dword ptr [ebx + 0x169c] }
	__asm { add esp, 0x30 }
	__asm { cmp dword ptr [ebx + 0x38], 0 }
	__asm { mov edx, eax }
	__asm { lea ecx, [esi*4] }
	__asm { mov dword ptr [ebx + 8], edx }
	__asm { mov dword ptr [ebx + 0xc], ecx }
	__asm { je L_00cfd532 }
	__asm { cmp dword ptr [ebx + 0x40], 0 }
	__asm { je L_00cfd532 }
	__asm { cmp dword ptr [ebx + 0x44], 0 }
	__asm { je L_00cfd532 }
	__asm { test edx, edx }
	__asm { je L_00cfd532 }
	__asm { mov eax, esi }
	__asm { shr eax, 1 }
	__asm { push edi }
	__asm { lea eax, [edx + eax*2] }
	__asm { mov dword ptr [ebx + 0x16a4], eax }
	__asm { lea eax, [edx + esi*2] }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebx + 0x1698], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebx + 0x84], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebx + 0x88], eax }
	__asm { mov byte ptr [ebx + 0x24], 8 }
	__asm { call fn_00cfd590 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x20 }
	__asm { L_00cfd532: }
	__asm { mov dword ptr [ebx + 4], 0x29a }
	__asm { mov eax, dword ptr [g_00f101a0] }
	__asm { push edi }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { call fn_00cfd260 }
	__asm { L_00cfd547: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, 0xfffffffc }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x20 }
	__asm { L_00cfd553: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov eax, 0xfffffffe }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x20 }
	__asm { L_00cfd55f: }
	__asm { mov eax, 0xfffffffa }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00cff950
extern "C" __declspec(naked) void asm_00cff950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [edx + 0x1c] }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x34], 0 }
	__asm { mov edi, 1 }
	__asm { jne L_00cff987 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov eax, edi }
	__asm { shl eax, cl }
	__asm { push edi }
	__asm { push eax }
	__asm { push dword ptr [edx + 0x28] }
	__asm { mov eax, dword ptr [edx + 0x20] }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { test eax, eax }
	__asm { jne L_00cff987 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cff987: }
	__asm { cmp dword ptr [esi + 0x28], 0 }
	__asm { jne L_00cff9a3 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { shl edi, cl }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x28], edi }
	__asm { L_00cff9a3: }
	__asm { mov edi, dword ptr [esi + 0x28] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { cmp ebx, edi }
	__asm { jb L_00cff9d4 }
	__asm { push edi }
	__asm { sub eax, edi }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cff9d4: }
	__asm { sub edi, dword ptr [esi + 0x30] }
	__asm { cmp edi, ebx }
	__asm { cmova edi, ebx }
	__asm { sub eax, ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { add eax, dword ptr [esi + 0x30] }
	__asm { push eax }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { sub ebx, edi }
	__asm { je L_00cffa15 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { sub eax, ebx }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call fn_00cf67fe }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [esi + 0x30], ebx }
	__asm { pop ebx }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00cffa15: }
	__asm { add dword ptr [esi + 0x30], edi }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { xor edx, edx }
	__asm { cmp eax, dword ptr [esi + 0x28] }
	__asm { cmove eax, edx }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { cmp eax, dword ptr [esi + 0x28] }
	__asm { jae L_00cffa33 }
	__asm { add eax, edi }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { L_00cffa33: }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00d00070();
extern "C" void fn_00d00180();
extern "C" void fn_00d001e0();
extern "C" void fn_00d002d0();
extern "C" void fn_00d004d0();
extern "C" void fn_00d00940();
extern "C" void fn_00d00cb0();
extern "C" void fn_00d00f00();
// FUNCTION: ROBLOXSTUDIO 0x00cffe10
extern "C" __declspec(naked) void asm_00cffe10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [edi + 0x84], 0 }
	__asm { jle L_00cffe85 }
	__asm { mov ebx, dword ptr [edi] }
	__asm { cmp dword ptr [ebx + 0x2c], 2 }
	__asm { jne L_00cffe41 }
	__asm { push edi }
	__asm { call fn_00d00940 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebx + 0x2c], eax }
	__asm { L_00cffe41: }
	__asm { lea eax, [edi + 0xb18] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00d002d0 }
	__asm { lea eax, [edi + 0xb24] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00d002d0 }
	__asm { push edi }
	__asm { call fn_00d001e0 }
	__asm { mov ecx, dword ptr [edi + 0x16a8] }
	__asm { mov edx, dword ptr [edi + 0x16ac] }
	__asm { add ecx, 0xa }
	__asm { add edx, 0xa }
	__asm { shr ecx, 3 }
	__asm { shr edx, 3 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { cmp edx, ecx }
	__asm { ja L_00cffe8a }
	__asm { jmp L_00cffe88 }
	__asm { L_00cffe85: }
	__asm { lea edx, [esi + 5] }
	__asm { L_00cffe88: }
	__asm { mov ecx, edx }
	__asm { L_00cffe8a: }
	__asm { lea eax, [esi + 4] }
	__asm { cmp eax, ecx }
	__asm { ja L_00cffeac }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00cffeac }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00d00070 }
	__asm { add esp, 0x10 }
	__asm { jmp L_00cffff1 }
	__asm { L_00cffeac: }
	__asm { cmp dword ptr [edi + 0x88], 4 }
	__asm { je L_00cfff6b }
	__asm { cmp edx, ecx }
	__asm { je L_00cfff6b }
	__asm { mov ecx, dword ptr [edi + 0x16bc] }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { cmp ecx, 0xd }
	__asm { jle L_00cfff1e }
	__asm { mov edx, dword ptr [edi + 0x14] }
	__asm { lea esi, [ebx + 4] }
	__asm { mov ax, si }
	__asm { shl ax, cl }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { or word ptr [edi + 0x16b8], ax }
	__asm { movzx eax, byte ptr [edi + 0x16b8] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { inc dword ptr [edi + 0x14] }
	__asm { movzx eax, byte ptr [edi + 0x16b9] }
	__asm { mov edx, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { mov eax, dword ptr [edi + 0x16bc] }
	__asm { inc dword ptr [edi + 0x14] }
	__asm { mov cl, 0x10 }
	__asm { sub cl, al }
	__asm { shr si, cl }
	__asm { add eax, -0xd }
	__asm { mov word ptr [edi + 0x16b8], si }
	__asm { jmp L_00cfff2e }
	__asm { L_00cfff1e: }
	__asm { lea eax, [ebx + 4] }
	__asm { shl ax, cl }
	__asm { or word ptr [edi + 0x16b8], ax }
	__asm { lea eax, [ecx + 3] }
	__asm { L_00cfff2e: }
	__asm { mov dword ptr [edi + 0x16bc], eax }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 0xb28] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 0xb1c] }
	__asm { inc eax }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00d00f00 }
	__asm { lea eax, [edi + 0x988] }
	__asm { push eax }
	__asm { lea eax, [edi + 0x94] }
	__asm { push eax }
	__asm { push edi }
	__asm { call fn_00d004d0 }
	__asm { add esp, 0x1c }
	__asm { jmp L_00cffff1 }
	__asm { L_00cfff6b: }
	__asm { mov ecx, dword ptr [edi + 0x16bc] }
	__asm { mov ebx, dword ptr [ebp + 0x14] }
	__asm { cmp ecx, 0xd }
	__asm { jle L_00cfffc8 }
	__asm { mov edx, dword ptr [edi + 0x14] }
	__asm { lea esi, [ebx + 2] }
	__asm { mov ax, si }
	__asm { shl ax, cl }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { or word ptr [edi + 0x16b8], ax }
	__asm { movzx eax, byte ptr [edi + 0x16b8] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { inc dword ptr [edi + 0x14] }
	__asm { movzx eax, byte ptr [edi + 0x16b9] }
	__asm { mov edx, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { mov eax, dword ptr [edi + 0x16bc] }
	__asm { inc dword ptr [edi + 0x14] }
	__asm { mov cl, 0x10 }
	__asm { sub cl, al }
	__asm { shr si, cl }
	__asm { add eax, -0xd }
	__asm { mov word ptr [edi + 0x16b8], si }
	__asm { jmp L_00cfffd8 }
	__asm { L_00cfffc8: }
	__asm { lea eax, [ebx + 2] }
	__asm { shl ax, cl }
	__asm { or word ptr [edi + 0x16b8], ax }
	__asm { lea eax, [ecx + 3] }
	__asm { L_00cfffd8: }
	__asm { push 0xf10b00 }
	__asm { push 0xf10680 }
	__asm { push edi }
	__asm { mov dword ptr [edi + 0x16bc], eax }
	__asm { call fn_00d004d0 }
	__asm { add esp, 0xc }
	__asm { L_00cffff1: }
	__asm { push edi }
	__asm { call fn_00d00cb0 }
	__asm { add esp, 4 }
	__asm { test ebx, ebx }
	__asm { je L_00d00007 }
	__asm { push edi }
	__asm { call fn_00d00180 }
	__asm { add esp, 4 }
	__asm { L_00d00007: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00d01130();
// FUNCTION: ROBLOXSTUDIO 0x00d00f00
extern "C" __declspec(naked) void asm_00d00f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 0x16bc] }
	__asm { cmp ecx, 0xb }
	__asm { jle L_00d00f69 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { add edi, 0xfffffeff }
	__asm { mov ax, di }
	__asm { shl ax, cl }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { or word ptr [esi + 0x16b8], ax }
	__asm { movzx eax, byte ptr [esi + 0x16b8] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { movzx eax, byte ptr [esi + 0x16b9] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { mov eax, dword ptr [esi + 0x16bc] }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { mov cl, 0x10 }
	__asm { sub cl, al }
	__asm { shr di, cl }
	__asm { add eax, -0xb }
	__asm { mov word ptr [esi + 0x16b8], di }
	__asm { jmp L_00d00f7e }
	__asm { L_00d00f69: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 0xfffffeff }
	__asm { shl ax, cl }
	__asm { or word ptr [esi + 0x16b8], ax }
	__asm { lea eax, [ecx + 5] }
	__asm { L_00d00f7e: }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [esi + 0x16bc], eax }
	__asm { cmp ecx, 0xb }
	__asm { jle L_00d00fdb }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { dec edi }
	__asm { mov ax, di }
	__asm { shl ax, cl }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { or word ptr [esi + 0x16b8], ax }
	__asm { movzx eax, byte ptr [esi + 0x16b8] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { movzx eax, byte ptr [esi + 0x16b9] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { mov eax, dword ptr [esi + 0x16bc] }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { mov cl, 0x10 }
	__asm { sub cl, al }
	__asm { shr di, cl }
	__asm { add eax, -0xb }
	__asm { mov word ptr [esi + 0x16b8], di }
	__asm { jmp L_00d00fec }
	__asm { L_00d00fdb: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { dec eax }
	__asm { shl ax, cl }
	__asm { or word ptr [esi + 0x16b8], ax }
	__asm { lea eax, [ecx + 5] }
	__asm { L_00d00fec: }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [esi + 0x16bc], eax }
	__asm { cmp ecx, 0xc }
	__asm { jle L_00d0104b }
	__asm { mov edi, dword ptr [ebp + 0x14] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { add edi, -4 }
	__asm { mov ax, di }
	__asm { shl ax, cl }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { or word ptr [esi + 0x16b8], ax }
	__asm { movzx eax, byte ptr [esi + 0x16b8] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { movzx eax, byte ptr [esi + 0x16b9] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { mov eax, dword ptr [esi + 0x16bc] }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { mov cl, 0x10 }
	__asm { sub cl, al }
	__asm { shr di, cl }
	__asm { add eax, -0xc }
	__asm { mov word ptr [esi + 0x16b8], di }
	__asm { jmp L_00d0105e }
	__asm { L_00d0104b: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { add eax, -4 }
	__asm { shl ax, cl }
	__asm { or word ptr [esi + 0x16b8], ax }
	__asm { lea eax, [ecx + 4] }
	__asm { L_00d0105e: }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [esi + 0x16bc], eax }
	__asm { cmp dword ptr [ebp + 0x14], ebx }
	__asm { jle L_00d010fb }
	__asm { nop }
	__asm { L_00d01070: }
	__asm { mov ecx, dword ptr [esi + 0x16bc] }
	__asm { movzx eax, byte ptr [ebx + 0xf105a4] }
	__asm { cmp ecx, 0xd }
	__asm { jle L_00d010d6 }
	__asm { movzx edi, word ptr [esi + eax*4 + 0xa7e] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov ax, di }
	__asm { shl ax, cl }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { or word ptr [esi + 0x16b8], ax }
	__asm { movzx eax, byte ptr [esi + 0x16b8] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { movzx eax, byte ptr [esi + 0x16b9] }
	__asm { mov edx, dword ptr [esi + 0x14] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov byte ptr [edx + ecx], al }
	__asm { mov eax, dword ptr [esi + 0x16bc] }
	__asm { inc dword ptr [esi + 0x14] }
	__asm { mov cl, 0x10 }
	__asm { sub cl, al }
	__asm { shr di, cl }
	__asm { add eax, -0xd }
	__asm { mov word ptr [esi + 0x16b8], di }
	__asm { jmp L_00d010eb }
	__asm { L_00d010d6: }
	__asm { mov ax, word ptr [esi + eax*4 + 0xa7e] }
	__asm { shl ax, cl }
	__asm { or word ptr [esi + 0x16b8], ax }
	__asm { lea eax, [ecx + 3] }
	__asm { L_00d010eb: }
	__asm { inc ebx }
	__asm { mov dword ptr [esi + 0x16bc], eax }
	__asm { cmp ebx, dword ptr [ebp + 0x14] }
	__asm { jl L_00d01070 }
	__asm { L_00d010fb: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { dec eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x94] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00d01130 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { dec eax }
	__asm { push eax }
	__asm { lea eax, [esi + 0x988] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00d01130 }
	__asm { add esp, 0x18 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00d01130
extern "C" __declspec(naked) void asm_00d01130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x14 }
	__asm { movzx ecx, word ptr [eax + 2] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { xor ebx, ebx }
	__asm { lea esi, [edi + 8] }
	__asm { lea edx, [edi + 5] }
	__asm { test ecx, ecx }
	__asm { jne L_00d01157 }
	__asm { mov esi, 0x8a }
	__asm { lea edx, [edi + 4] }
	__asm { L_00d01157: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { test eax, eax }
	__asm { js L_00d01609 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { add eax, 6 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { inc eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00d01172: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { inc ebx }
	__asm { movzx eax, word ptr [eax] }
	__asm { mov dword ptr [ebp + 0x10], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { cmp ebx, esi }
	__asm { jge L_00d0118f }
	__asm { cmp ecx, dword ptr [ebp + 0x10] }
	__asm { je L_00d015f9 }
	__asm { L_00d0118f: }
	__asm { cmp ebx, edx }
	__asm { jge L_00d01242 }
	__asm { lea edx, [eax + 0xa7e] }
	__asm { lea edi, [eax + 0xa7c] }
	__asm { lea edx, [edx + ecx*4] }
	__asm { lea edi, [edi + ecx*4] }
	__asm { mov dword ptr [ebp - 0x10], edx }
	__asm { mov dword ptr [ebp - 0xc], edi }
	__asm { nop }
	__asm { L_00d011b0: }
	__asm { movzx esi, word ptr [edx] }
	__asm { mov ecx, dword ptr [eax + 0x16bc] }
	__asm { mov edx, 0x10 }
	__asm { sub edx, esi }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { cmp ecx, edx }
	__asm { jle L_00d0121e }
	__asm { movzx edi, word ptr [edi] }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { mov dx, di }
	__asm { shl dx, cl }
	__asm { or word ptr [eax + 0x16b8], dx }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { movzx ecx, byte ptr [eax + 0x16b8] }
	__asm { mov byte ptr [esi + edx], cl }
	__asm { inc dword ptr [eax + 0x14] }
	__asm { movzx ecx, byte ptr [eax + 0x16b9] }
	__asm { mov esi, dword ptr [eax + 0x14] }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov byte ptr [esi + edx], cl }
	__asm { mov edx, dword ptr [eax + 0x16bc] }
	__asm { inc dword ptr [eax + 0x14] }
	__asm { mov cl, 0x10 }
	__asm { sub cl, dl }
	__asm { shr di, cl }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { add ecx, -0x10 }
	__asm { add ecx, edx }
	__asm { mov word ptr [eax + 0x16b8], di }
	__asm { mov edi, dword ptr [ebp - 0xc] }
	__asm { jmp L_00d0122d }
	__asm { L_00d0121e: }
	__asm { mov dx, word ptr [edi] }
	__asm { shl dx, cl }
	__asm { or word ptr [eax + 0x16b8], dx }
	__asm { add ecx, esi }
	__asm { L_00d0122d: }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [eax + 0x16bc], ecx }
	__asm { dec ebx }
	__asm { jne L_00d011b0 }
	__asm { jmp L_00d015cb }
	__asm { L_00d01242: }
	__asm { test ecx, ecx }
	__asm { je L_00d013df }
	__asm { cmp ecx, edi }
	__asm { je L_00d012e7 }
	__asm { movzx edi, word ptr [eax + ecx*4 + 0xa7e] }
	__asm { mov esi, dword ptr [eax + 0x16bc] }
	__asm { mov edx, 0x10 }
	__asm { sub edx, edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { cmp esi, edx }
	__asm { jle L_00d012c9 }
	__asm { movzx edi, word ptr [eax + ecx*4 + 0xa7c] }
	__asm { mov ecx, esi }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { mov dx, di }
	__asm { shl dx, cl }
	__asm { or word ptr [eax + 0x16b8], dx }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { movzx ecx, byte ptr [eax + 0x16b8] }
	__asm { mov byte ptr [esi + edx], cl }
	__asm { inc dword ptr [eax + 0x14] }
	__asm { movzx ecx, byte ptr [eax + 0x16b9] }
	__asm { mov esi, dword ptr [eax + 0x14] }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov byte ptr [esi + edx], cl }
	__asm { mov edx, dword ptr [eax + 0x16bc] }
	__asm { inc dword ptr [eax + 0x14] }
	__asm { mov cl, 0x10 }
	__asm { sub cl, dl }
	__asm { shr di, cl }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add ecx, -0x10 }
	__asm { add ecx, edx }
	__asm { mov word ptr [eax + 0x16b8], di }
	__asm { jmp L_00d012e0 }
	__asm { L_00d012c9: }
	__asm { mov dx, word ptr [eax + ecx*4 + 0xa7c] }
	__asm { mov ecx, esi }
	__asm { shl dx, cl }
	__asm { lea ecx, [esi + edi] }
	__asm { or word ptr [eax + 0x16b8], dx }
	__asm { L_00d012e0: }
	__asm { mov dword ptr [eax + 0x16bc], ecx }
	__asm { dec ebx }
	__asm { L_00d012e7: }
	__asm { movzx esi, word ptr [eax + 0xabe] }
	__asm { mov ecx, dword ptr [eax + 0x16bc] }
	__asm { mov edx, 0x10 }
	__asm { sub edx, esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp ecx, edx }
	__asm { jle L_00d0135a }
	__asm { movzx edi, word ptr [eax + 0xabc] }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { mov dx, di }
	__asm { shl dx, cl }
	__asm { or word ptr [eax + 0x16b8], dx }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { movzx ecx, byte ptr [eax + 0x16b8] }
	__asm { mov byte ptr [esi + edx], cl }
	__asm { inc dword ptr [eax + 0x14] }
	__asm { movzx ecx, byte ptr [eax + 0x16b9] }
	__asm { mov esi, dword ptr [eax + 0x14] }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov byte ptr [esi + edx], cl }
	__asm { mov edx, dword ptr [eax + 0x16bc] }
	__asm { inc dword ptr [eax + 0x14] }
	__asm { mov cl, 0x10 }
	__asm { sub cl, dl }
	__asm { shr di, cl }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add ecx, -0x10 }
	__asm { add ecx, edx }
	__asm { mov word ptr [eax + 0x16b8], di }
	__asm { jmp L_00d0136d }
	__asm { L_00d0135a: }
	__asm { mov dx, word ptr [eax + 0xabc] }
	__asm { shl dx, cl }
	__asm { or word ptr [eax + 0x16b8], dx }
	__asm { add ecx, esi }
	__asm { L_00d0136d: }
	__asm { mov dword ptr [eax + 0x16bc], ecx }
	__asm { cmp ecx, 0xe }
	__asm { jle L_00d013ca }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { lea edi, [ebx - 3] }
	__asm { mov dx, di }
	__asm { shl dx, cl }
	__asm { or word ptr [eax + 0x16b8], dx }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { movzx ecx, byte ptr [eax + 0x16b8] }
	__asm { mov byte ptr [esi + edx], cl }
	__asm { inc dword ptr [eax + 0x14] }
	__asm { movzx ecx, byte ptr [eax + 0x16b9] }
	__asm { mov esi, dword ptr [eax + 0x14] }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov byte ptr [esi + edx], cl }
	__asm { mov edx, dword ptr [eax + 0x16bc] }
	__asm { inc dword ptr [eax + 0x14] }
	__asm { mov cl, 0x10 }
	__asm { sub cl, dl }
	__asm { shr di, cl }
	__asm { lea ecx, [edx - 0xe] }
	__asm { mov word ptr [eax + 0x16b8], di }
	__asm { jmp L_00d015c5 }
	__asm { L_00d013ca: }
	__asm { lea edx, [ebx - 3] }
	__asm { shl dx, cl }
	__asm { or word ptr [eax + 0x16b8], dx }
	__asm { add ecx, 2 }
	__asm { jmp L_00d015c5 }
	__asm { L_00d013df: }
	__asm { mov ecx, dword ptr [eax + 0x16bc] }
	__asm { mov edx, 0x10 }
	__asm { cmp ebx, 0xa }
	__asm { jg L_00d014e0 }
	__asm { movzx esi, word ptr [eax + 0xac2] }
	__asm { sub edx, esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp ecx, edx }
	__asm { jle L_00d0145b }
	__asm { movzx edi, word ptr [eax + 0xac0] }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { mov dx, di }
	__asm { shl dx, cl }
	__asm { or word ptr [eax + 0x16b8], dx }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { movzx ecx, byte ptr [eax + 0x16b8] }
	__asm { mov byte ptr [esi + edx], cl }
	__asm { inc dword ptr [eax + 0x14] }
	__asm { movzx ecx, byte ptr [eax + 0x16b9] }
	__asm { mov esi, dword ptr [eax + 0x14] }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov byte ptr [esi + edx], cl }
	__asm { mov edx, dword ptr [eax + 0x16bc] }
	__asm { inc dword ptr [eax + 0x14] }
	__asm { mov cl, 0x10 }
	__asm { sub cl, dl }
	__asm { shr di, cl }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add ecx, -0x10 }
	__asm { add ecx, edx }
	__asm { mov word ptr [eax + 0x16b8], di }
	__asm { jmp L_00d0146e }
	__asm { L_00d0145b: }
	__asm { mov dx, word ptr [eax + 0xac0] }
	__asm { shl dx, cl }
	__asm { or word ptr [eax + 0x16b8], dx }
	__asm { add ecx, esi }
	__asm { L_00d0146e: }
	__asm { mov dword ptr [eax + 0x16bc], ecx }
	__asm { cmp ecx, 0xd }
	__asm { jle L_00d014cb }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { lea edi, [ebx - 3] }
	__asm { mov dx, di }
	__asm { shl dx, cl }
	__asm { or word ptr [eax + 0x16b8], dx }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { movzx ecx, byte ptr [eax + 0x16b8] }
	__asm { mov byte ptr [esi + edx], cl }
	__asm { inc dword ptr [eax + 0x14] }
	__asm { movzx ecx, byte ptr [eax + 0x16b9] }
	__asm { mov esi, dword ptr [eax + 0x14] }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov byte ptr [esi + edx], cl }
	__asm { mov edx, dword ptr [eax + 0x16bc] }
	__asm { inc dword ptr [eax + 0x14] }
	__asm { mov cl, 0x10 }
	__asm { sub cl, dl }
	__asm { shr di, cl }
	__asm { lea ecx, [edx - 0xd] }
	__asm { mov word ptr [eax + 0x16b8], di }
	__asm { jmp L_00d015c5 }
	__asm { L_00d014cb: }
	__asm { lea edx, [ebx - 3] }
	__asm { shl dx, cl }
	__asm { or word ptr [eax + 0x16b8], dx }
	__asm { add ecx, 3 }
	__asm { jmp L_00d015c5 }
	__asm { L_00d014e0: }
	__asm { movzx esi, word ptr [eax + 0xac6] }
	__asm { sub edx, esi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { cmp ecx, edx }
	__asm { jle L_00d01548 }
	__asm { movzx edi, word ptr [eax + 0xac4] }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { mov dx, di }
	__asm { shl dx, cl }
	__asm { or word ptr [eax + 0x16b8], dx }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { movzx ecx, byte ptr [eax + 0x16b8] }
	__asm { mov byte ptr [esi + edx], cl }
	__asm { inc dword ptr [eax + 0x14] }
	__asm { movzx ecx, byte ptr [eax + 0x16b9] }
	__asm { mov esi, dword ptr [eax + 0x14] }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov byte ptr [esi + edx], cl }
	__asm { mov edx, dword ptr [eax + 0x16bc] }
	__asm { inc dword ptr [eax + 0x14] }
	__asm { mov cl, 0x10 }
	__asm { sub cl, dl }
	__asm { shr di, cl }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { add ecx, -0x10 }
	__asm { add ecx, edx }
	__asm { mov word ptr [eax + 0x16b8], di }
	__asm { jmp L_00d0155b }
	__asm { L_00d01548: }
	__asm { mov dx, word ptr [eax + 0xac4] }
	__asm { shl dx, cl }
	__asm { or word ptr [eax + 0x16b8], dx }
	__asm { add ecx, esi }
	__asm { L_00d0155b: }
	__asm { mov dword ptr [eax + 0x16bc], ecx }
	__asm { cmp ecx, 9 }
	__asm { jle L_00d015b5 }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { lea edi, [ebx - 0xb] }
	__asm { mov dx, di }
	__asm { shl dx, cl }
	__asm { or word ptr [eax + 0x16b8], dx }
	__asm { mov edx, dword ptr [eax + 0x14] }
	__asm { movzx ecx, byte ptr [eax + 0x16b8] }
	__asm { mov byte ptr [esi + edx], cl }
	__asm { inc dword ptr [eax + 0x14] }
	__asm { movzx ecx, byte ptr [eax + 0x16b9] }
	__asm { mov esi, dword ptr [eax + 0x14] }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov byte ptr [esi + edx], cl }
	__asm { mov edx, dword ptr [eax + 0x16bc] }
	__asm { inc dword ptr [eax + 0x14] }
	__asm { mov cl, 0x10 }
	__asm { sub cl, dl }
	__asm { shr di, cl }
	__asm { lea ecx, [edx - 9] }
	__asm { mov word ptr [eax + 0x16b8], di }
	__asm { jmp L_00d015c5 }
	__asm { L_00d015b5: }
	__asm { lea edx, [ebx - 0xb] }
	__asm { shl dx, cl }
	__asm { or word ptr [eax + 0x16b8], dx }
	__asm { add ecx, 7 }
	__asm { L_00d015c5: }
	__asm { mov dword ptr [eax + 0x16bc], ecx }
	__asm { L_00d015cb: }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { xor ebx, ebx }
	__asm { mov edi, ecx }
	__asm { test edx, edx }
	__asm { jne L_00d015e3 }
	__asm { mov esi, 0x8a }
	__asm { lea edx, [ebx + 3] }
	__asm { jmp L_00d015f9 }
	__asm { L_00d015e3: }
	__asm { cmp ecx, edx }
	__asm { jne L_00d015f1 }
	__asm { mov esi, 6 }
	__asm { lea edx, [esi - 3] }
	__asm { jmp L_00d015f9 }
	__asm { L_00d015f1: }
	__asm { mov esi, 7 }
	__asm { lea edx, [esi - 3] }
	__asm { L_00d015f9: }
	__asm { add dword ptr [ebp + 0xc], 4 }
	__asm { dec dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { jne L_00d01172 }
	__asm { L_00d01609: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1001c[];
extern "C" char g_00e1002c[];
extern "C" char g_00e101c0[];
extern "C" char g_012bbcd0[];
extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
extern "C" void fn_00d03390();
// FUNCTION: ROBLOXSTUDIO 0x00d03250
extern "C" __declspec(naked) void asm_00d03250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x110 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e1002c] }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xf0000000 }
	__asm { push 1 }
	__asm { push 0xf10efc }
	__asm { mov edi, ecx }
	__asm { push 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], 0x100 }
	__asm { call ebx }
	__asm { mov esi, dword ptr [g_00e101c0] }
	__asm { test eax, eax }
	__asm { jne L_00d032aa }
	__asm { call esi }
	__asm { cmp eax, 0x80090016 }
	__asm { jne L_00d0331c }
	__asm { push 0xf0000008 }
	__asm { push 1 }
	__asm { push 0xf10efc }
	__asm { push 0 }
	__asm { push edi }
	__asm { call ebx }
	__asm { test eax, eax }
	__asm { jne L_00d032aa }
	__asm { jmp L_00d032fa }
	__asm { L_00d032aa: }
	__asm { mov edx, dword ptr [g_012bbcd0] }
	__asm { mov ecx, edx }
	__asm { lea ebx, [ecx + 1] }
	__asm { L_00d032b5: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00d032b5 }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x110] }
	__asm { push eax }
	__asm { sub ecx, ebx }
	__asm { push ecx }
	__asm { push edx }
	__asm { call fn_00d03390 }
	__asm { add esp, 0x10 }
	__asm { lea eax, [edi + 4] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { lea eax, [ebp - 0x110] }
	__asm { push eax }
	__asm { push dword ptr [edi] }
	__asm { call dword ptr [g_00e1001c] }
	__asm { test eax, eax }
	__asm { je L_00d0333e }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d032fa: }
	__asm { call esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0xf10f28 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00d0331c: }
	__asm { call esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0xf10f50 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00d0333e: }
	__asm { call esi }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0xf10f78 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

// FUNCTION: ROBLOXSTUDIO 0x00d03390
extern "C" __declspec(naked) void asm_00d03390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00d034cf }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { test esi, esi }
	__asm { je L_00d034cf }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { xor ecx, ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { add eax, edi }
	__asm { xor edx, edx }
	__asm { test ebx, ebx }
	__asm { sete cl }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { cmp edi, eax }
	__asm { jae L_00d034bf }
	__asm { L_00d033d1: }
	__asm { cmp byte ptr [edi], 0 }
	__asm { je L_00d034bc }
	__asm { mov ebx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { xor edx, edx }
	__asm { L_00d033e6: }
	__asm { cmp edi, ebx }
	__asm { jae L_00d03449 }
	__asm { movsx eax, byte ptr [edi] }
	__asm { lea ecx, [eax - 0x41] }
	__asm { cmp ecx, 0x19 }
	__asm { ja L_00d033fa }
	__asm { lea ecx, [eax - 0x41] }
	__asm { jmp L_00d0342c }
	__asm { L_00d033fa: }
	__asm { lea ecx, [eax - 0x61] }
	__asm { cmp ecx, 0x19 }
	__asm { ja L_00d03407 }
	__asm { lea ecx, [eax - 0x47] }
	__asm { jmp L_00d0342c }
	__asm { L_00d03407: }
	__asm { lea ecx, [eax - 0x30] }
	__asm { cmp ecx, 9 }
	__asm { ja L_00d03414 }
	__asm { lea ecx, [eax + 4] }
	__asm { jmp L_00d0342c }
	__asm { L_00d03414: }
	__asm { cmp eax, 0x2b }
	__asm { jne L_00d0341e }
	__asm { lea ecx, [eax + 0x13] }
	__asm { jmp L_00d0342c }
	__asm { L_00d0341e: }
	__asm { or ecx, 0xffffffff }
	__asm { cmp eax, 0x2f }
	__asm { mov eax, 0x3f }
	__asm { cmove ecx, eax }
	__asm { L_00d0342c: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { inc edi }
	__asm { cmp ecx, -1 }
	__asm { jne L_00d03438 }
	__asm { dec edx }
	__asm { jmp L_00d03443 }
	__asm { L_00d03438: }
	__asm { shl esi, 6 }
	__asm { or esi, ecx }
	__asm { add eax, 6 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { L_00d03443: }
	__asm { inc edx }
	__asm { cmp edx, 4 }
	__asm { jl L_00d033e6 }
	__asm { L_00d03449: }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { jne L_00d03473 }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { cdq }
	__asm { and edx, 7 }
	__asm { add eax, edx }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { sar eax, 3 }
	__asm { add ecx, eax }
	__asm { cmp ecx, dword ptr [edx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, 1 }
	__asm { cmovg eax, ecx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { L_00d03473: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov ecx, 0x18 }
	__asm { sub ecx, eax }
	__asm { cdq }
	__asm { and edx, 7 }
	__asm { shl esi, cl }
	__asm { lea ecx, [edx + eax] }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { sar ecx, 3 }
	__asm { test ecx, ecx }
	__asm { jle L_00d034b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add edx, ecx }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { L_00d03498: }
	__asm { test eax, eax }
	__asm { jne L_00d034a7 }
	__asm { mov eax, esi }
	__asm { shr eax, 0x10 }
	__asm { mov byte ptr [ebx], al }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { inc ebx }
	__asm { L_00d034a7: }
	__asm { shl esi, 8 }
	__asm { dec ecx }
	__asm { jne L_00d03498 }
	__asm { mov dword ptr [ebp + 0x10], ebx }
	__asm { L_00d034b0: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp edi, dword ptr [ebp - 0xc] }
	__asm { jb L_00d033d1 }
	__asm { L_00d034bc: }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { L_00d034bf: }
	__asm { pop ebx }
	__asm { xor eax, eax }
	__asm { test ecx, ecx }
	__asm { pop edi }
	__asm { mov dword ptr [esi], edx }
	__asm { sete al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d034cf: }
	__asm { pop edi }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10008[];
extern "C" char g_00e1000c[];
extern "C" char g_00e10010[];
extern "C" char g_00e10018[];
extern "C" void fn_006b98f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf67ec();
extern "C" void fn_00cf6810();
extern "C" void fn_00cf6a60();
extern "C" void fn_00d03390();
// FUNCTION: ROBLOXSTUDIO 0x00d034e0
extern "C" __declspec(naked) void asm_00d034e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e8e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, 0x282c }
	__asm { call fn_00cf6a60 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov edi, ecx }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x8004 }
	__asm { push dword ptr [edi] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10010] }
	__asm { test eax, eax }
	__asm { jne L_00d0354a }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xf12f2d }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00d0354a: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e1000c] }
	__asm { test eax, eax }
	__asm { jne L_00d0358b }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push 0xf12f2d }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00d0358b: }
	__asm { mov esi, dword ptr [ebp + 0x30] }
	__asm { mov eax, esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { call fn_00cf6810 }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov ebx, esp }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { push ebx }
	__asm { lea eax, [ebp + 0x20] }
	__asm { cmovae eax, dword ptr [ebp + 0x20] }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00d03390 }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { add esp, 0x10 }
	__asm { xor ecx, ecx }
	__asm { test esi, esi }
	__asm { jle L_00d035d6 }
	__asm { lea edx, [esi - 1] }
	__asm { add edx, ebx }
	__asm { L_00d035c5: }
	__asm { mov al, byte ptr [edx] }
	__asm { mov byte ptr [ebp + ecx - 0x283c], al }
	__asm { inc ecx }
	__asm { lea edx, [edx - 1] }
	__asm { cmp ecx, esi }
	__asm { jl L_00d035c5 }
	__asm { L_00d035d6: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push dword ptr [edi + 4] }
	__asm { lea eax, [ebp - 0x283c] }
	__asm { push esi }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call dword ptr [g_00e10018] }
	__asm { test eax, eax }
	__asm { jne L_00d03623 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push 0xf12f2d }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call dword ptr [g_00e10008] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00d03623: }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call dword ptr [g_00e10008] }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { jb L_00d0363d }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00d0363d: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { mov dword ptr [ebp + 0x1c], 0xf }
	__asm { mov dword ptr [ebp + 0x18], 0 }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { jb L_00d03660 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00d03660: }
	__asm { lea esp, [ebp - 0x2848] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" char g_00e10614[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00d03680
extern "C" __declspec(naked) void asm_00d03680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_00d036d1 }
	__asm { test esi, esi }
	__asm { jne L_00d036d5 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00d036bb }
	__asm { push 0x134 }
	__asm { push 0xf10f98 }
	__asm { push 0xf111f8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d036cc }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00d036bb: }
	__asm { movzx eax, al }
	__asm { push 0xf11200 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d036cc: }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d036d1: }
	__asm { test esi, esi }
	__asm { je L_00d036cc }
	__asm { L_00d036d5: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10614] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push 0xe48a70 }
	__asm { push esi }
	__asm { call ebx }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00d036fa }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov eax, 0x80000000 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d036fa: }
	__asm { push edi }
	__asm { push 0xe48a84 }
	__asm { push esi }
	__asm { call ebx }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00d03714 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov eax, 0x80000005 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d03714: }
	__asm { push edi }
	__asm { push 0xe48a98 }
	__asm { push esi }
	__asm { call ebx }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00d0372e }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov eax, 0x80000001 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d0372e: }
	__asm { push edi }
	__asm { push 0xe48aac }
	__asm { push esi }
	__asm { call ebx }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00d03748 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov eax, 0x80000002 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d03748: }
	__asm { push edi }
	__asm { push 0xe48ac0 }
	__asm { push esi }
	__asm { call ebx }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00d03762 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov eax, 0x80000004 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d03762: }
	__asm { push edi }
	__asm { push 0xe48ad8 }
	__asm { push esi }
	__asm { call ebx }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00d0377c }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov eax, 0x80000060 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d0377c: }
	__asm { push edi }
	__asm { push 0xe48af4 }
	__asm { push esi }
	__asm { call ebx }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00d03796 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { mov eax, 0x80000050 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d03796: }
	__asm { push edi }
	__asm { push 0xe48a70 }
	__asm { push esi }
	__asm { call ebx }
	__asm { add esp, 0xc }
	__asm { neg eax }
	__asm { sbb eax, eax }
	__asm { pop edi }
	__asm { and eax, 0x80000000 }
	__asm { pop ebx }
	__asm { add eax, 0x80000000 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10000[];
extern "C" char g_00e10004[];
extern "C" char g_00e10014[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004028a0();
extern "C" void fn_00426850();
extern "C" void fn_004278c0();
extern "C" void fn_0060e370();
extern "C" void fn_006b9740();
extern "C" void fn_00d03680();
// FUNCTION: ROBLOXSTUDIO 0x00d03890
extern "C" __declspec(naked) void asm_00d03890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e900 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 0x10], 0x5c }
	__asm { call fn_00426850 }
	__asm { mov edi, eax }
	__asm { cmp edi, -1 }
	__asm { jne L_00d038dc }
	__asm { L_00d038ca: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d038dc: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00d038e6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_00d038e8 }
	__asm { L_00d038e6: }
	__asm { mov eax, esi }
	__asm { L_00d038e8: }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00d03680 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { test eax, eax }
	__asm { je L_00d038ca }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00d03940 }
	__asm { lea eax, [edi + 1] }
	__asm { cmp dword ptr [esi + 0x10], eax }
	__asm { ja L_00d03940 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d0392f }
	__asm { push 0x4e }
	__asm { push 0xf10f98 }
	__asm { push 0xf10fd8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d03940 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00d0392f: }
	__asm { movzx eax, cl }
	__asm { push 0xf11058 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d03940: }
	__asm { push ebx }
	__asm { push 1 }
	__asm { push -1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 0x10], 0x5c }
	__asm { call fn_0060e370 }
	__asm { mov ebx, eax }
	__asm { cmp ebx, -1 }
	__asm { je L_00d03a6a }
	__asm { mov ecx, ebx }
	__asm { sub ecx, edi }
	__asm { dec ecx }
	__asm { push ecx }
	__asm { lea ecx, [edi + 1] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004278c0 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { sub eax, ebx }
	__asm { push eax }
	__asm { lea eax, [ebx + 1] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004278c0 }
	__asm { cmp dword ptr [ebp - 0x34], 0x10 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { push 0x20019 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { cmovae eax, dword ptr [ebp - 0x48] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10000] }
	__asm { test eax, eax }
	__asm { jne L_00d03a5a }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { cmovae eax, dword ptr [ebp - 0x30] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x18], 4 }
	__asm { call dword ptr [g_00e10014] }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov esi, eax }
	__asm { test cl, cl }
	__asm { je L_00d03a29 }
	__asm { test esi, esi }
	__asm { je L_00d03a29 }
	__asm { mov edx, dword ptr [g_012de694] }
	__asm { test edx, edx }
	__asm { je L_00d03a18 }
	__asm { push 0x5d }
	__asm { push 0xf10f98 }
	__asm { push 0xf110c0 }
	__asm { call edx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d03a29 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00d03a18: }
	__asm { movzx eax, cl }
	__asm { push 0xf11100 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d03a29: }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call dword ptr [g_00e10004] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_004028a0 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { call fn_004028a0 }
	__asm { pop ebx }
	__asm { xor eax, eax }
	__asm { test esi, esi }
	__asm { pop edi }
	__asm { sete al }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d03a5a: }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_004028a0 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { call fn_004028a0 }
	__asm { L_00d03a6a: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10000[];
extern "C" char g_00e10004[];
extern "C" char g_00e10014[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_004028a0();
extern "C" void fn_00412550();
extern "C" void fn_00426850();
extern "C" void fn_004278c0();
extern "C" void fn_0060e370();
extern "C" void fn_006b9740();
extern "C" void fn_00cf64a0();
extern "C" void fn_00cf6698();
extern "C" void fn_00cf6804();
extern "C" void fn_00d03680();
// FUNCTION: ROBLOXSTUDIO 0x00d03a80
extern "C" __declspec(naked) void asm_00d03a80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6e900 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x3c }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push 1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 0x10], 0x5c }
	__asm { call fn_00426850 }
	__asm { mov edi, eax }
	__asm { cmp edi, -1 }
	__asm { jne L_00d03acc }
	__asm { L_00d03aba: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d03acc: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00d03ad6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_00d03ad8 }
	__asm { L_00d03ad6: }
	__asm { mov eax, esi }
	__asm { L_00d03ad8: }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_00d03680 }
	__asm { add esp, 8 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { test eax, eax }
	__asm { je L_00d03aba }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00d03b33 }
	__asm { lea eax, [edi + 1] }
	__asm { cmp dword ptr [esi + 0x10], eax }
	__asm { ja L_00d03b33 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00d03b22 }
	__asm { push 0x9b }
	__asm { push 0xf10f98 }
	__asm { push 0xf10fd8 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d03b33 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00d03b22: }
	__asm { movzx eax, cl }
	__asm { push 0xf11190 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d03b33: }
	__asm { push ebx }
	__asm { push 1 }
	__asm { push -1 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 0x10], 0x5c }
	__asm { call fn_0060e370 }
	__asm { mov ebx, eax }
	__asm { cmp ebx, -1 }
	__asm { je L_00d03c61 }
	__asm { mov ecx, ebx }
	__asm { sub ecx, edi }
	__asm { dec ecx }
	__asm { push ecx }
	__asm { lea ecx, [edi + 1] }
	__asm { push ecx }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_004278c0 }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { sub eax, ebx }
	__asm { push eax }
	__asm { lea eax, [ebx + 1] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004278c0 }
	__asm { cmp dword ptr [ebp - 0x34], 0x10 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { push 0x20019 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { cmovae eax, dword ptr [ebp - 0x48] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10000] }
	__asm { test eax, eax }
	__asm { jne L_00d03c51 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { mov ebx, dword ptr [g_00e10014] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { push 0 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x30] }
	__asm { cmovae eax, dword ptr [ebp - 0x30] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call ebx }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jne L_00d03c20 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_00cf64a0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov esi, eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00cf6804 }
	__asm { add esp, 0x10 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push esi }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { cmovae ecx, dword ptr [ebp - 0x30] }
	__asm { push edi }
	__asm { push ecx }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call ebx }
	__asm { mov edi, eax }
	__asm { test edi, edi }
	__asm { jne L_00d03c17 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_00412550 }
	__asm { L_00d03c17: }
	__asm { push esi }
	__asm { call fn_00cf6698 }
	__asm { add esp, 4 }
	__asm { L_00d03c20: }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call dword ptr [g_00e10004] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_004028a0 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { call fn_004028a0 }
	__asm { xor eax, eax }
	__asm { pop ebx }
	__asm { test edi, edi }
	__asm { pop edi }
	__asm { sete al }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00d03c51: }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_004028a0 }
	__asm { lea ecx, [ebp - 0x48] }
	__asm { call fn_004028a0 }
	__asm { L_00d03c61: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e102b0[];
extern "C" char g_00e10380[];
extern "C" char g_00e10384[];
extern "C" char g_012bbcd4[];
extern "C" void fn_004270c0();
extern "C" void fn_004272a0();
extern "C" void fn_004276b0();
// FUNCTION: ROBLOXSTUDIO 0x00d040b0
extern "C" __declspec(naked) void asm_00d040b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { push 0 }
	__asm { mov ebx, ecx }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10384] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10380] }
	__asm { mov esi, dword ptr [eax + 8] }
	__asm { add esi, dword ptr [eax] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10384] }
	__asm { test esi, esi }
	__asm { jle L_00d0410c }
	__asm { nop }
	__asm { L_00d040f0: }
	__asm { test edi, edi }
	__asm { je L_00d040f9 }
	__asm { lea eax, [edi + 0x10] }
	__asm { jmp L_00d040fb }
	__asm { L_00d040f9: }
	__asm { xor eax, eax }
	__asm { L_00d040fb: }
	__asm { push 0x1009354 }
	__asm { push eax }
	__asm { call fn_004276b0 }
	__asm { add esp, 8 }
	__asm { dec esi }
	__asm { jne L_00d040f0 }
	__asm { L_00d0410c: }
	__asm { lea eax, [edi + 0x10] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { call dword ptr [g_00e102b0] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10384] }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov esi, dword ptr [eax] }
	__asm { cmp esi, eax }
	__asm { je L_00d041c2 }
	__asm { L_00d04135: }
	__asm { xor edx, edx }
	__asm { lea eax, [edi + 0x10] }
	__asm { test edi, edi }
	__asm { cmovne edx, eax }
	__asm { mov ax, word ptr [g_012bbcd4] }
	__asm { movzx ecx, al }
	__asm { push ecx }
	__asm { movzx eax, ah }
	__asm { lea ecx, [esi + 0x28] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [esi + 0x10] }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_004270c0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004272a0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004270c0 }
	__asm { add esp, 8 }
	__asm { push eax }
	__asm { call fn_004272a0 }
	__asm { add esp, 8 }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { jne L_00d041b9 }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00d0419e }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00d041b9 }
	__asm { L_00d04192: }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00d04192 }
	__asm { jmp L_00d041b9 }
	__asm { L_00d0419e: }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { jne L_00d041b7 }
	__asm { L_00d041a7: }
	__asm { cmp esi, dword ptr [eax + 8] }
	__asm { jne L_00d041b7 }
	__asm { mov esi, eax }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { cmp byte ptr [eax + 0xd], 0 }
	__asm { je L_00d041a7 }
	__asm { L_00d041b7: }
	__asm { mov esi, eax }
	__asm { L_00d041b9: }
	__asm { cmp esi, dword ptr [ebx + 0x18] }
	__asm { jne L_00d04135 }
	__asm { L_00d041c2: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e102b0] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// (empty)

// (empty)

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012fc992[];
extern "C" void fn_006b8aae();
extern "C" void fn_006b9740();
extern "C" void fn_00d08840();
extern "C" void fn_00d088f0();
extern "C" void fn_00d089a0();
extern "C" void fn_00d08a50();
extern "C" void fn_00d08b10();
extern "C" void fn_00d08bd0();
// FUNCTION: ROBLOXSTUDIO 0x00d08f80
extern "C" __declspec(naked) void asm_00d08f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test al, al }
	__asm { je L_00d08fcd }
	__asm { cmp dword ptr [esi + 0x10], edi }
	__asm { je L_00d08fcd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00d08fbc }
	__asm { push 0x2f }
	__asm { push 0xf114c0 }
	__asm { push 0xf116e0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00d08fcd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00d08fbc: }
	__asm { movzx eax, al }
	__asm { push 0xf116f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00d08fcd: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00d09007 }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jge L_00d09033 }
	__asm { mov al, byte ptr [g_012fc992] }
	__asm { test al, al }
	__asm { je L_00d08ffd }
	__asm { push 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0xf11768 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00d08ffd: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00d08840 }
	__asm { jmp L_00d09033 }
	__asm { L_00d09007: }
	__asm { cmp dword ptr [esi + 4], 0 }
	__asm { jl L_00d09033 }
	__asm { mov al, byte ptr [g_012fc992] }
	__asm { test al, al }
	__asm { je L_00d0902b }
	__asm { push 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0xf1178c }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00d0902b: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00d08a50 }
	__asm { L_00d09033: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00d0906f }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jge L_00d0909c }
	__asm { mov al, byte ptr [g_012fc992] }
	__asm { test al, al }
	__asm { je L_00d09064 }
	__asm { push 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0xf117b0 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00d09064: }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_00d088f0 }
	__asm { jmp L_00d0909c }
	__asm { L_00d0906f: }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jl L_00d0909c }
	__asm { mov al, byte ptr [g_012fc992] }
	__asm { test al, al }
	__asm { je L_00d09093 }
	__asm { push 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0xf117d4 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00d09093: }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x10] }
	__asm { call fn_00d08b10 }
	__asm { L_00d0909c: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_00d090dc }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { jge L_00d09109 }
	__asm { mov al, byte ptr [g_012fc992] }
	__asm { test al, al }
	__asm { je L_00d090cd }
	__asm { push 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0xf117f8 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00d090cd: }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00d089a0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00d090dc: }
	__asm { cmp dword ptr [esi + 0xc], 0 }
	__asm { jl L_00d09109 }
	__asm { mov al, byte ptr [g_012fc992] }
	__asm { test al, al }
	__asm { je L_00d09100 }
	__asm { push 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0xf11820 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_00d09100: }
	__asm { push esi }
	__asm { lea ecx, [edi + 0x20] }
	__asm { call fn_00d08bd0 }
	__asm { L_00d09109: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038248[];
extern "C" void fn_006dd600();
// FUNCTION: ROBLOXSTUDIO 0x00d09330
extern "C" __declspec(naked) void asm_00d09330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { fldz }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov esi, ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call fn_006dd600 }
	__asm { fldz }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_006dd600 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { mulss xmm0, dword ptr [g_01038248] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { mulss xmm0, dword ptr [g_01038248] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push edx }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x40] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_01038248[];
extern "C" void fn_006dd600();
// FUNCTION: ROBLOXSTUDIO 0x00d093a0
extern "C" __declspec(naked) void asm_00d093a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { fldz }
	__asm { push esi }
	__asm { push ecx }
	__asm { mov esi, ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_006dd600 }
	__asm { fldz }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_006dd600 }
	__asm { fldz }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_006dd600 }
	__asm { fldz }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_006dd600 }
	__asm { movss xmm1, dword ptr [g_01038248] }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mulss xmm0, xmm1 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { mulss xmm0, xmm1 }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push edx }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x2c] }
	__asm { mulss xmm0, xmm1 }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { movss dword ptr [ebp - 0x2c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { mulss xmm0, xmm1 }
	__asm { lea edx, [ebp - 0x24] }
	__asm { push edx }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x30] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x60] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10260[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00d094b0
extern "C" __declspec(naked) void asm_00d094b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp eax, 0x4924923 }
	__asm { jb L_00d094d7 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0xf13d5c }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00d094d7: }
	__asm { mov ebx, dword ptr [ebp + 0x18] }
	__asm { inc eax }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, ecx }
	__asm { jne L_00d094f8 }
	__asm { mov dword ptr [ecx + 4], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [eax + 8], ebx }
	__asm { jmp L_00d09517 }
	__asm { L_00d094f8: }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_00d0950a }
	__asm { mov dword ptr [eax], ebx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_00d09517 }
	__asm { mov dword ptr [ecx], ebx }
	__asm { jmp L_00d09517 }
	__asm { L_00d0950a: }
	__asm { mov dword ptr [eax + 8], ebx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_00d09517 }
	__asm { mov dword ptr [ecx + 8], ebx }
	__asm { L_00d09517: }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, ebx }
	__asm { cmp byte ptr [ecx + 0xc], 0 }
	__asm { jne L_00d096a2 }
	__asm { push esi }
	__asm { L_00d09527: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, dword ptr [esi] }
	__asm { cmp ecx, edx }
	__asm { jne L_00d095e2 }
	__asm { mov edx, dword ptr [esi + 8] }
	__asm { cmp byte ptr [edx + 0xc], 0 }
	__asm { je L_00d095e8 }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_00d09583 }
	__asm { mov eax, ecx }
	__asm { mov edx, dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov ecx, dword ptr [edx] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_00d0955e }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_00d0955e: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jne L_00d09570 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { jmp L_00d0957e }
	__asm { L_00d09570: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_00d0957b }
	__asm { mov dword ptr [ecx], edx }
	__asm { jmp L_00d0957e }
	__asm { L_00d0957b: }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { L_00d0957e: }
	__asm { mov dword ptr [edx], eax }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { L_00d09583: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov byte ptr [ecx + 0xc], 1 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov byte ptr [ecx + 0xc], 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov esi, dword ptr [edx] }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_00d095ad }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { L_00d095ad: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp edx, dword ptr [ecx + 4] }
	__asm { jne L_00d095c5 }
	__asm { mov dword ptr [ecx + 4], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { jmp L_00d09691 }
	__asm { L_00d095c5: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp edx, dword ptr [ecx + 8] }
	__asm { jne L_00d095d8 }
	__asm { mov dword ptr [ecx + 8], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { jmp L_00d09691 }
	__asm { L_00d095d8: }
	__asm { mov dword ptr [ecx], esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { jmp L_00d09691 }
	__asm { L_00d095e2: }
	__asm { cmp byte ptr [edx + 0xc], 0 }
	__asm { jne L_00d09605 }
	__asm { L_00d095e8: }
	__asm { mov byte ptr [ecx + 0xc], 1 }
	__asm { mov byte ptr [edx + 0xc], 1 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov byte ptr [ecx + 0xc], 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { jmp L_00d09694 }
	__asm { L_00d09605: }
	__asm { cmp eax, dword ptr [ecx] }
	__asm { jne L_00d09645 }
	__asm { mov eax, ecx }
	__asm { mov edx, dword ptr [eax] }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_00d0961e }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_00d0961e: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp eax, dword ptr [ecx + 4] }
	__asm { jne L_00d09630 }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { jmp L_00d0963f }
	__asm { L_00d09630: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp eax, dword ptr [ecx + 8] }
	__asm { jne L_00d0963d }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { jmp L_00d0963f }
	__asm { L_00d0963d: }
	__asm { mov dword ptr [ecx], edx }
	__asm { L_00d0963f: }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { L_00d09645: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov byte ptr [ecx + 0xc], 1 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { mov byte ptr [ecx + 0xc], 0 }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov edx, dword ptr [ecx + 4] }
	__asm { mov esi, dword ptr [edx + 8] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp byte ptr [ecx + 0xd], 0 }
	__asm { jne L_00d0966f }
	__asm { mov dword ptr [ecx + 4], edx }
	__asm { L_00d0966f: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { mov ecx, dword ptr [edi] }
	__asm { cmp edx, dword ptr [ecx + 4] }
	__asm { jne L_00d09681 }
	__asm { mov dword ptr [ecx + 4], esi }
	__asm { jmp L_00d0968f }
	__asm { L_00d09681: }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { cmp edx, dword ptr [ecx] }
	__asm { jne L_00d0968c }
	__asm { mov dword ptr [ecx], esi }
	__asm { jmp L_00d0968f }
	__asm { L_00d0968c: }
	__asm { mov dword ptr [ecx + 8], esi }
	__asm { L_00d0968f: }
	__asm { mov dword ptr [esi], edx }
	__asm { L_00d09691: }
	__asm { mov dword ptr [edx + 4], esi }
	__asm { L_00d09694: }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { cmp byte ptr [ecx + 0xc], 0 }
	__asm { je L_00d09527 }
	__asm { pop esi }
	__asm { L_00d096a2: }
	__asm { mov eax, dword ptr [edi] }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov byte ptr [eax + 0xc], 1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ebx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

// FUNCTION: ROBLOXSTUDIO 0x00d098e0
extern "C" __declspec(naked) void asm_00d098e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { cmp edx, ebx }
	__asm { je L_00d0990e }
	__asm { push esi }
	__asm { push edi }
	__asm { L_00d098f3: }
	__asm { test eax, eax }
	__asm { je L_00d09902 }
	__asm { mov ecx, 9 }
	__asm { mov esi, edx }
	__asm { mov edi, eax }
	__asm { rep movsd }
	__asm { L_00d09902: }
	__asm { add edx, 0x24 }
	__asm { add eax, 0x24 }
	__asm { cmp edx, ebx }
	__asm { jne L_00d098f3 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { L_00d0990e: }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

// (empty)

// (empty)

// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e362bc[];
extern "C" char g_01038034[];
extern "C" char g_010380b8[];
extern "C" char g_010380e4[];
extern "C" char g_010381f0[];
extern "C" char g_010385f0[];
extern "C" void fn_004d2360();
extern "C" void fn_00626760();
extern "C" void fn_006d1df0();
extern "C" void fn_006da0e0();
extern "C" void fn_006dd600();
extern "C" void fn_006dea40();
extern "C" void fn_006dec80();
extern "C" void fn_006e0800();
extern "C" void fn_007be710();
extern "C" void fn_008eaad0();
extern "C" void fn_00d0b530();
// FUNCTION: ROBLOXSTUDIO 0x00d0b750
extern "C" __declspec(naked) void asm_00d0b750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xa8 }
	__asm { movss xmm1, dword ptr [g_010380b8] }
	__asm { movss xmm0, dword ptr [ebp + 0x10] }
	__asm { mulss xmm0, xmm1 }
	__asm { push esi }
	__asm { push edi }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x14] }
	__asm { mulss xmm0, xmm1 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x28], edi }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x18] }
	__asm { mulss xmm0, xmm1 }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { call fn_006dec80 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x48], ecx }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov dword ptr [ebp - 0x44], ecx }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { call fn_006dec80 }
	__asm { movss xmm3, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { movss xmm0, dword ptr [ebp - 0x48] }
	__asm { movss xmm5, dword ptr [g_010385f0] }
	__asm { lea esi, [edi + 0x4c] }
	__asm { xorps xmm3, xmm5 }
	__asm { movss dword ptr [esi], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x44] }
	__asm { movss dword ptr [esi + 4], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x40] }
	__asm { lea edx, [esi + 0x10] }
	__asm { movss dword ptr [esi + 8], xmm0 }
	__asm { xorps xmm1, xmm5 }
	__asm { xorps xmm2, xmm5 }
	__asm { xor eax, eax }
	__asm { movss dword ptr [esi + 0xc], xmm3 }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { movss dword ptr [edx], xmm1 }
	__asm { movss dword ptr [esi + 0x14], xmm2 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { L_00d0b805: }
	__asm { movss xmm4, dword ptr [ebp - 4] }
	__asm { test al, 1 }
	__asm { jne L_00d0b811 }
	__asm { xorps xmm4, xmm5 }
	__asm { L_00d0b811: }
	__asm { movss xmm3, dword ptr [ebp - 0x10] }
	__asm { test al, 2 }
	__asm { jne L_00d0b81d }
	__asm { xorps xmm3, xmm5 }
	__asm { L_00d0b81d: }
	__asm { movss xmm2, dword ptr [ebp - 0xc] }
	__asm { test al, 4 }
	__asm { jne L_00d0b829 }
	__asm { xorps xmm2, xmm5 }
	__asm { L_00d0b829: }
	__asm { movss xmm1, dword ptr [ebp + 0x1c] }
	__asm { movss xmm0, dword ptr [ebp + 0x20] }
	__asm { mulss xmm1, xmm2 }
	__asm { mulss xmm0, xmm3 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x24] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x2c] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, dword ptr [ebp + 0x40] }
	__asm { movss dword ptr [ebp - 0x2c], xmm1 }
	__asm { movss xmm1, dword ptr [ebp + 0x28] }
	__asm { mulss xmm1, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x30] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x38] }
	__asm { mulss xmm0, xmm3 }
	__asm { addss xmm1, dword ptr [ebp + 0x44] }
	__asm { movss dword ptr [ebp - 0x1c], xmm1 }
	__asm { movss xmm1, dword ptr [ebp + 0x34] }
	__asm { mulss xmm1, xmm2 }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [ebp + 0x3c] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm1, xmm0 }
	__asm { addss xmm1, dword ptr [ebp + 0x48] }
	__asm { movss dword ptr [ebp - 0x20], xmm1 }
	__asm { call fn_004d2360 }
	__asm { movss xmm3, dword ptr [ebp - 0x2c] }
	__asm { subss xmm3, dword ptr [eax + 0x24] }
	__asm { movss xmm2, dword ptr [ebp - 0x1c] }
	__asm { subss xmm2, dword ptr [eax + 0x28] }
	__asm { movss xmm5, dword ptr [eax + 0xc] }
	__asm { movss xmm1, dword ptr [ebp - 0x20] }
	__asm { subss xmm1, dword ptr [eax + 0x2c] }
	__asm { movss xmm4, dword ptr [eax + 0x10] }
	__asm { movss xmm6, dword ptr [eax + 0x14] }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [eax] }
	__asm { mulss xmm5, xmm2 }
	__asm { mulss xmm4, xmm2 }
	__asm { addss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x18] }
	__asm { mulss xmm0, xmm1 }
	__asm { mulss xmm6, xmm2 }
	__asm { addss xmm5, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mulss xmm0, xmm3 }
	__asm { movss dword ptr [ebp - 0x3c], xmm5 }
	__asm { addss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x1c] }
	__asm { mulss xmm0, xmm1 }
	__asm { addss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, xmm3 }
	__asm { movss dword ptr [ebp - 0x38], xmm4 }
	__asm { addss xmm6, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x20] }
	__asm { mulss xmm0, xmm1 }
	__asm { lea eax, [esi + 8] }
	__asm { addss xmm6, xmm0 }
	__asm { comiss xmm6, dword ptr [esi + 8] }
	__asm { movss dword ptr [ebp - 0x34], xmm6 }
	__asm { ja L_00d0b958 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { L_00d0b958: }
	__asm { comiss xmm4, dword ptr [esi + 4] }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { lea eax, [esi + 4] }
	__asm { ja L_00d0b968 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { L_00d0b968: }
	__asm { comiss xmm5, dword ptr [esi] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { mov eax, esi }
	__asm { ja L_00d0b976 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { L_00d0b976: }
	__asm { fld dword ptr [eax] }
	__asm { lea eax, [esi + 0x14] }
	__asm { fstp dword ptr [esi] }
	__asm { movss dword ptr [esi + 4], xmm0 }
	__asm { movss dword ptr [esi + 8], xmm1 }
	__asm { movss xmm0, dword ptr [esi + 0x14] }
	__asm { comiss xmm0, xmm6 }
	__asm { ja L_00d0b994 }
	__asm { lea eax, [ebp - 0x34] }
	__asm { L_00d0b994: }
	__asm { mov edx, dword ptr [ebp - 8] }
	__asm { movss xmm2, dword ptr [eax] }
	__asm { movss xmm0, dword ptr [edx] }
	__asm { comiss xmm0, xmm4 }
	__asm { mov eax, edx }
	__asm { ja L_00d0b9a9 }
	__asm { lea eax, [ebp - 0x38] }
	__asm { L_00d0b9a9: }
	__asm { movss xmm0, dword ptr [esi + 0xc] }
	__asm { comiss xmm0, xmm5 }
	__asm { movss xmm1, dword ptr [eax] }
	__asm { lea eax, [esi + 0xc] }
	__asm { ja L_00d0b9bd }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { L_00d0b9bd: }
	__asm { fld dword ptr [eax] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { movss xmm5, dword ptr [g_010385f0] }
	__asm { fstp dword ptr [esi + 0xc] }
	__asm { inc eax }
	__asm { movss dword ptr [edx], xmm1 }
	__asm { movss dword ptr [esi + 0x14], xmm2 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { cmp eax, 8 }
	__asm { jl L_00d0b805 }
	__asm { movss xmm0, dword ptr [esi + 0xc] }
	__asm { subss xmm0, dword ptr [esi] }
	__asm { subss xmm1, dword ptr [esi + 4] }
	__asm { subss xmm2, dword ptr [esi + 8] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { movss dword ptr [ebp - 8], xmm1 }
	__asm { movss dword ptr [ebp - 0x20], xmm2 }
	__asm { call fn_006dea40 }
	__asm { movss xmm1, dword ptr [edi + 0x68] }
	__asm { addss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { addss xmm0, dword ptr [edi + 0x64] }
	__asm { movss xmm2, dword ptr [edi + 0x6c] }
	__asm { addss xmm2, dword ptr [eax + 8] }
	__asm { movss xmm3, dword ptr [g_010380b8] }
	__asm { movss xmm4, dword ptr [ebp - 4] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mulss xmm0, xmm3 }
	__asm { mulss xmm1, xmm3 }
	__asm { mulss xmm2, xmm3 }
	__asm { movss xmm3, dword ptr [ebp - 8] }
	__asm { mulss xmm4, xmm0 }
	__asm { movss xmm0, dword ptr [esi + 4] }
	__asm { mulss xmm3, xmm1 }
	__asm { movss xmm1, dword ptr [ebp - 0x20] }
	__asm { addss xmm4, dword ptr [esi] }
	__asm { mulss xmm1, xmm2 }
	__asm { movss xmm2, dword ptr [edi + 0x74] }
	__asm { addss xmm0, xmm3 }
	__asm { addss xmm1, dword ptr [esi + 8] }
	__asm { addss xmm4, dword ptr [edi + 0x70] }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [edi + 0x78] }
	__asm { addss xmm0, xmm1 }
	__asm { movss dword ptr [ebp - 4], xmm4 }
	__asm { movss dword ptr [ebp - 0xc], xmm2 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { call fn_004d2360 }
	__asm { movss xmm3, dword ptr [eax + 0x10] }
	__asm { movss xmm0, dword ptr [eax + 0xc] }
	__asm { movss xmm5, dword ptr [ebp - 0xc] }
	__asm { movss xmm4, dword ptr [ebp - 4] }
	__asm { movss xmm6, dword ptr [ebp - 0x10] }
	__asm { movss xmm2, dword ptr [eax + 0x1c] }
	__asm { mulss xmm0, xmm4 }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { mulss xmm3, xmm5 }
	__asm { mulss xmm2, xmm5 }
	__asm { addss xmm3, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x14] }
	__asm { mulss xmm0, xmm6 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { addss xmm3, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x18] }
	__asm { mulss xmm0, xmm4 }
	__asm { mulss xmm1, xmm5 }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 0x20] }
	__asm { addss xmm3, dword ptr [eax + 0x28] }
	__asm { mulss xmm0, xmm6 }
	__asm { addss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { mulss xmm0, xmm4 }
	__asm { addss xmm2, dword ptr [eax + 0x2c] }
	__asm { addss xmm1, xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { mulss xmm0, xmm6 }
	__asm { addss xmm1, xmm0 }
	__asm { addss xmm1, dword ptr [eax + 0x24] }
	__asm { lea eax, [ebp - 0x6c] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x78] }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x6c], xmm1 }
	__asm { movss dword ptr [ebp - 0x68], xmm3 }
	__asm { movss dword ptr [ebp - 0x64], xmm2 }
	__asm { call fn_007be710 }
	__asm { movss xmm1, dword ptr [ebp - 0x70] }
	__asm { comiss xmm1, dword ptr [g_01038034] }
	__asm { movss dword ptr [ebp - 0x14], xmm1 }
	__asm { jbe L_00d0bd72 }
	__asm { movss xmm0, dword ptr [g_010381f0] }
	__asm { comiss xmm0, xmm1 }
	__asm { jbe L_00d0bd72 }
	__asm { movss xmm0, dword ptr [g_010380e4] }
	__asm { divss xmm0, xmm1 }
	__asm { sub esp, 8 }
	__asm { mov byte ptr [edi + 0x40], 1 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { mov esi, esp }
	__asm { call fn_006e0800 }
	__asm { lea ecx, [edi + 0x84] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { mulss xmm1, dword ptr [ebp - 0x14] }
	__asm { mulss xmm0, dword ptr [ebp - 0x14] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { movss dword ptr [esi], xmm0 }
	__asm { movss dword ptr [esi + 4], xmm1 }
	__asm { call fn_008eaad0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { movss xmm4, dword ptr [eax + 4] }
	__asm { movaps xmm3, xmm0 }
	__asm { mulss xmm3, dword ptr [eax] }
	__asm { mov eax, dword ptr [edi + 0x94] }
	__asm { mulss xmm4, xmm0 }
	__asm { movss dword ptr [ebp - 8], xmm3 }
	__asm { movss dword ptr [ebp - 0x20], xmm4 }
	__asm { test eax, eax }
	__asm { je L_00d0bbe4 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { jmp L_00d0bbf4 }
	__asm { L_00d0bbe4: }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [ebp - 0x14] }
	__asm { movaps xmm1, xmm4 }
	__asm { mulss xmm1, dword ptr [ebp - 0x14] }
	__asm { L_00d0bbf4: }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { fldz }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { movss dword ptr [edi + 0x3c], xmm1 }
	__asm { movss dword ptr [edi + 0x38], xmm0 }
	__asm { movaps xmm1, xmm0 }
	__asm { subss xmm1, dword ptr [edi + 0x30] }
	__asm { movss xmm2, dword ptr [edi + 0x3c] }
	__asm { movaps xmm0, xmm3 }
	__asm { subss xmm2, dword ptr [edi + 0x34] }
	__asm { push ecx }
	__asm { divss xmm0, xmm1 }
	__asm { fstp dword ptr [esp] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movaps xmm0, xmm4 }
	__asm { divss xmm0, xmm2 }
	__asm { push eax }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movaps xmm0, xmm3 }
	__asm { mulss xmm0, dword ptr [edi + 0x7c] }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { movss dword ptr [ebp - 0x30], xmm0 }
	__asm { movss xmm0, dword ptr [edi + 0x80] }
	__asm { mulss xmm0, xmm4 }
	__asm { movss dword ptr [ebp - 0x2c], xmm0 }
	__asm { call fn_006dd600 }
	__asm { movss xmm0, dword ptr [ebp - 4] }
	__asm { addss xmm0, dword ptr [eax] }
	__asm { lea ecx, [ebp - 0xa8] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { addss xmm0, dword ptr [ebp - 0xc] }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { addss xmm0, dword ptr [ebp - 0x10] }
	__asm { movss dword ptr [ebp - 0x2c], xmm0 }
	__asm { call fn_006da0e0 }
	__asm { fld1 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { mulss xmm0, dword ptr [g_010380b8] }
	__asm { movss xmm1, dword ptr [ebp - 0x20] }
	__asm { mulss xmm1, dword ptr [g_00e362bc] }
	__asm { movss xmm2, dword ptr [ebp - 4] }
	__asm { sub esp, 0x24 }
	__asm { subss xmm2, xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x1c] }
	__asm { subss xmm0, xmm1 }
	__asm { fstp dword ptr [esp + 0x20] }
	__asm { lea ecx, [ebp - 0xa8] }
	__asm { fldz }
	__asm { fst dword ptr [esp + 0x1c] }
	__asm { fst dword ptr [esp + 0x18] }
	__asm { fst dword ptr [esp + 0x14] }
	__asm { movss dword ptr [ebp - 0x84], xmm2 }
	__asm { fld dword ptr [ebp - 0x14] }
	__asm { fstp dword ptr [esp + 0x10] }
	__asm { movss dword ptr [ebp - 0x80], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x2c] }
	__asm { movss dword ptr [ebp - 0x7c], xmm0 }
	__asm { fst dword ptr [esp + 0xc] }
	__asm { fst dword ptr [esp + 8] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [ebp - 0x18] }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_006d1df0 }
	__asm { cmp byte ptr [edi + 0x98], 0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [ebp - 0xa8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x60] }
	__asm { je L_00d0bd63 }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call fn_00d0b530 }
	__asm { L_00d0bd3d: }
	__asm { mov ecx, 9 }
	__asm { mov esi, eax }
	__asm { rep movsd }
	__asm { fld dword ptr [eax + 0x24] }
	__asm { mov ecx, dword ptr [ebp - 0x28] }
	__asm { fstp dword ptr [ecx + 0x24] }
	__asm { fld dword ptr [eax + 0x28] }
	__asm { fstp dword ptr [ecx + 0x28] }
	__asm { fld dword ptr [eax + 0x2c] }
	__asm { fstp dword ptr [ecx + 0x2c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
	__asm { L_00d0bd63: }
	__asm { push eax }
	__asm { call fn_004d2360 }
	__asm { mov ecx, eax }
	__asm { call fn_00626760 }
	__asm { jmp L_00d0bd3d }
	__asm { L_00d0bd72: }
	__asm { mov byte ptr [edi + 0x40], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" char g_01038248[];
extern "C" void fn_006dd600();
// FUNCTION: ROBLOXSTUDIO 0x00d0bef0
extern "C" __declspec(naked) void asm_00d0bef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 0x20] }
	__asm { cmp byte ptr [edx + 0x40], 0 }
	__asm { je L_00d0bf64 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x44] }
	__asm { fldz }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006dd600 }
	__asm { fldz }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_006dd600 }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { mulss xmm0, dword ptr [g_01038248] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { mulss xmm0, dword ptr [g_01038248] }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push edx }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x40] }
	__asm { L_00d0bf64: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_01038248[];
extern "C" void fn_006dd600();
// FUNCTION: ROBLOXSTUDIO 0x00d0bf70
extern "C" __declspec(naked) void asm_00d0bf70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov edx, dword ptr [esi + 0x20] }
	__asm { cmp byte ptr [edx + 0x40], 0 }
	__asm { je L_00d0c034 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { push edx }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x44] }
	__asm { fldz }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006dd600 }
	__asm { fldz }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_006dd600 }
	__asm { fldz }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { call fn_006dd600 }
	__asm { fldz }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { call fn_006dd600 }
	__asm { movss xmm1, dword ptr [g_01038248] }
	__asm { movss xmm0, dword ptr [ebp - 0x14] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mulss xmm0, xmm1 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 8] }
	__asm { mulss xmm0, xmm1 }
	__asm { lea edx, [ebp - 0xc] }
	__asm { push edx }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x2c] }
	__asm { mulss xmm0, xmm1 }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { movss dword ptr [ebp - 0x2c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x20] }
	__asm { mulss xmm0, xmm1 }
	__asm { lea edx, [ebp - 0x24] }
	__asm { push edx }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 0x30] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x60] }
	__asm { L_00d0c034: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

// FUNCTION: ROBLOXSTUDIO 0x00d0c0c0
extern "C" __declspec(naked) void asm_00d0c0c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [edx + 0x20] }
	__asm { cmp byte ptr [eax + 0x40], 0 }
	__asm { je L_00d0c142 }
	__asm { movss xmm1, dword ptr [eax + 0x44] }
	__asm { movss xmm2, dword ptr [eax + 0x48] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, 2 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { nop }
	__asm { L_00d0c110: }
	__asm { movaps xmm0, xmm1 }
	__asm { addss xmm0, dword ptr [eax] }
	__asm { add eax, 8 }
	__asm { movss dword ptr [eax - 8], xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { addss xmm0, dword ptr [eax - 4] }
	__asm { movss dword ptr [eax - 4], xmm0 }
	__asm { dec ecx }
	__asm { jne L_00d0c110 }
	__asm { mov ecx, dword ptr [edx + 0x1c] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x10] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x30] }
	__asm { L_00d0c142: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00d0c150
extern "C" __declspec(naked) void asm_00d0c150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { sub esp, 0x20 }
	__asm { mov eax, dword ptr [edx + 0x20] }
	__asm { cmp byte ptr [eax + 0x40], 0 }
	__asm { je L_00d0c210 }
	__asm { movss xmm1, dword ptr [eax + 0x44] }
	__asm { movss xmm2, dword ptr [eax + 0x48] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, 4 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { movss dword ptr [ebp - 0xc], xmm0 }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { movss dword ptr [ebp - 4], xmm0 }
	__asm { lea eax, [ebp - 0x20] }
	__asm { nop }
	__asm { L_00d0c1d0: }
	__asm { movaps xmm0, xmm1 }
	__asm { addss xmm0, dword ptr [eax] }
	__asm { add eax, 8 }
	__asm { movss dword ptr [eax - 8], xmm0 }
	__asm { movaps xmm0, xmm2 }
	__asm { addss xmm0, dword ptr [eax - 4] }
	__asm { movss dword ptr [eax - 4], xmm0 }
	__asm { dec ecx }
	__asm { jne L_00d0c1d0 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { mov ecx, dword ptr [edx + 0x1c] }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x10] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x18] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x20] }
	__asm { push edx }
	__asm { call dword ptr [eax + 0x34] }
	__asm { L_00d0c210: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

// branches use labels; absolute references use relocation symbols.

extern "C" char g_01301758[];
extern "C" char g_01301774[];
extern "C" char g_01301780[];
extern "C" char g_01301784[];
extern "C" void fn_007d5d30();
extern "C" void fn_00973f60();
extern "C" void fn_00974340();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dbde70
extern "C" __declspec(naked) void asm_00dbde70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13019dc }
	__asm { push 0 }
	__asm { push 0xe87d3c }
	__asm { push 0xe87dd0 }
	__asm { push 0xe674cc }
	__asm { push 0x348 }
	__asm { call fn_00973f60 }
	__asm { push 0xdf5a90 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13019b0 }
	__asm { push 0 }
	__asm { push 0xe87d3c }
	__asm { push 0xe87dd0 }
	__asm { push 0xe87de8 }
	__asm { push 0x34c }
	__asm { call fn_00973f60 }
	__asm { push 0xdf5af0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1301984 }
	__asm { push 0 }
	__asm { push 0xe87d3c }
	__asm { push 0xe87dd0 }
	__asm { push 0xe87dd8 }
	__asm { push 0x344 }
	__asm { call fn_00973f60 }
	__asm { push 0xdf5b50 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 8], 0 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1301850 }
	__asm { push 5 }
	__asm { push 0xe87cf4 }
	__asm { push 0xe87d00 }
	__asm { push 0xe87d0c }
	__asm { push 0x328 }
	__asm { call fn_00973f60 }
	__asm { push 0xdf5bb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3b5ca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push 0 }
	__asm { mov byte ptr [ebp - 0x14], 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { mov ecx, 0x1301758 }
	__asm { push 5 }
	__asm { push 0xe87c24 }
	__asm { call fn_00974340 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_01301758], 0xe87c1c }
	__asm { mov dword ptr [g_01301780], 0x403c60 }
	__asm { mov dword ptr [g_01301784], 0 }
	__asm { call fn_007d5d30 }
	__asm { push 0xdf5c10 }
	__asm { mov dword ptr [g_01301774], eax }
	__asm { call fn_00cf6609 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c3ea10();
extern "C" void fn_00c3eae0();
extern "C" void fn_00c3ed50();
extern "C" void fn_00c3f1d0();
extern "C" void fn_00c3f7e0();
extern "C" void fn_00c3fb70();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00dd4f90
extern "C" __declspec(naked) void asm_00dd4f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x1311b00 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13117f8 }
	__asm { push 0 }
	__asm { push 0xe7383c }
	__asm { push 0xef0590 }
	__asm { push 0 }
	__asm { push 0xc4b770 }
	__asm { call fn_00c3fb70 }
	__asm { push 0xe0a110 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x1311718 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13117c0 }
	__asm { push 0 }
	__asm { push 0xe83694 }
	__asm { push 0xef02ac }
	__asm { push 0 }
	__asm { push 0xc4bca0 }
	__asm { call fn_00c3f7e0 }
	__asm { push 0xe0a180 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x13110f0 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1311c80 }
	__asm { push 0 }
	__asm { push 0xe83694 }
	__asm { push 0xef02dc }
	__asm { push 0 }
	__asm { push 0xc4cdb0 }
	__asm { call fn_00c3eae0 }
	__asm { push 0xe0a230 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x1310e10 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x13113e8 }
	__asm { push 0 }
	__asm { push 0xe83694 }
	__asm { push 0xef02c4 }
	__asm { push 0 }
	__asm { push 0xc4ced0 }
	__asm { call fn_00c3ed50 }
	__asm { push 0xe0a2e0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x1311750 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1311058 }
	__asm { push 0 }
	__asm { push 0xe83694 }
	__asm { push 0xef0294 }
	__asm { push 0 }
	__asm { push 0xc4cfe0 }
	__asm { call fn_00c3ea10 }
	__asm { push 0xe0a390 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push 0x1311b68 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { push dword ptr [ebp - 8] }
	__asm { mov ecx, 0x1311648 }
	__asm { push 0 }
	__asm { push 0x1024d64 }
	__asm { push 0xe83694 }
	__asm { push 0xef02b8 }
	__asm { push 0 }
	__asm { push 0xc50330 }
	__asm { call fn_00c3f1d0 }
	__asm { push 0xe0a440 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e0ee8[];
extern "C" char g_012e0f08[];
extern "C" char g_012e0f18[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de25f0
extern "C" __declspec(naked) void asm_00de25f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e80a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012e0f18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00de2654 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00de264b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00de264a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00de264a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00de264a: }
	__asm { pop ebx }
	__asm { L_00de264b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de2654: }
	__asm { mov ecx, 0x12e0f08 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e0f08] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e0ee8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e11c0[];
extern "C" char g_012e11e0[];
extern "C" char g_012e11f0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2a90
extern "C" __declspec(naked) void asm_00de2a90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1e82a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012e11f0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00de2af4 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00de2aeb }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00de2aea }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00de2aea }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00de2aea: }
	__asm { pop ebx }
	__asm { L_00de2aeb: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de2af4: }
	__asm { mov ecx, 0x12e11e0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e11e0] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e11c0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e1ce0[];
extern "C" char g_012e1d00[];
extern "C" char g_012e1d10[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de3ec0
extern "C" __declspec(naked) void asm_00de3ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1fa1a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012e1d10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00de3f24 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00de3f1b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00de3f1a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00de3f1a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00de3f1a: }
	__asm { pop ebx }
	__asm { L_00de3f1b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00de3f24: }
	__asm { mov ecx, 0x12e1d00 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012e1d00] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e1ce0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fbaf0[];
extern "C" char g_012fbb10[];
extern "C" char g_012fbb20[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ded250
extern "C" __declspec(naked) void asm_00ded250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd2c89a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012fbb20] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00ded2b4 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00ded2ab }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00ded2aa }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00ded2aa }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00ded2aa: }
	__asm { pop ebx }
	__asm { L_00ded2ab: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ded2b4: }
	__asm { mov ecx, 0x12fbb10 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012fbb10] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012fbaf0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ff160[];
extern "C" char g_012ff180[];
extern "C" char g_012ff190[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df2a20
extern "C" __declspec(naked) void asm_00df2a20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34d3a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012ff190] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00df2a84 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00df2a7b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00df2a7a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00df2a7a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00df2a7a: }
	__asm { pop ebx }
	__asm { L_00df2a7b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df2a84: }
	__asm { mov ecx, 0x12ff180 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012ff180] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012ff160], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ff288[];
extern "C" char g_012ff2a8[];
extern "C" char g_012ff2b8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df2c80
extern "C" __declspec(naked) void asm_00df2c80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd34e2a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012ff2b8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00df2ce4 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00df2cdb }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00df2cda }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00df2cda }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00df2cda: }
	__asm { pop ebx }
	__asm { L_00df2cdb: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df2ce4: }
	__asm { mov ecx, 0x12ff2a8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012ff2a8] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012ff288], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012ff358[];
extern "C" char g_012ff378[];
extern "C" char g_012ff388[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df2f60
extern "C" __declspec(naked) void asm_00df2f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3500a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_012ff388] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00df2fc4 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00df2fbb }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00df2fba }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00df2fba }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00df2fba: }
	__asm { pop ebx }
	__asm { L_00df2fbb: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df2fc4: }
	__asm { mov ecx, 0x12ff378 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_012ff378] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012ff358], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01300e08[];
extern "C" char g_01300e28[];
extern "C" char g_01300e3c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df4ec0
extern "C" __declspec(naked) void asm_00df4ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3a6ba }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01300e3c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00df4f24 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00df4f1b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00df4f1a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00df4f1a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00df4f1a: }
	__asm { pop ebx }
	__asm { L_00df4f1b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df4f24: }
	__asm { mov ecx, 0x1300e28 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01300e28] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01300e08], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01303ea0[];
extern "C" char g_01303eb0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df7c20
extern "C" __declspec(naked) void asm_00df7c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd3e71a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01303eb0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00df7c84 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00df7c7b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00df7c7a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00df7c7a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00df7c7a: }
	__asm { pop ebx }
	__asm { L_00df7c7b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df7c84: }
	__asm { mov ecx, 0x1303ea0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01303ea0] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
}

extern "C" char g_01305c48[];
extern "C" char g_01305c68[];
extern "C" char g_01305c7c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9e90
extern "C" __declspec(naked) void asm_00df9e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd412aa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01305c7c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00df9ef4 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00df9eeb }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00df9eea }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00df9eea }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00df9eea: }
	__asm { pop ebx }
	__asm { L_00df9eeb: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df9ef4: }
	__asm { mov ecx, 0x1305c68 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305c68] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01305c48], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305c10[];
extern "C" char g_01305c30[];
extern "C" char g_01305c44[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00df9f60
extern "C" __declspec(naked) void asm_00df9f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd412ca }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01305c44] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00df9fc4 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00df9fbb }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00df9fba }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00df9fba }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00df9fba: }
	__asm { pop ebx }
	__asm { L_00df9fbb: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00df9fc4: }
	__asm { mov ecx, 0x1305c30 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305c30] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01305c10], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01305a68[];
extern "C" char g_01305a88[];
extern "C" char g_01305a9c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dfacd0
extern "C" __declspec(naked) void asm_00dfacd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd412ea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01305a9c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00dfad34 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00dfad2b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00dfad2a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00dfad2a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00dfad2a: }
	__asm { pop ebx }
	__asm { L_00dfad2b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00dfad34: }
	__asm { mov ecx, 0x1305a88 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01305a88] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01305a68], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c088[];
extern "C" char g_0130c0a8[];
extern "C" char g_0130c0b8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e020f0
extern "C" __declspec(naked) void asm_00e020f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd500ea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130c0b8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00e02154 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00e0214b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00e0214a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00e0214a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00e0214a: }
	__asm { pop ebx }
	__asm { L_00e0214b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e02154: }
	__asm { mov ecx, 0x130c0a8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130c0a8] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130c088], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c0e8[];
extern "C" char g_0130c108[];
extern "C" char g_0130c118[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e022e0
extern "C" __declspec(naked) void asm_00e022e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5063a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130c118] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00e02344 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00e0233b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00e0233a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00e0233a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00e0233a: }
	__asm { pop ebx }
	__asm { L_00e0233b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e02344: }
	__asm { mov ecx, 0x130c108 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130c108] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130c0e8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c240[];
extern "C" char g_0130c260[];
extern "C" char g_0130c270[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e02530
extern "C" __declspec(naked) void asm_00e02530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd509da }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130c270] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00e02594 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00e0258b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00e0258a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00e0258a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00e0258a: }
	__asm { pop ebx }
	__asm { L_00e0258b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e02594: }
	__asm { mov ecx, 0x130c260 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130c260] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130c240], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130c1d0[];
extern "C" char g_0130c1f0[];
extern "C" char g_0130c200[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e02600
extern "C" __declspec(naked) void asm_00e02600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd509fa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130c200] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00e02664 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00e0265b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00e0265a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00e0265a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00e0265a: }
	__asm { pop ebx }
	__asm { L_00e0265b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e02664: }
	__asm { mov ecx, 0x130c1f0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130c1f0] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130c1d0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130cb18[];
extern "C" char g_0130cb38[];
extern "C" char g_0130cb48[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e03850
extern "C" __declspec(naked) void asm_00e03850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd525ba }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130cb48] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00e038b4 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00e038ab }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00e038aa }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00e038aa }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00e038aa: }
	__asm { pop ebx }
	__asm { L_00e038ab: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e038b4: }
	__asm { mov ecx, 0x130cb38 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130cb38] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130cb18], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130cae0[];
extern "C" char g_0130cb00[];
extern "C" char g_0130cb10[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e03990
extern "C" __declspec(naked) void asm_00e03990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd525da }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130cb10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00e039f4 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00e039eb }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00e039ea }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00e039ea }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00e039ea: }
	__asm { pop ebx }
	__asm { L_00e039eb: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e039f4: }
	__asm { mov ecx, 0x130cb00 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130cb00] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130cae0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ce20[];
extern "C" char g_0130ce40[];
extern "C" char g_0130ce50[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e042c0
extern "C" __declspec(naked) void asm_00e042c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd52f3a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130ce50] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00e04324 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00e0431b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00e0431a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00e0431a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00e0431a: }
	__asm { pop ebx }
	__asm { L_00e0431b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e04324: }
	__asm { mov ecx, 0x130ce40 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130ce40] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130ce20], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130dcb0[];
extern "C" char g_0130dcd0[];
extern "C" char g_0130dce0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e05960
extern "C" __declspec(naked) void asm_00e05960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5555a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130dce0] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00e059c4 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00e059bb }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00e059ba }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00e059ba }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00e059ba: }
	__asm { pop ebx }
	__asm { L_00e059bb: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e059c4: }
	__asm { mov ecx, 0x130dcd0 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130dcd0] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130dcb0], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130dce8[];
extern "C" char g_0130dd08[];
extern "C" char g_0130dd18[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e05a30
extern "C" __declspec(naked) void asm_00e05a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5557a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130dd18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00e05a94 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00e05a8b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00e05a8a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00e05a8a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00e05a8a: }
	__asm { pop ebx }
	__asm { L_00e05a8b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e05a94: }
	__asm { mov ecx, 0x130dd08 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130dd08] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130dce8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130e410[];
extern "C" char g_0130e430[];
extern "C" char g_0130e440[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e067e0
extern "C" __declspec(naked) void asm_00e067e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd5630a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_0130e440] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00e06844 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00e0683b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00e0683a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00e0683a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00e0683a: }
	__asm { pop ebx }
	__asm { L_00e0683b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e06844: }
	__asm { mov ecx, 0x130e430 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_0130e430] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_0130e410], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013101b8[];
extern "C" char g_013101d8[];
extern "C" char g_013101e8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e08e00
extern "C" __declspec(naked) void asm_00e08e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd628da }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_013101e8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00e08e64 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00e08e5b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00e08e5a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00e08e5a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00e08e5a: }
	__asm { pop ebx }
	__asm { L_00e08e5b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e08e64: }
	__asm { mov ecx, 0x13101d8 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_013101d8] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013101b8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_013102e8[];
extern "C" char g_01310308[];
extern "C" char g_01310318[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e095f0
extern "C" __declspec(naked) void asm_00e095f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd628fa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01310318] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00e09654 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00e0964b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00e0964a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00e0964a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00e0964a: }
	__asm { pop ebx }
	__asm { L_00e0964b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e09654: }
	__asm { mov ecx, 0x1310308 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01310308] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_013102e8], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01310740[];
extern "C" char g_01310760[];
extern "C" char g_01310770[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e096c0
extern "C" __declspec(naked) void asm_00e096c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6291a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01310770] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00e09724 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00e0971b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00e0971a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00e0971a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00e0971a: }
	__asm { pop ebx }
	__asm { L_00e0971b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e09724: }
	__asm { mov ecx, 0x1310760 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01310760] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01310740], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311458[];
extern "C" char g_01311478[];
extern "C" char g_01311488[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0ab40
extern "C" __declspec(naked) void asm_00e0ab40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd646ea }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01311488] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00e0aba4 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00e0ab9b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00e0ab9a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00e0ab9a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00e0ab9a: }
	__asm { pop ebx }
	__asm { L_00e0ab9b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0aba4: }
	__asm { mov ecx, 0x1311478 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01311478] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01311458], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311128[];
extern "C" char g_01311148[];
extern "C" char g_01311158[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0ae80
extern "C" __declspec(naked) void asm_00e0ae80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6470a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01311158] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00e0aee4 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00e0aedb }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00e0aeda }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00e0aeda }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00e0aeda: }
	__asm { pop ebx }
	__asm { L_00e0aedb: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0aee4: }
	__asm { mov ecx, 0x1311148 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01311148] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01311128], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311f68[];
extern "C" char g_01311f88[];
extern "C" char g_01311f98[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0b700
extern "C" __declspec(naked) void asm_00e0b700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6472a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01311f98] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00e0b764 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00e0b75b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00e0b75a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00e0b75a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00e0b75a: }
	__asm { pop ebx }
	__asm { L_00e0b75b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0b764: }
	__asm { mov ecx, 0x1311f88 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01311f88] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01311f68], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01311e00[];
extern "C" char g_01311e20[];
extern "C" char g_01311e30[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00493600();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00e0b7d0
extern "C" __declspec(naked) void asm_00e0b7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd6474a }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [g_01311e30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00e0b834 }
	__asm { mov esi, dword ptr [edi + 4] }
	__asm { test esi, esi }
	__asm { je L_00e0b82b }
	__asm { push ebx }
	__asm { or ebx, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, ebx }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00e0b82a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], ebx }
	__asm { dec ebx }
	__asm { jne L_00e0b82a }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00e0b82a: }
	__asm { pop ebx }
	__asm { L_00e0b82b: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00e0b834: }
	__asm { mov ecx, 0x1311e20 }
	__asm { call fn_00493600 }
	__asm { mov esi, dword ptr [g_01311e20] }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { lea eax, [esi + 4] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 0xd] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01311e00], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
