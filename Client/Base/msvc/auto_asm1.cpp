// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x00403690
extern "C" __declspec(naked) void asm_00403690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
// FUNCTION: ROBLOXSTUDIO 0x00403a10
extern "C" __declspec(naked) void asm_00403a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_011dd378[];
extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x004052d0
extern "C" __declspec(naked) void asm_004052d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [ebp + 8] }
	__asm { mov byte ptr [g_011dd378], al }
	__asm { mov dword ptr [ebp + 8], 0x13196cc }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x004052f0
extern "C" __declspec(naked) void asm_004052f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x6c], eax }
	__asm { mov dword ptr [ebp + 8], 0x1319724 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00405310
extern "C" __declspec(naked) void asm_00405310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x70], eax }
	__asm { mov dword ptr [ebp + 8], 0x13193ec }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
}

// FUNCTION: ROBLOXSTUDIO 0x00405b70
extern "C" __declspec(naked) void asm_00405b70()
{
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp eax }
}

// FUNCTION: ROBLOXSTUDIO 0x00405b80
extern "C" __declspec(naked) void asm_00405b80()
{
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { jmp eax }
}

// FUNCTION: ROBLOXSTUDIO 0x00407830
extern "C" __declspec(naked) void asm_00407830()
{
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax] }
	__asm { jmp eax }
}

// FUNCTION: ROBLOXSTUDIO 0x00407840
extern "C" __declspec(naked) void asm_00407840()
{
	__asm { mov ecx, dword ptr [ecx + 0x2c] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { jmp eax }
}

extern "C" void fn_0040f6b0();
// FUNCTION: ROBLOXSTUDIO 0x0040f710
extern "C" __declspec(naked) void asm_0040f710()
{
	__asm { push esi }
	__asm { push 0xf138fc }
	__asm { push 0xb }
	__asm { mov esi, ecx }
	__asm { call fn_0040f6b0 }
	__asm { mov dword ptr [esi], 0xe1826c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0040fe60();
// FUNCTION: ROBLOXSTUDIO 0x0040ff60
extern "C" __declspec(naked) void asm_0040ff60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040fe60 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00410520
extern "C" __declspec(naked) void asm_00410520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe19198 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004119d0();
// FUNCTION: ROBLOXSTUDIO 0x00411ad0
extern "C" __declspec(naked) void asm_00411ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004119d0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00412680
extern "C" __declspec(naked) void asm_00412680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe18168 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e123a0[];
// FUNCTION: ROBLOXSTUDIO 0x00413c10
extern "C" __declspec(naked) void asm_00413c10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e123a0] }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [eax + 0xcc] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b5ea0();
// FUNCTION: ROBLOXSTUDIO 0x00414990
extern "C" __declspec(naked) void asm_00414990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_007b5ea0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0041e980
extern "C" __declspec(naked) void asm_0041e980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [eax + 0x18] }
	__asm { add ecx, dword ptr [eax + 0x14] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { pop ebp }
	__asm { jmp eax }
}

extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x0041f1e0
extern "C" __declspec(naked) void asm_0041f1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea ecx, [ecx + 8] }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e11110] }
}

// FUNCTION: ROBLOXSTUDIO 0x00420d30
extern "C" __declspec(naked) void asm_00420d30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push dword ptr [eax + 0xc] }
	__asm { add ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004216b0();
// FUNCTION: ROBLOXSTUDIO 0x004217b0
extern "C" __declspec(naked) void asm_004217b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004216b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00421d70
extern "C" __declspec(naked) void asm_00421d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe1b804 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x004225e0
extern "C" __declspec(naked) void asm_004225e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00422570 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x00423a50
extern "C" __declspec(naked) void asm_00423a50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0x1004fc8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00426080();
// FUNCTION: ROBLOXSTUDIO 0x00424610
extern "C" __declspec(naked) void asm_00424610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00426080 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00425fe0();
// FUNCTION: ROBLOXSTUDIO 0x00424710
extern "C" __declspec(naked) void asm_00424710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00425fe0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00424930
extern "C" __declspec(naked) void asm_00424930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov dword ptr [ecx + 8], edx }
	__asm { mov eax, ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10320[];
// FUNCTION: ROBLOXSTUDIO 0x00425e00
extern "C" __declspec(naked) void asm_00425e00()
{
	__asm { sub ecx, dword ptr [ecx - 4] }
	__asm { sub ecx, 0x50 }
	__asm { jmp dword ptr [g_00e10320] }
}

extern "C" char g_00e10324[];
// FUNCTION: ROBLOXSTUDIO 0x00425e0c
extern "C" __declspec(naked) void asm_00425e0c()
{
	__asm { sub ecx, dword ptr [ecx - 4] }
	__asm { sub ecx, 0x50 }
	__asm { jmp dword ptr [g_00e10324] }
}

extern "C" void fn_00825140();
// FUNCTION: ROBLOXSTUDIO 0x00426d00
extern "C" __declspec(naked) void asm_00426d00()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00825140 }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00cf6970();
// FUNCTION: ROBLOXSTUDIO 0x00427ac0
extern "C" __declspec(naked) void asm_00427ac0()
{
	__asm { push 0 }
	__asm { push 0x2710 }
	__asm { push dword ptr [ecx + 0x54] }
	__asm { push dword ptr [ecx + 0x50] }
	__asm { call fn_00cf6970 }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00428200
extern "C" __declspec(naked) void asm_00428200()
{
	__asm { xor eax, eax }
	__asm { ret 0x20 }
}

// FUNCTION: ROBLOXSTUDIO 0x0042ba60
extern "C" __declspec(naked) void asm_0042ba60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx + 0xc] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 8], edx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10320[];
// FUNCTION: ROBLOXSTUDIO 0x0042d83f
extern "C" __declspec(naked) void asm_0042d83f()
{
	__asm { sub ecx, dword ptr [ecx - 4] }
	__asm { sub ecx, 0x60 }
	__asm { jmp dword ptr [g_00e10320] }
}

extern "C" char g_00e10324[];
// FUNCTION: ROBLOXSTUDIO 0x0042d84b
extern "C" __declspec(naked) void asm_0042d84b()
{
	__asm { sub ecx, dword ptr [ecx - 4] }
	__asm { sub ecx, 0x60 }
	__asm { jmp dword ptr [g_00e10324] }
}

extern "C" char g_00e10324[];
// FUNCTION: ROBLOXSTUDIO 0x0042d857
extern "C" __declspec(naked) void asm_0042d857()
{
	__asm { sub ecx, dword ptr [ecx - 4] }
	__asm { sub ecx, 0x48 }
	__asm { jmp dword ptr [g_00e10324] }
}

extern "C" char g_00e10558[];
// FUNCTION: ROBLOXSTUDIO 0x0042e060
extern "C" __declspec(naked) void asm_0042e060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { movsx eax, byte ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10558] }
	__asm { xor ecx, ecx }
	__asm { add esp, 8 }
	__asm { cmp eax, -1 }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00436bf0();
// FUNCTION: ROBLOXSTUDIO 0x0042f410
extern "C" __declspec(naked) void asm_0042f410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ecx + 0x30] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00436bf0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0043d0d0
extern "C" __declspec(naked) void asm_0043d0d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x0043d1b0
extern "C" __declspec(naked) void asm_0043d1b0()
{
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { jmp eax }
}

// FUNCTION: ROBLOXSTUDIO 0x0043d1c0
extern "C" __declspec(naked) void asm_0043d1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, ecx }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { pop ebp }
	__asm { jmp eax }
}

extern "C" void fn_0043de20();
// FUNCTION: ROBLOXSTUDIO 0x0043d5d0
extern "C" __declspec(naked) void asm_0043d5d0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_0043de20 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0043e340();
// FUNCTION: ROBLOXSTUDIO 0x0043dd30
extern "C" __declspec(naked) void asm_0043dd30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ecx + 4] }
	__asm { pop ebp }
	__asm { jmp fn_0043e340 }
}

extern "C" void fn_00437a90();
extern "C" void fn_0043e830();
// FUNCTION: ROBLOXSTUDIO 0x0043e818
extern "C" __declspec(naked) void asm_0043e818()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp fn_00437a90 }
	__asm { jmp fn_0043e830 }
}

extern "C" void fn_0043ed80();
extern "C" void fn_00825140();
// FUNCTION: ROBLOXSTUDIO 0x0043edf0
extern "C" __declspec(naked) void asm_0043edf0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00825140 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push eax }
	__asm { call fn_0043ed80 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_0044ccd0();
// FUNCTION: ROBLOXSTUDIO 0x0044a420
extern "C" __declspec(naked) void asm_0044a420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0044ccd0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e122b0[];
// FUNCTION: ROBLOXSTUDIO 0x0044ec60
extern "C" __declspec(naked) void asm_0044ec60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e122b0] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x004513d0
extern "C" __declspec(naked) void asm_004513d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0x100bc68 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x004513f0
extern "C" __declspec(naked) void asm_004513f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0x100bc74 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e13014[];
// FUNCTION: ROBLOXSTUDIO 0x00451560
extern "C" __declspec(naked) void asm_00451560()
{
	__asm { push 2 }
	__asm { push 0x4ff }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e13014] }
	__asm { ret }
}

extern "C" void fn_0045ada0();
// FUNCTION: ROBLOXSTUDIO 0x0045a700
extern "C" __declspec(naked) void asm_0045a700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0045ada0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0045bdf0();
// FUNCTION: ROBLOXSTUDIO 0x0045be50
extern "C" __declspec(naked) void asm_0045be50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_0045bdf0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0045e600();
// FUNCTION: ROBLOXSTUDIO 0x0045d4c0
extern "C" __declspec(naked) void asm_0045d4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, 4 }
	__asm { call fn_0045e600 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01318f70[];
// FUNCTION: ROBLOXSTUDIO 0x0045da00
extern "C" __declspec(naked) void asm_0045da00()
{
	__asm { mov eax, dword ptr [g_01318f70] }
	__asm { ret }
}

extern "C" void fn_0045e4b0();
// FUNCTION: ROBLOXSTUDIO 0x0045e490
extern "C" __declspec(naked) void asm_0045e490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0045e4b0 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0045e560();
// FUNCTION: ROBLOXSTUDIO 0x0045e540
extern "C" __declspec(naked) void asm_0045e540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0045e560 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0045f3a0();
// FUNCTION: ROBLOXSTUDIO 0x0045f0e0
extern "C" __declspec(naked) void asm_0045f0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0045f3a0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101f8[];
extern "C" char g_00e101fc[];
// FUNCTION: ROBLOXSTUDIO 0x0045f760
extern "C" __declspec(naked) void asm_0045f760()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e101f8] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0045f780();
// FUNCTION: ROBLOXSTUDIO 0x0045f880
extern "C" __declspec(naked) void asm_0045f880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0045f780 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x0045fe40
extern "C" __declspec(naked) void asm_0045fe40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [esi], 0xe1815c }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00464f80();
// FUNCTION: ROBLOXSTUDIO 0x00464ce0
extern "C" __declspec(naked) void asm_00464ce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00464f80 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00465e40
extern "C" __declspec(naked) void asm_00465e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { pop ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6840();
extern "C" void fn_00cf68ec();
// FUNCTION: ROBLOXSTUDIO 0x004692a0
extern "C" __declspec(naked) void asm_004692a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xffffffc0 }
	__asm { fld qword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { add esp, 8 }
	__asm { call fn_00cf6840 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e122dc[];
// FUNCTION: ROBLOXSTUDIO 0x0046bd40
extern "C" __declspec(naked) void asm_0046bd40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e122dc] }
}

extern "C" char g_00e10d34[];
// FUNCTION: ROBLOXSTUDIO 0x0046be00
extern "C" __declspec(naked) void asm_0046be00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e10d34] }
}

extern "C" char g_00e10e58[];
// FUNCTION: ROBLOXSTUDIO 0x0046bfe0
extern "C" __declspec(naked) void asm_0046bfe0()
{
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x12bff78 }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { ret }
}

extern "C" char g_00e11eec[];
// FUNCTION: ROBLOXSTUDIO 0x0046d050
extern "C" __declspec(naked) void asm_0046d050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e11eec] }
}

extern "C" char g_00e10d28[];
// FUNCTION: ROBLOXSTUDIO 0x0046d110
extern "C" __declspec(naked) void asm_0046d110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e10d28] }
}

extern "C" char g_00e12c58[];
// FUNCTION: ROBLOXSTUDIO 0x0046d770
extern "C" __declspec(naked) void asm_0046d770()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e12c58] }
}

// FUNCTION: ROBLOXSTUDIO 0x00470510
extern "C" __declspec(naked) void asm_00470510()
{
	__asm { xor eax, eax }
	__asm { ret 8 }
}

extern "C" void fn_00473f00();
extern "C" void fn_00476d30();
// FUNCTION: ROBLOXSTUDIO 0x00473990
extern "C" __declspec(naked) void asm_00473990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00476d30 }
	__asm { mov ecx, esi }
	__asm { call fn_00473f00 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004747d0();
extern "C" void fn_00476e00();
// FUNCTION: ROBLOXSTUDIO 0x00474200
extern "C" __declspec(naked) void asm_00474200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00476e00 }
	__asm { mov ecx, esi }
	__asm { call fn_004747d0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00475170();
extern "C" void fn_00476d30();
// FUNCTION: ROBLOXSTUDIO 0x00474cd0
extern "C" __declspec(naked) void asm_00474cd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_00476d30 }
	__asm { mov ecx, esi }
	__asm { call fn_00475170 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12a60[];
// FUNCTION: ROBLOXSTUDIO 0x00476c90
extern "C" __declspec(naked) void asm_00476c90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { call dword ptr [g_00e12a60] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0057aab0();
// FUNCTION: ROBLOXSTUDIO 0x0047b7d0
extern "C" __declspec(naked) void asm_0047b7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0057aab0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0048a2a0();
// FUNCTION: ROBLOXSTUDIO 0x00489610
extern "C" __declspec(naked) void asm_00489610()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 8 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { push ecx }
	__asm { mov byte ptr [ebp + 8], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 8 }
	__asm { call fn_0048a2a0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10324[];
// FUNCTION: ROBLOXSTUDIO 0x0048a5b5
extern "C" __declspec(naked) void asm_0048a5b5()
{
	__asm { sub ecx, dword ptr [ecx - 4] }
	__asm { sub ecx, 0x58 }
	__asm { jmp dword ptr [g_00e10324] }
}

extern "C" void fn_0040ed30();
// FUNCTION: ROBLOXSTUDIO 0x0048b580
extern "C" __declspec(naked) void asm_0048b580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], ecx }
	__asm { call fn_0040ed30 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0048c330
extern "C" __declspec(naked) void asm_0048c330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { dec dword ptr [eax + 0x20] }
	__asm { mov eax, 0 }
	__asm { sete al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10320[];
// FUNCTION: ROBLOXSTUDIO 0x0048f009
extern "C" __declspec(naked) void asm_0048f009()
{
	__asm { sub ecx, dword ptr [ecx - 4] }
	__asm { sub ecx, 0x58 }
	__asm { jmp dword ptr [g_00e10320] }
}

extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x004900ac
extern "C" __declspec(naked) void asm_004900ac()
{
	__asm { push 3 }
	__asm { push eax }
	__asm { call edi }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_007cb250 }
}

extern "C" void fn_00492eb0();
// FUNCTION: ROBLOXSTUDIO 0x004955c2
extern "C" __declspec(naked) void asm_004955c2()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp fn_00492eb0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { jmp dword ptr [eax] }
}

extern "C" void fn_006b9830();
extern "C" void fn_0092fc40();
extern "C" void fn_00932930();
// FUNCTION: ROBLOXSTUDIO 0x00495930
extern "C" __declspec(naked) void asm_00495930()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { call fn_00932930 }
	__asm { call fn_006b9830 }
	__asm { mov ecx, dword ptr [esi + 0x88] }
	__asm { push eax }
	__asm { call fn_0092fc40 }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00496100
extern "C" __declspec(naked) void asm_00496100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00496260
extern "C" __declspec(naked) void asm_00496260()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { mov eax, dword ptr [eax] }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fd425[];
// FUNCTION: ROBLOXSTUDIO 0x00496c30
extern "C" __declspec(naked) void asm_00496c30()
{
	__asm { cmp byte ptr [g_012fd425], 0 }
	__asm { setne al }
	__asm { ret }
}

extern "C" void fn_0049a130();
// FUNCTION: ROBLOXSTUDIO 0x00497a40
extern "C" __declspec(naked) void asm_00497a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0049a130 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x004994c0
extern "C" __declspec(naked) void asm_004994c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10c88[];
// FUNCTION: ROBLOXSTUDIO 0x0049b670
extern "C" __declspec(naked) void asm_0049b670()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { call dword ptr [g_00e10c88] }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 8 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0049b840
extern "C" __declspec(naked) void asm_0049b840()
{
	__asm { xor al, al }
	__asm { ret 8 }
}

extern "C" void fn_0049ba50();
// FUNCTION: ROBLOXSTUDIO 0x0049b9a0
extern "C" __declspec(naked) void asm_0049b9a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 4 }
	__asm { call fn_0049ba50 }
	__asm { mov eax, dword ptr [eax] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x0049b9c0
extern "C" __declspec(naked) void asm_0049b9c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x5c] }
	__asm { pop ebp }
	__asm { jmp eax }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x0049c180
extern "C" __declspec(naked) void asm_0049c180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 0x10] }
	__asm { call dword ptr [g_00e11110] }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e12e88[];
extern "C" void fn_0049c9f0();
// FUNCTION: ROBLOXSTUDIO 0x0049cf40
extern "C" __declspec(naked) void asm_0049cf40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e12e88] }
	__asm { mov ecx, esi }
	__asm { call fn_0049c9f0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e11be4[];
// FUNCTION: ROBLOXSTUDIO 0x0049ff00
extern "C" __declspec(naked) void asm_0049ff00()
{
	__asm { call dword ptr [g_00e11be4] }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x004a26e0
extern "C" __declspec(naked) void asm_004a26e0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 0x30] }
	__asm { call dword ptr [g_00e11110] }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret 4 }
}

extern "C" void fn_004a4460();
// FUNCTION: ROBLOXSTUDIO 0x004a40e0
extern "C" __declspec(naked) void asm_004a40e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4460 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b1650();
// FUNCTION: ROBLOXSTUDIO 0x004ae8d0
extern "C" __declspec(naked) void asm_004ae8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call fn_004b1650 }
	__asm { add esp, 8 }
	__asm { pop ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b1b50();
// FUNCTION: ROBLOXSTUDIO 0x004af8c0
extern "C" __declspec(naked) void asm_004af8c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004b1b50 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004b2610();
// FUNCTION: ROBLOXSTUDIO 0x004b1d10
extern "C" __declspec(naked) void asm_004b1d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004b2610 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
