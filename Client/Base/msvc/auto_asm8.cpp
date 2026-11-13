// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

// FUNCTION: ROBLOXSTUDIO 0x00c36e40
extern "C" __declspec(naked) void asm_00c36e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov dword ptr [eax + 4], edx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c371b0
extern "C" __declspec(naked) void asm_00c371b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov eax, dword ptr [ebp - 4] }
	__asm { mov cl, byte ptr [ebp + 8] }
	__asm { mov byte ptr [eax + 0x1d], cl }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c37430
extern "C" __declspec(naked) void asm_00c37430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { xor eax, eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c37110();
// FUNCTION: ROBLOXSTUDIO 0x00c37ba0
extern "C" __declspec(naked) void asm_00c37ba0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { add ecx, 0x3c }
	__asm { call fn_00c37110 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f0[];
// FUNCTION: ROBLOXSTUDIO 0x00c37bc0
extern "C" __declspec(naked) void asm_00c37bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e105f0] }
}

extern "C" void fn_007b5ea0();
// FUNCTION: ROBLOXSTUDIO 0x00c44500
extern "C" __declspec(naked) void asm_00c44500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push dword ptr [eax] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call fn_007b5ea0 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c44d30
extern "C" __declspec(naked) void asm_00c44d30()
{
	__asm { push dword ptr [ecx + 0x18] }
	__asm { lea eax, [ecx + 0x10] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c4b290
extern "C" __declspec(naked) void asm_00c4b290()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push dword ptr [ecx + 0xc] }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call eax }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c50bf0
extern "C" __declspec(naked) void asm_00c50bf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edx }
	__asm { call dword ptr [eax + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c53720
extern "C" __declspec(naked) void asm_00c53720()
{
	__asm { xor al, al }
	__asm { ret 0x14 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c54dc0
extern "C" __declspec(naked) void asm_00c54dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [ebp + 8] }
	__asm { fstp qword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x4610], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x4614], eax }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c57fc0();
// FUNCTION: ROBLOXSTUDIO 0x00c57ca0
extern "C" __declspec(naked) void asm_00c57ca0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00c57fc0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c619f0
extern "C" __declspec(naked) void asm_00c619f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld qword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { sub esp, 8 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { fstp qword ptr [esp] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c637a0
extern "C" __declspec(naked) void asm_00c637a0()
{
	__asm { push dword ptr [ecx + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { pop ecx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c689a0
extern "C" __declspec(naked) void asm_00c689a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { movzx eax, word ptr [edx + 2] }
	__asm { mov word ptr [ecx + 2], ax }
	__asm { movzx eax, word ptr [edx + 0x10] }
	__asm { mov word ptr [ecx + 0x10], ax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1312c[];
// FUNCTION: ROBLOXSTUDIO 0x00c68c30
extern "C" __declspec(naked) void asm_00c68c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { mov word ptr [esi + 2], ax }
	__asm { call dword ptr [g_00e1312c] }
	__asm { mov word ptr [esi + 0x10], ax }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00c6c4b0
extern "C" __declspec(naked) void asm_00c6c4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add dword ptr [ecx + 8], eax }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6cb50();
// FUNCTION: ROBLOXSTUDIO 0x00c6cb20
extern "C" __declspec(naked) void asm_00c6cb20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [edx] }
	__asm { sub eax, dword ptr [edx + 8] }
	__asm { push eax }
	__asm { push edx }
	__asm { call fn_00c6cb50 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6e160();
// FUNCTION: ROBLOXSTUDIO 0x00c6d440
extern "C" __declspec(naked) void asm_00c6d440()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00c6e160 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6d460();
// FUNCTION: ROBLOXSTUDIO 0x00c6dda0
extern "C" __declspec(naked) void asm_00c6dda0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c6d460 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6fc90();
// FUNCTION: ROBLOXSTUDIO 0x00c6fe80
extern "C" __declspec(naked) void asm_00c6fe80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c6fc90 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6e3a0();
// FUNCTION: ROBLOXSTUDIO 0x00c70010
extern "C" __declspec(naked) void asm_00c70010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00c6e3a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6e430();
// FUNCTION: ROBLOXSTUDIO 0x00c702e0
extern "C" __declspec(naked) void asm_00c702e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_00c6e430 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6cf00();
// FUNCTION: ROBLOXSTUDIO 0x00c70300
extern "C" __declspec(naked) void asm_00c70300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push 8 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00c6cf00 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c72310();
// FUNCTION: ROBLOXSTUDIO 0x00c72510
extern "C" __declspec(naked) void asm_00c72510()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c72310 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c74b20();
// FUNCTION: ROBLOXSTUDIO 0x00c75120
extern "C" __declspec(naked) void asm_00c75120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { lea eax, [ecx + 4] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c74b20 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_008afd20();
extern "C" void fn_00c703b0();
// FUNCTION: ROBLOXSTUDIO 0x00c79280
extern "C" __declspec(naked) void asm_00c79280()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_008afd20 }
	__asm { push ecx }
	__asm { fstp dword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c703b0 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_008afd90();
extern "C" void fn_00c70440();
// FUNCTION: ROBLOXSTUDIO 0x00c792a0
extern "C" __declspec(naked) void asm_00c792a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { call fn_008afd90 }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c70440 }
	__asm { add esp, 0xc }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00963570();
// FUNCTION: ROBLOXSTUDIO 0x00c79ab0
extern "C" __declspec(naked) void asm_00c79ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00963570 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c853c0();
// FUNCTION: ROBLOXSTUDIO 0x00c7df90
extern "C" __declspec(naked) void asm_00c7df90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { call fn_00c853c0 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10324[];
// FUNCTION: ROBLOXSTUDIO 0x00c7f92f
extern "C" __declspec(naked) void asm_00c7f92f()
{
	__asm { sub ecx, dword ptr [ecx - 4] }
	__asm { jmp dword ptr [g_00e10324] }
}

extern "C" void fn_00c751c0();
// FUNCTION: ROBLOXSTUDIO 0x00c84730
extern "C" __declspec(naked) void asm_00c84730()
{
	__asm { push dword ptr [ecx + 0xc] }
	__asm { call fn_00c751c0 }
	__asm { pop ecx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c863c0
extern "C" __declspec(naked) void asm_00c863c0()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov edx, dword ptr [ecx + 0x88] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ecx + 0x2c] }
	__asm { sub edx, edx }
	__asm { mov dword ptr [eax], edx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00c863e0
extern "C" __declspec(naked) void asm_00c863e0()
{
	__asm { mov eax, dword ptr [ecx + 0xc] }
	__asm { mov edx, dword ptr [ecx + 0x48] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ecx + 0x1c] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ecx + 0x2c] }
	__asm { sub edx, edx }
	__asm { mov dword ptr [eax], edx }
	__asm { ret }
}

extern "C" void fn_00c8dae0();
// FUNCTION: ROBLOXSTUDIO 0x00c8df50
extern "C" __declspec(naked) void asm_00c8df50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c8dae0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" void fn_00c8dd00();
// FUNCTION: ROBLOXSTUDIO 0x00c8df70
extern "C" __declspec(naked) void asm_00c8df70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c8dd00 }
}

extern "C" void fn_00c8ddf0();
// FUNCTION: ROBLOXSTUDIO 0x00c8df90
extern "C" __declspec(naked) void asm_00c8df90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c8ddf0 }
}

extern "C" void fn_00ca0fa0();
// FUNCTION: ROBLOXSTUDIO 0x00ca6040
extern "C" __declspec(naked) void asm_00ca6040()
{
	__asm { push dword ptr [ecx + 0xc] }
	__asm { call fn_00ca0fa0 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" void fn_00ca1000();
// FUNCTION: ROBLOXSTUDIO 0x00ca6050
extern "C" __declspec(naked) void asm_00ca6050()
{
	__asm { push dword ptr [ecx + 0xc] }
	__asm { call fn_00ca1000 }
	__asm { pop ecx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00ca73e0
extern "C" __declspec(naked) void asm_00ca73e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov edx, dword ptr [edx + 4] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00caca80();
// FUNCTION: ROBLOXSTUDIO 0x00cac810
extern "C" __declspec(naked) void asm_00cac810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x12fb10c }
	__asm { push dword ptr [ecx + 0x24] }
	__asm { mov ecx, dword ptr [ecx + 0x20] }
	__asm { call fn_00caca80 }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cad7a0();
// FUNCTION: ROBLOXSTUDIO 0x00cad990
extern "C" __declspec(naked) void asm_00cad990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cad7a0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { add dword ptr [ecx], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cad7a0();
// FUNCTION: ROBLOXSTUDIO 0x00cad9b0
extern "C" __declspec(naked) void asm_00cad9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add eax, 0x18 }
	__asm { push eax }
	__asm { call fn_00cad7a0 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { add esp, 4 }
	__asm { add dword ptr [ecx], eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cae060();
// FUNCTION: ROBLOXSTUDIO 0x00caddc0
extern "C" __declspec(naked) void asm_00caddc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cae060 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006c46a0();
// FUNCTION: ROBLOXSTUDIO 0x00cb3ab0
extern "C" __declspec(naked) void asm_00cb3ab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld1 }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46a0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cb4c20
extern "C" __declspec(naked) void asm_00cb4c20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [eax + 0x14] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { push dword ptr [eax + 0x10] }
	__asm { add ecx, dword ptr [eax + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006c46c0();
// FUNCTION: ROBLOXSTUDIO 0x00cb8310
extern "C" __declspec(naked) void asm_00cb8310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld1 }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_006c46c0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c8f850();
// FUNCTION: ROBLOXSTUDIO 0x00cb8330
extern "C" __declspec(naked) void asm_00cb8330()
{
	__asm { push dword ptr [ecx + 0x210] }
	__asm { mov ecx, dword ptr [ecx + 0x208] }
	__asm { call fn_00c8f850 }
	__asm { mov eax, 1 }
	__asm { ret 4 }
}

extern "C" char g_0131470c[];
// FUNCTION: ROBLOXSTUDIO 0x00cb94e0
extern "C" __declspec(naked) void asm_00cb94e0()
{
	__asm { mov eax, dword ptr [g_0131470c] }
	__asm { ret }
}

extern "C" void fn_00cba590();
// FUNCTION: ROBLOXSTUDIO 0x00cba3d0
extern "C" __declspec(naked) void asm_00cba3d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cba590 }
	__asm { test al, al }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cba590();
// FUNCTION: ROBLOXSTUDIO 0x00cba4b0
extern "C" __declspec(naked) void asm_00cba4b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cba590 }
	__asm { test al, al }
	__asm { setne al }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00cbfd80();
// FUNCTION: ROBLOXSTUDIO 0x00cbff60
extern "C" __declspec(naked) void asm_00cbff60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0xdfe }
	__asm { push 0xeff248 }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0x54 }
	__asm { call fn_00cbfd80 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cc0c50
extern "C" __declspec(naked) void asm_00cc0c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov edx, 0x3e8 }
	__asm { mul edx }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov dword ptr [ecx + 0x1c], edx }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cc2d30
extern "C" __declspec(naked) void asm_00cc2d30()
{
	__asm { mov eax, ecx }
	__asm { push dword ptr [eax + 0x14] }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { call eax }
	__asm { ret }
}

extern "C" void fn_00cc2940();
// FUNCTION: ROBLOXSTUDIO 0x00cc4000
extern "C" __declspec(naked) void asm_00cc4000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { jmp fn_00cc2940 }
}

extern "C" void fn_00cc4670();
// FUNCTION: ROBLOXSTUDIO 0x00cc4650
extern "C" __declspec(naked) void asm_00cc4650()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cc4670 }
	__asm { add esp, 0x14 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cc4990();
// FUNCTION: ROBLOXSTUDIO 0x00cc4970
extern "C" __declspec(naked) void asm_00cc4970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cc4990 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1315c[];
// FUNCTION: ROBLOXSTUDIO 0x00cc4c40
extern "C" __declspec(naked) void asm_00cc4c40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 4 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { push 0xe }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e1315c] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cc5450();
// FUNCTION: ROBLOXSTUDIO 0x00cc5430
extern "C" __declspec(naked) void asm_00cc5430()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [eax + 0x10] }
	__asm { call fn_00cc5450 }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10638[];
// FUNCTION: ROBLOXSTUDIO 0x00cc5570
extern "C" __declspec(naked) void asm_00cc5570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e10638] }
}

extern "C" char g_00e10530[];
// FUNCTION: ROBLOXSTUDIO 0x00cc5580
extern "C" __declspec(naked) void asm_00cc5580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10530] }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10638[];
// FUNCTION: ROBLOXSTUDIO 0x00cc55a0
extern "C" __declspec(naked) void asm_00cc55a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10638] }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
// FUNCTION: ROBLOXSTUDIO 0x00cc55c0
extern "C" __declspec(naked) void asm_00cc55c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c71fa0();
// FUNCTION: ROBLOXSTUDIO 0x00cc5d20
extern "C" __declspec(naked) void asm_00cc5d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0xc0c }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00c71fa0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cc5bf0();
// FUNCTION: ROBLOXSTUDIO 0x00cc5dc0
extern "C" __declspec(naked) void asm_00cc5dc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { add ecx, 0xc0c }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cc5bf0 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00cc6360();
// FUNCTION: ROBLOXSTUDIO 0x00cc6500
extern "C" __declspec(naked) void asm_00cc6500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00cc6360 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00c862f0();
// FUNCTION: ROBLOXSTUDIO 0x00cc8400
extern "C" __declspec(naked) void asm_00cc8400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea eax, [eax + 0x21] }
	__asm { lea ecx, [ecx + eax*8] }
	__asm { call fn_00c862f0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c862f0();
// FUNCTION: ROBLOXSTUDIO 0x00cc8570
extern "C" __declspec(naked) void asm_00cc8570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea ecx, [ecx + eax*8] }
	__asm { call fn_00c862f0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006c0990();
// FUNCTION: ROBLOXSTUDIO 0x00cc86f0
extern "C" __declspec(naked) void asm_00cc86f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 0x16 }
	__asm { lea ecx, [ecx + ecx*2] }
	__asm { shl ecx, 4 }
	__asm { add ecx, edx }
	__asm { call fn_006c0990 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006c0990();
// FUNCTION: ROBLOXSTUDIO 0x00cc8870
extern "C" __declspec(naked) void asm_00cc8870()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edx, ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add ecx, 0xb }
	__asm { lea ecx, [ecx + ecx*2] }
	__asm { shl ecx, 4 }
	__asm { add ecx, edx }
	__asm { call fn_006c0990 }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00421680();
// FUNCTION: ROBLOXSTUDIO 0x00cd02d0
extern "C" __declspec(naked) void asm_00cd02d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00421680 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { add esp, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00941e40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00cdcf70
extern "C" __declspec(naked) void asm_00cdcf70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [esi + 4] }
	__asm { call fn_00941e40 }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ce4570
extern "C" __declspec(naked) void asm_00ce4570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [eax + 0x10] }
	__asm { xor eax, eax }
	__asm { cmp edx, dword ptr [ecx + 0x10] }
	__asm { setg al }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00ce7460();
// FUNCTION: ROBLOXSTUDIO 0x00ce7910
extern "C" __declspec(naked) void asm_00ce7910()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 0xa0d }
	__asm { push 0xf045f0 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00ce7460 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ce9230
extern "C" __declspec(naked) void asm_00ce9230()
{
	__asm { xor al, al }
	__asm { ret 0x18 }
}

// FUNCTION: ROBLOXSTUDIO 0x00ce9cb0
extern "C" __declspec(naked) void asm_00ce9cb0()
{
	__asm { mov ax, word ptr [ecx + 0x10] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00ce9cc0
extern "C" __declspec(naked) void asm_00ce9cc0()
{
	__asm { mov ax, word ptr [ecx + 0xe] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00ceb3a0
extern "C" __declspec(naked) void asm_00ceb3a0()
{
	__asm { mov cl, byte ptr [ecx + 4] }
	__asm { xor eax, eax }
	__asm { test cl, cl }
	__asm { sete al }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf2340
extern "C" __declspec(naked) void asm_00cf2340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx + 0x564], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 0x568], eax }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf3af0
extern "C" __declspec(naked) void asm_00cf3af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 0x28] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], edx }
	__asm { inc edx }
	__asm { mov dword ptr [ecx + 0x28], edx }
	__asm { mov byte ptr [ecx + 0x2b], 0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf3b10
extern "C" __declspec(naked) void asm_00cf3b10()
{
	__asm { xor eax, eax }
	__asm { xor edx, edx }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf3bc0
extern "C" __declspec(naked) void asm_00cf3bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf3f70
extern "C" __declspec(naked) void asm_00cf3f70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [eax], 0 }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e101b4[];
// FUNCTION: ROBLOXSTUDIO 0x00cf4080
extern "C" __declspec(naked) void asm_00cf4080()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e101b4] }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e101a4[];
// FUNCTION: ROBLOXSTUDIO 0x00cf4090
extern "C" __declspec(naked) void asm_00cf4090()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push esi }
	__asm { call dword ptr [g_00e101a4] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e101ac[];
// FUNCTION: ROBLOXSTUDIO 0x00cf40a0
extern "C" __declspec(naked) void asm_00cf40a0()
{
	__asm { push ecx }
	__asm { call dword ptr [g_00e101ac] }
	__asm { ret }
}

extern "C" char g_00e101b0[];
// FUNCTION: ROBLOXSTUDIO 0x00cf40b0
extern "C" __declspec(naked) void asm_00cf40b0()
{
	__asm { push ecx }
	__asm { call dword ptr [g_00e101b0] }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00cf4e30
extern "C" __declspec(naked) void asm_00cf4e30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov eax, ecx }
	__asm { shr eax, 3 }
	__asm { add eax, ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c68890();
// FUNCTION: ROBLOXSTUDIO 0x00cf4e50
extern "C" __declspec(naked) void asm_00cf4e50()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea ecx, [esi + 8] }
	__asm { call fn_00c68890 }
	__asm { mov dword ptr [esi], 0xffffffff }
	__asm { mov dword ptr [esi + 0x20], 0xffffffff }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10188[];
// FUNCTION: ROBLOXSTUDIO 0x00cf4f50
extern "C" __declspec(naked) void asm_00cf4f50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ecx] }
	__asm { call dword ptr [g_00e10188] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10140[];
// FUNCTION: ROBLOXSTUDIO 0x00cf4f70
extern "C" __declspec(naked) void asm_00cf4f70()
{
	__asm { push ecx }
	__asm { call dword ptr [g_00e10140] }
	__asm { ret }
}

extern "C" char g_00e100d4[];
// FUNCTION: ROBLOXSTUDIO 0x00cf4f80
extern "C" __declspec(naked) void asm_00cf4f80()
{
	__asm { push ecx }
	__asm { call dword ptr [g_00e100d4] }
	__asm { ret }
}

extern "C" void fn_00cf6f96();
// FUNCTION: ROBLOXSTUDIO 0x00cf6600
extern "C" __declspec(naked) void asm_00cf6600()
{
	__asm { push 8 }
	__asm { call fn_00cf6f96 }
	__asm { pop ecx }
	__asm { ret }
}

extern "C" char g_00e104f0[];
extern "C" char g_00e104f4[];
extern "C" char g_00e104f8[];
// FUNCTION: ROBLOXSTUDIO 0x00cf666e
extern "C" __declspec(naked) void asm_00cf666e()
{
	__asm { jmp dword ptr [g_00e104f8] }
	__asm { jmp dword ptr [g_00e104f4] }
	__asm { jmp dword ptr [g_00e104f0] }
}

extern "C" char g_00e1050c[];
extern "C" char g_00e10510[];
extern "C" char g_00e10514[];
extern "C" char g_00e1051c[];
extern "C" char g_00e1053c[];
// FUNCTION: ROBLOXSTUDIO 0x00cf6680
extern "C" __declspec(naked) void asm_00cf6680()
{
	__asm { jmp dword ptr [g_00e1050c] }
	__asm { jmp dword ptr [g_00e10510] }
	__asm { jmp dword ptr [g_00e10514] }
	__asm { jmp dword ptr [g_00e1051c] }
	__asm { jmp dword ptr [g_00e1053c] }
}

extern "C" void fn_00cf7590();
// FUNCTION: ROBLOXSTUDIO 0x00cf7584
extern "C" __declspec(naked) void asm_00cf7584()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push 8 }
	__asm { call fn_00cf7590 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cff6c0();
// FUNCTION: ROBLOXSTUDIO 0x00cff780
extern "C" __declspec(naked) void asm_00cff780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push 0xf }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00cff6c0 }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10530[];
// FUNCTION: ROBLOXSTUDIO 0x00cffcc0
extern "C" __declspec(naked) void asm_00cffcc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { imul eax, dword ptr [ebp + 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10530] }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f4[];
// FUNCTION: ROBLOXSTUDIO 0x00cffce0
extern "C" __declspec(naked) void asm_00cffce0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_00e104f4] }
	__asm { add esp, 4 }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00d02020();
// FUNCTION: ROBLOXSTUDIO 0x00d01e90
extern "C" __declspec(naked) void asm_00d01e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 1 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00d02020 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00d022b0();
// FUNCTION: ROBLOXSTUDIO 0x00d01eb0
extern "C" __declspec(naked) void asm_00d01eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00d022b0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cfc9f0();
// FUNCTION: ROBLOXSTUDIO 0x00d028a0
extern "C" __declspec(naked) void asm_00d028a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ecx] }
	__asm { call fn_00cfc9f0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00cfdff0();
// FUNCTION: ROBLOXSTUDIO 0x00d028c0
extern "C" __declspec(naked) void asm_00d028c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { push dword ptr [ecx] }
	__asm { call fn_00cfdff0 }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10020[];
extern "C" char g_00e10024[];
// FUNCTION: ROBLOXSTUDIO 0x00d03370
extern "C" __declspec(naked) void asm_00d03370()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push dword ptr [esi + 4] }
	__asm { call dword ptr [g_00e10020] }
	__asm { push 0 }
	__asm { push dword ptr [esi] }
	__asm { call dword ptr [g_00e10024] }
	__asm { pop esi }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00d09310
extern "C" __declspec(naked) void asm_00d09310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x1c] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov edx, dword ptr [ecx] }
	__asm { call dword ptr [edx + 0x24] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 4 }
}

// FUNCTION: ROBLOXSTUDIO 0x00d0c0a0
extern "C" __declspec(naked) void asm_00d0c0a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ecx + 0x1c] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_01303e80[];
// FUNCTION: ROBLOXSTUDIO 0x00df7cca
extern "C" __declspec(naked) void asm_00df7cca()
{
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_01303e80], 0xe33a28 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
