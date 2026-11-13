// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10268[];
extern "C" void fn_00421eb0();
extern "C" void fn_006dea00();
extern "C" void fn_00a4de70();
extern "C" void fn_00b92970();
extern "C" void fn_00b92b70();
extern "C" void fn_00b92b80();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00bb7780
extern "C" __declspec(naked) void asm_00bb7780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd5d53b }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [edi + 0x324], 0 }
	__asm { je L_00bb78f0 }
	__asm { sub esp, 8 }
	__asm { mov eax, esp }
	__asm { push dword ptr [edi + 0x38] }
	__asm { push eax }
	__asm { call fn_00421eb0 }
	__asm { add esp, 8 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call fn_00b92970 }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00b92b70 }
	__asm { push 0xc }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test eax, eax }
	__asm { je L_00bb7819 }
	__asm { test esi, esi }
	__asm { je L_00bb7807 }
	__asm { add esi, 4 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00b92b80 }
	__asm { mov esi, eax }
	__asm { jmp L_00bb781b }
	__asm { L_00bb7807: }
	__asm { xor esi, esi }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_00b92b80 }
	__asm { mov esi, eax }
	__asm { jmp L_00bb781b }
	__asm { L_00bb7819: }
	__asm { xor esi, esi }
	__asm { L_00bb781b: }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov eax, dword ptr [edi + 0x324] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x1307a00 }
	__asm { push 0x13079e8 }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push esi }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax + 0xb4] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_00a4de70 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx], eax }
	__asm { test esi, esi }
	__asm { je L_00bb7870 }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { L_00bb7870: }
	__asm { cmp dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_00bb78a3 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { L_00bb78a3: }
	__asm { mov dword ptr [ebp + 0x10], 0xe81a00 }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { test esi, esi }
	__asm { je L_00bb7908 }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_00bb7908 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00bb7908 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
	__asm { L_00bb78f0: }
	__asm { call fn_006dea00 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { L_00bb7908: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_009d8860();
extern "C" void fn_00bb6350();
extern "C" void fn_00bb6db0();
extern "C" void fn_00bb9b50();
// FUNCTION: ROBLOXSTUDIO 0x00bb7a00
extern "C" __declspec(naked) void asm_00bb7a00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xorps xmm0, xmm0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov eax, dword ptr [eax + 0x200] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { xor ecx, eax }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { comiss xmm0, dword ptr [ebp + 8] }
	__asm { jae L_00bb7aa1 }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { call fn_009d8860 }
	__asm { test eax, eax }
	__asm { sete al }
	__asm { test al, al }
	__asm { jne L_00bb7aa1 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov al, byte ptr [eax + 0x20b] }
	__asm { test al, al }
	__asm { je L_00bb7a4a }
	__asm { mov esi, 0xd }
	__asm { jmp L_00bb7aa6 }
	__asm { L_00bb7a4a: }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov al, byte ptr [eax + 0x20d] }
	__asm { test al, al }
	__asm { je L_00bb7a5e }
	__asm { mov esi, 0xe }
	__asm { jmp L_00bb7aa6 }
	__asm { L_00bb7a5e: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { cmp eax, 0xa }
	__asm { jne L_00bb7a7a }
	__asm { mov ecx, dword ptr [edi] }
	__asm { call fn_00bb6db0 }
	__asm { test al, al }
	__asm { je L_00bb7a7a }
	__asm { mov esi, 9 }
	__asm { jmp L_00bb7aa6 }
	__asm { L_00bb7a7a: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { cmp eax, 8 }
	__asm { jne L_00bb7a9c }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov eax, dword ptr [eax + 8] }
	__asm { mov al, byte ptr [eax + 0x20c] }
	__asm { test al, al }
	__asm { je L_00bb7a9c }
	__asm { mov esi, 1 }
	__asm { jmp L_00bb7aa6 }
	__asm { L_00bb7a9c: }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { jmp L_00bb7aa6 }
	__asm { L_00bb7aa1: }
	__asm { mov esi, 0xf }
	__asm { L_00bb7aa6: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { cmp esi, eax }
	__asm { je L_00bb7ad6 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x34] }
	__asm { cmp eax, 9 }
	__asm { jne L_00bb7ac2 }
	__asm { cmp esi, 0xa }
	__asm { je L_00bb7ad6 }
	__asm { L_00bb7ac2: }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00bb6350 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { jmp fn_00bb9b50 }
	__asm { L_00bb7ad6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e39be0[];
extern "C" char g_00ee05d4[];
extern "C" char g_010380b8[];
extern "C" char g_010385f0[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0043ec00();
extern "C" void fn_0043ee40();
extern "C" void fn_00532480();
extern "C" void fn_006b9740();
extern "C" void fn_006c6ab0();
extern "C" void fn_006d1260();
extern "C" void fn_006d1e60();
extern "C" void fn_006da0e0();
extern "C" void fn_007cd560();
extern "C" void fn_0083c210();
extern "C" void fn_00892d10();
extern "C" void fn_008950e0();
extern "C" void fn_00898ee0();
extern "C" void fn_009d8f70();
extern "C" void fn_00b15bc0();
// FUNCTION: ROBLOXSTUDIO 0x00bb84b0
extern "C" __declspec(naked) void asm_00bb84b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x64 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { call fn_009d8f70 }
	__asm { mov esi, dword ptr [eax + 0x104] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bb8510 }
	__asm { test esi, esi }
	__asm { jne L_00bb8510 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bb84ff }
	__asm { push 0x4ad }
	__asm { push 0xedf868 }
	__asm { push 0xee04cc }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb8510 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bb84ff: }
	__asm { movzx eax, al }
	__asm { push 0xee04d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb8510: }
	__asm { mov ecx, esi }
	__asm { call fn_00898ee0 }
	__asm { mov ecx, dword ptr [edi + 8] }
	__asm { lea eax, [esi + 0xa4] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { test ecx, ecx }
	__asm { je L_00bb8571 }
	__asm { mov eax, dword ptr [ecx + 0x38] }
	__asm { test eax, eax }
	__asm { je L_00bb853c }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { test ecx, ecx }
	__asm { je L_00bb853e }
	__asm { call fn_0043ee40 }
	__asm { jmp L_00bb853e }
	__asm { L_00bb853c: }
	__asm { mov eax, ecx }
	__asm { L_00bb853e: }
	__asm { test eax, eax }
	__asm { je L_00bb8571 }
	__asm { add eax, 0x1c }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { je L_00bb8571 }
	__asm { mov esi, dword ptr [eax + 0xc] }
	__asm { call fn_0043ec00 }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00bb8571 }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { lea ecx, [eax - 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_00bb8571 }
	__asm { call fn_0083c210 }
	__asm { mov esi, eax }
	__asm { jmp L_00bb8573 }
	__asm { L_00bb8571: }
	__asm { xor esi, esi }
	__asm { L_00bb8573: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00bb85b8 }
	__asm { test esi, esi }
	__asm { jne L_00bb85b8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bb85a7 }
	__asm { push 0x4b1 }
	__asm { push 0xedf868 }
	__asm { push 0xee0538 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb85b8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bb85a7: }
	__asm { movzx eax, al }
	__asm { push 0xee0540 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb85b8: }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { push 2 }
	__asm { lea eax, [ebp - 0x48] }
	__asm { push eax }
	__asm { call fn_006d1e60 }
	__asm { movss xmm5, dword ptr [eax] }
	__asm { movss xmm1, dword ptr [eax + 4] }
	__asm { movss xmm2, dword ptr [eax + 8] }
	__asm { movss xmm4, dword ptr [g_010380b8] }
	__asm { movss xmm0, dword ptr [g_010385f0] }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { xorps xmm5, xmm0 }
	__asm { movss xmm3, dword ptr [eax + 0x28] }
	__asm { xorps xmm1, xmm0 }
	__asm { mulss xmm5, xmm4 }
	__asm { xorps xmm2, xmm0 }
	__asm { mulss xmm1, xmm4 }
	__asm { addss xmm5, dword ptr [eax + 0x24] }
	__asm { mov ecx, dword ptr [edi + 0x24] }
	__asm { addss xmm3, xmm1 }
	__asm { movss xmm1, dword ptr [eax + 0x2c] }
	__asm { mulss xmm2, xmm4 }
	__asm { movaps xmm0, xmm5 }
	__asm { addss xmm0, xmm4 }
	__asm { addss xmm1, xmm2 }
	__asm { subss xmm5, xmm4 }
	__asm { movss dword ptr [ebp - 0x44], xmm3 }
	__asm { subss xmm3, dword ptr [g_00ee05d4] }
	__asm { movss dword ptr [ebp - 0x48], xmm0 }
	__asm { movaps xmm0, xmm1 }
	__asm { movss dword ptr [ebp - 0x18], xmm5 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x64], eax }
	__asm { subss xmm1, xmm4 }
	__asm { movss dword ptr [ebp - 0x14], xmm3 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x60], eax }
	__asm { addss xmm0, xmm4 }
	__asm { movss dword ptr [ebp - 0x10], xmm1 }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x5c], eax }
	__asm { mov eax, dword ptr [ebp - 0x48] }
	__asm { mov dword ptr [ebp - 0x58], eax }
	__asm { mov eax, dword ptr [ebp - 0x44] }
	__asm { add edi, 0x20 }
	__asm { movss dword ptr [ebp - 0x40], xmm0 }
	__asm { mov dword ptr [ebp - 0x54], eax }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 0x50], eax }
	__asm { test ecx, ecx }
	__asm { je L_00bb86a5 }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { test eax, eax }
	__asm { jns L_00bb86a5 }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { jne L_00bb8699 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { jmp L_00bb86a0 }
	__asm { L_00bb8699: }
	__asm { mov dword ptr [edi + 8], 0xa }
	__asm { L_00bb86a0: }
	__asm { call fn_008950e0 }
	__asm { L_00bb86a5: }
	__asm { push edi }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x64] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00b15bc0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { test al, al }
	__asm { je L_00bb86ff }
	__asm { cmp dword ptr [esi + 8], 0 }
	__asm { jne L_00bb86ff }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00bb86ee }
	__asm { push 0xeb }
	__asm { push 0xedf868 }
	__asm { push 0xe7baac }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00bb86ff }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00bb86ee: }
	__asm { movzx eax, al }
	__asm { push 0xedfa00 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00bb86ff: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { xor esi, esi }
	__asm { mov edx, dword ptr [eax + 0x38] }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0xc], edx }
	__asm { cmp dword ptr [eax + 0x24], esi }
	__asm { jle L_00bb8745 }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_00bb8714: }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov ecx, dword ptr [eax + 0x38] }
	__asm { cmp edx, ecx }
	__asm { je L_00bb8739 }
	__asm { test ecx, ecx }
	__asm { je L_00bb87cd }
	__asm { push edx }
	__asm { call fn_00532480 }
	__asm { test al, al }
	__asm { je L_00bb87cd }
	__asm { mov edx, dword ptr [ebp - 0xc] }
	__asm { L_00bb8739: }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { inc esi }
	__asm { add edi, 4 }
	__asm { cmp esi, dword ptr [eax + 0x24] }
	__asm { jl L_00bb8714 }
	__asm { L_00bb8745: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_00bb87c3 }
	__asm { mov esi, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0x3c] }
	__asm { call fn_006da0e0 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [esi + 0x44] }
	__asm { movss xmm0, dword ptr [ebp - 0x64] }
	__asm { mov eax, dword ptr [edi] }
	__asm { movss dword ptr [ebp - 0x24], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x60] }
	__asm { movss dword ptr [ebp - 0x20], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x5c] }
	__asm { movss dword ptr [ebp - 0x1c], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x58] }
	__asm { movss dword ptr [ebp - 0x18], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x54] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { movss dword ptr [ebp - 0x14], xmm0 }
	__asm { movss xmm0, dword ptr [ebp - 0x50] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0x4c], 0x3f800000 }
	__asm { mov dword ptr [ebp - 0x48], 0x3e4ccccd }
	__asm { mov dword ptr [ebp - 0x44], 0x3e4ccccd }
	__asm { mov dword ptr [ebp - 0x40], 0x3f000000 }
	__asm { movss dword ptr [ebp - 0x10], xmm0 }
	__asm { call dword ptr [eax + 0x48] }
	__asm { L_00bb87c3: }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00bb87cd: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { test esi, esi }
	__asm { je L_00bb881d }
	__asm { call fn_006d1260 }
	__asm { fld dword ptr [g_00e39be0] }
	__asm { movss xmm0, dword ptr [eax] }
	__asm { movss dword ptr [ebp - 0x4c], xmm0 }
	__asm { movss xmm0, dword ptr [eax + 4] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp - 8] }
	__asm { movss dword ptr [ebp - 0x48], xmm0 }
	__asm { fstp dword ptr [esp] }
	__asm { movss xmm0, dword ptr [eax + 8] }
	__asm { lea eax, [ebp - 0x4c] }
	__asm { push eax }
	__asm { push esi }
	__asm { movss dword ptr [ebp - 0x44], xmm0 }
	__asm { mov dword ptr [ebp - 0x40], 0x3f800000 }
	__asm { call fn_00892d10 }
	__asm { push eax }
	__asm { call fn_006c6ab0 }
	__asm { add esp, 0x10 }
	__asm { L_00bb881d: }
	__asm { pop edi }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_010380b8[];
extern "C" char g_01038120[];
extern "C" void fn_009d3b10();
extern "C" void fn_009d8f70();
// FUNCTION: ROBLOXSTUDIO 0x00bb8ae0
extern "C" __declspec(naked) void asm_00bb8ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { call fn_009d8f70 }
	__asm { test eax, eax }
	__asm { je L_00bb8b4d }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx], 0 }
	__asm { je L_00bb8b4d }
	__asm { movss xmm3, dword ptr [g_010380b8] }
	__asm { movss xmm1, dword ptr [ebp + 0xc] }
	__asm { comiss xmm3, xmm1 }
	__asm { jbe L_00bb8b14 }
	__asm { xorps xmm1, xmm1 }
	__asm { movss dword ptr [ebp + 0xc], xmm1 }
	__asm { L_00bb8b14: }
	__asm { movss xmm2, dword ptr [esi + 0x64] }
	__asm { movaps xmm0, xmm2 }
	__asm { mulss xmm0, xmm3 }
	__asm { movss dword ptr [ebp + 8], xmm1 }
	__asm { comiss xmm0, xmm1 }
	__asm { ja L_00bb8b37 }
	__asm { mulss xmm2, dword ptr [g_01038120] }
	__asm { comiss xmm1, xmm2 }
	__asm { jbe L_00bb8b48 }
	__asm { L_00bb8b37: }
	__asm { fld dword ptr [ebp + 8] }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { call fn_009d3b10 }
	__asm { movss xmm1, dword ptr [ebp + 0xc] }
	__asm { L_00bb8b48: }
	__asm { movss dword ptr [esi + 0x64], xmm1 }
	__asm { L_00bb8b4d: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}
