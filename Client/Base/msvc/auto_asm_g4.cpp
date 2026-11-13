// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e10508[];
extern "C" char g_012c0618[];
extern "C" char g_012c0628[];
extern "C" char g_012c062c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dde740
extern "C" __declspec(naked) void asm_00dde740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c062c], 0x10 }
	__asm { jb L_00dde77c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0618] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0618 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dde77c: }
	__asm { mov dword ptr [g_012c062c], 0xf }
	__asm { mov dword ptr [g_012c0628], 0 }
	__asm { mov byte ptr [g_012c0618], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0630[];
extern "C" char g_012c0640[];
extern "C" char g_012c0644[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dde7a0
extern "C" __declspec(naked) void asm_00dde7a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c0644], 0x10 }
	__asm { jb L_00dde7dc }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0630] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0630 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dde7dc: }
	__asm { mov dword ptr [g_012c0644], 0xf }
	__asm { mov dword ptr [g_012c0640], 0 }
	__asm { mov byte ptr [g_012c0630], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0660[];
extern "C" char g_012c0670[];
extern "C" char g_012c0674[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dde920
extern "C" __declspec(naked) void asm_00dde920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c0674], 0x10 }
	__asm { jb L_00dde95c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0660] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0660 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dde95c: }
	__asm { mov dword ptr [g_012c0674], 0xf }
	__asm { mov dword ptr [g_012c0670], 0 }
	__asm { mov byte ptr [g_012c0660], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0690[];
extern "C" char g_012c06a0[];
extern "C" char g_012c06a4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddea10
extern "C" __declspec(naked) void asm_00ddea10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c06a4], 0x10 }
	__asm { jb L_00ddea4c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0690] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0690 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddea4c: }
	__asm { mov dword ptr [g_012c06a4], 0xf }
	__asm { mov dword ptr [g_012c06a0], 0 }
	__asm { mov byte ptr [g_012c0690], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c06a8[];
extern "C" char g_012c06b8[];
extern "C" char g_012c06bc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddea70
extern "C" __declspec(naked) void asm_00ddea70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c06bc], 0x10 }
	__asm { jb L_00ddeaac }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c06a8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c06a8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddeaac: }
	__asm { mov dword ptr [g_012c06bc], 0xf }
	__asm { mov dword ptr [g_012c06b8], 0 }
	__asm { mov byte ptr [g_012c06a8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c06c0[];
extern "C" char g_012c06d0[];
extern "C" char g_012c06d4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddead0
extern "C" __declspec(naked) void asm_00ddead0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c06d4], 0x10 }
	__asm { jb L_00ddeb0c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c06c0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c06c0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddeb0c: }
	__asm { mov dword ptr [g_012c06d4], 0xf }
	__asm { mov dword ptr [g_012c06d0], 0 }
	__asm { mov byte ptr [g_012c06c0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c06d8[];
extern "C" char g_012c06e8[];
extern "C" char g_012c06ec[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddeb30
extern "C" __declspec(naked) void asm_00ddeb30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c06ec], 0x10 }
	__asm { jb L_00ddeb6c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c06d8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c06d8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddeb6c: }
	__asm { mov dword ptr [g_012c06ec], 0xf }
	__asm { mov dword ptr [g_012c06e8], 0 }
	__asm { mov byte ptr [g_012c06d8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c06f0[];
extern "C" char g_012c0700[];
extern "C" char g_012c0704[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddeb90
extern "C" __declspec(naked) void asm_00ddeb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c0704], 0x10 }
	__asm { jb L_00ddebcc }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c06f0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c06f0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddebcc: }
	__asm { mov dword ptr [g_012c0704], 0xf }
	__asm { mov dword ptr [g_012c0700], 0 }
	__asm { mov byte ptr [g_012c06f0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0708[];
extern "C" char g_012c0718[];
extern "C" char g_012c071c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddebf0
extern "C" __declspec(naked) void asm_00ddebf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c071c], 0x10 }
	__asm { jb L_00ddec2c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0708] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0708 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddec2c: }
	__asm { mov dword ptr [g_012c071c], 0xf }
	__asm { mov dword ptr [g_012c0718], 0 }
	__asm { mov byte ptr [g_012c0708], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0720[];
extern "C" char g_012c0730[];
extern "C" char g_012c0734[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddec50
extern "C" __declspec(naked) void asm_00ddec50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c0734], 0x10 }
	__asm { jb L_00ddec8c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0720] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0720 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddec8c: }
	__asm { mov dword ptr [g_012c0734], 0xf }
	__asm { mov dword ptr [g_012c0730], 0 }
	__asm { mov byte ptr [g_012c0720], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0738[];
extern "C" char g_012c0748[];
extern "C" char g_012c074c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddecb0
extern "C" __declspec(naked) void asm_00ddecb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c074c], 0x10 }
	__asm { jb L_00ddecec }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0738] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0738 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddecec: }
	__asm { mov dword ptr [g_012c074c], 0xf }
	__asm { mov dword ptr [g_012c0748], 0 }
	__asm { mov byte ptr [g_012c0738], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0750[];
extern "C" char g_012c0760[];
extern "C" char g_012c0764[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dded10
extern "C" __declspec(naked) void asm_00dded10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c0764], 0x10 }
	__asm { jb L_00dded4c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0750] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0750 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dded4c: }
	__asm { mov dword ptr [g_012c0764], 0xf }
	__asm { mov dword ptr [g_012c0760], 0 }
	__asm { mov byte ptr [g_012c0750], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0768[];
extern "C" char g_012c0778[];
extern "C" char g_012c077c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dded70
extern "C" __declspec(naked) void asm_00dded70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c077c], 0x10 }
	__asm { jb L_00ddedac }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0768] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0768 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddedac: }
	__asm { mov dword ptr [g_012c077c], 0xf }
	__asm { mov dword ptr [g_012c0778], 0 }
	__asm { mov byte ptr [g_012c0768], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0780[];
extern "C" char g_012c0790[];
extern "C" char g_012c0794[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddedd0
extern "C" __declspec(naked) void asm_00ddedd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c0794], 0x10 }
	__asm { jb L_00ddee0c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0780] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0780 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddee0c: }
	__asm { mov dword ptr [g_012c0794], 0xf }
	__asm { mov dword ptr [g_012c0790], 0 }
	__asm { mov byte ptr [g_012c0780], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c07b0[];
extern "C" char g_012c07c0[];
extern "C" char g_012c07c4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddeeb0
extern "C" __declspec(naked) void asm_00ddeeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c07c4], 0x10 }
	__asm { jb L_00ddeeec }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c07b0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c07b0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddeeec: }
	__asm { mov dword ptr [g_012c07c4], 0xf }
	__asm { mov dword ptr [g_012c07c0], 0 }
	__asm { mov byte ptr [g_012c07b0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c07c8[];
extern "C" char g_012c07d8[];
extern "C" char g_012c07dc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddef10
extern "C" __declspec(naked) void asm_00ddef10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c07dc], 0x10 }
	__asm { jb L_00ddef4c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c07c8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c07c8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddef4c: }
	__asm { mov dword ptr [g_012c07dc], 0xf }
	__asm { mov dword ptr [g_012c07d8], 0 }
	__asm { mov byte ptr [g_012c07c8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c07e0[];
extern "C" char g_012c07f0[];
extern "C" char g_012c07f4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddef70
extern "C" __declspec(naked) void asm_00ddef70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c07f4], 0x10 }
	__asm { jb L_00ddefac }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c07e0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c07e0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddefac: }
	__asm { mov dword ptr [g_012c07f4], 0xf }
	__asm { mov dword ptr [g_012c07f0], 0 }
	__asm { mov byte ptr [g_012c07e0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c07f8[];
extern "C" char g_012c0808[];
extern "C" char g_012c080c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddefd0
extern "C" __declspec(naked) void asm_00ddefd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c080c], 0x10 }
	__asm { jb L_00ddf00c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c07f8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c07f8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddf00c: }
	__asm { mov dword ptr [g_012c080c], 0xf }
	__asm { mov dword ptr [g_012c0808], 0 }
	__asm { mov byte ptr [g_012c07f8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0810[];
extern "C" char g_012c0820[];
extern "C" char g_012c0824[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddf030
extern "C" __declspec(naked) void asm_00ddf030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c0824], 0x10 }
	__asm { jb L_00ddf06c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0810] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0810 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddf06c: }
	__asm { mov dword ptr [g_012c0824], 0xf }
	__asm { mov dword ptr [g_012c0820], 0 }
	__asm { mov byte ptr [g_012c0810], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0828[];
extern "C" char g_012c0838[];
extern "C" char g_012c083c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddf090
extern "C" __declspec(naked) void asm_00ddf090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c083c], 0x10 }
	__asm { jb L_00ddf0cc }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0828] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0828 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddf0cc: }
	__asm { mov dword ptr [g_012c083c], 0xf }
	__asm { mov dword ptr [g_012c0838], 0 }
	__asm { mov byte ptr [g_012c0828], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0840[];
extern "C" char g_012c0850[];
extern "C" char g_012c0854[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddf0f0
extern "C" __declspec(naked) void asm_00ddf0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c0854], 0x10 }
	__asm { jb L_00ddf12c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0840] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0840 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddf12c: }
	__asm { mov dword ptr [g_012c0854], 0xf }
	__asm { mov dword ptr [g_012c0850], 0 }
	__asm { mov byte ptr [g_012c0840], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c08b8[];
extern "C" char g_012c08c8[];
extern "C" char g_012c08cc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddf800
extern "C" __declspec(naked) void asm_00ddf800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c08cc], 0x10 }
	__asm { jb L_00ddf83c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c08b8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c08b8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddf83c: }
	__asm { mov dword ptr [g_012c08cc], 0xf }
	__asm { mov dword ptr [g_012c08c8], 0 }
	__asm { mov byte ptr [g_012c08b8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011d6008[];
extern "C" char g_011d6018[];
extern "C" char g_011d601c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ddf950
extern "C" __declspec(naked) void asm_00ddf950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011d601c], 0x10 }
	__asm { jb L_00ddf98b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011d6008] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11d6008 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddf98b: }
	__asm { mov dword ptr [g_011d601c], 0xf }
	__asm { mov dword ptr [g_011d6018], 0 }
	__asm { mov byte ptr [g_011d6008], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011d6020[];
extern "C" char g_011d6030[];
extern "C" char g_011d6034[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ddf9b0
extern "C" __declspec(naked) void asm_00ddf9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011d6034], 0x10 }
	__asm { jb L_00ddf9eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011d6020] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11d6020 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddf9eb: }
	__asm { mov dword ptr [g_011d6034], 0xf }
	__asm { mov dword ptr [g_011d6030], 0 }
	__asm { mov byte ptr [g_011d6020], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011d6174[];
extern "C" char g_011d6184[];
extern "C" char g_011d6188[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ddfa10
extern "C" __declspec(naked) void asm_00ddfa10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011d6188], 0x10 }
	__asm { jb L_00ddfa4b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011d6174] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11d6174 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddfa4b: }
	__asm { mov dword ptr [g_011d6188], 0xf }
	__asm { mov dword ptr [g_011d6184], 0 }
	__asm { mov byte ptr [g_011d6174], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011d615c[];
extern "C" char g_011d616c[];
extern "C" char g_011d6170[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ddfa70
extern "C" __declspec(naked) void asm_00ddfa70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011d6170], 0x10 }
	__asm { jb L_00ddfaab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011d615c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11d615c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddfaab: }
	__asm { mov dword ptr [g_011d6170], 0xf }
	__asm { mov dword ptr [g_011d616c], 0 }
	__asm { mov byte ptr [g_011d615c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011d69f0[];
extern "C" char g_011d6a00[];
extern "C" char g_011d6a04[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ddfad0
extern "C" __declspec(naked) void asm_00ddfad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011d6a04], 0x10 }
	__asm { jb L_00ddfb0b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011d69f0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11d69f0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddfb0b: }
	__asm { mov dword ptr [g_011d6a04], 0xf }
	__asm { mov dword ptr [g_011d6a00], 0 }
	__asm { mov byte ptr [g_011d69f0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011d6a20[];
extern "C" char g_011d6a30[];
extern "C" char g_011d6a34[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ddfb30
extern "C" __declspec(naked) void asm_00ddfb30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011d6a34], 0x10 }
	__asm { jb L_00ddfb6b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011d6a20] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11d6a20 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddfb6b: }
	__asm { mov dword ptr [g_011d6a34], 0xf }
	__asm { mov dword ptr [g_011d6a30], 0 }
	__asm { mov byte ptr [g_011d6a20], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011d6a08[];
extern "C" char g_011d6a18[];
extern "C" char g_011d6a1c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ddfb90
extern "C" __declspec(naked) void asm_00ddfb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011d6a1c], 0x10 }
	__asm { jb L_00ddfbcb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011d6a08] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11d6a08 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddfbcb: }
	__asm { mov dword ptr [g_011d6a1c], 0xf }
	__asm { mov dword ptr [g_011d6a18], 0 }
	__asm { mov byte ptr [g_011d6a08], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011d7f1c[];
extern "C" char g_011d7f2c[];
extern "C" char g_011d7f30[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ddfd70
extern "C" __declspec(naked) void asm_00ddfd70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011d7f30], 0x10 }
	__asm { jb L_00ddfdab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011d7f1c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11d7f1c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddfdab: }
	__asm { mov dword ptr [g_011d7f30], 0xf }
	__asm { mov dword ptr [g_011d7f2c], 0 }
	__asm { mov byte ptr [g_011d7f1c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011d7f34[];
extern "C" char g_011d7f44[];
extern "C" char g_011d7f48[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ddfdd0
extern "C" __declspec(naked) void asm_00ddfdd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011d7f48], 0x10 }
	__asm { jb L_00ddfe0b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011d7f34] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11d7f34 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddfe0b: }
	__asm { mov dword ptr [g_011d7f48], 0xf }
	__asm { mov dword ptr [g_011d7f44], 0 }
	__asm { mov byte ptr [g_011d7f34], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011d8dc8[];
extern "C" char g_011d8dd8[];
extern "C" char g_011d8ddc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ddffd0
extern "C" __declspec(naked) void asm_00ddffd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011d8ddc], 0x10 }
	__asm { jb L_00de000b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011d8dc8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11d8dc8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de000b: }
	__asm { mov dword ptr [g_011d8ddc], 0xf }
	__asm { mov dword ptr [g_011d8dd8], 0 }
	__asm { mov byte ptr [g_011d8dc8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011d8de0[];
extern "C" char g_011d8df0[];
extern "C" char g_011d8df4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0030
extern "C" __declspec(naked) void asm_00de0030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011d8df4], 0x10 }
	__asm { jb L_00de006b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011d8de0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11d8de0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de006b: }
	__asm { mov dword ptr [g_011d8df4], 0xf }
	__asm { mov dword ptr [g_011d8df0], 0 }
	__asm { mov byte ptr [g_011d8de0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011d8e50[];
extern "C" char g_011d8e60[];
extern "C" char g_011d8e64[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0090
extern "C" __declspec(naked) void asm_00de0090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011d8e64], 0x10 }
	__asm { jb L_00de00cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011d8e50] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11d8e50 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de00cb: }
	__asm { mov dword ptr [g_011d8e64], 0xf }
	__asm { mov dword ptr [g_011d8e60], 0 }
	__asm { mov byte ptr [g_011d8e50], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011d8f3c[];
extern "C" char g_011d8f4c[];
extern "C" char g_011d8f50[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de00f0
extern "C" __declspec(naked) void asm_00de00f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011d8f50], 0x10 }
	__asm { jb L_00de012b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011d8f3c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11d8f3c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de012b: }
	__asm { mov dword ptr [g_011d8f50], 0xf }
	__asm { mov dword ptr [g_011d8f4c], 0 }
	__asm { mov byte ptr [g_011d8f3c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011d8f54[];
extern "C" char g_011d8f64[];
extern "C" char g_011d8f68[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0150
extern "C" __declspec(naked) void asm_00de0150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011d8f68], 0x10 }
	__asm { jb L_00de018b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011d8f54] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11d8f54 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de018b: }
	__asm { mov dword ptr [g_011d8f68], 0xf }
	__asm { mov dword ptr [g_011d8f64], 0 }
	__asm { mov byte ptr [g_011d8f54], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011d8f6c[];
extern "C" char g_011d8f7c[];
extern "C" char g_011d8f80[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de01b0
extern "C" __declspec(naked) void asm_00de01b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011d8f80], 0x10 }
	__asm { jb L_00de01eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011d8f6c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11d8f6c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de01eb: }
	__asm { mov dword ptr [g_011d8f80], 0xf }
	__asm { mov dword ptr [g_011d8f7c], 0 }
	__asm { mov byte ptr [g_011d8f6c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011d93d8[];
extern "C" char g_011d93e8[];
extern "C" char g_011d93ec[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de02b0
extern "C" __declspec(naked) void asm_00de02b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011d93ec], 0x10 }
	__asm { jb L_00de02eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011d93d8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11d93d8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de02eb: }
	__asm { mov dword ptr [g_011d93ec], 0xf }
	__asm { mov dword ptr [g_011d93e8], 0 }
	__asm { mov byte ptr [g_011d93d8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011da3cc[];
extern "C" char g_011da3dc[];
extern "C" char g_011da3e0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0410
extern "C" __declspec(naked) void asm_00de0410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011da3e0], 0x10 }
	__asm { jb L_00de044b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011da3cc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11da3cc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de044b: }
	__asm { mov dword ptr [g_011da3e0], 0xf }
	__asm { mov dword ptr [g_011da3dc], 0 }
	__asm { mov byte ptr [g_011da3cc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011da3e4[];
extern "C" char g_011da3f4[];
extern "C" char g_011da3f8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0470
extern "C" __declspec(naked) void asm_00de0470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011da3f8], 0x10 }
	__asm { jb L_00de04ab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011da3e4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11da3e4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de04ab: }
	__asm { mov dword ptr [g_011da3f8], 0xf }
	__asm { mov dword ptr [g_011da3f4], 0 }
	__asm { mov byte ptr [g_011da3e4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011da414[];
extern "C" char g_011da424[];
extern "C" char g_011da428[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de04d0
extern "C" __declspec(naked) void asm_00de04d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011da428], 0x10 }
	__asm { jb L_00de050b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011da414] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11da414 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de050b: }
	__asm { mov dword ptr [g_011da428], 0xf }
	__asm { mov dword ptr [g_011da424], 0 }
	__asm { mov byte ptr [g_011da414], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011da3fc[];
extern "C" char g_011da40c[];
extern "C" char g_011da410[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0530
extern "C" __declspec(naked) void asm_00de0530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011da410], 0x10 }
	__asm { jb L_00de056b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011da3fc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11da3fc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de056b: }
	__asm { mov dword ptr [g_011da410], 0xf }
	__asm { mov dword ptr [g_011da40c], 0 }
	__asm { mov byte ptr [g_011da3fc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011da42c[];
extern "C" char g_011da43c[];
extern "C" char g_011da440[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0590
extern "C" __declspec(naked) void asm_00de0590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011da440], 0x10 }
	__asm { jb L_00de05cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011da42c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11da42c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de05cb: }
	__asm { mov dword ptr [g_011da440], 0xf }
	__asm { mov dword ptr [g_011da43c], 0 }
	__asm { mov byte ptr [g_011da42c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011db928[];
extern "C" char g_011db938[];
extern "C" char g_011db93c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0730
extern "C" __declspec(naked) void asm_00de0730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011db93c], 0x10 }
	__asm { jb L_00de076b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011db928] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11db928 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de076b: }
	__asm { mov dword ptr [g_011db93c], 0xf }
	__asm { mov dword ptr [g_011db938], 0 }
	__asm { mov byte ptr [g_011db928], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011dc4e8[];
extern "C" char g_011dc4f8[];
extern "C" char g_011dc4fc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de08c0
extern "C" __declspec(naked) void asm_00de08c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011dc4fc], 0x10 }
	__asm { jb L_00de08fb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011dc4e8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11dc4e8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de08fb: }
	__asm { mov dword ptr [g_011dc4fc], 0xf }
	__asm { mov dword ptr [g_011dc4f8], 0 }
	__asm { mov byte ptr [g_011dc4e8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011dc4d0[];
extern "C" char g_011dc4e0[];
extern "C" char g_011dc4e4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0920
extern "C" __declspec(naked) void asm_00de0920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011dc4e4], 0x10 }
	__asm { jb L_00de095b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011dc4d0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11dc4d0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de095b: }
	__asm { mov dword ptr [g_011dc4e4], 0xf }
	__asm { mov dword ptr [g_011dc4e0], 0 }
	__asm { mov byte ptr [g_011dc4d0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de778[];
extern "C" char g_012de77c[];
extern "C" char g_012de780[];
extern "C" void fn_00403a30();
extern "C" void fn_00410790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0bc0
extern "C" __declspec(naked) void asm_00de0bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012de778] }
	__asm { test eax, eax }
	__asm { je L_00de0c12 }
	__asm { push dword ptr [g_012de77c] }
	__asm { mov ecx, 0x12de778 }
	__asm { push eax }
	__asm { call fn_00410790 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push dword ptr [g_012de778] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de778], 0 }
	__asm { mov dword ptr [g_012de77c], 0 }
	__asm { mov dword ptr [g_012de780], 0 }
	__asm { L_00de0c12: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de768[];
extern "C" char g_012de76c[];
extern "C" char g_012de770[];
extern "C" void fn_00403a30();
extern "C" void fn_00410790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0c20
extern "C" __declspec(naked) void asm_00de0c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_012de768] }
	__asm { test eax, eax }
	__asm { je L_00de0c72 }
	__asm { push dword ptr [g_012de76c] }
	__asm { mov ecx, 0x12de768 }
	__asm { push eax }
	__asm { call fn_00410790 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push dword ptr [g_012de768] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012de768], 0 }
	__asm { mov dword ptr [g_012de76c], 0 }
	__asm { mov dword ptr [g_012de770], 0 }
	__asm { L_00de0c72: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011dce0c[];
extern "C" char g_011dce1c[];
extern "C" char g_011dce20[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0d10
extern "C" __declspec(naked) void asm_00de0d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011dce20], 0x10 }
	__asm { jb L_00de0d4b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011dce0c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11dce0c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de0d4b: }
	__asm { mov dword ptr [g_011dce20], 0xf }
	__asm { mov dword ptr [g_011dce1c], 0 }
	__asm { mov byte ptr [g_011dce0c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011dce3c[];
extern "C" char g_011dce4c[];
extern "C" char g_011dce50[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0d70
extern "C" __declspec(naked) void asm_00de0d70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011dce50], 0x10 }
	__asm { jb L_00de0dab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011dce3c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11dce3c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de0dab: }
	__asm { mov dword ptr [g_011dce50], 0xf }
	__asm { mov dword ptr [g_011dce4c], 0 }
	__asm { mov byte ptr [g_011dce3c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011dce24[];
extern "C" char g_011dce34[];
extern "C" char g_011dce38[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0dd0
extern "C" __declspec(naked) void asm_00de0dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011dce38], 0x10 }
	__asm { jb L_00de0e0b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011dce24] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11dce24 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de0e0b: }
	__asm { mov dword ptr [g_011dce38], 0xf }
	__asm { mov dword ptr [g_011dce34], 0 }
	__asm { mov byte ptr [g_011dce24], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011dd2fc[];
extern "C" char g_011dd30c[];
extern "C" char g_011dd310[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0ea0
extern "C" __declspec(naked) void asm_00de0ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011dd310], 0x10 }
	__asm { jb L_00de0edb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011dd2fc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11dd2fc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de0edb: }
	__asm { mov dword ptr [g_011dd310], 0xf }
	__asm { mov dword ptr [g_011dd30c], 0 }
	__asm { mov byte ptr [g_011dd2fc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011dd33c[];
extern "C" char g_011dd34c[];
extern "C" char g_011dd350[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0f00
extern "C" __declspec(naked) void asm_00de0f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011dd350], 0x10 }
	__asm { jb L_00de0f3b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011dd33c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11dd33c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de0f3b: }
	__asm { mov dword ptr [g_011dd350], 0xf }
	__asm { mov dword ptr [g_011dd34c], 0 }
	__asm { mov byte ptr [g_011dd33c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011dd354[];
extern "C" char g_011dd364[];
extern "C" char g_011dd368[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de0f60
extern "C" __declspec(naked) void asm_00de0f60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011dd368], 0x10 }
	__asm { jb L_00de0f9b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011dd354] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11dd354 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de0f9b: }
	__asm { mov dword ptr [g_011dd368], 0xf }
	__asm { mov dword ptr [g_011dd364], 0 }
	__asm { mov byte ptr [g_011dd354], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011ddd14[];
extern "C" char g_011ddd24[];
extern "C" char g_011ddd28[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de1450
extern "C" __declspec(naked) void asm_00de1450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011ddd28], 0x10 }
	__asm { jb L_00de148b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011ddd14] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11ddd14 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de148b: }
	__asm { mov dword ptr [g_011ddd28], 0xf }
	__asm { mov dword ptr [g_011ddd24], 0 }
	__asm { mov byte ptr [g_011ddd14], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011df00c[];
extern "C" char g_011df01c[];
extern "C" char g_011df020[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de1590
extern "C" __declspec(naked) void asm_00de1590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011df020], 0x10 }
	__asm { jb L_00de15cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011df00c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11df00c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de15cb: }
	__asm { mov dword ptr [g_011df020], 0xf }
	__asm { mov dword ptr [g_011df01c], 0 }
	__asm { mov byte ptr [g_011df00c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011df03c[];
extern "C" char g_011df04c[];
extern "C" char g_011df050[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de1680
extern "C" __declspec(naked) void asm_00de1680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011df050], 0x10 }
	__asm { jb L_00de16bb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011df03c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11df03c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de16bb: }
	__asm { mov dword ptr [g_011df050], 0xf }
	__asm { mov dword ptr [g_011df04c], 0 }
	__asm { mov byte ptr [g_011df03c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011df054[];
extern "C" char g_011df064[];
extern "C" char g_011df068[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de16e0
extern "C" __declspec(naked) void asm_00de16e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011df068], 0x10 }
	__asm { jb L_00de171b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011df054] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11df054 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de171b: }
	__asm { mov dword ptr [g_011df068], 0xf }
	__asm { mov dword ptr [g_011df064], 0 }
	__asm { mov byte ptr [g_011df054], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011df140[];
extern "C" char g_011df150[];
extern "C" char g_011df154[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de17c0
extern "C" __declspec(naked) void asm_00de17c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011df154], 0x10 }
	__asm { jb L_00de17fb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011df140] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11df140 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de17fb: }
	__asm { mov dword ptr [g_011df154], 0xf }
	__asm { mov dword ptr [g_011df150], 0 }
	__asm { mov byte ptr [g_011df140], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011df1f0[];
extern "C" char g_011df200[];
extern "C" char g_011df204[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de1990
extern "C" __declspec(naked) void asm_00de1990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011df204], 0x10 }
	__asm { jb L_00de19cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011df1f0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11df1f0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de19cb: }
	__asm { mov dword ptr [g_011df204], 0xf }
	__asm { mov dword ptr [g_011df200], 0 }
	__asm { mov byte ptr [g_011df1f0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" char g_012e0ea0[];
extern "C" char g_012e0ea4[];
extern "C" char g_012e0ea8[];
extern "C" void fn_00403a30();
extern "C" void fn_00410790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de1f80
extern "C" __declspec(naked) void asm_00de1f80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012e0ea0], 0 }
	__asm { je L_00de1fe2 }
	__asm { mov ecx, 0x12e0ea0 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [g_012e0ea4] }
	__asm { mov ecx, 0x12e0ea0 }
	__asm { push dword ptr [g_012e0ea0] }
	__asm { call fn_00410790 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push dword ptr [g_012e0ea0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e0ea0], 0 }
	__asm { mov dword ptr [g_012e0ea4], 0 }
	__asm { mov dword ptr [g_012e0ea8], 0 }
	__asm { L_00de1fe2: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011e6728[];
extern "C" char g_011e6738[];
extern "C" char g_011e673c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2100
extern "C" __declspec(naked) void asm_00de2100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011e673c], 0x10 }
	__asm { jb L_00de213b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011e6728] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11e6728 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de213b: }
	__asm { mov dword ptr [g_011e673c], 0xf }
	__asm { mov dword ptr [g_011e6738], 0 }
	__asm { mov byte ptr [g_011e6728], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011e6758[];
extern "C" char g_011e6768[];
extern "C" char g_011e676c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2160
extern "C" __declspec(naked) void asm_00de2160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011e676c], 0x10 }
	__asm { jb L_00de219b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011e6758] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11e6758 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de219b: }
	__asm { mov dword ptr [g_011e676c], 0xf }
	__asm { mov dword ptr [g_011e6768], 0 }
	__asm { mov byte ptr [g_011e6758], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011e6788[];
extern "C" char g_011e6798[];
extern "C" char g_011e679c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de21c0
extern "C" __declspec(naked) void asm_00de21c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011e679c], 0x10 }
	__asm { jb L_00de21fb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011e6788] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11e6788 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de21fb: }
	__asm { mov dword ptr [g_011e679c], 0xf }
	__asm { mov dword ptr [g_011e6798], 0 }
	__asm { mov byte ptr [g_011e6788], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011e6770[];
extern "C" char g_011e6780[];
extern "C" char g_011e6784[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de2220
extern "C" __declspec(naked) void asm_00de2220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011e6784], 0x10 }
	__asm { jb L_00de225b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011e6770] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11e6770 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de225b: }
	__asm { mov dword ptr [g_011e6784], 0xf }
	__asm { mov dword ptr [g_011e6780], 0 }
	__asm { mov byte ptr [g_011e6770], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011eb3c4[];
extern "C" char g_011eb3d4[];
extern "C" char g_011eb3d8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de3140
extern "C" __declspec(naked) void asm_00de3140()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011eb3d8], 0x10 }
	__asm { jb L_00de317b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011eb3c4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11eb3c4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de317b: }
	__asm { mov dword ptr [g_011eb3d8], 0xf }
	__asm { mov dword ptr [g_011eb3d4], 0 }
	__asm { mov byte ptr [g_011eb3c4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011eb3dc[];
extern "C" char g_011eb3ec[];
extern "C" char g_011eb3f0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de31a0
extern "C" __declspec(naked) void asm_00de31a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011eb3f0], 0x10 }
	__asm { jb L_00de31db }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011eb3dc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11eb3dc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de31db: }
	__asm { mov dword ptr [g_011eb3f0], 0xf }
	__asm { mov dword ptr [g_011eb3ec], 0 }
	__asm { mov byte ptr [g_011eb3dc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011eb3ac[];
extern "C" char g_011eb3bc[];
extern "C" char g_011eb3c0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de3200
extern "C" __declspec(naked) void asm_00de3200()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011eb3c0], 0x10 }
	__asm { jb L_00de323b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011eb3ac] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11eb3ac }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de323b: }
	__asm { mov dword ptr [g_011eb3c0], 0xf }
	__asm { mov dword ptr [g_011eb3bc], 0 }
	__asm { mov byte ptr [g_011eb3ac], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011ef024[];
extern "C" char g_011ef034[];
extern "C" char g_011ef038[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de49e0
extern "C" __declspec(naked) void asm_00de49e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011ef038], 0x10 }
	__asm { jb L_00de4a1b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011ef024] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11ef024 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de4a1b: }
	__asm { mov dword ptr [g_011ef038], 0xf }
	__asm { mov dword ptr [g_011ef034], 0 }
	__asm { mov byte ptr [g_011ef024], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011ef03c[];
extern "C" char g_011ef04c[];
extern "C" char g_011ef050[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de4a40
extern "C" __declspec(naked) void asm_00de4a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011ef050], 0x10 }
	__asm { jb L_00de4a7b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011ef03c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11ef03c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de4a7b: }
	__asm { mov dword ptr [g_011ef050], 0xf }
	__asm { mov dword ptr [g_011ef04c], 0 }
	__asm { mov byte ptr [g_011ef03c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011ef06c[];
extern "C" char g_011ef07c[];
extern "C" char g_011ef080[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de4b60
extern "C" __declspec(naked) void asm_00de4b60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011ef080], 0x10 }
	__asm { jb L_00de4b9b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011ef06c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11ef06c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de4b9b: }
	__asm { mov dword ptr [g_011ef080], 0xf }
	__asm { mov dword ptr [g_011ef07c], 0 }
	__asm { mov byte ptr [g_011ef06c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" char g_012e3f94[];
extern "C" char g_012e3f98[];
extern "C" char g_012e3f9c[];
extern "C" void fn_00403a30();
extern "C" void fn_00410790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de4cf0
extern "C" __declspec(naked) void asm_00de4cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012e3f94], 0 }
	__asm { je L_00de4d52 }
	__asm { mov ecx, 0x12e3f94 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [g_012e3f98] }
	__asm { mov ecx, 0x12e3f94 }
	__asm { push dword ptr [g_012e3f94] }
	__asm { call fn_00410790 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push dword ptr [g_012e3f94] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3f94], 0 }
	__asm { mov dword ptr [g_012e3f98], 0 }
	__asm { mov dword ptr [g_012e3f9c], 0 }
	__asm { L_00de4d52: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" char g_012e3fb0[];
extern "C" char g_012e3fb4[];
extern "C" char g_012e3fb8[];
extern "C" void fn_00403a30();
extern "C" void fn_00410790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de4d60
extern "C" __declspec(naked) void asm_00de4d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012e3fb0], 0 }
	__asm { je L_00de4dc2 }
	__asm { mov ecx, 0x12e3fb0 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [g_012e3fb4] }
	__asm { mov ecx, 0x12e3fb0 }
	__asm { push dword ptr [g_012e3fb0] }
	__asm { call fn_00410790 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push dword ptr [g_012e3fb0] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3fb0], 0 }
	__asm { mov dword ptr [g_012e3fb4], 0 }
	__asm { mov dword ptr [g_012e3fb8], 0 }
	__asm { L_00de4dc2: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" char g_012e4018[];
extern "C" char g_012e401c[];
extern "C" char g_012e4020[];
extern "C" void fn_00403a30();
extern "C" void fn_00410790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de4dd0
extern "C" __declspec(naked) void asm_00de4dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012e4018], 0 }
	__asm { je L_00de4e32 }
	__asm { mov ecx, 0x12e4018 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [g_012e401c] }
	__asm { mov ecx, 0x12e4018 }
	__asm { push dword ptr [g_012e4018] }
	__asm { call fn_00410790 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push dword ptr [g_012e4018] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e4018], 0 }
	__asm { mov dword ptr [g_012e401c], 0 }
	__asm { mov dword ptr [g_012e4020], 0 }
	__asm { L_00de4e32: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" char g_012e3fe8[];
extern "C" char g_012e3fec[];
extern "C" char g_012e3ff0[];
extern "C" void fn_00403a30();
extern "C" void fn_00410790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de4e40
extern "C" __declspec(naked) void asm_00de4e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012e3fe8], 0 }
	__asm { je L_00de4ea2 }
	__asm { mov ecx, 0x12e3fe8 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [g_012e3fec] }
	__asm { mov ecx, 0x12e3fe8 }
	__asm { push dword ptr [g_012e3fe8] }
	__asm { call fn_00410790 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push dword ptr [g_012e3fe8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3fe8], 0 }
	__asm { mov dword ptr [g_012e3fec], 0 }
	__asm { mov dword ptr [g_012e3ff0], 0 }
	__asm { L_00de4ea2: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" char g_012e3ff8[];
extern "C" char g_012e3ffc[];
extern "C" char g_012e4000[];
extern "C" void fn_00403a30();
extern "C" void fn_00410790();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de4eb0
extern "C" __declspec(naked) void asm_00de4eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012e3ff8], 0 }
	__asm { je L_00de4f12 }
	__asm { mov ecx, 0x12e3ff8 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [g_012e3ffc] }
	__asm { mov ecx, 0x12e3ff8 }
	__asm { push dword ptr [g_012e3ff8] }
	__asm { call fn_00410790 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push dword ptr [g_012e3ff8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012e3ff8], 0 }
	__asm { mov dword ptr [g_012e3ffc], 0 }
	__asm { mov dword ptr [g_012e4000], 0 }
	__asm { L_00de4f12: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011fa444[];
extern "C" char g_011fa454[];
extern "C" char g_011fa458[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de8cc0
extern "C" __declspec(naked) void asm_00de8cc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011fa458], 0x10 }
	__asm { jb L_00de8cfb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011fa444] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11fa444 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de8cfb: }
	__asm { mov dword ptr [g_011fa458], 0xf }
	__asm { mov dword ptr [g_011fa454], 0 }
	__asm { mov byte ptr [g_011fa444], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011fa45c[];
extern "C" char g_011fa46c[];
extern "C" char g_011fa470[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de8d20
extern "C" __declspec(naked) void asm_00de8d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011fa470], 0x10 }
	__asm { jb L_00de8d5b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011fa45c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11fa45c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de8d5b: }
	__asm { mov dword ptr [g_011fa470], 0xf }
	__asm { mov dword ptr [g_011fa46c], 0 }
	__asm { mov byte ptr [g_011fa45c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011fa42c[];
extern "C" char g_011fa43c[];
extern "C" char g_011fa440[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de8d80
extern "C" __declspec(naked) void asm_00de8d80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011fa440], 0x10 }
	__asm { jb L_00de8dbb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011fa42c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11fa42c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de8dbb: }
	__asm { mov dword ptr [g_011fa440], 0xf }
	__asm { mov dword ptr [g_011fa43c], 0 }
	__asm { mov byte ptr [g_011fa42c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011fa3cc[];
extern "C" char g_011fa3dc[];
extern "C" char g_011fa3e0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de8de0
extern "C" __declspec(naked) void asm_00de8de0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011fa3e0], 0x10 }
	__asm { jb L_00de8e1b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011fa3cc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11fa3cc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de8e1b: }
	__asm { mov dword ptr [g_011fa3e0], 0xf }
	__asm { mov dword ptr [g_011fa3dc], 0 }
	__asm { mov byte ptr [g_011fa3cc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011fa3b4[];
extern "C" char g_011fa3c4[];
extern "C" char g_011fa3c8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de8e40
extern "C" __declspec(naked) void asm_00de8e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011fa3c8], 0x10 }
	__asm { jb L_00de8e7b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011fa3b4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11fa3b4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de8e7b: }
	__asm { mov dword ptr [g_011fa3c8], 0xf }
	__asm { mov dword ptr [g_011fa3c4], 0 }
	__asm { mov byte ptr [g_011fa3b4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011fa3e4[];
extern "C" char g_011fa3f4[];
extern "C" char g_011fa3f8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de8ea0
extern "C" __declspec(naked) void asm_00de8ea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011fa3f8], 0x10 }
	__asm { jb L_00de8edb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011fa3e4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11fa3e4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de8edb: }
	__asm { mov dword ptr [g_011fa3f8], 0xf }
	__asm { mov dword ptr [g_011fa3f4], 0 }
	__asm { mov byte ptr [g_011fa3e4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011fa414[];
extern "C" char g_011fa424[];
extern "C" char g_011fa428[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00de8f00
extern "C" __declspec(naked) void asm_00de8f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011fa428], 0x10 }
	__asm { jb L_00de8f3b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011fa414] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11fa414 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00de8f3b: }
	__asm { mov dword ptr [g_011fa428], 0xf }
	__asm { mov dword ptr [g_011fa424], 0 }
	__asm { mov byte ptr [g_011fa414], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_011fee68[];
extern "C" char g_011fee78[];
extern "C" char g_011fee7c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deab30
extern "C" __declspec(naked) void asm_00deab30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_011fee7c], 0x10 }
	__asm { jb L_00deab6b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_011fee68] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x11fee68 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00deab6b: }
	__asm { mov dword ptr [g_011fee7c], 0xf }
	__asm { mov dword ptr [g_011fee78], 0 }
	__asm { mov byte ptr [g_011fee68], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa35c[];
extern "C" char g_012fa36c[];
extern "C" char g_012fa370[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deb870
extern "C" __declspec(naked) void asm_00deb870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fa370], 0x10 }
	__asm { jb L_00deb8ab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fa35c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fa35c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00deb8ab: }
	__asm { mov dword ptr [g_012fa370], 0xf }
	__asm { mov dword ptr [g_012fa36c], 0 }
	__asm { mov byte ptr [g_012fa35c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa33c[];
extern "C" char g_012fa34c[];
extern "C" char g_012fa350[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deb8d0
extern "C" __declspec(naked) void asm_00deb8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fa350], 0x10 }
	__asm { jb L_00deb90b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fa33c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fa33c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00deb90b: }
	__asm { mov dword ptr [g_012fa350], 0xf }
	__asm { mov dword ptr [g_012fa34c], 0 }
	__asm { mov byte ptr [g_012fa33c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa404[];
extern "C" char g_012fa414[];
extern "C" char g_012fa418[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deb930
extern "C" __declspec(naked) void asm_00deb930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fa418], 0x10 }
	__asm { jb L_00deb96b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fa404] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fa404 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00deb96b: }
	__asm { mov dword ptr [g_012fa418], 0xf }
	__asm { mov dword ptr [g_012fa414], 0 }
	__asm { mov byte ptr [g_012fa404], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa420[];
extern "C" char g_012fa430[];
extern "C" char g_012fa434[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deb990
extern "C" __declspec(naked) void asm_00deb990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fa434], 0x10 }
	__asm { jb L_00deb9cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fa420] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fa420 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00deb9cb: }
	__asm { mov dword ptr [g_012fa434], 0xf }
	__asm { mov dword ptr [g_012fa430], 0 }
	__asm { mov byte ptr [g_012fa420], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa3cc[];
extern "C" char g_012fa3dc[];
extern "C" char g_012fa3e0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deb9f0
extern "C" __declspec(naked) void asm_00deb9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fa3e0], 0x10 }
	__asm { jb L_00deba2b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fa3cc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fa3cc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00deba2b: }
	__asm { mov dword ptr [g_012fa3e0], 0xf }
	__asm { mov dword ptr [g_012fa3dc], 0 }
	__asm { mov byte ptr [g_012fa3cc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa3e8[];
extern "C" char g_012fa3f8[];
extern "C" char g_012fa3fc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deba50
extern "C" __declspec(naked) void asm_00deba50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fa3fc], 0x10 }
	__asm { jb L_00deba8b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fa3e8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fa3e8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00deba8b: }
	__asm { mov dword ptr [g_012fa3fc], 0xf }
	__asm { mov dword ptr [g_012fa3f8], 0 }
	__asm { mov byte ptr [g_012fa3e8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa43c[];
extern "C" char g_012fa44c[];
extern "C" char g_012fa450[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00debab0
extern "C" __declspec(naked) void asm_00debab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fa450], 0x10 }
	__asm { jb L_00debaeb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fa43c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fa43c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00debaeb: }
	__asm { mov dword ptr [g_012fa450], 0xf }
	__asm { mov dword ptr [g_012fa44c], 0 }
	__asm { mov byte ptr [g_012fa43c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa458[];
extern "C" char g_012fa468[];
extern "C" char g_012fa46c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00debb10
extern "C" __declspec(naked) void asm_00debb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fa46c], 0x10 }
	__asm { jb L_00debb4b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fa458] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fa458 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00debb4b: }
	__asm { mov dword ptr [g_012fa46c], 0xf }
	__asm { mov dword ptr [g_012fa468], 0 }
	__asm { mov byte ptr [g_012fa458], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa394[];
extern "C" char g_012fa3a4[];
extern "C" char g_012fa3a8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00debb70
extern "C" __declspec(naked) void asm_00debb70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fa3a8], 0x10 }
	__asm { jb L_00debbab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fa394] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fa394 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00debbab: }
	__asm { mov dword ptr [g_012fa3a8], 0xf }
	__asm { mov dword ptr [g_012fa3a4], 0 }
	__asm { mov byte ptr [g_012fa394], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fa3b0[];
extern "C" char g_012fa3c0[];
extern "C" char g_012fa3c4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00debbd0
extern "C" __declspec(naked) void asm_00debbd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fa3c4], 0x10 }
	__asm { jb L_00debc0b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fa3b0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fa3b0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00debc0b: }
	__asm { mov dword ptr [g_012fa3c4], 0xf }
	__asm { mov dword ptr [g_012fa3c0], 0 }
	__asm { mov byte ptr [g_012fa3b0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012076dc[];
extern "C" char g_012076ec[];
extern "C" char g_012076f0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dec050
extern "C" __declspec(naked) void asm_00dec050()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012076f0], 0x10 }
	__asm { jb L_00dec08b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012076dc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12076dc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dec08b: }
	__asm { mov dword ptr [g_012076f0], 0xf }
	__asm { mov dword ptr [g_012076ec], 0 }
	__asm { mov byte ptr [g_012076dc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012076c4[];
extern "C" char g_012076d4[];
extern "C" char g_012076d8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dec0b0
extern "C" __declspec(naked) void asm_00dec0b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012076d8], 0x10 }
	__asm { jb L_00dec0eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012076c4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12076c4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dec0eb: }
	__asm { mov dword ptr [g_012076d8], 0xf }
	__asm { mov dword ptr [g_012076d4], 0 }
	__asm { mov byte ptr [g_012076c4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012095ec[];
extern "C" char g_012095fc[];
extern "C" char g_01209600[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dec8a0
extern "C" __declspec(naked) void asm_00dec8a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01209600], 0x10 }
	__asm { jb L_00dec8db }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012095ec] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12095ec }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dec8db: }
	__asm { mov dword ptr [g_01209600], 0xf }
	__asm { mov dword ptr [g_012095fc], 0 }
	__asm { mov byte ptr [g_012095ec], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0120d3b4[];
extern "C" char g_0120d3c4[];
extern "C" char g_0120d3c8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dee000
extern "C" __declspec(naked) void asm_00dee000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0120d3c8], 0x10 }
	__asm { jb L_00dee03b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0120d3b4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x120d3b4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dee03b: }
	__asm { mov dword ptr [g_0120d3c8], 0xf }
	__asm { mov dword ptr [g_0120d3c4], 0 }
	__asm { mov byte ptr [g_0120d3b4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0120d39c[];
extern "C" char g_0120d3ac[];
extern "C" char g_0120d3b0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dee060
extern "C" __declspec(naked) void asm_00dee060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0120d3b0], 0x10 }
	__asm { jb L_00dee09b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0120d39c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x120d39c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dee09b: }
	__asm { mov dword ptr [g_0120d3b0], 0xf }
	__asm { mov dword ptr [g_0120d3ac], 0 }
	__asm { mov byte ptr [g_0120d39c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0120e5a0[];
extern "C" char g_0120e5b0[];
extern "C" char g_0120e5b4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dee2b0
extern "C" __declspec(naked) void asm_00dee2b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0120e5b4], 0x10 }
	__asm { jb L_00dee2eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0120e5a0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x120e5a0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dee2eb: }
	__asm { mov dword ptr [g_0120e5b4], 0xf }
	__asm { mov dword ptr [g_0120e5b0], 0 }
	__asm { mov byte ptr [g_0120e5a0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0120e570[];
extern "C" char g_0120e580[];
extern "C" char g_0120e584[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dee310
extern "C" __declspec(naked) void asm_00dee310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0120e584], 0x10 }
	__asm { jb L_00dee34b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0120e570] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x120e570 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dee34b: }
	__asm { mov dword ptr [g_0120e584], 0xf }
	__asm { mov dword ptr [g_0120e580], 0 }
	__asm { mov byte ptr [g_0120e570], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0120f0bc[];
extern "C" char g_0120f0cc[];
extern "C" char g_0120f0d0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dee410
extern "C" __declspec(naked) void asm_00dee410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0120f0d0], 0x10 }
	__asm { jb L_00dee44b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0120f0bc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x120f0bc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dee44b: }
	__asm { mov dword ptr [g_0120f0d0], 0xf }
	__asm { mov dword ptr [g_0120f0cc], 0 }
	__asm { mov byte ptr [g_0120f0bc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0120f0d4[];
extern "C" char g_0120f0e4[];
extern "C" char g_0120f0e8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dee470
extern "C" __declspec(naked) void asm_00dee470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0120f0e8], 0x10 }
	__asm { jb L_00dee4ab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0120f0d4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x120f0d4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dee4ab: }
	__asm { mov dword ptr [g_0120f0e8], 0xf }
	__asm { mov dword ptr [g_0120f0e4], 0 }
	__asm { mov byte ptr [g_0120f0d4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0120f08c[];
extern "C" char g_0120f09c[];
extern "C" char g_0120f0a0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dee4d0
extern "C" __declspec(naked) void asm_00dee4d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0120f0a0], 0x10 }
	__asm { jb L_00dee50b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0120f08c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x120f08c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dee50b: }
	__asm { mov dword ptr [g_0120f0a0], 0xf }
	__asm { mov dword ptr [g_0120f09c], 0 }
	__asm { mov byte ptr [g_0120f08c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0120f0ec[];
extern "C" char g_0120f0fc[];
extern "C" char g_0120f100[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dee530
extern "C" __declspec(naked) void asm_00dee530()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0120f100], 0x10 }
	__asm { jb L_00dee56b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0120f0ec] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x120f0ec }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dee56b: }
	__asm { mov dword ptr [g_0120f100], 0xf }
	__asm { mov dword ptr [g_0120f0fc], 0 }
	__asm { mov byte ptr [g_0120f0ec], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0120f104[];
extern "C" char g_0120f114[];
extern "C" char g_0120f118[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dee590
extern "C" __declspec(naked) void asm_00dee590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0120f118], 0x10 }
	__asm { jb L_00dee5cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0120f104] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x120f104 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dee5cb: }
	__asm { mov dword ptr [g_0120f118], 0xf }
	__asm { mov dword ptr [g_0120f114], 0 }
	__asm { mov byte ptr [g_0120f104], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0120f0a4[];
extern "C" char g_0120f0b4[];
extern "C" char g_0120f0b8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dee5f0
extern "C" __declspec(naked) void asm_00dee5f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0120f0b8], 0x10 }
	__asm { jb L_00dee62b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0120f0a4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x120f0a4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dee62b: }
	__asm { mov dword ptr [g_0120f0b8], 0xf }
	__asm { mov dword ptr [g_0120f0b4], 0 }
	__asm { mov byte ptr [g_0120f0a4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0120f074[];
extern "C" char g_0120f084[];
extern "C" char g_0120f088[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dee650
extern "C" __declspec(naked) void asm_00dee650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0120f088], 0x10 }
	__asm { jb L_00dee68b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0120f074] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x120f074 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dee68b: }
	__asm { mov dword ptr [g_0120f088], 0xf }
	__asm { mov dword ptr [g_0120f084], 0 }
	__asm { mov byte ptr [g_0120f074], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0120f14c[];
extern "C" char g_0120f15c[];
extern "C" char g_0120f160[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dee730
extern "C" __declspec(naked) void asm_00dee730()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0120f160], 0x10 }
	__asm { jb L_00dee76b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0120f14c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x120f14c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dee76b: }
	__asm { mov dword ptr [g_0120f160], 0xf }
	__asm { mov dword ptr [g_0120f15c], 0 }
	__asm { mov byte ptr [g_0120f14c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0120f164[];
extern "C" char g_0120f174[];
extern "C" char g_0120f178[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dee790
extern "C" __declspec(naked) void asm_00dee790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0120f178], 0x10 }
	__asm { jb L_00dee7cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0120f164] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x120f164 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dee7cb: }
	__asm { mov dword ptr [g_0120f178], 0xf }
	__asm { mov dword ptr [g_0120f174], 0 }
	__asm { mov byte ptr [g_0120f164], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0120f134[];
extern "C" char g_0120f144[];
extern "C" char g_0120f148[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dee7f0
extern "C" __declspec(naked) void asm_00dee7f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0120f148], 0x10 }
	__asm { jb L_00dee82b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0120f134] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x120f134 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dee82b: }
	__asm { mov dword ptr [g_0120f148], 0xf }
	__asm { mov dword ptr [g_0120f144], 0 }
	__asm { mov byte ptr [g_0120f134], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0120f17c[];
extern "C" char g_0120f18c[];
extern "C" char g_0120f190[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00dee850
extern "C" __declspec(naked) void asm_00dee850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_0120f190], 0x10 }
	__asm { jb L_00dee88b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0120f17c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x120f17c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dee88b: }
	__asm { mov dword ptr [g_0120f190], 0xf }
	__asm { mov dword ptr [g_0120f18c], 0 }
	__asm { mov byte ptr [g_0120f17c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcd50[];
extern "C" char g_012fcd60[];
extern "C" char g_012fcd64[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deed30
extern "C" __declspec(naked) void asm_00deed30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fcd64], 0x10 }
	__asm { jb L_00deed6b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fcd50] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fcd50 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00deed6b: }
	__asm { mov dword ptr [g_012fcd64], 0xf }
	__asm { mov dword ptr [g_012fcd60], 0 }
	__asm { mov byte ptr [g_012fcd50], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcd68[];
extern "C" char g_012fcd78[];
extern "C" char g_012fcd7c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deed90
extern "C" __declspec(naked) void asm_00deed90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fcd7c], 0x10 }
	__asm { jb L_00deedcb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fcd68] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fcd68 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00deedcb: }
	__asm { mov dword ptr [g_012fcd7c], 0xf }
	__asm { mov dword ptr [g_012fcd78], 0 }
	__asm { mov byte ptr [g_012fcd68], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcd38[];
extern "C" char g_012fcd48[];
extern "C" char g_012fcd4c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deedf0
extern "C" __declspec(naked) void asm_00deedf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fcd4c], 0x10 }
	__asm { jb L_00deee2b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fcd38] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fcd38 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00deee2b: }
	__asm { mov dword ptr [g_012fcd4c], 0xf }
	__asm { mov dword ptr [g_012fcd48], 0 }
	__asm { mov byte ptr [g_012fcd38], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcd80[];
extern "C" char g_012fcd90[];
extern "C" char g_012fcd94[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deee50
extern "C" __declspec(naked) void asm_00deee50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fcd94], 0x10 }
	__asm { jb L_00deee8b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fcd80] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fcd80 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00deee8b: }
	__asm { mov dword ptr [g_012fcd94], 0xf }
	__asm { mov dword ptr [g_012fcd90], 0 }
	__asm { mov byte ptr [g_012fcd80], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcc90[];
extern "C" char g_012fcca0[];
extern "C" char g_012fcca4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deeeb0
extern "C" __declspec(naked) void asm_00deeeb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fcca4], 0x10 }
	__asm { jb L_00deeeeb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fcc90] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fcc90 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00deeeeb: }
	__asm { mov dword ptr [g_012fcca4], 0xf }
	__asm { mov dword ptr [g_012fcca0], 0 }
	__asm { mov byte ptr [g_012fcc90], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcca8[];
extern "C" char g_012fccb8[];
extern "C" char g_012fccbc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deef10
extern "C" __declspec(naked) void asm_00deef10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fccbc], 0x10 }
	__asm { jb L_00deef4b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fcca8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fcca8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00deef4b: }
	__asm { mov dword ptr [g_012fccbc], 0xf }
	__asm { mov dword ptr [g_012fccb8], 0 }
	__asm { mov byte ptr [g_012fcca8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcc74[];
extern "C" char g_012fcc84[];
extern "C" char g_012fcc88[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deef70
extern "C" __declspec(naked) void asm_00deef70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fcc88], 0x10 }
	__asm { jb L_00deefab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fcc74] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fcc74 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00deefab: }
	__asm { mov dword ptr [g_012fcc88], 0xf }
	__asm { mov dword ptr [g_012fcc84], 0 }
	__asm { mov byte ptr [g_012fcc74], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fccc0[];
extern "C" char g_012fccd0[];
extern "C" char g_012fccd4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deefd0
extern "C" __declspec(naked) void asm_00deefd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fccd4], 0x10 }
	__asm { jb L_00def00b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fccc0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fccc0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def00b: }
	__asm { mov dword ptr [g_012fccd4], 0xf }
	__asm { mov dword ptr [g_012fccd0], 0 }
	__asm { mov byte ptr [g_012fccc0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01210504[];
extern "C" char g_01210514[];
extern "C" char g_01210518[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def030
extern "C" __declspec(naked) void asm_00def030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01210518], 0x10 }
	__asm { jb L_00def06b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01210504] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1210504 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def06b: }
	__asm { mov dword ptr [g_01210518], 0xf }
	__asm { mov dword ptr [g_01210514], 0 }
	__asm { mov byte ptr [g_01210504], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012104ec[];
extern "C" char g_012104fc[];
extern "C" char g_01210500[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def090
extern "C" __declspec(naked) void asm_00def090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01210500], 0x10 }
	__asm { jb L_00def0cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012104ec] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12104ec }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def0cb: }
	__asm { mov dword ptr [g_01210500], 0xf }
	__asm { mov dword ptr [g_012104fc], 0 }
	__asm { mov byte ptr [g_012104ec], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012103e4[];
extern "C" char g_012103f4[];
extern "C" char g_012103f8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def0f0
extern "C" __declspec(naked) void asm_00def0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012103f8], 0x10 }
	__asm { jb L_00def12b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012103e4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12103e4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def12b: }
	__asm { mov dword ptr [g_012103f8], 0xf }
	__asm { mov dword ptr [g_012103f4], 0 }
	__asm { mov byte ptr [g_012103e4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01210444[];
extern "C" char g_01210454[];
extern "C" char g_01210458[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def150
extern "C" __declspec(naked) void asm_00def150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01210458], 0x10 }
	__asm { jb L_00def18b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01210444] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1210444 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def18b: }
	__asm { mov dword ptr [g_01210458], 0xf }
	__asm { mov dword ptr [g_01210454], 0 }
	__asm { mov byte ptr [g_01210444], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01210384[];
extern "C" char g_01210394[];
extern "C" char g_01210398[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def1b0
extern "C" __declspec(naked) void asm_00def1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01210398], 0x10 }
	__asm { jb L_00def1eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01210384] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1210384 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def1eb: }
	__asm { mov dword ptr [g_01210398], 0xf }
	__asm { mov dword ptr [g_01210394], 0 }
	__asm { mov byte ptr [g_01210384], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0121036c[];
extern "C" char g_0121037c[];
extern "C" char g_01210380[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def210
extern "C" __declspec(naked) void asm_00def210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01210380], 0x10 }
	__asm { jb L_00def24b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0121036c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x121036c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def24b: }
	__asm { mov dword ptr [g_01210380], 0xf }
	__asm { mov dword ptr [g_0121037c], 0 }
	__asm { mov byte ptr [g_0121036c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012103b4[];
extern "C" char g_012103c4[];
extern "C" char g_012103c8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def270
extern "C" __declspec(naked) void asm_00def270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012103c8], 0x10 }
	__asm { jb L_00def2ab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012103b4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12103b4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def2ab: }
	__asm { mov dword ptr [g_012103c8], 0xf }
	__asm { mov dword ptr [g_012103c4], 0 }
	__asm { mov byte ptr [g_012103b4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01210534[];
extern "C" char g_01210544[];
extern "C" char g_01210548[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def2d0
extern "C" __declspec(naked) void asm_00def2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01210548], 0x10 }
	__asm { jb L_00def30b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01210534] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1210534 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def30b: }
	__asm { mov dword ptr [g_01210548], 0xf }
	__asm { mov dword ptr [g_01210544], 0 }
	__asm { mov byte ptr [g_01210534], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0121039c[];
extern "C" char g_012103ac[];
extern "C" char g_012103b0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def330
extern "C" __declspec(naked) void asm_00def330()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012103b0], 0x10 }
	__asm { jb L_00def36b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0121039c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x121039c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def36b: }
	__asm { mov dword ptr [g_012103b0], 0xf }
	__asm { mov dword ptr [g_012103ac], 0 }
	__asm { mov byte ptr [g_0121039c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0121048c[];
extern "C" char g_0121049c[];
extern "C" char g_012104a0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def390
extern "C" __declspec(naked) void asm_00def390()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012104a0], 0x10 }
	__asm { jb L_00def3cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0121048c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x121048c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def3cb: }
	__asm { mov dword ptr [g_012104a0], 0xf }
	__asm { mov dword ptr [g_0121049c], 0 }
	__asm { mov byte ptr [g_0121048c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01210474[];
extern "C" char g_01210484[];
extern "C" char g_01210488[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def3f0
extern "C" __declspec(naked) void asm_00def3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01210488], 0x10 }
	__asm { jb L_00def42b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01210474] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1210474 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def42b: }
	__asm { mov dword ptr [g_01210488], 0xf }
	__asm { mov dword ptr [g_01210484], 0 }
	__asm { mov byte ptr [g_01210474], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012103fc[];
extern "C" char g_0121040c[];
extern "C" char g_01210410[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def450
extern "C" __declspec(naked) void asm_00def450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01210410], 0x10 }
	__asm { jb L_00def48b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012103fc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12103fc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def48b: }
	__asm { mov dword ptr [g_01210410], 0xf }
	__asm { mov dword ptr [g_0121040c], 0 }
	__asm { mov byte ptr [g_012103fc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01210414[];
extern "C" char g_01210424[];
extern "C" char g_01210428[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def4b0
extern "C" __declspec(naked) void asm_00def4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01210428], 0x10 }
	__asm { jb L_00def4eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01210414] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1210414 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def4eb: }
	__asm { mov dword ptr [g_01210428], 0xf }
	__asm { mov dword ptr [g_01210424], 0 }
	__asm { mov byte ptr [g_01210414], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012103cc[];
extern "C" char g_012103dc[];
extern "C" char g_012103e0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def510
extern "C" __declspec(naked) void asm_00def510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012103e0], 0x10 }
	__asm { jb L_00def54b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012103cc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12103cc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def54b: }
	__asm { mov dword ptr [g_012103e0], 0xf }
	__asm { mov dword ptr [g_012103dc], 0 }
	__asm { mov byte ptr [g_012103cc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0121051c[];
extern "C" char g_0121052c[];
extern "C" char g_01210530[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def570
extern "C" __declspec(naked) void asm_00def570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01210530], 0x10 }
	__asm { jb L_00def5ab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0121051c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x121051c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def5ab: }
	__asm { mov dword ptr [g_01210530], 0xf }
	__asm { mov dword ptr [g_0121052c], 0 }
	__asm { mov byte ptr [g_0121051c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012104a4[];
extern "C" char g_012104b4[];
extern "C" char g_012104b8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def5d0
extern "C" __declspec(naked) void asm_00def5d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012104b8], 0x10 }
	__asm { jb L_00def60b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012104a4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12104a4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def60b: }
	__asm { mov dword ptr [g_012104b8], 0xf }
	__asm { mov dword ptr [g_012104b4], 0 }
	__asm { mov byte ptr [g_012104a4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0121042c[];
extern "C" char g_0121043c[];
extern "C" char g_01210440[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def630
extern "C" __declspec(naked) void asm_00def630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01210440], 0x10 }
	__asm { jb L_00def66b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0121042c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x121042c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def66b: }
	__asm { mov dword ptr [g_01210440], 0xf }
	__asm { mov dword ptr [g_0121043c], 0 }
	__asm { mov byte ptr [g_0121042c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0121054c[];
extern "C" char g_0121055c[];
extern "C" char g_01210560[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def690
extern "C" __declspec(naked) void asm_00def690()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01210560], 0x10 }
	__asm { jb L_00def6cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0121054c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x121054c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def6cb: }
	__asm { mov dword ptr [g_01210560], 0xf }
	__asm { mov dword ptr [g_0121055c], 0 }
	__asm { mov byte ptr [g_0121054c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0121045c[];
extern "C" char g_0121046c[];
extern "C" char g_01210470[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def6f0
extern "C" __declspec(naked) void asm_00def6f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01210470], 0x10 }
	__asm { jb L_00def72b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0121045c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x121045c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def72b: }
	__asm { mov dword ptr [g_01210470], 0xf }
	__asm { mov dword ptr [g_0121046c], 0 }
	__asm { mov byte ptr [g_0121045c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012104d4[];
extern "C" char g_012104e4[];
extern "C" char g_012104e8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def750
extern "C" __declspec(naked) void asm_00def750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012104e8], 0x10 }
	__asm { jb L_00def78b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012104d4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12104d4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def78b: }
	__asm { mov dword ptr [g_012104e8], 0xf }
	__asm { mov dword ptr [g_012104e4], 0 }
	__asm { mov byte ptr [g_012104d4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012104bc[];
extern "C" char g_012104cc[];
extern "C" char g_012104d0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def7b0
extern "C" __declspec(naked) void asm_00def7b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012104d0], 0x10 }
	__asm { jb L_00def7eb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012104bc] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12104bc }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def7eb: }
	__asm { mov dword ptr [g_012104d0], 0xf }
	__asm { mov dword ptr [g_012104cc], 0 }
	__asm { mov byte ptr [g_012104bc], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fccf0[];
extern "C" char g_012fcd00[];
extern "C" char g_012fcd04[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def810
extern "C" __declspec(naked) void asm_00def810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fcd04], 0x10 }
	__asm { jb L_00def84b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fccf0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fccf0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def84b: }
	__asm { mov dword ptr [g_012fcd04], 0xf }
	__asm { mov dword ptr [g_012fcd00], 0 }
	__asm { mov byte ptr [g_012fccf0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcd08[];
extern "C" char g_012fcd18[];
extern "C" char g_012fcd1c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def870
extern "C" __declspec(naked) void asm_00def870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fcd1c], 0x10 }
	__asm { jb L_00def8ab }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fcd08] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fcd08 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def8ab: }
	__asm { mov dword ptr [g_012fcd1c], 0xf }
	__asm { mov dword ptr [g_012fcd18], 0 }
	__asm { mov byte ptr [g_012fcd08], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fccd8[];
extern "C" char g_012fcce8[];
extern "C" char g_012fccec[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def8d0
extern "C" __declspec(naked) void asm_00def8d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fccec], 0x10 }
	__asm { jb L_00def90b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fccd8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fccd8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def90b: }
	__asm { mov dword ptr [g_012fccec], 0xf }
	__asm { mov dword ptr [g_012fcce8], 0 }
	__asm { mov byte ptr [g_012fccd8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcd20[];
extern "C" char g_012fcd30[];
extern "C" char g_012fcd34[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def930
extern "C" __declspec(naked) void asm_00def930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fcd34], 0x10 }
	__asm { jb L_00def96b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fcd20] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fcd20 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def96b: }
	__asm { mov dword ptr [g_012fcd34], 0xf }
	__asm { mov dword ptr [g_012fcd30], 0 }
	__asm { mov byte ptr [g_012fcd20], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012fcd9c[];
extern "C" char g_012fcdac[];
extern "C" char g_012fcdb0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00def990
extern "C" __declspec(naked) void asm_00def990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012fcdb0], 0x10 }
	__asm { jb L_00def9cb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012fcd9c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12fcd9c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00def9cb: }
	__asm { mov dword ptr [g_012fcdb0], 0xf }
	__asm { mov dword ptr [g_012fcdac], 0 }
	__asm { mov byte ptr [g_012fcd9c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012109a4[];
extern "C" char g_012109b4[];
extern "C" char g_012109b8[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00defa80
extern "C" __declspec(naked) void asm_00defa80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012109b8], 0x10 }
	__asm { jb L_00defabb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012109a4] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12109a4 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00defabb: }
	__asm { mov dword ptr [g_012109b8], 0xf }
	__asm { mov dword ptr [g_012109b4], 0 }
	__asm { mov byte ptr [g_012109a4], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0121098c[];
extern "C" char g_0121099c[];
extern "C" char g_012109a0[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00defae0
extern "C" __declspec(naked) void asm_00defae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012109a0], 0x10 }
	__asm { jb L_00defb1b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_0121098c] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x121098c }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00defb1b: }
	__asm { mov dword ptr [g_012109a0], 0xf }
	__asm { mov dword ptr [g_0121099c], 0 }
	__asm { mov byte ptr [g_0121098c], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01211540[];
extern "C" char g_01211550[];
extern "C" char g_01211554[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deff20
extern "C" __declspec(naked) void asm_00deff20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01211554], 0x10 }
	__asm { jb L_00deff5b }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01211540] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1211540 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00deff5b: }
	__asm { mov dword ptr [g_01211554], 0xf }
	__asm { mov dword ptr [g_01211550], 0 }
	__asm { mov byte ptr [g_01211540], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01211510[];
extern "C" char g_01211520[];
extern "C" char g_01211524[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00deff80
extern "C" __declspec(naked) void asm_00deff80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_01211524], 0x10 }
	__asm { jb L_00deffbb }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_01211510] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x1211510 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00deffbb: }
	__asm { mov dword ptr [g_01211524], 0xf }
	__asm { mov dword ptr [g_01211520], 0 }
	__asm { mov byte ptr [g_01211510], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
