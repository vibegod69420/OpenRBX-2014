// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10194[];
extern "C" char g_00e10198[];
extern "C" char g_00e104f4[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01300140[];
extern "C" char g_01300144[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040faa0();
extern "C" void fn_004115f0();
extern "C" void fn_006b9740();
extern "C" void fn_006b97e0();
extern "C" void fn_006b9800();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00935550
extern "C" __declspec(naked) void asm_00935550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd36aee }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_009358cc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { push edi }
	__asm { L_00935582: }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push 0x936060 }
	__asm { push 0x1300124 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004115f0 }
	__asm { mov eax, dword ptr [g_01300144] }
	__asm { add esp, 8 }
	__asm { test al, 1 }
	__asm { jne L_009355e9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01300144], eax }
	__asm { push 8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_009355dd }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [g_01300140], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { jmp L_009355ee }
	__asm { L_009355dd: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [g_01300140], eax }
	__asm { mov byte ptr [ebp - 4], al }
	__asm { jmp L_009355ee }
	__asm { L_009355e9: }
	__asm { mov eax, dword ptr [g_01300140] }
	__asm { L_009355ee: }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { mov byte ptr [ebp - 0x20], 0 }
	__asm { call fn_0040edb0 }
	__asm { mov esi, dword ptr [esi] }
	__asm { mov ecx, 0xa }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test esi, esi }
	__asm { je L_00935675 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_0093561b }
	__asm { add eax, -5 }
	__asm { jmp L_0093561d }
	__asm { L_0093561b: }
	__asm { xor eax, eax }
	__asm { L_0093561d: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00935672 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00935672 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00935661 }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00935672 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00935661: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00935672: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { L_00935675: }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { je L_00935765 }
	__asm { L_00935680: }
	__asm { mov eax, ecx }
	__asm { dec ecx }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { test eax, eax }
	__asm { je L_00935765 }
	__asm { mov edi, dword ptr [esi + 0xc] }
	__asm { test edi, edi }
	__asm { je L_00935705 }
	__asm { lea eax, [edi + 5] }
	__asm { test eax, eax }
	__asm { je L_009356a8 }
	__asm { add eax, -5 }
	__asm { jmp L_009356aa }
	__asm { L_009356a8: }
	__asm { xor eax, eax }
	__asm { L_009356aa: }
	__asm { lea ebx, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_009356ff }
	__asm { cmp dword ptr [ebx], 0x7ffffff5 }
	__asm { jl L_009356ff }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_009356ee }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_009356ff }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_009356ee: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_009356ff: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_00935705: }
	__asm { mov eax, esi }
	__asm { mov esi, edi }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test eax, eax }
	__asm { je L_0093575a }
	__asm { lea ebx, [eax + 5] }
	__asm { test ebx, ebx }
	__asm { je L_0093571c }
	__asm { add ebx, -5 }
	__asm { jmp L_0093571e }
	__asm { L_0093571c: }
	__asm { xor ebx, ebx }
	__asm { L_0093571e: }
	__asm { lea eax, [ebx - 8] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00935754 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { push 0 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [eax] }
	__asm { mov ebx, dword ptr [ebp - 0x1c] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00935754 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0093575a }
	__asm { L_00935754: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0093575a: }
	__asm { mov ecx, dword ptr [ebp - 0x10] }
	__asm { test edi, edi }
	__asm { jne L_00935680 }
	__asm { L_00935765: }
	__asm { cmp byte ptr [ebp - 0x20], 0 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_009357c9 }
	__asm { mov ecx, dword ptr [ebp - 0x24] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_009357c9 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_009357c9 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_009357c9 }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 4] }
	__asm { test esi, esi }
	__asm { jne L_009357bf }
	__asm { push esi }
	__asm { push esi }
	__asm { call fn_0040faa0 }
	__asm { mov edx, eax }
	__asm { add esp, 8 }
	__asm { mov ecx, edx }
	__asm { xor eax, eax }
	__asm { lock cmpxchg dword ptr [edi], ecx }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { je L_009357bd }
	__asm { push edx }
	__asm { call dword ptr [g_00e10194] }
	__asm { jmp L_009357bf }
	__asm { L_009357bd: }
	__asm { mov esi, edx }
	__asm { L_009357bf: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10198] }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { L_009357c9: }
	__asm { test esi, esi }
	__asm { je L_00935830 }
	__asm { lea eax, [esi + 5] }
	__asm { test eax, eax }
	__asm { je L_009357d9 }
	__asm { add eax, -5 }
	__asm { jmp L_009357db }
	__asm { L_009357d9: }
	__asm { xor eax, eax }
	__asm { L_009357db: }
	__asm { lea edi, [eax - 8] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call fn_006b97e0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00935830 }
	__asm { cmp dword ptr [edi], 0x7ffffff5 }
	__asm { jl L_00935830 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0093581f }
	__asm { push 0xb0 }
	__asm { push 0x10027e0 }
	__asm { push 0xf13920 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00935830 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0093581f: }
	__asm { movzx eax, al }
	__asm { push 0xf13958 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00935830: }
	__asm { mov ecx, dword ptr [ebp - 0x18] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ecx], esi }
	__asm { test eax, eax }
	__asm { je L_0093587f }
	__asm { lea edi, [eax + 5] }
	__asm { test edi, edi }
	__asm { je L_00935847 }
	__asm { add edi, -5 }
	__asm { jmp L_00935849 }
	__asm { L_00935847: }
	__asm { xor edi, edi }
	__asm { L_00935849: }
	__asm { lea ebx, [edi - 8] }
	__asm { mov ecx, ebx }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00935879 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [ebx + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_00935879 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { jmp L_0093587f }
	__asm { L_00935879: }
	__asm { mov ebx, dword ptr [g_00e104f4] }
	__asm { L_0093587f: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_009358be }
	__asm { add esi, 5 }
	__asm { je L_00935894 }
	__asm { add esi, -5 }
	__asm { jmp L_00935896 }
	__asm { L_00935894: }
	__asm { xor esi, esi }
	__asm { L_00935896: }
	__asm { lea edi, [esi - 8] }
	__asm { mov ecx, edi }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009358be }
	__asm { mov eax, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax] }
	__asm { lea ecx, [edi + 4] }
	__asm { call fn_006b9800 }
	__asm { test eax, eax }
	__asm { jne L_009358be }
	__asm { push edi }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_009358be: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00935582 }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { L_009358cc: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10198[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01300110[];
extern "C" void fn_0040edb0();
extern "C" void fn_0040fb10();
extern "C" void fn_006b9740();
extern "C" void fn_007b5ea0();
extern "C" void fn_007c6b40();
extern "C" void fn_00935530();
// FUNCTION: ROBLOXSTUDIO 0x00936630
extern "C" __declspec(naked) void asm_00936630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd36c40 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01300110] }
	__asm { sub esp, 0x18 }
	__asm { test eax, eax }
	__asm { jne L_0093679b }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_007c6b40 }
	__asm { mov esi, dword ptr [ebp - 0x20] }
	__asm { mov ebx, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { or edi, 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_00936697 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00936697 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, edi }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_00936697 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00936697: }
	__asm { lea eax, [ebx + 0xa4] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_0040edb0 }
	__asm { cmp dword ptr [g_01300110], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jne L_00936756 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00935530 }
	__asm { add esp, 4 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { push 0 }
	__asm { push ebx }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_007b5ea0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_00936728 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { cmp eax, dword ptr [g_01300110] }
	__asm { je L_00936728 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00936717 }
	__asm { push 0x8b }
	__asm { push 0x1002ed8 }
	__asm { push 0x1002f28 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00936728 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00936717: }
	__asm { movzx eax, cl }
	__asm { push 0x1002f38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00936728: }
	__asm { mov esi, dword ptr [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_00936756 }
	__asm { lea eax, [esi + 4] }
	__asm { mov ecx, edi }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_00936756 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [esi + 8] }
	__asm { lock xadd dword ptr [eax], edi }
	__asm { dec edi }
	__asm { jne L_00936756 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_00936756: }
	__asm { cmp byte ptr [ebp - 0x10], 0 }
	__asm { mov esi, dword ptr [g_01300110] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { je L_00936796 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { mov eax, 0x80000000 }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { test eax, 0x40000000 }
	__asm { jne L_00936796 }
	__asm { cmp eax, 0x80000000 }
	__asm { jle L_00936796 }
	__asm { lock bts dword ptr [ecx], 0x1e }
	__asm { jb L_00936796 }
	__asm { call fn_0040fb10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10198] }
	__asm { L_00936796: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_0093679b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00ec3070[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e627c[];
extern "C" char g_012e64dc[];
extern "C" void fn_0041ed90();
extern "C" void fn_00532480();
extern "C" void fn_006b9740();
extern "C" void fn_007b4990();
extern "C" void fn_007cbf10();
extern "C" void fn_007cd560();
extern "C" void fn_0093aaa0();
extern "C" void fn_00a5d310();
extern "C" void fn_00c2fed0();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0093b7e0
extern "C" __declspec(naked) void asm_0093b7e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd3728c }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test edi, edi }
	__asm { je L_0093ba3b }
	__asm { mov ecx, edi }
	__asm { call fn_007b4990 }
	__asm { test eax, eax }
	__asm { je L_0093b8e0 }
	__asm { mov ecx, edi }
	__asm { call fn_007b4990 }
	__asm { mov ecx, eax }
	__asm { add ecx, 0xc4 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { je L_0093b8e0 }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { sub eax, dword ptr [ecx] }
	__asm { xor ebx, ebx }
	__asm { sar eax, 3 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { test eax, eax }
	__asm { je L_0093b8e0 }
	__asm { L_0093b845: }
	__asm { mov eax, dword ptr [ecx] }
	__asm { lea ecx, [eax + ebx*8] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_00a5d310 }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { mov esi, dword ptr [eax] }
	__asm { test edi, edi }
	__asm { je L_0093b882 }
	__asm { lea eax, [edi + 4] }
	__asm { or ecx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], ecx }
	__asm { jne L_0093b882 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea eax, [edi + 8] }
	__asm { or edx, 0xffffffff }
	__asm { lock xadd dword ptr [eax], edx }
	__asm { jne L_0093b882 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 8] }
	__asm { L_0093b882: }
	__asm { test esi, esi }
	__asm { je L_0093b8bc }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [esi + 0xe8], eax }
	__asm { jne L_0093b8bc }
	__asm { push esi }
	__asm { call fn_00c2fed0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0093b8ca }
	__asm { push esi }
	__asm { call fn_0093aaa0 }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { add esp, 4 }
	__asm { cmp eax, ecx }
	__asm { je L_0093b8bc }
	__asm { test ecx, ecx }
	__asm { je L_0093b8ca }
	__asm { push eax }
	__asm { call fn_00532480 }
	__asm { test al, al }
	__asm { je L_0093b8ca }
	__asm { L_0093b8bc: }
	__asm { inc ebx }
	__asm { cmp ebx, dword ptr [ebp - 0x10] }
	__asm { jae L_0093b8dd }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { jmp L_0093b845 }
	__asm { L_0093b8ca: }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0093b8dd: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { L_0093b8e0: }
	__asm { xor esi, esi }
	__asm { cmp dword ptr [edi + 0x3c], esi }
	__asm { je L_0093ba3b }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov ebx, dword ptr [eax + 4] }
	__asm { sub ebx, dword ptr [eax] }
	__asm { sar ebx, 3 }
	__asm { test ebx, ebx }
	__asm { je L_0093ba3b }
	__asm { mov edi, edi }
	__asm { L_0093b900: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0093b942 }
	__asm { cmp dword ptr [edi + 0x3c], 0 }
	__asm { jne L_0093b942 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0093b92d }
	__asm { push 0x42 }
	__asm { push 0x10049b8 }
	__asm { push 0x10049fc }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0093b942 }
	__asm { L_0093b92d: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0x1018178 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0093b942: }
	__asm { mov eax, dword ptr [edi + 0x3c] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov edi, dword ptr [eax + esi*8] }
	__asm { test edi, edi }
	__asm { je L_0093ba2e }
	__asm { add edi, 0x1c }
	__asm { je L_0093ba2e }
	__asm { mov eax, dword ptr [g_012e64dc] }
	__asm { test al, 1 }
	__asm { jne L_0093ba0b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e64dc], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { mov eax, dword ptr [g_012e627c] }
	__asm { test al, 1 }
	__asm { jne L_0093b9e3 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012e627c], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00ec3070] }
	__asm { call fn_0041ed90 }
	__asm { push eax }
	__asm { mov ecx, 0x12e6150 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde78d0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { L_0093b9e3: }
	__asm { push 0xe82910 }
	__asm { push 0x12e6150 }
	__asm { mov ecx, 0x12e63b0 }
	__asm { call fn_007cbf10 }
	__asm { push 0xde7eb0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0093ba0b: }
	__asm { mov ecx, dword ptr [edi + 0xc] }
	__asm { push 0x12e63b0 }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_0093ba2e }
	__asm { lea eax, [edi - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_0093ba2e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [eax + 0xe8], ecx }
	__asm { je L_0093ba3d }
	__asm { L_0093ba2e: }
	__asm { inc esi }
	__asm { cmp esi, ebx }
	__asm { jae L_0093ba3b }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { jmp L_0093b900 }
	__asm { L_0093ba3b: }
	__asm { xor eax, eax }
	__asm { L_0093ba3d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { int 3 }
	__asm { int 3 }
	__asm { mov al, byte ptr [ecx + 0xdd] }
	__asm { ret }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x0093c6c0
extern "C" __declspec(naked) void asm_0093c6c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movss xmm2, dword ptr [ebp + 8] }
	__asm { movss xmm1, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { movss xmm0, dword ptr [esi + 0xe0] }
	__asm { ucomiss xmm0, xmm2 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jp L_0093c6f5 }
	__asm { movss xmm0, dword ptr [esi + 0xe4] }
	__asm { ucomiss xmm0, xmm1 }
	__asm { lahf }
	__asm { test ah, 0x44 }
	__asm { jnp L_0093c741 }
	__asm { L_0093c6f5: }
	__asm { mov eax, dword ptr [esi] }
	__asm { movss dword ptr [esi + 0xe0], xmm2 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { movss dword ptr [esi + 0xe4], xmm1 }
	__asm { movss xmm0, dword ptr [esi + 0xe0] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { movss dword ptr [ebp - 8], xmm0 }
	__asm { movss dword ptr [ebp - 4], xmm1 }
	__asm { call dword ptr [eax + 0x90] }
	__asm { push 0x1300508 }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_0093c741: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_008523c0();
extern "C" void fn_0093bb60();
// FUNCTION: ROBLOXSTUDIO 0x0093c820
extern "C" __declspec(naked) void asm_0093c820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd415d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi - 0x68] }
	__asm { call fn_0093bb60 }
	__asm { cmp byte ptr [esi + 0x74], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_0093c86f }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { test eax, eax }
	__asm { je L_0093c86f }
	__asm { push eax }
	__asm { call fn_008523c0 }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { setne bl }
	__asm { jmp L_0093c871 }
	__asm { L_0093c86f: }
	__asm { xor bl, bl }
	__asm { L_0093c871: }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test esi, esi }
	__asm { je L_0093c8b9 }
	__asm { push edi }
	__asm { or edi, 0xffffffff }
	__asm { lea ecx, [esi + 4] }
	__asm { mov eax, edi }
	__asm { lock xadd dword ptr [ecx], eax }
	__asm { jne L_0093c8a6 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 4] }
	__asm { lea edx, [esi + 8] }
	__asm { lock xadd dword ptr [edx], edi }
	__asm { dec edi }
	__asm { jne L_0093c8a6 }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 8] }
	__asm { L_0093c8a6: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0093c8b9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
