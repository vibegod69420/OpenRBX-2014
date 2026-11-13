// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48b0[];
extern "C" void fn_006b9740();
extern "C" void fn_0081fdc0();
// FUNCTION: ROBLOXSTUDIO 0x00a90760
extern "C" __declspec(naked) void asm_00a90760()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a907ad }
	__asm { cmp dword ptr [g_012e48b0], 0x29a }
	__asm { je L_00a907ad }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a9079c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a907ad }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a9079c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a907ad: }
	__asm { mov ecx, 0x12e48b4 }
	__asm { jmp fn_0081fdc0 }
}

extern "C" char g_012fd36c[];
extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a91b40
extern "C" __declspec(naked) void asm_00a91b40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [g_012fd36c], 0 }
	__asm { mov dword ptr [esi], 0xeb31f4 }
	__asm { mov dword ptr [esi + 4], 0xeb326c }
	__asm { mov dword ptr [esi + 0x18], 0xeb3274 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb3280 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a91b7f }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a91b7f: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48b8[];
extern "C" void fn_006b9740();
extern "C" void fn_00820120();
// FUNCTION: ROBLOXSTUDIO 0x00a91b90
extern "C" __declspec(naked) void asm_00a91b90()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a91bdd }
	__asm { cmp dword ptr [g_012e48b8], 0x29a }
	__asm { je L_00a91bdd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a91bcc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a91bdd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a91bcc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a91bdd: }
	__asm { mov ecx, 0x12e48bc }
	__asm { jmp fn_00820120 }
}

extern "C" void fn_00a950b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a95660
extern "C" __declspec(naked) void asm_00a95660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xeb3a1c }
	__asm { mov dword ptr [esi + 4], 0xeb3a9c }
	__asm { mov dword ptr [esi + 0x18], 0xeb3aa4 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb3ab0 }
	__asm { mov dword ptr [esi + 0x64], 0xeb3ac4 }
	__asm { mov dword ptr [esi + 0x80], 0xeb3b14 }
	__asm { mov dword ptr [esi + 0xf8], 0xeb3b30 }
	__asm { call fn_00a950b0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a956b0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a956b0: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a950b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a956c0
extern "C" __declspec(naked) void asm_00a956c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xeb3efc }
	__asm { mov dword ptr [esi + 4], 0xeb3f7c }
	__asm { mov dword ptr [esi + 0x18], 0xeb3f84 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb3f90 }
	__asm { mov dword ptr [esi + 0x64], 0xeb3fa4 }
	__asm { mov dword ptr [esi + 0x80], 0xeb3ff4 }
	__asm { mov dword ptr [esi + 0xf8], 0xeb4010 }
	__asm { call fn_00a950b0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a95710 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a95710: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a950b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a95720
extern "C" __declspec(naked) void asm_00a95720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xeb417c }
	__asm { mov dword ptr [esi + 4], 0xeb41fc }
	__asm { mov dword ptr [esi + 0x18], 0xeb4204 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb4210 }
	__asm { mov dword ptr [esi + 0x64], 0xeb4224 }
	__asm { mov dword ptr [esi + 0x80], 0xeb4274 }
	__asm { mov dword ptr [esi + 0xf8], 0xeb4290 }
	__asm { call fn_00a950b0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a95770 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a95770: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a950b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a95780
extern "C" __declspec(naked) void asm_00a95780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xeb465c }
	__asm { mov dword ptr [esi + 4], 0xeb46dc }
	__asm { mov dword ptr [esi + 0x18], 0xeb46e4 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb46f0 }
	__asm { mov dword ptr [esi + 0x64], 0xeb4704 }
	__asm { mov dword ptr [esi + 0x80], 0xeb4754 }
	__asm { mov dword ptr [esi + 0xf8], 0xeb4770 }
	__asm { call fn_00a950b0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a957d0 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a957d0: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a950b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a957e0
extern "C" __declspec(naked) void asm_00a957e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xeb43ec }
	__asm { mov dword ptr [esi + 4], 0xeb446c }
	__asm { mov dword ptr [esi + 0x18], 0xeb4474 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb4480 }
	__asm { mov dword ptr [esi + 0x64], 0xeb4494 }
	__asm { mov dword ptr [esi + 0x80], 0xeb44e4 }
	__asm { mov dword ptr [esi + 0xf8], 0xeb4500 }
	__asm { call fn_00a950b0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a95830 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a95830: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a950b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a95840
extern "C" __declspec(naked) void asm_00a95840()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xeb37ac }
	__asm { mov dword ptr [esi + 4], 0xeb382c }
	__asm { mov dword ptr [esi + 0x18], 0xeb3834 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb3840 }
	__asm { mov dword ptr [esi + 0x64], 0xeb3854 }
	__asm { mov dword ptr [esi + 0x80], 0xeb38a4 }
	__asm { mov dword ptr [esi + 0xf8], 0xeb38c0 }
	__asm { call fn_00a950b0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a95890 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a95890: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00a950b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00a95900
extern "C" __declspec(naked) void asm_00a95900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xeb3c8c }
	__asm { mov dword ptr [esi + 4], 0xeb3d0c }
	__asm { mov dword ptr [esi + 0x18], 0xeb3d14 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb3d20 }
	__asm { mov dword ptr [esi + 0x64], 0xeb3d34 }
	__asm { mov dword ptr [esi + 0x80], 0xeb3d84 }
	__asm { mov dword ptr [esi + 0xf8], 0xeb3da0 }
	__asm { call fn_00a950b0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00a95950 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00a95950: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48e8[];
extern "C" void fn_006b9740();
extern "C" void fn_0081f8e0();
// FUNCTION: ROBLOXSTUDIO 0x00a95a70
extern "C" __declspec(naked) void asm_00a95a70()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a95abd }
	__asm { cmp dword ptr [g_012e48e8], 0x29a }
	__asm { je L_00a95abd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a95aac }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a95abd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a95aac: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a95abd: }
	__asm { mov ecx, 0x12e48ec }
	__asm { jmp fn_0081f8e0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48c0[];
extern "C" void fn_006b9740();
extern "C" void fn_0081f9a0();
// FUNCTION: ROBLOXSTUDIO 0x00a95ad0
extern "C" __declspec(naked) void asm_00a95ad0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a95b1d }
	__asm { cmp dword ptr [g_012e48c0], 0x29a }
	__asm { je L_00a95b1d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a95b0c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a95b1d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a95b0c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a95b1d: }
	__asm { mov ecx, 0x12e48c4 }
	__asm { jmp fn_0081f9a0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48f0[];
extern "C" void fn_006b9740();
extern "C" void fn_00820360();
// FUNCTION: ROBLOXSTUDIO 0x00a95b30
extern "C" __declspec(naked) void asm_00a95b30()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a95b7d }
	__asm { cmp dword ptr [g_012e48f0], 0x29a }
	__asm { je L_00a95b7d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a95b6c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a95b7d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a95b6c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a95b7d: }
	__asm { mov ecx, 0x12e48f4 }
	__asm { jmp fn_00820360 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48c8[];
extern "C" void fn_006b9740();
extern "C" void fn_0081f940();
// FUNCTION: ROBLOXSTUDIO 0x00a982f0
extern "C" __declspec(naked) void asm_00a982f0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a9833d }
	__asm { cmp dword ptr [g_012e48c8], 0x29a }
	__asm { je L_00a9833d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a9832c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a9833d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a9832c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a9833d: }
	__asm { mov ecx, 0x12e48cc }
	__asm { jmp fn_0081f940 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48d8[];
extern "C" void fn_006b9740();
extern "C" void fn_0081fa00();
// FUNCTION: ROBLOXSTUDIO 0x00a98350
extern "C" __declspec(naked) void asm_00a98350()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a9839d }
	__asm { cmp dword ptr [g_012e48d8], 0x29a }
	__asm { je L_00a9839d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a9838c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a9839d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a9838c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a9839d: }
	__asm { mov ecx, 0x12e48dc }
	__asm { jmp fn_0081fa00 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48d0[];
extern "C" void fn_006b9740();
extern "C" void fn_0081fa60();
// FUNCTION: ROBLOXSTUDIO 0x00a983b0
extern "C" __declspec(naked) void asm_00a983b0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a983fd }
	__asm { cmp dword ptr [g_012e48d0], 0x29a }
	__asm { je L_00a983fd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a983ec }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a983fd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a983ec: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a983fd: }
	__asm { mov ecx, 0x12e48d4 }
	__asm { jmp fn_0081fa60 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48e0[];
extern "C" void fn_006b9740();
extern "C" void fn_0081fac0();
// FUNCTION: ROBLOXSTUDIO 0x00a98410
extern "C" __declspec(naked) void asm_00a98410()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a9845d }
	__asm { cmp dword ptr [g_012e48e0], 0x29a }
	__asm { je L_00a9845d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a9844c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a9845d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a9844c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a9845d: }
	__asm { mov ecx, 0x12e48e4 }
	__asm { jmp fn_0081fac0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e48f8[];
extern "C" void fn_006b9740();
extern "C" void fn_0081ffa0();
// FUNCTION: ROBLOXSTUDIO 0x00a9c470
extern "C" __declspec(naked) void asm_00a9c470()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00a9c4bd }
	__asm { cmp dword ptr [g_012e48f8], 0x29a }
	__asm { je L_00a9c4bd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00a9c4ac }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00a9c4bd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00a9c4ac: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00a9c4bd: }
	__asm { mov ecx, 0x12e48fc }
	__asm { jmp fn_0081ffa0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4900[];
extern "C" void fn_006b9740();
extern "C" void fn_0081f760();
// FUNCTION: ROBLOXSTUDIO 0x00aa0820
extern "C" __declspec(naked) void asm_00aa0820()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aa086d }
	__asm { cmp dword ptr [g_012e4900], 0x29a }
	__asm { je L_00aa086d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aa085c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aa086d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aa085c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aa086d: }
	__asm { mov ecx, 0x12e4904 }
	__asm { jmp fn_0081f760 }
}

extern "C" void fn_00aa2af0();
// FUNCTION: ROBLOXSTUDIO 0x00aa2a80
extern "C" __declspec(naked) void asm_00aa2a80()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xeb665c }
	__asm { mov dword ptr [edx + 4], 0xeb676c }
	__asm { mov dword ptr [edx + 0x18], 0xeb6774 }
	__asm { mov dword ptr [edx + 0x1c], 0xeb6780 }
	__asm { mov dword ptr [edx + 0x64], 0xeb6790 }
	__asm { mov dword ptr [edx + 0x70], 0xeb6798 }
	__asm { mov dword ptr [edx + 0x98], 0xeb67b8 }
	__asm { mov dword ptr [edx + 0xb0], 0xeb67ec }
	__asm { mov dword ptr [edx + 0xc4], 0xeb6818 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xeb6820 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xb4] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_00aa2af0 }
}

extern "C" void fn_0090fd20();
// FUNCTION: ROBLOXSTUDIO 0x00aa2af0
extern "C" __declspec(naked) void asm_00aa2af0()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xeb648c }
	__asm { mov dword ptr [edx + 4], 0xeb659c }
	__asm { mov dword ptr [edx + 0x18], 0xeb65a4 }
	__asm { mov dword ptr [edx + 0x1c], 0xeb65b0 }
	__asm { mov dword ptr [edx + 0x64], 0xeb65c0 }
	__asm { mov dword ptr [edx + 0x70], 0xeb65c8 }
	__asm { mov dword ptr [edx + 0x98], 0xeb65e8 }
	__asm { mov dword ptr [edx + 0xb0], 0xeb661c }
	__asm { mov dword ptr [edx + 0xc4], 0xeb6648 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xeb6650 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xb4] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_0090fd20 }
}

extern "C" void fn_00aa2a80();
// FUNCTION: ROBLOXSTUDIO 0x00aa2b60
extern "C" __declspec(naked) void asm_00aa2b60()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xeb6a0c }
	__asm { mov dword ptr [edx + 4], 0xeb6b1c }
	__asm { mov dword ptr [edx + 0x18], 0xeb6b24 }
	__asm { mov dword ptr [edx + 0x1c], 0xeb6b30 }
	__asm { mov dword ptr [edx + 0x64], 0xeb6b40 }
	__asm { mov dword ptr [edx + 0x70], 0xeb6b48 }
	__asm { mov dword ptr [edx + 0x98], 0xeb6b68 }
	__asm { mov dword ptr [edx + 0xb0], 0xeb6b9c }
	__asm { mov dword ptr [edx + 0xc4], 0xeb6bc8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xeb6bd0 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xb4] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_00aa2a80 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4918[];
extern "C" void fn_006b9740();
extern "C" void fn_00820a20();
// FUNCTION: ROBLOXSTUDIO 0x00aa2cb0
extern "C" __declspec(naked) void asm_00aa2cb0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aa2cfd }
	__asm { cmp dword ptr [g_012e4918], 0x29a }
	__asm { je L_00aa2cfd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aa2cec }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aa2cfd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aa2cec: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aa2cfd: }
	__asm { mov ecx, 0x12e491c }
	__asm { jmp fn_00820a20 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4920[];
extern "C" void fn_006b9740();
extern "C" void fn_00820480();
// FUNCTION: ROBLOXSTUDIO 0x00aa2f10
extern "C" __declspec(naked) void asm_00aa2f10()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aa2f5d }
	__asm { cmp dword ptr [g_012e4920], 0x29a }
	__asm { je L_00aa2f5d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aa2f4c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aa2f5d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aa2f4c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aa2f5d: }
	__asm { mov ecx, 0x12e4924 }
	__asm { jmp fn_00820480 }
}

extern "C" void fn_00916710();
// FUNCTION: ROBLOXSTUDIO 0x00aa59c0
extern "C" __declspec(naked) void asm_00aa59c0()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xeb6fb4 }
	__asm { mov dword ptr [edx + 4], 0xeb70d4 }
	__asm { mov dword ptr [edx + 0x18], 0xeb70dc }
	__asm { mov dword ptr [edx + 0x1c], 0xeb70e8 }
	__asm { mov dword ptr [edx + 0x64], 0xeb70f8 }
	__asm { mov dword ptr [edx + 0x70], 0xeb7100 }
	__asm { mov dword ptr [edx + 0x98], 0xeb7120 }
	__asm { mov dword ptr [edx + 0xb0], 0xeb7154 }
	__asm { mov dword ptr [edx + 0xc4], 0xeb7180 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xeb7188 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xd4] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_00916710 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00aa9e90
extern "C" __declspec(naked) void asm_00aa9e90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x20c], eax }
	__asm { je L_00aa9ed6 }
	__asm { cmp eax, -1 }
	__asm { jg L_00aa9eb9 }
	__asm { or eax, 0xffffffff }
	__asm { mov dword ptr [ecx + 0x20c], eax }
	__asm { mov dword ptr [ebp + 8], 0x130b190 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00aa9eb9: }
	__asm { mov edx, 1 }
	__asm { cmp eax, edx }
	__asm { cmovge eax, edx }
	__asm { mov dword ptr [ecx + 0x20c], eax }
	__asm { mov dword ptr [ebp + 8], 0x130b190 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00aa9ed6: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00aa9f10
extern "C" __declspec(naked) void asm_00aa9f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x208], eax }
	__asm { je L_00aa9f56 }
	__asm { cmp eax, -1 }
	__asm { jg L_00aa9f39 }
	__asm { or eax, 0xffffffff }
	__asm { mov dword ptr [ecx + 0x208], eax }
	__asm { mov dword ptr [ebp + 8], 0x130b164 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00aa9f39: }
	__asm { mov edx, 1 }
	__asm { cmp eax, edx }
	__asm { cmovge eax, edx }
	__asm { mov dword ptr [ecx + 0x208], eax }
	__asm { mov dword ptr [ebp + 8], 0x130b164 }
	__asm { pop ebp }
	__asm { jmp fn_007b4f50 }
	__asm { L_00aa9f56: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_009b4a50();
extern "C" void fn_00aaab40();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00aaaae8
extern "C" __declspec(naked) void asm_00aaaae8()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp fn_00aaab40 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xeb8224 }
	__asm { mov dword ptr [esi + 4], 0xeb829c }
	__asm { mov dword ptr [esi + 0x18], 0xeb82a4 }
	__asm { mov dword ptr [esi + 0x1c], 0xeb82b0 }
	__asm { mov dword ptr [esi + 0x64], 0xeb82c0 }
	__asm { call fn_009b4a50 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00aaab2c }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00aaab2c: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_0090fcb0();
// FUNCTION: ROBLOXSTUDIO 0x00aac340
extern "C" __declspec(naked) void asm_00aac340()
{
	__asm { mov edx, ecx }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov dword ptr [edx], 0xeb850c }
	__asm { mov dword ptr [edx + 4], 0xeb861c }
	__asm { mov dword ptr [edx + 0x18], 0xeb8624 }
	__asm { mov dword ptr [edx + 0x1c], 0xeb8630 }
	__asm { mov dword ptr [edx + 0x64], 0xeb8640 }
	__asm { mov dword ptr [edx + 0x70], 0xeb8648 }
	__asm { mov dword ptr [edx + 0x98], 0xeb8668 }
	__asm { mov dword ptr [edx + 0xb0], 0xeb869c }
	__asm { mov dword ptr [edx + 0xc4], 0xeb86c8 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edx + 0x68], 0xeb86d0 }
	__asm { mov eax, dword ptr [edx + 0x68] }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 0xbc] }
	__asm { mov dword ptr [ecx + edx + 0x64], eax }
	__asm { mov ecx, edx }
	__asm { jmp fn_0090fcb0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4938[];
extern "C" void fn_006b9740();
extern "C" void fn_00820660();
// FUNCTION: ROBLOXSTUDIO 0x00aaca40
extern "C" __declspec(naked) void asm_00aaca40()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aaca8d }
	__asm { cmp dword ptr [g_012e4938], 0x29a }
	__asm { je L_00aaca8d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aaca7c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aaca8d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aaca7c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aaca8d: }
	__asm { mov ecx, 0x12e493c }
	__asm { jmp fn_00820660 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4948[];
extern "C" void fn_006b9740();
extern "C" void fn_00820720();
// FUNCTION: ROBLOXSTUDIO 0x00aae0f0
extern "C" __declspec(naked) void asm_00aae0f0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aae13d }
	__asm { cmp dword ptr [g_012e4948], 0x29a }
	__asm { je L_00aae13d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aae12c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aae13d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aae12c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aae13d: }
	__asm { mov ecx, 0x12e494c }
	__asm { jmp fn_00820720 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4950[];
extern "C" void fn_006b9740();
extern "C" void fn_008208a0();
// FUNCTION: ROBLOXSTUDIO 0x00aaf0b0
extern "C" __declspec(naked) void asm_00aaf0b0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aaf0fd }
	__asm { cmp dword ptr [g_012e4950], 0x29a }
	__asm { je L_00aaf0fd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aaf0ec }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aaf0fd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aaf0ec: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aaf0fd: }
	__asm { mov ecx, 0x12e4954 }
	__asm { jmp fn_008208a0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4958[];
extern "C" void fn_006b9740();
extern "C" void fn_00820900();
// FUNCTION: ROBLOXSTUDIO 0x00aafcc0
extern "C" __declspec(naked) void asm_00aafcc0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aafd0d }
	__asm { cmp dword ptr [g_012e4958], 0x29a }
	__asm { je L_00aafd0d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aafcfc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aafd0d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aafcfc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aafd0d: }
	__asm { mov ecx, 0x12e495c }
	__asm { jmp fn_00820900 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4960[];
extern "C" void fn_006b9740();
extern "C" void fn_00820180();
// FUNCTION: ROBLOXSTUDIO 0x00ac0aa0
extern "C" __declspec(naked) void asm_00ac0aa0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ac0aed }
	__asm { cmp dword ptr [g_012e4960], 0x29a }
	__asm { je L_00ac0aed }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ac0adc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac0aed }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ac0adc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac0aed: }
	__asm { mov ecx, 0x12e4964 }
	__asm { jmp fn_00820180 }
}

extern "C" char g_0130bae0[];
extern "C" void fn_00ab9cf0();
extern "C" void fn_00ac62a0();
// FUNCTION: ROBLOXSTUDIO 0x00ac71f0
extern "C" __declspec(naked) void asm_00ac71f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [g_0130bae0] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ecx + esi] }
	__asm { call fn_00ab9cf0 }
	__asm { test esi, esi }
	__asm { je L_00ac7216 }
	__asm { lea eax, [esi + 0x1c] }
	__asm { jmp L_00ac7218 }
	__asm { L_00ac7216: }
	__asm { xor eax, eax }
	__asm { L_00ac7218: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, 0x130bab8 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_00ac62a0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_00ac7d00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ac8000
extern "C" __declspec(naked) void asm_00ac8000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xebb3dc }
	__asm { mov dword ptr [esi + 4], 0xebb478 }
	__asm { mov dword ptr [esi + 0x18], 0xebb480 }
	__asm { mov dword ptr [esi + 0x1c], 0xebb48c }
	__asm { mov dword ptr [esi + 0x64], 0xebb49c }
	__asm { mov dword ptr [esi + 0x68], 0xebb4a4 }
	__asm { mov dword ptr [esi + 0xdc], 0xebb4d8 }
	__asm { call fn_00ac7d00 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00ac804d }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ac804d: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4970[];
extern "C" void fn_006b9740();
extern "C" void fn_0081ff40();
// FUNCTION: ROBLOXSTUDIO 0x00ac8410
extern "C" __declspec(naked) void asm_00ac8410()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ac845d }
	__asm { cmp dword ptr [g_012e4970], 0x29a }
	__asm { je L_00ac845d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ac844c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac845d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ac844c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac845d: }
	__asm { mov ecx, 0x12e4974 }
	__asm { jmp fn_0081ff40 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4968[];
extern "C" void fn_006b9740();
extern "C" void fn_008203c0();
// FUNCTION: ROBLOXSTUDIO 0x00ac8470
extern "C" __declspec(naked) void asm_00ac8470()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ac84bd }
	__asm { cmp dword ptr [g_012e4968], 0x29a }
	__asm { je L_00ac84bd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ac84ac }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac84bd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ac84ac: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac84bd: }
	__asm { mov ecx, 0x12e496c }
	__asm { jmp fn_008203c0 }
}

extern "C" void fn_007b4790();
extern "C" void fn_00ac86d0();
extern "C" void fn_00d09250();
// FUNCTION: ROBLOXSTUDIO 0x00ac8790
extern "C" __declspec(naked) void asm_00ac8790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov esi, ecx }
	__asm { call fn_007b4790 }
	__asm { mov ecx, esi }
	__asm { call fn_00ac86d0 }
	__asm { cmp al, byte ptr [esi + 0xf5] }
	__asm { je L_00ac87bb }
	__asm { lea ecx, [esi + 0x68] }
	__asm { mov byte ptr [esi + 0xf5], al }
	__asm { call fn_00d09250 }
	__asm { L_00ac87bb: }
	__asm { mov edx, dword ptr [esi] }
	__asm { push 0 }
	__asm { lea eax, [esi + 0xe4] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [edx + 0x90] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4978[];
extern "C" void fn_006b9740();
extern "C" void fn_008204e0();
// FUNCTION: ROBLOXSTUDIO 0x00ac9810
extern "C" __declspec(naked) void asm_00ac9810()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ac985d }
	__asm { cmp dword ptr [g_012e4978], 0x29a }
	__asm { je L_00ac985d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ac984c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac985d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ac984c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac985d: }
	__asm { mov ecx, 0x12e497c }
	__asm { jmp fn_008204e0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4980[];
extern "C" void fn_006b9740();
extern "C" void fn_00820540();
// FUNCTION: ROBLOXSTUDIO 0x00ac9870
extern "C" __declspec(naked) void asm_00ac9870()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ac98bd }
	__asm { cmp dword ptr [g_012e4980], 0x29a }
	__asm { je L_00ac98bd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ac98ac }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ac98bd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ac98ac: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ac98bd: }
	__asm { mov ecx, 0x12e4984 }
	__asm { jmp fn_00820540 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4990[];
extern "C" void fn_006b9740();
extern "C" void fn_0081fe20();
// FUNCTION: ROBLOXSTUDIO 0x00acc880
extern "C" __declspec(naked) void asm_00acc880()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00acc8cd }
	__asm { cmp dword ptr [g_012e4990], 0x29a }
	__asm { je L_00acc8cd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00acc8bc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00acc8cd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00acc8bc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00acc8cd: }
	__asm { mov ecx, 0x12e4994 }
	__asm { jmp fn_0081fe20 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e4998[];
extern "C" void fn_006b9740();
extern "C" void fn_0081f6a0();
// FUNCTION: ROBLOXSTUDIO 0x00acd6b0
extern "C" __declspec(naked) void asm_00acd6b0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00acd6fd }
	__asm { cmp dword ptr [g_012e4998], 0x29a }
	__asm { je L_00acd6fd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00acd6ec }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00acd6fd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00acd6ec: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00acd6fd: }
	__asm { mov ecx, 0x12e499c }
	__asm { jmp fn_0081f6a0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e49a0[];
extern "C" void fn_006b9740();
extern "C" void fn_0081f700();
// FUNCTION: ROBLOXSTUDIO 0x00ad3130
extern "C" __declspec(naked) void asm_00ad3130()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ad317d }
	__asm { cmp dword ptr [g_012e49a0], 0x29a }
	__asm { je L_00ad317d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ad316c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ad317d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ad316c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ad317d: }
	__asm { mov ecx, 0x12e49a4 }
	__asm { jmp fn_0081f700 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e49b8[];
extern "C" void fn_006b9740();
extern "C" void fn_008200c0();
// FUNCTION: ROBLOXSTUDIO 0x00ad8b00
extern "C" __declspec(naked) void asm_00ad8b00()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ad8b4d }
	__asm { cmp dword ptr [g_012e49b8], 0x29a }
	__asm { je L_00ad8b4d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ad8b3c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ad8b4d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ad8b3c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ad8b4d: }
	__asm { mov ecx, 0x12e49bc }
	__asm { jmp fn_008200c0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e49c0[];
extern "C" void fn_006b9740();
extern "C" void fn_0081f640();
// FUNCTION: ROBLOXSTUDIO 0x00ada0e0
extern "C" __declspec(naked) void asm_00ada0e0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ada12d }
	__asm { cmp dword ptr [g_012e49c0], 0x29a }
	__asm { je L_00ada12d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ada11c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ada12d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ada11c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ada12d: }
	__asm { mov ecx, 0x12e49c4 }
	__asm { jmp fn_0081f640 }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00adf590();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00adf4b8
extern "C" __declspec(naked) void asm_00adf4b8()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp fn_00adf590 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xebdd3c }
	__asm { mov dword ptr [esi + 4], 0xebddb4 }
	__asm { mov dword ptr [esi + 0x18], 0xebddbc }
	__asm { mov dword ptr [esi + 0x1c], 0xebddc8 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00adf4f5 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00adf4f5: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e49c8[];
extern "C" void fn_006b9740();
extern "C" void fn_00820300();
// FUNCTION: ROBLOXSTUDIO 0x00ae1150
extern "C" __declspec(naked) void asm_00ae1150()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ae119d }
	__asm { cmp dword ptr [g_012e49c8], 0x29a }
	__asm { je L_00ae119d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ae118c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ae119d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ae118c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ae119d: }
	__asm { mov ecx, 0x12e49cc }
	__asm { jmp fn_00820300 }
}

extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00ae3900
extern "C" __declspec(naked) void asm_00ae3900()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push 0x18 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { test edx, edx }
	__asm { je L_00ae393b }
	__asm { mov dword ptr [edx], 0xebec40 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [edx + 8], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [edx + 0xc], ecx }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [edx + 0x10], ecx }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [edx + 0x14], eax }
	__asm { jmp L_00ae393d }
	__asm { L_00ae393b: }
	__asm { xor edx, edx }
	__asm { L_00ae393d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e49d0[];
extern "C" void fn_006b9740();
extern "C" void fn_00820420();
// FUNCTION: ROBLOXSTUDIO 0x00ae47a0
extern "C" __declspec(naked) void asm_00ae47a0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00ae47ed }
	__asm { cmp dword ptr [g_012e49d0], 0x29a }
	__asm { je L_00ae47ed }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00ae47dc }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00ae47ed }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00ae47dc: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00ae47ed: }
	__asm { mov ecx, 0x12e49d4 }
	__asm { jmp fn_00820420 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e49d8[];
extern "C" void fn_006b9740();
extern "C" void fn_0081f5e0();
// FUNCTION: ROBLOXSTUDIO 0x00aeb0e0
extern "C" __declspec(naked) void asm_00aeb0e0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aeb12d }
	__asm { cmp dword ptr [g_012e49d8], 0x29a }
	__asm { je L_00aeb12d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aeb11c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aeb12d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aeb11c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aeb12d: }
	__asm { mov ecx, 0x12e49dc }
	__asm { jmp fn_0081f5e0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_012e49e0[];
extern "C" void fn_006b9740();
extern "C" void fn_0081fee0();
// FUNCTION: ROBLOXSTUDIO 0x00aedf50
extern "C" __declspec(naked) void asm_00aedf50()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00aedf9d }
	__asm { cmp dword ptr [g_012e49e0], 0x29a }
	__asm { je L_00aedf9d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00aedf8c }
	__asm { push 0x117 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00aedf9d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00aedf8c: }
	__asm { movzx eax, al }
	__asm { push 0xe33af8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00aedf9d: }
	__asm { mov ecx, 0x12e49e4 }
	__asm { jmp fn_0081fee0 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00af1120
extern "C" __declspec(naked) void asm_00af1120()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00af115e }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00af114d }
	__asm { push 0x6a }
	__asm { push 0xe66ca8 }
	__asm { push 0x10062b8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00af115e }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00af114d: }
	__asm { movzx eax, al }
	__asm { push 0xebfa20 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00af115e: }
	__asm { mov eax, 0xd }
	__asm { ret }
}

extern "C" void fn_00afae40();
// FUNCTION: ROBLOXSTUDIO 0x00af5980
extern "C" __declspec(naked) void asm_00af5980()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00afae40 }
	__asm { mov esi, eax }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test edi, edi }
	__asm { je L_00af59bb }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, esi }
	__asm { L_00af59bb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_0041fe80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b0d520
extern "C" __declspec(naked) void asm_00b0d520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00b0d563 }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00b0d563: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00b0d1f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b0d8f0
extern "C" __declspec(naked) void asm_00b0d8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00b0d933 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00b0d1f0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00b0d933: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b1b530
extern "C" __declspec(naked) void asm_00b1b530()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x94], 0x10 }
	__asm { jb L_00b1b54a }
	__asm { push dword ptr [esi + 0x80] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b1b54a: }
	__asm { mov dword ptr [esi + 0x94], 0xf }
	__asm { mov dword ptr [esi + 0x90], 0 }
	__asm { mov byte ptr [esi + 0x80], 0 }
	__asm { cmp dword ptr [esi + 0x7c], 0x10 }
	__asm { jb L_00b1b576 }
	__asm { push dword ptr [esi + 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b1b576: }
	__asm { mov dword ptr [esi + 0x7c], 0xf }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov byte ptr [esi + 0x68], 0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_007b00e0 }
}

extern "C" char g_0130e224[];
extern "C" void fn_00b21fa0();
extern "C" void fn_00b224f0();
// FUNCTION: ROBLOXSTUDIO 0x00b23250
extern "C" __declspec(naked) void asm_00b23250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { fld dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 8 }
	__asm { fst qword ptr [esi + 0x90] }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00b224f0 }
	__asm { fstp qword ptr [esi + 0x98] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { fadd dword ptr [ebp + 0xc] }
	__asm { fstp qword ptr [esi + 0xa0] }
	__asm { fldz }
	__asm { fstp qword ptr [esi + 0xa8] }
	__asm { cmp byte ptr [g_0130e224], 0 }
	__asm { je L_00b23298 }
	__asm { push esi }
	__asm { mov ecx, 0x130e348 }
	__asm { call fn_00b21fa0 }
	__asm { L_00b23298: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b294a0
extern "C" __declspec(naked) void asm_00b294a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x7c], 0x10 }
	__asm { jb L_00b294b7 }
	__asm { push dword ptr [esi + 0x68] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b294b7: }
	__asm { mov dword ptr [esi + 0x7c], 0xf }
	__asm { mov dword ptr [esi + 0x78], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x68], 0 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00b294df }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b294df: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00b4d8a0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00b4b010
extern "C" __declspec(naked) void asm_00b4b010()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x28], 0 }
	__asm { jne L_00b4b04b }
	__asm { push 0xc }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_00b4b046 }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_00b4d8a0 }
	__asm { L_00b4b046: }
	__asm { xor eax, eax }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { L_00b4b04b: }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_00b4d8a0 }
}

extern "C" void fn_00b5d280();
extern "C" void fn_00b5d620();
extern "C" void fn_00b5db50();
// FUNCTION: ROBLOXSTUDIO 0x00b5d930
extern "C" __declspec(naked) void asm_00b5d930()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_00b5d966 }
	__asm { dec eax }
	__asm { je L_00b5d959 }
	__asm { dec eax }
	__asm { je L_00b5d966 }
	__asm { cmp byte ptr [ebp + 8], 0 }
	__asm { je L_00b5d950 }
	__asm { call fn_00b5d620 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b5d950: }
	__asm { call fn_00b5d280 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00b5d959: }
	__asm { mov dword ptr [ebp + 8], 3 }
	__asm { pop ebp }
	__asm { jmp fn_00b5db50 }
	__asm { L_00b5d966: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { pop ebp }
	__asm { jmp fn_00b5db50 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b60060
extern "C" __declspec(naked) void asm_00b60060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { lea esi, [eax + 4] }
	__asm { mov dword ptr [eax + 0x10], 0xe370e4 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00b6009c }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00b6009c: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00b5fe30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b60460
extern "C" __declspec(naked) void asm_00b60460()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00b604a3 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00b5fe30 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00b604a3: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00b61d90
extern "C" __declspec(naked) void asm_00b61d90()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00b61dd1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00b61dc0 }
	__asm { push 0xe7 }
	__asm { push 0xecfdf0 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00b61dd1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00b61dc0: }
	__asm { movzx eax, al }
	__asm { push 0xecffa8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00b61dd1: }
	__asm { xor al, al }
	__asm { ret 0x14 }
}

extern "C" void fn_008ccfc0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b80080
extern "C" __declspec(naked) void asm_00b80080()
{
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 0xc] }
	__asm { test esi, esi }
	__asm { je L_00b800c6 }
	__asm { cmp dword ptr [esi + 0x18], 0x10 }
	__asm { jb L_00b80099 }
	__asm { push dword ptr [esi + 4] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b80099: }
	__asm { mov dword ptr [esi + 0x18], 0xf }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov byte ptr [esi + 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00b800bd }
	__asm { add eax, 4 }
	__asm { push eax }
	__asm { call fn_008ccfc0 }
	__asm { add esp, 4 }
	__asm { L_00b800bd: }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00b800c6: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10268[];
extern "C" void fn_00b873b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00b88d10
extern "C" __declspec(naked) void asm_00b88d10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_00b88d53 }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { push dword ptr [esi] }
	__asm { call fn_00b873b0 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00b88d53: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00b678d0();
// FUNCTION: ROBLOXSTUDIO 0x00ba6fb0
extern "C" __declspec(naked) void asm_00ba6fb0()
{
	__asm { mov eax, dword ptr [ecx + 0x28] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax + 0x30] }
	__asm { test esi, esi }
	__asm { je L_00ba7004 }
	__asm { cmp byte ptr [esi + 8], 0 }
	__asm { je L_00ba6fc8 }
	__asm { mov ecx, esi }
	__asm { call fn_00b678d0 }
	__asm { L_00ba6fc8: }
	__asm { mov dword ptr [esi + 0xcc], 0 }
	__asm { mov dword ptr [esi + 0xd0], 0 }
	__asm { mov dword ptr [esi + 0xd4], 0 }
	__asm { mov dword ptr [esi + 0xd8], 0 }
	__asm { mov dword ptr [esi + 0xdc], 0 }
	__asm { mov dword ptr [esi + 0xe0], 0 }
	__asm { L_00ba7004: }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_0130f764[];
extern "C" void fn_00407e90();
// FUNCTION: ROBLOXSTUDIO 0x00bd1270
extern "C" __declspec(naked) void asm_00bd1270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { movzx eax, byte ptr [g_0130f764] }
	__asm { test eax, eax }
	__asm { jne L_00bd12b5 }
	__asm { mov dword ptr [ebp - 4], 0x130f760 }
	__asm { lea ecx, [ebp - 4] }
	__asm { push ecx }
	__asm { mov ecx, 0x12de768 }
	__asm { call fn_00407e90 }
	__asm { mov dword ptr [ebp - 8], 0xbd3170 }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { mov ecx, 0x12de758 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130f764], 1 }
	__asm { L_00bd12b5: }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f758[];
extern "C" void fn_00407e90();
// FUNCTION: ROBLOXSTUDIO 0x00bd12c0
extern "C" __declspec(naked) void asm_00bd12c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { movzx eax, byte ptr [g_0130f758] }
	__asm { test eax, eax }
	__asm { jne L_00bd1305 }
	__asm { mov dword ptr [ebp - 4], 0x130f754 }
	__asm { lea ecx, [ebp - 4] }
	__asm { push ecx }
	__asm { mov ecx, 0x12de768 }
	__asm { call fn_00407e90 }
	__asm { mov dword ptr [ebp - 8], 0xbd3190 }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { mov ecx, 0x12de758 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130f758], 1 }
	__asm { L_00bd1305: }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f74c[];
extern "C" void fn_00407e90();
// FUNCTION: ROBLOXSTUDIO 0x00bd1310
extern "C" __declspec(naked) void asm_00bd1310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { movzx eax, byte ptr [g_0130f74c] }
	__asm { test eax, eax }
	__asm { jne L_00bd1355 }
	__asm { mov dword ptr [ebp - 4], 0x130f748 }
	__asm { lea ecx, [ebp - 4] }
	__asm { push ecx }
	__asm { mov ecx, 0x12de768 }
	__asm { call fn_00407e90 }
	__asm { mov dword ptr [ebp - 8], 0xbd31b0 }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { mov ecx, 0x12de758 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130f74c], 1 }
	__asm { L_00bd1355: }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130f743[];
extern "C" void fn_00407e90();
// FUNCTION: ROBLOXSTUDIO 0x00bd1360
extern "C" __declspec(naked) void asm_00bd1360()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { movzx eax, byte ptr [g_0130f743] }
	__asm { test eax, eax }
	__asm { jne L_00bd13a5 }
	__asm { mov dword ptr [ebp - 4], 0x1307a34 }
	__asm { lea ecx, [ebp - 4] }
	__asm { push ecx }
	__asm { mov ecx, 0x12de768 }
	__asm { call fn_00407e90 }
	__asm { mov dword ptr [ebp - 8], 0xbd31d0 }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { mov ecx, 0x12de758 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130f743], 1 }
	__asm { L_00bd13a5: }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00bd1a50();
// FUNCTION: ROBLOXSTUDIO 0x00bd1b90
extern "C" __declspec(naked) void asm_00bd1b90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi + 0x154], 0xe4687c }
	__asm { mov dword ptr [esi + 0x138], 0xe4687c }
	__asm { mov dword ptr [esi + 0x124], 0xe370e4 }
	__asm { mov dword ptr [esi + 0x110], 0xe370e4 }
	__asm { je L_00bd1bcd }
	__asm { push esi }
	__asm { call fn_00bd1a50 }
	__asm { add esp, 4 }
	__asm { L_00bd1bcd: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130f766[];
extern "C" void fn_00407e90();
// FUNCTION: ROBLOXSTUDIO 0x00bd3c30
extern "C" __declspec(naked) void asm_00bd3c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { movzx eax, byte ptr [g_0130f766] }
	__asm { test eax, eax }
	__asm { jne L_00bd3c75 }
	__asm { mov dword ptr [ebp - 4], 0x1307a38 }
	__asm { lea ecx, [ebp - 4] }
	__asm { push ecx }
	__asm { mov ecx, 0x12de768 }
	__asm { call fn_00407e90 }
	__asm { mov dword ptr [ebp - 8], 0xbd5330 }
	__asm { lea edx, [ebp - 8] }
	__asm { push edx }
	__asm { mov ecx, 0x12de758 }
	__asm { call fn_00407e90 }
	__asm { mov byte ptr [g_0130f766], 1 }
	__asm { L_00bd3c75: }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0092a0b0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00bf8ba0
extern "C" __declspec(naked) void asm_00bf8ba0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0xd0], 0x10 }
	__asm { jb L_00bf8bba }
	__asm { push dword ptr [esi + 0xbc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bf8bba: }
	__asm { mov dword ptr [esi + 0xd0], 0xf }
	__asm { mov dword ptr [esi + 0xcc], 0 }
	__asm { mov byte ptr [esi + 0xbc], 0 }
	__asm { cmp dword ptr [esi + 0x8c], 0x10 }
	__asm { jb L_00bf8be9 }
	__asm { push dword ptr [esi + 0x78] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00bf8be9: }
	__asm { mov dword ptr [esi + 0x8c], 0xf }
	__asm { mov dword ptr [esi + 0x88], 0 }
	__asm { mov byte ptr [esi + 0x78], 0 }
	__asm { mov ecx, esi }
	__asm { pop esi }
	__asm { jmp fn_0092a0b0 }
}

extern "C" void fn_00afae40();
// FUNCTION: ROBLOXSTUDIO 0x00c0a130
extern "C" __declspec(naked) void asm_00c0a130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00afae40 }
	__asm { mov esi, eax }
	__asm { lea edi, [esi + 0x10] }
	__asm { mov word ptr [esi + 0xc], 0 }
	__asm { test edi, edi }
	__asm { je L_00c0a16b }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { fld dword ptr [edx + 8] }
	__asm { mov dword ptr [edi], ecx }
	__asm { fstp dword ptr [edi + 8] }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edx + 4], 0 }
	__asm { mov dword ptr [edx], 0 }
	__asm { mov eax, esi }
	__asm { L_00c0a16b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00ea848c[];
extern "C" char g_00ee958c[];
extern "C" char g_00ee9590[];
extern "C" char g_010380d4[];
extern "C" char g_012e3580[];
extern "C" void fn_00cf68ec();
// FUNCTION: ROBLOXSTUDIO 0x00c0e1c0
extern "C" __declspec(naked) void asm_00c0e1c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_012e3580] }
	__asm { fld dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_00c0e1ed }
	__asm { fmul dword ptr [g_00ee958c] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { fmul dword ptr [g_010380d4] }
	__asm { add esp, 8 }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00c0e1ed: }
	__asm { cmp eax, 1 }
	__asm { jne L_00c0e20c }
	__asm { fmul dword ptr [g_00ee9590] }
	__asm { sub esp, 8 }
	__asm { fstp qword ptr [esp] }
	__asm { call fn_00cf68ec }
	__asm { fmul dword ptr [g_00ea848c] }
	__asm { add esp, 8 }
	__asm { L_00c0e20c: }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0130fedc[];
extern "C" char g_0130fee0[];
extern "C" char g_0130fee4[];
extern "C" char g_0130fee8[];
// FUNCTION: ROBLOXSTUDIO 0x00c13a70
extern "C" __declspec(naked) void asm_00c13a70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0130fee8] }
	__asm { test al, 1 }
	__asm { jne L_00c13aa2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fee8], eax }
	__asm { mov dword ptr [g_0130fedc], 0x447a0000 }
	__asm { mov dword ptr [g_0130fee0], 0x461c4000 }
	__asm { mov dword ptr [g_0130fee4], 0x447a0000 }
	__asm { L_00c13aa2: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_0130fedc] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [g_0130fee0] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [g_0130fee4] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130feec[];
extern "C" char g_0130fef0[];
extern "C" char g_0130fef4[];
extern "C" char g_0130fef8[];
// FUNCTION: ROBLOXSTUDIO 0x00c13ad0
extern "C" __declspec(naked) void asm_00c13ad0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0130fef8] }
	__asm { test al, 1 }
	__asm { jne L_00c13b02 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130fef8], eax }
	__asm { mov dword ptr [g_0130feec], 0xc47a0000 }
	__asm { mov dword ptr [g_0130fef0], 0 }
	__asm { mov dword ptr [g_0130fef4], 0xc47a0000 }
	__asm { L_00c13b02: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_0130feec] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [g_0130fef0] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [g_0130fef4] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ff1c[];
extern "C" char g_0130ff20[];
extern "C" char g_0130ff24[];
extern "C" char g_0130ff28[];
// FUNCTION: ROBLOXSTUDIO 0x00c16bd0
extern "C" __declspec(naked) void asm_00c16bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0130ff28] }
	__asm { test al, 1 }
	__asm { jne L_00c16c02 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130ff28], eax }
	__asm { mov dword ptr [g_0130ff1c], 0x461c4000 }
	__asm { mov dword ptr [g_0130ff20], 0x447a0000 }
	__asm { mov dword ptr [g_0130ff24], 0x461c4000 }
	__asm { L_00c16c02: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_0130ff1c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [g_0130ff20] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [g_0130ff24] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_0130ff2c[];
extern "C" char g_0130ff30[];
extern "C" char g_0130ff34[];
extern "C" char g_0130ff38[];
// FUNCTION: ROBLOXSTUDIO 0x00c16c30
extern "C" __declspec(naked) void asm_00c16c30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [g_0130ff38] }
	__asm { test al, 1 }
	__asm { jne L_00c16c62 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0130ff38], eax }
	__asm { mov dword ptr [g_0130ff2c], 0xc61c4000 }
	__asm { mov dword ptr [g_0130ff30], 0xc61c4000 }
	__asm { mov dword ptr [g_0130ff34], 0xc61c4000 }
	__asm { L_00c16c62: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [g_0130ff2c] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [g_0130ff30] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [g_0130ff34] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00c27ce0
extern "C" __declspec(naked) void asm_00c27ce0()
{
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
	__asm { jne L_00c27d19 }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00c27d19: }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { mov dword ptr [esi + 0x18], 0 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131f980[];
extern "C" void fn_00558e30();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00c4a1e0
extern "C" __declspec(naked) void asm_00c4a1e0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c4a22d }
	__asm { cmp dword ptr [g_0131f980], 0x29a }
	__asm { je L_00c4a22d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c4a21c }
	__asm { push 0x117 }
	__asm { push 0xf1492c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c4a22d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c4a21c: }
	__asm { movzx eax, al }
	__asm { push 0xf145f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c4a22d: }
	__asm { mov ecx, 0x131fc34 }
	__asm { jmp fn_00558e30 }
}

extern "C" void fn_007b4f50();
extern "C" void fn_00a48550();
extern "C" void fn_00aad970();
// FUNCTION: ROBLOXSTUDIO 0x00c51180
extern "C" __declspec(naked) void asm_00c51180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x1f0], eax }
	__asm { je L_00c511c4 }
	__asm { mov ecx, dword ptr [esi + 0x64] }
	__asm { mov dword ptr [esi + 0x1f0], eax }
	__asm { test ecx, ecx }
	__asm { je L_00c511b8 }
	__asm { call fn_00aad970 }
	__asm { test eax, eax }
	__asm { je L_00c511b8 }
	__asm { push dword ptr [esi + 0x1f0] }
	__asm { lea ecx, [eax + 0x128] }
	__asm { call fn_00a48550 }
	__asm { L_00c511b8: }
	__asm { push 0x1311c1c }
	__asm { mov ecx, esi }
	__asm { call fn_007b4f50 }
	__asm { L_00c511c4: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_0131c458[];
extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c57130
extern "C" __declspec(naked) void asm_00c57130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [g_0131c458], 0 }
	__asm { mov dword ptr [esi], 0xef2794 }
	__asm { mov dword ptr [esi + 4], 0xef280c }
	__asm { mov dword ptr [esi + 0x18], 0xef2814 }
	__asm { mov dword ptr [esi + 0x1c], 0xef2820 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c5716f }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c5716f: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00c575d0
extern "C" __declspec(naked) void asm_00c575d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { lea edx, [ebp - 4] }
	__asm { cmovle edx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [edx], 0xfffffc18 }
	__asm { lea eax, [ebp - 8] }
	__asm { cmovg eax, edx }
	__asm { mov dword ptr [ebp - 8], 0xfffffc18 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [ecx + 0xfc] }
	__asm { je L_00c57617 }
	__asm { push 0x13133e0 }
	__asm { mov dword ptr [ecx + 0xfc], eax }
	__asm { call fn_007b4f50 }
	__asm { L_00c57617: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_007b4f50();
// FUNCTION: ROBLOXSTUDIO 0x00c57790
extern "C" __declspec(naked) void asm_00c57790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { lea edx, [ebp - 4] }
	__asm { cmovle edx, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [edx], 0xfffffc18 }
	__asm { lea eax, [ebp - 8] }
	__asm { cmovg eax, edx }
	__asm { mov dword ptr [ebp - 8], 0xfffffc18 }
	__asm { mov eax, dword ptr [eax] }
	__asm { cmp eax, dword ptr [ecx + 0x100] }
	__asm { je L_00c577d7 }
	__asm { push 0x1313350 }
	__asm { mov dword ptr [ecx + 0x100], eax }
	__asm { call fn_007b4f50 }
	__asm { L_00c577d7: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00c6e570();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c6fa50
extern "C" __declspec(naked) void asm_00c6fa50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { test eax, eax }
	__asm { je L_00c6fa90 }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea ecx, [ebp - 1] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0xc] }
	__asm { push eax }
	__asm { call fn_00c6e570 }
	__asm { push dword ptr [esi + 8] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { L_00c6fa90: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00c6e570();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c6faa0
extern "C" __declspec(naked) void asm_00c6faa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00c6fadd }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea ecx, [ebp - 1] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 4] }
	__asm { push eax }
	__asm { call fn_00c6e570 }
	__asm { push dword ptr [esi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { L_00c6fadd: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c70780
extern "C" __declspec(naked) void asm_00c70780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xef5c28 }
	__asm { cmp dword ptr [esi + 0x20], 0x10 }
	__asm { jb L_00c7079d }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c7079d: }
	__asm { mov dword ptr [esi + 0x20], 0xf }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0xc], 0 }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c707c6 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c707c6: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00bfdcb0();
// FUNCTION: ROBLOXSTUDIO 0x00c7a420
extern "C" __declspec(naked) void asm_00c7a420()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { call fn_00bfdcb0 }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [esi + 8] }
	__asm { mov edx, 0x7f }
	__asm { mov ecx, 0xffff }
	__asm { L_00c7a444: }
	__asm { dec edx }
	__asm { mov dword ptr [eax], 0xffffffff }
	__asm { mov word ptr [eax + 4], cx }
	__asm { lea eax, [eax + 8] }
	__asm { jns L_00c7a444 }
	__asm { mov dword ptr [esi + 0x408], 1 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { ret }
}

extern "C" char g_00e10510[];
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c7eb30
extern "C" __declspec(naked) void asm_00c7eb30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xef66c4 }
	__asm { cmp dword ptr [esi + 0x20], 0x10 }
	__asm { jb L_00c7eb4d }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c7eb4d: }
	__asm { mov dword ptr [esi + 0x20], 0xf }
	__asm { mov dword ptr [esi + 0x1c], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0xc], 0 }
	__asm { call dword ptr [g_00e10510] }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c7eb76 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c7eb76: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00c8c770
extern "C" __declspec(naked) void asm_00c8c770()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c8c7b1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c8c7a0 }
	__asm { push 0x93 }
	__asm { push 0xef6cf8 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c8c7b1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c8c7a0: }
	__asm { movzx eax, al }
	__asm { push 0xef6d38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c8c7b1: }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01310778[];
extern "C" void fn_006b9740();
extern "C" void fn_00c30aa0();
// FUNCTION: ROBLOXSTUDIO 0x00c973d0
extern "C" __declspec(naked) void asm_00c973d0()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c9741d }
	__asm { cmp dword ptr [g_01310778], 0x29a }
	__asm { je L_00c9741d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c9740c }
	__asm { push 0x117 }
	__asm { push 0xf1492c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c9741d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c9740c: }
	__asm { movzx eax, al }
	__asm { push 0xf145f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c9741d: }
	__asm { mov ecx, 0x131077c }
	__asm { jmp fn_00c30aa0 }
}

extern "C" void fn_00c9be10();
extern "C" void fn_00c9f270();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c9bcb8
extern "C" __declspec(naked) void asm_00c9bcb8()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp fn_00c9be10 }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xefa7dc }
	__asm { mov dword ptr [esi + 4], 0xefa858 }
	__asm { mov dword ptr [esi + 0x18], 0xefa860 }
	__asm { mov dword ptr [esi + 0x1c], 0xefa86c }
	__asm { mov dword ptr [esi + 0x64], 0xefa87c }
	__asm { call fn_00c9f270 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c9bcfc }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c9bcfc: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_01310780[];
extern "C" void fn_006b9740();
extern "C" void fn_00c30b00();
// FUNCTION: ROBLOXSTUDIO 0x00c9ce80
extern "C" __declspec(naked) void asm_00c9ce80()
{
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00c9cecd }
	__asm { cmp dword ptr [g_01310780], 0x29a }
	__asm { je L_00c9cecd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00c9cebc }
	__asm { push 0x117 }
	__asm { push 0xf1492c }
	__asm { push 0xf14658 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00c9cecd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00c9cebc: }
	__asm { movzx eax, al }
	__asm { push 0xf145f0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00c9cecd: }
	__asm { mov ecx, 0x1310784 }
	__asm { jmp fn_00c30b00 }
}

extern "C" void fn_007b00e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00c9f450
extern "C" __declspec(naked) void asm_00c9f450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0x84], 0x10 }
	__asm { jb L_00c9f46a }
	__asm { push dword ptr [esi + 0x70] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c9f46a: }
	__asm { mov dword ptr [esi + 0x84], 0xf }
	__asm { mov dword ptr [esi + 0x80], 0 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi + 0x70], 0 }
	__asm { call fn_007b00e0 }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00c9f498 }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00c9f498: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01314240[];
extern "C" void fn_006b8a90();
extern "C" void fn_00c8d1b0();
// FUNCTION: ROBLOXSTUDIO 0x00caa110
extern "C" __declspec(naked) void asm_00caa110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp byte ptr [esi + 0x45dc], 0 }
	__asm { je L_00caa141 }
	__asm { mov al, byte ptr [g_01314240] }
	__asm { test al, al }
	__asm { je L_00caa13b }
	__asm { push 0 }
	__asm { movzx eax, al }
	__asm { push 0xefca68 }
	__asm { push eax }
	__asm { call fn_006b8a90 }
	__asm { add esp, 0xc }
	__asm { L_00caa13b: }
	__asm { inc dword ptr [esi + 0x4744] }
	__asm { L_00caa141: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov ecx, esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_00c8d1b0 }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0xc }
}

// FUNCTION: ROBLOXSTUDIO 0x00cbf370
extern "C" __declspec(naked) void asm_00cbf370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp eax, 0x7fffff }
	__asm { jbe L_00cbf39a }
	__asm { lea edx, [eax - 0x7ffffe] }
	__asm { and edx, 0xffffff }
	__asm { cmp ecx, edx }
	__asm { jb L_00cbf3ae }
	__asm { cmp ecx, eax }
	__asm { jae L_00cbf3ae }
	__asm { L_00cbf394: }
	__asm { mov al, 1 }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00cbf39a: }
	__asm { lea edx, [eax - 0x800000] }
	__asm { and edx, 0xffffff }
	__asm { cmp ecx, edx }
	__asm { jae L_00cbf394 }
	__asm { cmp ecx, eax }
	__asm { jb L_00cbf394 }
	__asm { L_00cbf3ae: }
	__asm { xor al, al }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0041fe80();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ce3f90
extern "C" __declspec(naked) void asm_00ce3f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { test eax, eax }
	__asm { je L_00ce3fd0 }
	__asm { push dword ptr [ebp - 5] }
	__asm { lea ecx, [ebp - 1] }
	__asm { push ecx }
	__asm { push dword ptr [esi + 0x10] }
	__asm { push eax }
	__asm { call fn_0041fe80 }
	__asm { push dword ptr [esi + 0xc] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov dword ptr [esi + 0x14], 0 }
	__asm { L_00ce3fd0: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00ce4300
extern "C" __declspec(naked) void asm_00ce4300()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { test eax, eax }
	__asm { je L_00ce432b }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x2c], 0 }
	__asm { mov dword ptr [esi + 0x30], 0 }
	__asm { mov dword ptr [esi + 0x34], 0 }
	__asm { L_00ce432b: }
	__asm { test byte ptr [ebp + 8], 1 }
	__asm { je L_00ce433a }
	__asm { push esi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00ce433a: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00d00cb0();
// FUNCTION: ROBLOXSTUDIO 0x00d00010
extern "C" __declspec(naked) void asm_00d00010()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [ecx + 0x94] }
	__asm { mov dword ptr [ecx + 0xb18], eax }
	__asm { lea eax, [ecx + 0x988] }
	__asm { mov dword ptr [ecx + 0xb24], eax }
	__asm { lea eax, [ecx + 0xa7c] }
	__asm { mov dword ptr [ecx + 0xb30], eax }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ecx + 0xb20], 0x12bbba4 }
	__asm { mov dword ptr [ecx + 0xb2c], 0x12bbbb8 }
	__asm { mov dword ptr [ecx + 0xb38], 0x12bbbcc }
	__asm { mov word ptr [ecx + 0x16b8], ax }
	__asm { mov dword ptr [ecx + 0x16bc], eax }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { pop ebp }
	__asm { jmp fn_00d00cb0 }
}

extern "C" char g_00e10508[];
extern "C" char g_012bfd40[];
extern "C" char g_012bfd50[];
extern "C" char g_012bfd54[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddc520
extern "C" __declspec(naked) void asm_00ddc520()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012bfd54], 0x10 }
	__asm { jb L_00ddc55c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012bfd40] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12bfd40 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddc55c: }
	__asm { mov dword ptr [g_012bfd54], 0xf }
	__asm { mov dword ptr [g_012bfd50], 0 }
	__asm { mov byte ptr [g_012bfd40], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012bfde0[];
extern "C" char g_012bfdf0[];
extern "C" char g_012bfdf4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddc890
extern "C" __declspec(naked) void asm_00ddc890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012bfdf4], 0x10 }
	__asm { jb L_00ddc8cc }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012bfde0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12bfde0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddc8cc: }
	__asm { mov dword ptr [g_012bfdf4], 0xf }
	__asm { mov dword ptr [g_012bfdf0], 0 }
	__asm { mov byte ptr [g_012bfde0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0078[];
extern "C" char g_012c0088[];
extern "C" char g_012c008c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddc8f0
extern "C" __declspec(naked) void asm_00ddc8f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c008c], 0x10 }
	__asm { jb L_00ddc92c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0078] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0078 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddc92c: }
	__asm { mov dword ptr [g_012c008c], 0xf }
	__asm { mov dword ptr [g_012c0088], 0 }
	__asm { mov byte ptr [g_012c0078], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0090[];
extern "C" char g_012c00a0[];
extern "C" char g_012c00a4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddc950
extern "C" __declspec(naked) void asm_00ddc950()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c00a4], 0x10 }
	__asm { jb L_00ddc98c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0090] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0090 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddc98c: }
	__asm { mov dword ptr [g_012c00a4], 0xf }
	__asm { mov dword ptr [g_012c00a0], 0 }
	__asm { mov byte ptr [g_012c0090], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c00a8[];
extern "C" char g_012c00b8[];
extern "C" char g_012c00bc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddc9b0
extern "C" __declspec(naked) void asm_00ddc9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c00bc], 0x10 }
	__asm { jb L_00ddc9ec }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c00a8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c00a8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddc9ec: }
	__asm { mov dword ptr [g_012c00bc], 0xf }
	__asm { mov dword ptr [g_012c00b8], 0 }
	__asm { mov byte ptr [g_012c00a8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c00d8[];
extern "C" char g_012c00e8[];
extern "C" char g_012c00ec[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddcae0
extern "C" __declspec(naked) void asm_00ddcae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c00ec], 0x10 }
	__asm { jb L_00ddcb1c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c00d8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c00d8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddcb1c: }
	__asm { mov dword ptr [g_012c00ec], 0xf }
	__asm { mov dword ptr [g_012c00e8], 0 }
	__asm { mov byte ptr [g_012c00d8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c00f0[];
extern "C" char g_012c0100[];
extern "C" char g_012c0104[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddcb40
extern "C" __declspec(naked) void asm_00ddcb40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c0104], 0x10 }
	__asm { jb L_00ddcb7c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c00f0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c00f0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddcb7c: }
	__asm { mov dword ptr [g_012c0104], 0xf }
	__asm { mov dword ptr [g_012c0100], 0 }
	__asm { mov byte ptr [g_012c00f0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0120[];
extern "C" char g_012c0130[];
extern "C" char g_012c0134[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddd490
extern "C" __declspec(naked) void asm_00ddd490()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c0134], 0x10 }
	__asm { jb L_00ddd4cc }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0120] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0120 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddd4cc: }
	__asm { mov dword ptr [g_012c0134], 0xf }
	__asm { mov dword ptr [g_012c0130], 0 }
	__asm { mov byte ptr [g_012c0120], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0138[];
extern "C" char g_012c0148[];
extern "C" char g_012c014c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddd680
extern "C" __declspec(naked) void asm_00ddd680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c014c], 0x10 }
	__asm { jb L_00ddd6bc }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0138] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0138 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddd6bc: }
	__asm { mov dword ptr [g_012c014c], 0xf }
	__asm { mov dword ptr [g_012c0148], 0 }
	__asm { mov byte ptr [g_012c0138], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0150[];
extern "C" char g_012c0160[];
extern "C" char g_012c0164[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddd6e0
extern "C" __declspec(naked) void asm_00ddd6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c0164], 0x10 }
	__asm { jb L_00ddd71c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0150] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0150 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddd71c: }
	__asm { mov dword ptr [g_012c0164], 0xf }
	__asm { mov dword ptr [g_012c0160], 0 }
	__asm { mov byte ptr [g_012c0150], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0168[];
extern "C" char g_012c0178[];
extern "C" char g_012c017c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddd740
extern "C" __declspec(naked) void asm_00ddd740()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c017c], 0x10 }
	__asm { jb L_00ddd77c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0168] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0168 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddd77c: }
	__asm { mov dword ptr [g_012c017c], 0xf }
	__asm { mov dword ptr [g_012c0178], 0 }
	__asm { mov byte ptr [g_012c0168], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0198[];
extern "C" char g_012c01a8[];
extern "C" char g_012c01ac[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddd880
extern "C" __declspec(naked) void asm_00ddd880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c01ac], 0x10 }
	__asm { jb L_00ddd8bc }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0198] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0198 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddd8bc: }
	__asm { mov dword ptr [g_012c01ac], 0xf }
	__asm { mov dword ptr [g_012c01a8], 0 }
	__asm { mov byte ptr [g_012c0198], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c03a8[];
extern "C" char g_012c03b8[];
extern "C" char g_012c03bc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddd990
extern "C" __declspec(naked) void asm_00ddd990()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c03bc], 0x10 }
	__asm { jb L_00ddd9cc }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c03a8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c03a8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddd9cc: }
	__asm { mov dword ptr [g_012c03bc], 0xf }
	__asm { mov dword ptr [g_012c03b8], 0 }
	__asm { mov byte ptr [g_012c03a8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c03c0[];
extern "C" char g_012c03d0[];
extern "C" char g_012c03d4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddd9f0
extern "C" __declspec(naked) void asm_00ddd9f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c03d4], 0x10 }
	__asm { jb L_00ddda2c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c03c0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c03c0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddda2c: }
	__asm { mov dword ptr [g_012c03d4], 0xf }
	__asm { mov dword ptr [g_012c03d0], 0 }
	__asm { mov byte ptr [g_012c03c0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c03d8[];
extern "C" char g_012c03e8[];
extern "C" char g_012c03ec[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00ddda50
extern "C" __declspec(naked) void asm_00ddda50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c03ec], 0x10 }
	__asm { jb L_00ddda8c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c03d8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c03d8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00ddda8c: }
	__asm { mov dword ptr [g_012c03ec], 0xf }
	__asm { mov dword ptr [g_012c03e8], 0 }
	__asm { mov byte ptr [g_012c03d8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c03f0[];
extern "C" char g_012c0400[];
extern "C" char g_012c0404[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dddab0
extern "C" __declspec(naked) void asm_00dddab0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c0404], 0x10 }
	__asm { jb L_00dddaec }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c03f0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c03f0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dddaec: }
	__asm { mov dword ptr [g_012c0404], 0xf }
	__asm { mov dword ptr [g_012c0400], 0 }
	__asm { mov byte ptr [g_012c03f0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0408[];
extern "C" char g_012c0418[];
extern "C" char g_012c041c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dddb10
extern "C" __declspec(naked) void asm_00dddb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c041c], 0x10 }
	__asm { jb L_00dddb4c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0408] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0408 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dddb4c: }
	__asm { mov dword ptr [g_012c041c], 0xf }
	__asm { mov dword ptr [g_012c0418], 0 }
	__asm { mov byte ptr [g_012c0408], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0420[];
extern "C" char g_012c0430[];
extern "C" char g_012c0434[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dddb70
extern "C" __declspec(naked) void asm_00dddb70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c0434], 0x10 }
	__asm { jb L_00dddbac }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0420] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0420 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dddbac: }
	__asm { mov dword ptr [g_012c0434], 0xf }
	__asm { mov dword ptr [g_012c0430], 0 }
	__asm { mov byte ptr [g_012c0420], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0438[];
extern "C" char g_012c0448[];
extern "C" char g_012c044c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dddbd0
extern "C" __declspec(naked) void asm_00dddbd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c044c], 0x10 }
	__asm { jb L_00dddc0c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0438] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0438 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dddc0c: }
	__asm { mov dword ptr [g_012c044c], 0xf }
	__asm { mov dword ptr [g_012c0448], 0 }
	__asm { mov byte ptr [g_012c0438], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0450[];
extern "C" char g_012c0460[];
extern "C" char g_012c0464[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dddc30
extern "C" __declspec(naked) void asm_00dddc30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c0464], 0x10 }
	__asm { jb L_00dddc6c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0450] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0450 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dddc6c: }
	__asm { mov dword ptr [g_012c0464], 0xf }
	__asm { mov dword ptr [g_012c0460], 0 }
	__asm { mov byte ptr [g_012c0450], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0468[];
extern "C" char g_012c0478[];
extern "C" char g_012c047c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dddc90
extern "C" __declspec(naked) void asm_00dddc90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c047c], 0x10 }
	__asm { jb L_00dddccc }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0468] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0468 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dddccc: }
	__asm { mov dword ptr [g_012c047c], 0xf }
	__asm { mov dword ptr [g_012c0478], 0 }
	__asm { mov byte ptr [g_012c0468], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0498[];
extern "C" char g_012c04a8[];
extern "C" char g_012c04ac[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dddea0
extern "C" __declspec(naked) void asm_00dddea0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c04ac], 0x10 }
	__asm { jb L_00dddedc }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0498] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0498 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dddedc: }
	__asm { mov dword ptr [g_012c04ac], 0xf }
	__asm { mov dword ptr [g_012c04a8], 0 }
	__asm { mov byte ptr [g_012c0498], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c04b0[];
extern "C" char g_012c04c0[];
extern "C" char g_012c04c4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dddf00
extern "C" __declspec(naked) void asm_00dddf00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c04c4], 0x10 }
	__asm { jb L_00dddf3c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c04b0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c04b0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dddf3c: }
	__asm { mov dword ptr [g_012c04c4], 0xf }
	__asm { mov dword ptr [g_012c04c0], 0 }
	__asm { mov byte ptr [g_012c04b0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c04c8[];
extern "C" char g_012c04d8[];
extern "C" char g_012c04dc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dddf60
extern "C" __declspec(naked) void asm_00dddf60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c04dc], 0x10 }
	__asm { jb L_00dddf9c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c04c8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c04c8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dddf9c: }
	__asm { mov dword ptr [g_012c04dc], 0xf }
	__asm { mov dword ptr [g_012c04d8], 0 }
	__asm { mov byte ptr [g_012c04c8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c04e0[];
extern "C" char g_012c04f0[];
extern "C" char g_012c04f4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dddfd0
extern "C" __declspec(naked) void asm_00dddfd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c04f4], 0x10 }
	__asm { jb L_00dde00c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c04e0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c04e0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dde00c: }
	__asm { mov dword ptr [g_012c04f4], 0xf }
	__asm { mov dword ptr [g_012c04f0], 0 }
	__asm { mov byte ptr [g_012c04e0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c04f8[];
extern "C" char g_012c0508[];
extern "C" char g_012c050c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dde030
extern "C" __declspec(naked) void asm_00dde030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c050c], 0x10 }
	__asm { jb L_00dde06c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c04f8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c04f8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dde06c: }
	__asm { mov dword ptr [g_012c050c], 0xf }
	__asm { mov dword ptr [g_012c0508], 0 }
	__asm { mov byte ptr [g_012c04f8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0510[];
extern "C" char g_012c0520[];
extern "C" char g_012c0524[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dde090
extern "C" __declspec(naked) void asm_00dde090()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c0524], 0x10 }
	__asm { jb L_00dde0cc }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0510] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0510 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dde0cc: }
	__asm { mov dword ptr [g_012c0524], 0xf }
	__asm { mov dword ptr [g_012c0520], 0 }
	__asm { mov byte ptr [g_012c0510], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0528[];
extern "C" char g_012c0538[];
extern "C" char g_012c053c[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dde0f0
extern "C" __declspec(naked) void asm_00dde0f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c053c], 0x10 }
	__asm { jb L_00dde12c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0528] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0528 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dde12c: }
	__asm { mov dword ptr [g_012c053c], 0xf }
	__asm { mov dword ptr [g_012c0538], 0 }
	__asm { mov byte ptr [g_012c0528], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0540[];
extern "C" char g_012c0550[];
extern "C" char g_012c0554[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dde150
extern "C" __declspec(naked) void asm_00dde150()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c0554], 0x10 }
	__asm { jb L_00dde18c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0540] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0540 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dde18c: }
	__asm { mov dword ptr [g_012c0554], 0xf }
	__asm { mov dword ptr [g_012c0550], 0 }
	__asm { mov byte ptr [g_012c0540], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0570[];
extern "C" char g_012c0580[];
extern "C" char g_012c0584[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dde340
extern "C" __declspec(naked) void asm_00dde340()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c0584], 0x10 }
	__asm { jb L_00dde37c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0570] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0570 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dde37c: }
	__asm { mov dword ptr [g_012c0584], 0xf }
	__asm { mov dword ptr [g_012c0580], 0 }
	__asm { mov byte ptr [g_012c0570], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c05a0[];
extern "C" char g_012c05b0[];
extern "C" char g_012c05b4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dde4a0
extern "C" __declspec(naked) void asm_00dde4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c05b4], 0x10 }
	__asm { jb L_00dde4dc }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c05a0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c05a0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dde4dc: }
	__asm { mov dword ptr [g_012c05b4], 0xf }
	__asm { mov dword ptr [g_012c05b0], 0 }
	__asm { mov byte ptr [g_012c05a0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c05d0[];
extern "C" char g_012c05e0[];
extern "C" char g_012c05e4[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dde620
extern "C" __declspec(naked) void asm_00dde620()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c05e4], 0x10 }
	__asm { jb L_00dde65c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c05d0] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c05d0 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dde65c: }
	__asm { mov dword ptr [g_012c05e4], 0xf }
	__asm { mov dword ptr [g_012c05e0], 0 }
	__asm { mov byte ptr [g_012c05d0], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c05e8[];
extern "C" char g_012c05f8[];
extern "C" char g_012c05fc[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dde680
extern "C" __declspec(naked) void asm_00dde680()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c05fc], 0x10 }
	__asm { jb L_00dde6bc }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c05e8] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c05e8 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dde6bc: }
	__asm { mov dword ptr [g_012c05fc], 0xf }
	__asm { mov dword ptr [g_012c05f8], 0 }
	__asm { mov byte ptr [g_012c05e8], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" char g_012c0600[];
extern "C" char g_012c0610[];
extern "C" char g_012c0614[];
extern "C" void fn_00403a00();
extern "C" void fn_00403a30();
// FUNCTION: ROBLOXSTUDIO 0x00dde6e0
extern "C" __declspec(naked) void asm_00dde6e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { cmp dword ptr [g_012c0614], 0x10 }
	__asm { jb L_00dde71c }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_012c0600] }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push 0x12c0600 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a00 }
	__asm { lea ecx, [ebp - 1] }
	__asm { call fn_00403a30 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { pop esi }
	__asm { L_00dde71c: }
	__asm { mov dword ptr [g_012c0614], 0xf }
	__asm { mov dword ptr [g_012c0610], 0 }
	__asm { mov byte ptr [g_012c0600], 0 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
