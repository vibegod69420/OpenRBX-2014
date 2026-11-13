// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f984[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00559010();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055e860
extern "C" __declspec(naked) void asm_0055e860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe33ca4 }
	__asm { test al, al }
	__asm { je L_0055e8d1 }
	__asm { cmp dword ptr [g_0131f984], 0x29a }
	__asm { je L_0055e8d1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055e8c0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055e8d1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055e8c0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055e8d1: }
	__asm { mov ecx, esi }
	__asm { call fn_00559010 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0055e92b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0055e92b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f9bc[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00559070();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055eb70
extern "C" __declspec(naked) void asm_0055eb70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe33cac }
	__asm { test al, al }
	__asm { je L_0055ebe1 }
	__asm { cmp dword ptr [g_0131f9bc], 0x29a }
	__asm { je L_0055ebe1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055ebd0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055ebe1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055ebd0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055ebe1: }
	__asm { mov ecx, esi }
	__asm { call fn_00559070 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0055ec3b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0055ec3b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f9cc[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_005590d0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055ee80
extern "C" __declspec(naked) void asm_0055ee80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe33cb4 }
	__asm { test al, al }
	__asm { je L_0055eef1 }
	__asm { cmp dword ptr [g_0131f9cc], 0x29a }
	__asm { je L_0055eef1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055eee0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055eef1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055eee0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055eef1: }
	__asm { mov ecx, esi }
	__asm { call fn_005590d0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0055ef4b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0055ef4b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f954[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00559130();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055f1b0
extern "C" __declspec(naked) void asm_0055f1b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe33208 }
	__asm { test al, al }
	__asm { je L_0055f221 }
	__asm { cmp dword ptr [g_0131f954], 0x29a }
	__asm { je L_0055f221 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055f210 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055f221 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055f210: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055f221: }
	__asm { mov ecx, esi }
	__asm { call fn_00559130 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0055f27b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0055f27b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f940[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00559190();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055f4c0
extern "C" __declspec(naked) void asm_0055f4c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe33cbc }
	__asm { test al, al }
	__asm { je L_0055f531 }
	__asm { cmp dword ptr [g_0131f940], 0x29a }
	__asm { je L_0055f531 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055f520 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055f531 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055f520: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055f531: }
	__asm { mov ecx, esi }
	__asm { call fn_00559190 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0055f58b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0055f58b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f9a0[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_005591f0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055f7d0
extern "C" __declspec(naked) void asm_0055f7d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe33cc4 }
	__asm { test al, al }
	__asm { je L_0055f841 }
	__asm { cmp dword ptr [g_0131f9a0], 0x29a }
	__asm { je L_0055f841 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055f830 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055f841 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055f830: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055f841: }
	__asm { mov ecx, esi }
	__asm { call fn_005591f0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0055f89b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0055f89b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f9b0[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00559250();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055fae0
extern "C" __declspec(naked) void asm_0055fae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe564cc }
	__asm { test al, al }
	__asm { je L_0055fb51 }
	__asm { cmp dword ptr [g_0131f9b0], 0x29a }
	__asm { je L_0055fb51 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055fb40 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055fb51 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055fb40: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055fb51: }
	__asm { mov ecx, esi }
	__asm { call fn_00559250 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0055fbab }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0055fbab: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f9c8[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_005592b0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055fdf0
extern "C" __declspec(naked) void asm_0055fdf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe564d4 }
	__asm { test al, al }
	__asm { je L_0055fe61 }
	__asm { cmp dword ptr [g_0131f9c8], 0x29a }
	__asm { je L_0055fe61 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055fe50 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055fe61 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055fe50: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055fe61: }
	__asm { mov ecx, esi }
	__asm { call fn_005592b0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0055febb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0055febb: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f9c4[];
extern "C" void fn_00408d90();
extern "C" void fn_00409860();
extern "C" void fn_00411260();
extern "C" void fn_004112f0();
extern "C" void fn_0055c660();
extern "C" void fn_005600e4();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0055fef0
extern "C" __declspec(naked) void asm_0055fef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [edi], 0xe55024 }
	__asm { call fn_0055c660 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { je L_0055ffcc }
	__asm { call fn_004112f0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call fn_004112f0 }
	__asm { mov ecx, eax }
	__asm { call fn_00408d90 }
	__asm { cmp dword ptr [eax], esi }
	__asm { je L_0055ff7f }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0055ff6a }
	__asm { push 0xf1 }
	__asm { push 0xf1492c }
	__asm { push 0xf13e74 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055ff7f }
	__asm { L_0055ff6a: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xf13de8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055ff7f: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0055ffcc }
	__asm { cmp dword ptr [g_0131f9c4], 0x29a }
	__asm { jne L_0055ffcc }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0055ffbb }
	__asm { push 0xf2 }
	__asm { push 0xf1492c }
	__asm { push 0xf13dd0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0055ffcc }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0055ffbb: }
	__asm { movzx eax, al }
	__asm { push 0xf13d70 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0055ffcc: }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0056001b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0056001b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00411260 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { mov dword ptr [eax], edi }
	__asm { mov dword ptr [g_0131f9c4], 0x29a }
	__asm { je fn_005600e4 }
	__asm { call fn_004112f0 }
	__asm { mov esi, dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { call fn_004112f0 }
	__asm { mov ecx, eax }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f9c4[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00559310();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00560100
extern "C" __declspec(naked) void asm_00560100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe55024 }
	__asm { test al, al }
	__asm { je L_00560171 }
	__asm { cmp dword ptr [g_0131f9c4], 0x29a }
	__asm { je L_00560171 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00560160 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00560171 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00560160: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00560171: }
	__asm { mov ecx, esi }
	__asm { call fn_00559310 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_005601cb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_005601cb: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f988[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00559370();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00560410
extern "C" __declspec(naked) void asm_00560410()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe5503c }
	__asm { test al, al }
	__asm { je L_00560481 }
	__asm { cmp dword ptr [g_0131f988], 0x29a }
	__asm { je L_00560481 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00560470 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00560481 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00560470: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00560481: }
	__asm { mov ecx, esi }
	__asm { call fn_00559370 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_005604db }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_005604db: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f9e4[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_005593d0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00560720
extern "C" __declspec(naked) void asm_00560720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe55064 }
	__asm { test al, al }
	__asm { je L_00560791 }
	__asm { cmp dword ptr [g_0131f9e4], 0x29a }
	__asm { je L_00560791 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00560780 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00560791 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00560780: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00560791: }
	__asm { mov ecx, esi }
	__asm { call fn_005593d0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_005607eb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_005607eb: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f9c0[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00559430();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00560a30
extern "C" __declspec(naked) void asm_00560a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4ff4c }
	__asm { test al, al }
	__asm { je L_00560aa1 }
	__asm { cmp dword ptr [g_0131f9c0], 0x29a }
	__asm { je L_00560aa1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00560a90 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00560aa1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00560a90: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00560aa1: }
	__asm { mov ecx, esi }
	__asm { call fn_00559430 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_00560afb }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00560afb: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f950[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_005594f0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00560d40
extern "C" __declspec(naked) void asm_00560d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe4ff54 }
	__asm { test al, al }
	__asm { je L_00560db1 }
	__asm { cmp dword ptr [g_0131f950], 0x29a }
	__asm { je L_00560db1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00560da0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00560db1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00560da0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00560db1: }
	__asm { mov ecx, esi }
	__asm { call fn_005594f0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_00560e0b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00560e0b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f95c[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_005595b0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00561060
extern "C" __declspec(naked) void asm_00561060()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe50098 }
	__asm { test al, al }
	__asm { je L_005610d1 }
	__asm { cmp dword ptr [g_0131f95c], 0x29a }
	__asm { je L_005610d1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005610c0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005610d1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005610c0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005610d1: }
	__asm { mov ecx, esi }
	__asm { call fn_005595b0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0056112b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0056112b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f9dc[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00559610();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00561370
extern "C" __declspec(naked) void asm_00561370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe5dab4 }
	__asm { test al, al }
	__asm { je L_005613e1 }
	__asm { cmp dword ptr [g_0131f9dc], 0x29a }
	__asm { je L_005613e1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005613d0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005613e1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005613d0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005613e1: }
	__asm { mov ecx, esi }
	__asm { call fn_00559610 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0056143b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0056143b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f9b4[];
extern "C" char g_0131f9e0[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_005596d0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x005616d0
extern "C" __declspec(naked) void asm_005616d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [g_0131f9b4], 0x1031e6c }
	__asm { test al, al }
	__asm { je L_00561742 }
	__asm { cmp dword ptr [g_0131f9e0], 0x29a }
	__asm { je L_00561742 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00561731 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00561742 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00561731: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00561742: }
	__asm { call fn_005596d0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00561799 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00561799: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f97c[];
extern "C" char g_0131f990[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_005598c0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00561a30
extern "C" __declspec(naked) void asm_00561a30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [g_0131f990], 0x103213c }
	__asm { test al, al }
	__asm { je L_00561aa2 }
	__asm { cmp dword ptr [g_0131f97c], 0x29a }
	__asm { je L_00561aa2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00561a91 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00561aa2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00561a91: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00561aa2: }
	__asm { call fn_005598c0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00561af9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00561af9: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f958[];
extern "C" char g_0131f968[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_005599f0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00561d90
extern "C" __declspec(naked) void asm_00561d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [g_0131f958], 0x1031f74 }
	__asm { test al, al }
	__asm { je L_00561e02 }
	__asm { cmp dword ptr [g_0131f968], 0x29a }
	__asm { je L_00561e02 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00561df1 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00561e02 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00561df1: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00561e02: }
	__asm { call fn_005599f0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00561e59 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00561e59: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f970[];
extern "C" char g_0131fd1c[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00559b20();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x005620f0
extern "C" __declspec(naked) void asm_005620f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [g_0131fd1c], 0x1031d4c }
	__asm { test al, al }
	__asm { je L_00562162 }
	__asm { cmp dword ptr [g_0131f970], 0x29a }
	__asm { je L_00562162 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00562151 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00562162 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00562151: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00562162: }
	__asm { call fn_00559b20 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_005621b9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_005621b9: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f96c[];
extern "C" char g_0131f98c[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00559c50();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00562450
extern "C" __declspec(naked) void asm_00562450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [g_0131f98c], 0x10326c4 }
	__asm { test al, al }
	__asm { je L_005624c2 }
	__asm { cmp dword ptr [g_0131f96c], 0x29a }
	__asm { je L_005624c2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005624b1 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005624c2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005624b1: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005624c2: }
	__asm { call fn_00559c50 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00562519 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00562519: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f9d8[];
extern "C" char g_0131fcf4[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00559d80();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x005627b0
extern "C" __declspec(naked) void asm_005627b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [g_0131fcf4], 0x10326f8 }
	__asm { test al, al }
	__asm { je L_00562822 }
	__asm { cmp dword ptr [g_0131f9d8], 0x29a }
	__asm { je L_00562822 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00562811 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00562822 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00562811: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00562822: }
	__asm { call fn_00559d80 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00562879 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00562879: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f978[];
extern "C" char g_0131faf0[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00559eb0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00562b10
extern "C" __declspec(naked) void asm_00562b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [g_0131faf0], 0x10321bc }
	__asm { test al, al }
	__asm { je L_00562b82 }
	__asm { cmp dword ptr [g_0131f978], 0x29a }
	__asm { je L_00562b82 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00562b71 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00562b82 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00562b71: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00562b82: }
	__asm { call fn_00559eb0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00562bd9 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00562bd9: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131f994[];
extern "C" char g_0131fd60[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_0055a0a0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00562e70
extern "C" __declspec(naked) void asm_00562e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [g_0131fd60], 0x10327e8 }
	__asm { test al, al }
	__asm { je L_00562ee2 }
	__asm { cmp dword ptr [g_0131f994], 0x29a }
	__asm { je L_00562ee2 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00562ed1 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00562ee2 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00562ed1: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00562ee2: }
	__asm { call fn_0055a0a0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00562f39 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00562f39: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
// FUNCTION: ROBLOXSTUDIO 0x005640c0
extern "C" __declspec(naked) void asm_005640c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd92834 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0056410b }
	__asm { mov dword ptr [edi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [edi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0056410b: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00564123 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00564123: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea eax, [esi + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 0x14], 0xe18150 }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [edi], 0xe183ac }
	__asm { mov dword ptr [edi + 0x14], 0xe183b4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edi + 0x20], 0xe183c0 }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + edi + 0x1c], 0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x00564310
extern "C" __declspec(naked) void asm_00564310()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd927bc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0056435c }
	__asm { mov dword ptr [edi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [edi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0056435c: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00564374 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00564374: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea eax, [ebx + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi + 0x14], 0xe1815c }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [edi], 0xe18388 }
	__asm { mov dword ptr [edi + 0x14], 0xe18390 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x20], 0xe1839c }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x1c], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10510[];
extern "C" void fn_00564810();
// FUNCTION: ROBLOXSTUDIO 0x005643f0
extern "C" __declspec(naked) void asm_005643f0()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe18388 }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov dword ptr [ecx], 0xe18390 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe1839c }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { lea eax, [edx - 8] }
	__asm { mov dword ptr [edx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe182bc }
	__asm { mov dword ptr [ecx], 0xe1815c }
	__asm { call dword ptr [g_00e10510] }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_0056444e }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_0056444e }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { L_0056444e: }
	__asm { pop esi }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e0ac }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x2c }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_005644b9 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x28] }
	__asm { push eax }
	__asm { call fn_00564810 }
	__asm { test eax, eax }
	__asm { je L_005644b9 }
	__asm { mov ecx, dword ptr [eax + 0x20] }
	__asm { add eax, 0x20 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { add eax, ecx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005644b9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x00564590
extern "C" __declspec(naked) void asm_00564590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd927fc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_005645dc }
	__asm { mov dword ptr [edi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [edi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_005645dc: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_005645f4 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_005645f4: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea eax, [ebx + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi + 0x14], 0xe18150 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [edi], 0xe183ac }
	__asm { mov dword ptr [edi + 0x14], 0xe183b4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x20], 0xe183c0 }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x1c], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10510[];
extern "C" void fn_005648f0();
// FUNCTION: ROBLOXSTUDIO 0x00564670
extern "C" __declspec(naked) void asm_00564670()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov dword ptr [esi], 0xe183ac }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov dword ptr [ecx], 0xe183b4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [eax + esi + 0x20], 0xe183c0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov edx, dword ptr [eax + 4] }
	__asm { lea eax, [edx - 8] }
	__asm { mov dword ptr [edx + esi + 0x1c], eax }
	__asm { mov dword ptr [esi], 0xe182d0 }
	__asm { mov dword ptr [ecx], 0xe18150 }
	__asm { call dword ptr [g_00e10510] }
	__asm { mov dword ptr [esi], 0xe18224 }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_005646ce }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { call eax }
	__asm { test al, al }
	__asm { je L_005646ce }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { L_005646ce: }
	__asm { pop esi }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e0ac }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push 0x2c }
	__asm { mov esi, ecx }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov ecx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00564739 }
	__asm { push 1 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea eax, [esi - 0x28] }
	__asm { push eax }
	__asm { call fn_005648f0 }
	__asm { test eax, eax }
	__asm { je L_00564739 }
	__asm { mov ecx, dword ptr [eax + 0x20] }
	__asm { add eax, 0x20 }
	__asm { mov ecx, dword ptr [ecx + 4] }
	__asm { add eax, ecx }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00564739: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor eax, eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e104f0[];
extern "C" void fn_00411c20();
// FUNCTION: ROBLOXSTUDIO 0x00564810
extern "C" __declspec(naked) void asm_00564810()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd927bc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0056485c }
	__asm { mov dword ptr [edi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [edi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0056485c: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00564874 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00564874: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea eax, [ebx + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi + 0x14], 0xe1815c }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [edi], 0xe18388 }
	__asm { mov dword ptr [edi + 0x14], 0xe18390 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x20], 0xe1839c }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x1c], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
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
// FUNCTION: ROBLOXSTUDIO 0x005648f0
extern "C" __declspec(naked) void asm_005648f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd927fc }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0x10], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { je L_0056493c }
	__asm { mov dword ptr [edi + 0x20], 0xf139e8 }
	__asm { mov dword ptr [edi + 0x28], 0xe1822c }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { L_0056493c: }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], 0xe18224 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edi + 4], ecx }
	__asm { test ecx, ecx }
	__asm { je L_00564954 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0xc] }
	__asm { L_00564954: }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebx + 0xc] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea eax, [ebx + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e104f0] }
	__asm { mov dword ptr [edi + 0x14], 0xe18150 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { mov dword ptr [edi], 0xe183ac }
	__asm { mov dword ptr [edi + 0x14], 0xe183b4 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { push ebx }
	__asm { mov dword ptr [eax + edi + 0x20], 0xe183c0 }
	__asm { mov eax, dword ptr [edi + 0x20] }
	__asm { push edi }
	__asm { mov ecx, dword ptr [eax + 4] }
	__asm { lea eax, [ecx - 8] }
	__asm { mov dword ptr [ecx + edi + 0x1c], eax }
	__asm { call fn_00411c20 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 8 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1022c[];
extern "C" char g_00e1023c[];
extern "C" char g_00e10fc8[];
extern "C" char g_00e10fdc[];
extern "C" char g_00e10fe8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_012bfc3a[];
extern "C" char g_01318fb1[];
extern "C" void fn_00774920();
// FUNCTION: ROBLOXSTUDIO 0x00565d60
extern "C" __declspec(naked) void asm_00565d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd92dbb }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { cmp byte ptr [g_01318fb1], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov eax, ecx }
	__asm { push edi }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { je L_00565e88 }
	__asm { mov esi, dword ptr [eax] }
	__asm { cmp esi, dword ptr [eax + 4] }
	__asm { je L_00565e88 }
	__asm { lea ebx, [eax + 0xc] }
	__asm { L_00565da2: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea ecx, [esp + 0x28] }
	__asm { mov dword ptr [esp + 0x44], 0 }
	__asm { call dword ptr [g_00e10fdc] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x20] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [esp + 0x50], 1 }
	__asm { call dword ptr [g_00e10fe8] }
	__asm { mov byte ptr [esp + 0x44], 2 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0 }
	__asm { mov ebx, dword ptr [ecx + 4] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e10fc8] }
	__asm { mov byte ptr [esp + 0x44], 1 }
	__asm { mov edi, dword ptr [g_00e10ffc] }
	__asm { lea ecx, [esp + 0x18] }
	__asm { add ebx, eax }
	__asm { call edi }
	__asm { lea ecx, [esp + 0x28] }
	__asm { mov byte ptr [esp + 0x44], 0 }
	__asm { call edi }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x44], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov al, byte ptr [g_012bfc3a] }
	__asm { mov edi, dword ptr [esp + 0x10] }
	__asm { test al, al }
	__asm { je L_00565e5f }
	__asm { push edi }
	__asm { movzx eax, al }
	__asm { push 0x1032a84 }
	__asm { push eax }
	__asm { call dword ptr [g_00e1023c] }
	__asm { mov al, byte ptr [g_012bfc3a] }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00565e5f }
	__asm { push ebx }
	__asm { movzx eax, al }
	__asm { push 0x1032a78 }
	__asm { push eax }
	__asm { call dword ptr [g_00e1022c] }
	__asm { add esp, 0xc }
	__asm { L_00565e5f: }
	__asm { push 0 }
	__asm { push ebx }
	__asm { push 0xf12f2d }
	__asm { push edi }
	__asm { push 0x1032aec }
	__asm { call fn_00774920 }
	__asm { mov eax, dword ptr [esp + 0x28] }
	__asm { add esi, 4 }
	__asm { add esp, 0x14 }
	__asm { lea ebx, [eax + 0xc] }
	__asm { cmp esi, dword ptr [eax + 4] }
	__asm { jne L_00565da2 }
	__asm { L_00565e88: }
	__asm { mov ecx, dword ptr [esp + 0x3c] }
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
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131feb8[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_005665f0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00566e70
extern "C" __declspec(naked) void asm_00566e70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe593f4 }
	__asm { test al, al }
	__asm { je L_00566ee1 }
	__asm { cmp dword ptr [g_0131feb8], 0x29a }
	__asm { je L_00566ee1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00566ed0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00566ee1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00566ed0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00566ee1: }
	__asm { mov ecx, esi }
	__asm { call fn_005665f0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_00566f3b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00566f3b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" char g_0131febc[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00566650();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00567180
extern "C" __declspec(naked) void asm_00567180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd70ece }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [esi], 0xe593fc }
	__asm { test al, al }
	__asm { je L_005671f1 }
	__asm { cmp dword ptr [g_0131febc], 0x29a }
	__asm { je L_005671f1 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_005671e0 }
	__asm { push 0xfc }
	__asm { push 0xf1492c }
	__asm { push 0xf14918 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_005671f1 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_005671e0: }
	__asm { movzx eax, al }
	__asm { push 0xf13bd0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_005671f1: }
	__asm { mov ecx, esi }
	__asm { call fn_00566650 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { pop esi }
	__asm { test al, 1 }
	__asm { jne L_0056724b }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0056724b: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { call fn_00410ef0 }
	__asm { push dword ptr [eax + 4] }
	__asm { mov ecx, 0x131a2a8 }
	__asm { push dword ptr [eax] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call fn_004097c0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10cb0[];
extern "C" char g_00e10cb8[];
extern "C" char g_00e10cbc[];
extern "C" char g_00e10cc0[];
extern "C" char g_00e10cc4[];
extern "C" char g_00e10cc8[];
extern "C" char g_00e110c4[];
extern "C" char g_00e110e4[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e12f84[];
extern "C" char g_00e12f98[];
extern "C" char g_00e12f9c[];
extern "C" char g_00e12fe0[];
extern "C" void fn_0047aa20();
// FUNCTION: ROBLOXSTUDIO 0x00568710
extern "C" __declspec(naked) void asm_00568710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd93416 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 0x1032e90 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10cc4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e10cc8] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e10cb8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e10cbc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110c4] }
	__asm { lea edx, [ebp - 0x10] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0047aa20 }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e10cb0] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e110e4] }
	__asm { push 0x1032e64 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e12fe0] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call dword ptr [g_00e12f9c] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e12f84] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e11110] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x40] }
	__asm { call dword ptr [g_00e12f98] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e110e4] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10cc0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10fc0[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e1105c[];
extern "C" char g_00e11110[];
extern "C" char g_00e1191c[];
extern "C" char g_00e11f6c[];
extern "C" char g_00e11f74[];
extern "C" char g_00e11f7c[];
extern "C" char g_00e125b4[];
extern "C" void fn_0056ba60();
extern "C" void fn_0056c120();
// FUNCTION: ROBLOXSTUDIO 0x005693a0
extern "C" __declspec(naked) void asm_005693a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd9313d }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push 2 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call fn_0056ba60 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [ebp + 8] }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e1191c] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e125b4] }
	__asm { push 2 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e10fc0] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push 0x21 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e11f74] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { cmp eax, dword ptr [g_00e1105c] }
	__asm { je L_00569436 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { call dword ptr [g_00e11f6c] }
	__asm { L_00569436: }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x28] }
	__asm { call fn_0056c120 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11f7c] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e10fc8[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e12694[];
extern "C" char g_00e12790[];
extern "C" char g_00e12794[];
extern "C" char g_00e12c8c[];
extern "C" void fn_0056bce0();
// FUNCTION: ROBLOXSTUDIO 0x0056a3a0
extern "C" __declspec(naked) void asm_0056a3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd931fa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { xor ebx, ebx }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { test al, al }
	__asm { je L_0056a3e8 }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { test ecx, ecx }
	__asm { je L_0056a3e8 }
	__asm { call dword ptr [g_00e12790] }
	__asm { mov ecx, dword ptr [esi + 0x44] }
	__asm { push ebx }
	__asm { call dword ptr [g_00e12794] }
	__asm { L_0056a3e8: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov byte ptr [ebp - 0x12], 1 }
	__asm { call dword ptr [g_00e12694] }
	__asm { test eax, eax }
	__asm { je L_0056a426 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 0x21 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ebx, 1 }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { call dword ptr [g_00e10fc8] }
	__asm { mov byte ptr [ebp - 0x11], bl }
	__asm { test eax, eax }
	__asm { je L_0056a42a }
	__asm { L_0056a426: }
	__asm { mov byte ptr [ebp - 0x11], 0 }
	__asm { L_0056a42a: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test bl, 1 }
	__asm { je L_0056a43f }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { L_0056a43f: }
	__asm { movzx ebx, byte ptr [ebp - 0x12] }
	__asm { xor eax, eax }
	__asm { cmp byte ptr [ebp - 0x11], al }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { cmovne ebx, eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12c0058 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { test bl, bl }
	__asm { je L_0056a496 }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0 }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { call fn_0056bce0 }
	__asm { mov edx, dword ptr [eax] }
	__asm { push 0 }
	__asm { mov ecx, eax }
	__asm { call dword ptr [edx + 0x2c] }
	__asm { L_0056a496: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10ef8[];
extern "C" char g_00e11be4[];
extern "C" char g_00e12980[];
extern "C" char g_00e12c8c[];
extern "C" void fn_00567cb0();
// FUNCTION: ROBLOXSTUDIO 0x0056b9d0
extern "C" __declspec(naked) void asm_0056b9d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { test al, al }
	__asm { je L_0056ba22 }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { movzx eax, word ptr [edi + 8] }
	__asm { cmp eax, 2 }
	__asm { jne L_0056ba29 }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { call dword ptr [g_00e12980] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11be4] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { push 0 }
	__asm { mov ecx, dword ptr [eax + 0x10] }
	__asm { lea eax, [edi + 0x18] }
	__asm { add ecx, 0x10 }
	__asm { push eax }
	__asm { call dword ptr [g_00e10ef8] }
	__asm { test al, al }
	__asm { L_0056ba18: }
	__asm { jne L_0056ba21 }
	__asm { mov ecx, esi }
	__asm { call fn_00567cb0 }
	__asm { L_0056ba21: }
	__asm { pop edi }
	__asm { L_0056ba22: }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0056ba29: }
	__asm { cmp eax, 6 }
	__asm { je L_0056ba3d }
	__asm { cmp eax, 5 }
	__asm { je L_0056ba3d }
	__asm { cmp eax, 0x1f }
	__asm { je L_0056ba3d }
	__asm { cmp eax, 0x7a }
	__asm { jmp L_0056ba18 }
	__asm { L_0056ba3d: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { call dword ptr [g_00e12980] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e11be4] }
	__asm { pop edi }
	__asm { xor al, al }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" char g_00e11024[];
extern "C" char g_00e11928[];
extern "C" void fn_0056c2d0();
extern "C" void fn_0056c4b0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0056c120
extern "C" __declspec(naked) void asm_0056c120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd931ac }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push ebx }
	__asm { cmp dword ptr [eax], 1 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { je L_0056c1c2 }
	__asm { sub esp, 8 }
	__asm { call fn_0056c2d0 }
	__asm { push 0x18 }
	__asm { mov edi, eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0056c19a }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11928] }
	__asm { mov dword ptr [esi], 0x10330bc }
	__asm { mov dword ptr [edi], esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0056c19a: }
	__asm { xor esi, esi }
	__asm { mov dword ptr [edi], esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { push 0 }
	__asm { mov eax, dword ptr [eax] }
	__asm { push 0 }
	__asm { dec dword ptr [eax + 0xc] }
	__asm { call fn_00cf67ec }
	__asm { L_0056c1c2: }
	__asm { call dword ptr [g_00e11024] }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 4 }
	__asm { push eax }
	__asm { call fn_0056c4b0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10cec[];
extern "C" void fn_0043ed80();
extern "C" void fn_0044dc00();
// FUNCTION: ROBLOXSTUDIO 0x0056c1f0
extern "C" __declspec(naked) void asm_0056c1f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7e4f8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { cmp dword ptr [esi], 0 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { jle L_0056c226 }
	__asm { push 0x101173c }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10cec] }
	__asm { L_0056c226: }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [eax + 0xc] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0056c23a }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0056c23a: }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10cec] }
	__asm { push 0x1009354 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10cec] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add eax, 4 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0056c25d }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0056c25d: }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10cec] }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov ecx, dword ptr [ebx + 8] }
	__asm { call fn_0043ed80 }
	__asm { test al, al }
	__asm { je L_0056c2b8 }
	__asm { push 0x10131b8 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10cec] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 8] }
	__asm { call fn_0044dc00 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_0056c29d }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0056c29d: }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10cec] }
	__asm { cmp dword ptr [ebp - 0x14], 0x10 }
	__asm { jb L_0056c2b8 }
	__asm { push dword ptr [ebp - 0x28] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0056c2b8: }
	__asm { inc dword ptr [esi] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" char g_00e11928[];
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0056c660
extern "C" __declspec(naked) void asm_0056c660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd9342c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { L_0056c68e: }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { je L_0056c703 }
	__asm { push 0x18 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0056c6cc }
	__asm { push dword ptr [ebx] }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11928] }
	__asm { mov dword ptr [esi], 0x10330bc }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { add edi, 4 }
	__asm { add ebx, 4 }
	__asm { jmp L_0056c68e }
	__asm { L_0056c6cc: }
	__asm { xor esi, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { add edi, 4 }
	__asm { add ebx, 4 }
	__asm { jmp L_0056c68e }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp esi, edi }
	__asm { je L_0056c6fa }
	__asm { L_0056c6e6: }
	__asm { mov ecx, dword ptr [esi - 4] }
	__asm { sub esi, 4 }
	__asm { test ecx, ecx }
	__asm { je L_0056c6f6 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0056c6f6: }
	__asm { cmp esi, edi }
	__asm { jne L_0056c6e6 }
	__asm { L_0056c6fa: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_0056c703: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e11928[];
extern "C" char g_00e11940[];
extern "C" void fn_0056d230();
// FUNCTION: ROBLOXSTUDIO 0x0056d160
extern "C" __declspec(naked) void asm_0056d160()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd92e79 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov ebx, edx }
	__asm { lea esi, [edi*2 + 2] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { cmp esi, ebx }
	__asm { jge L_0056d1eb }
	__asm { L_0056d190: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ebp - 0x14], esp }
	__asm { push dword ptr [eax + esi*4 - 4] }
	__asm { call dword ptr [g_00e11928] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0x18 }
	__asm { mov ecx, esp }
	__asm { push dword ptr [eax + esi*4] }
	__asm { call dword ptr [g_00e11928] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [ebp + 0x10] }
	__asm { add esp, 0x30 }
	__asm { test al, al }
	__asm { je L_0056d1cf }
	__asm { dec esi }
	__asm { L_0056d1cf: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [eax + esi*4] }
	__asm { mov ecx, dword ptr [eax + edi*4] }
	__asm { call dword ptr [g_00e11940] }
	__asm { mov edi, esi }
	__asm { lea esi, [esi*2 + 2] }
	__asm { cmp esi, ebx }
	__asm { jl L_0056d190 }
	__asm { L_0056d1eb: }
	__asm { jne L_0056d200 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [eax + ebx*4 - 4] }
	__asm { mov ecx, dword ptr [eax + edi*4] }
	__asm { call dword ptr [g_00e11940] }
	__asm { lea edi, [ebx - 1] }
	__asm { L_0056d200: }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov ecx, edi }
	__asm { call fn_0056d230 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_0056f6f0();
// FUNCTION: ROBLOXSTUDIO 0x0056f1e0
extern "C" __declspec(naked) void asm_0056f1e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd93bba }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11108] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_0056f6f0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [edi], 0x56e840 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_0056f800();
// FUNCTION: ROBLOXSTUDIO 0x0056f2d0
extern "C" __declspec(naked) void asm_0056f2d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd93b20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 4] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { call fn_0056f800 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_0056f650();
// FUNCTION: ROBLOXSTUDIO 0x0056f400
extern "C" __declspec(naked) void asm_0056f400()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd93bfa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ecx }
	__asm { mov edx, esp }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { push ecx }
	__asm { mov dword ptr [edx], eax }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_0056f650 }
	__asm { mov edi, eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { push edi }
	__asm { lea ecx, [ebx + 4] }
	__asm { mov dword ptr [ebx], 0x56e150 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
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

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_0056f6f0();
// FUNCTION: ROBLOXSTUDIO 0x0056f4a0
extern "C" __declspec(naked) void asm_0056f4a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd93bba }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11108] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { call fn_0056f6f0 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x20], eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { push eax }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [edi], 0x56daf0 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp - 0x28] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp - 0x20] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_0056f960();
// FUNCTION: ROBLOXSTUDIO 0x0056f590
extern "C" __declspec(naked) void asm_0056f590()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd93b20 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { sub esp, 0x14 }
	__asm { mov ecx, esp }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [ecx], eax }
	__asm { lea esi, [ecx + 4] }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { call fn_0056f960 }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e101fc[];
extern "C" char g_00e10200[];
extern "C" char g_00e10598[];
extern "C" char g_00e11108[];
extern "C" char g_00e131ac[];
extern "C" void fn_0045f760();
extern "C" void fn_0045fe60();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0056f890
extern "C" __declspec(naked) void asm_0056f890()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd93c32 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x1c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x48 }
	__asm { push 0 }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10200] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_0056f8f6 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { mov dword ptr [ebp - 0x28], 0xe1815c }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_0045fe60 }
	__asm { L_0056f8f6: }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e131ac] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [esi], 0x1033848 }
	__asm { mov eax, dword ptr [edi] }
	__asm { add edi, 4 }
	__asm { push edi }
	__asm { lea ecx, [esi + 0x40] }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x44], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_0045f760 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10524[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x0056fb90
extern "C" __declspec(naked) void asm_0056fb90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd93d11 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, edx }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test ebx, ebx }
	__asm { je L_0056fc1a }
	__asm { cmp ebx, 1 }
	__asm { je L_0056fc1a }
	__asm { cmp ebx, 2 }
	__asm { jne L_0056fbd1 }
	__asm { lea ecx, [edi + 4] }
	__asm { jmp L_0056fc5d }
	__asm { L_0056fbd1: }
	__asm { cmp ebx, 3 }
	__asm { jne L_0056fbfd }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push 0x12d70d0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, esi }
	__asm { mov dword ptr [edi], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0056fbfd: }
	__asm { mov dword ptr [edi], 0x12d70d0 }
	__asm { mov word ptr [edi + 4], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0056fc1a: }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0056fc4e }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esi, 4 }
	__asm { push esi }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [edi], eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { L_0056fc4e: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp ebx, 1 }
	__asm { jne L_0056fc63 }
	__asm { lea ecx, [esi + 4] }
	__asm { L_0056fc5d: }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0056fc63: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10524[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x0056fc80
extern "C" __declspec(naked) void asm_0056fc80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd93d11 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, edx }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { test ebx, ebx }
	__asm { je L_0056fd0a }
	__asm { cmp ebx, 1 }
	__asm { je L_0056fd0a }
	__asm { cmp ebx, 2 }
	__asm { jne L_0056fcc1 }
	__asm { lea ecx, [edi + 4] }
	__asm { jmp L_0056fd4d }
	__asm { L_0056fcc1: }
	__asm { cmp ebx, 3 }
	__asm { jne L_0056fced }
	__asm { mov ecx, dword ptr [edi] }
	__asm { push 0x12d71a0 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, esi }
	__asm { mov dword ptr [edi], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0056fced: }
	__asm { mov dword ptr [edi], 0x12d71a0 }
	__asm { mov word ptr [edi + 4], 0 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0056fd0a: }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_0056fd3e }
	__asm { mov eax, dword ptr [esi] }
	__asm { add esi, 4 }
	__asm { push esi }
	__asm { lea ecx, [edi + 4] }
	__asm { mov dword ptr [edi], eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov esi, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [edi + 0x10], eax }
	__asm { L_0056fd3e: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp ebx, 1 }
	__asm { jne L_0056fd53 }
	__asm { lea ecx, [esi + 4] }
	__asm { L_0056fd4d: }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0056fd53: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x0056fe00
extern "C" __declspec(naked) void asm_0056fe00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd93b51 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0056fe9c }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov esi, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_0056fe8b }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { lea ecx, [esi + 4] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [esi + 0xc], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [esi + 0x10], eax }
	__asm { L_0056fe8b: }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov bl, 1 }
	__asm { jmp L_0056fe9e }
	__asm { L_0056fe9c: }
	__asm { xor bl, bl }
	__asm { L_0056fe9e: }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x1c }
}

extern "C" char g_00e10508[];
extern "C" void fn_004c92a0();
extern "C" void fn_0097ad20();
extern "C" void fn_009f1450();
// FUNCTION: ROBLOXSTUDIO 0x00572c00
extern "C" __declspec(naked) void asm_00572c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94658 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp byte ptr [edi + 0xb8], 0 }
	__asm { je L_00572ceb }
	__asm { mov ecx, dword ptr [edi + 0xc4] }
	__asm { push esi }
	__asm { test ecx, ecx }
	__asm { je L_00572cc9 }
	__asm { call fn_004c92a0 }
	__asm { test eax, eax }
	__asm { je L_00572cc9 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { call fn_0097ad20 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [ebp - 0x1c], 0 }
	__asm { je L_00572c9e }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 0 }
	__asm { lea edx, [ebp + 0xf] }
	__asm { push edx }
	__asm { lea edx, [ebp - 0x2c] }
	__asm { push edx }
	__asm { push esi }
	__asm { call dword ptr [eax + 8] }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00572c8a }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00572c8a: }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00572c9e: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { jb L_00572cb7 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00572cb7: }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { L_00572cc9: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_009f1450 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_00572ceb: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_004c92a0();
extern "C" void fn_005731c0();
// FUNCTION: ROBLOXSTUDIO 0x00572d10
extern "C" __declspec(naked) void asm_00572d10()
{
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov ecx, dword ptr [esi + 0xc4] }
	__asm { test ecx, ecx }
	__asm { je L_00572d34 }
	__asm { call fn_004c92a0 }
	__asm { test eax, eax }
	__asm { je L_00572d34 }
	__asm { mov al, byte ptr [eax + 0x19b] }
	__asm { test al, al }
	__asm { jne L_00572dcd }
	__asm { L_00572d34: }
	__asm { mov ecx, dword ptr [esi + 0xc4] }
	__asm { test ecx, ecx }
	__asm { je L_00572d51 }
	__asm { call fn_004c92a0 }
	__asm { test eax, eax }
	__asm { je L_00572d51 }
	__asm { mov al, byte ptr [eax + 0x197] }
	__asm { test al, al }
	__asm { jne L_00572dcd }
	__asm { L_00572d51: }
	__asm { mov ecx, dword ptr [esi + 0xc4] }
	__asm { test ecx, ecx }
	__asm { je L_00572d6e }
	__asm { call fn_004c92a0 }
	__asm { test eax, eax }
	__asm { je L_00572d6e }
	__asm { mov al, byte ptr [eax + 0x185] }
	__asm { test al, al }
	__asm { jne L_00572dcd }
	__asm { L_00572d6e: }
	__asm { mov ecx, dword ptr [esi + 0xc4] }
	__asm { test ecx, ecx }
	__asm { je L_00572d8b }
	__asm { call fn_004c92a0 }
	__asm { test eax, eax }
	__asm { je L_00572d8b }
	__asm { mov al, byte ptr [eax + 0x188] }
	__asm { test al, al }
	__asm { jne L_00572dcd }
	__asm { L_00572d8b: }
	__asm { push 0x111 }
	__asm { mov ecx, esi }
	__asm { call fn_005731c0 }
	__asm { test al, al }
	__asm { jne L_00572dcd }
	__asm { push 0x112 }
	__asm { mov ecx, esi }
	__asm { call fn_005731c0 }
	__asm { test al, al }
	__asm { jne L_00572dcd }
	__asm { push 0x114 }
	__asm { mov ecx, esi }
	__asm { call fn_005731c0 }
	__asm { test al, al }
	__asm { jne L_00572dcd }
	__asm { push 0x113 }
	__asm { mov ecx, esi }
	__asm { call fn_005731c0 }
	__asm { test al, al }
	__asm { jne L_00572dcd }
	__asm { pop esi }
	__asm { ret }
	__asm { L_00572dcd: }
	__asm { mov al, 1 }
	__asm { pop esi }
	__asm { ret }
}

extern "C" void fn_00573ed0();
extern "C" void fn_006c53e0();
extern "C" void fn_006c5500();
// FUNCTION: ROBLOXSTUDIO 0x005735a0
extern "C" __declspec(naked) void asm_005735a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xffffffc0 }
	__asm { sub esp, 0x3c }
	__asm { lea eax, [esp + 0x2c] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push eax }
	__asm { cmp byte ptr [esi + 8], 0 }
	__asm { je L_005735e8 }
	__asm { call fn_006c53e0 }
	__asm { add esp, 4 }
	__asm { lea eax, [esp + 0x30] }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [esp + 0x40] }
	__asm { push eax }
	__asm { call fn_006c5500 }
	__asm { mov eax, dword ptr [esp + 0x3c] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [esp + 0x40] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { add esp, 0xc }
	__asm { mov byte ptr [esi + 8], 0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005735e8: }
	__asm { call fn_006c53e0 }
	__asm { add esp, 4 }
	__asm { lea eax, [esp + 0x30] }
	__asm { push esi }
	__asm { push eax }
	__asm { lea eax, [esp + 0x40] }
	__asm { push eax }
	__asm { call fn_006c5500 }
	__asm { fld qword ptr [esp + 0x44] }
	__asm { mov eax, dword ptr [esp + 0x3c] }
	__asm { fstp qword ptr [esp + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [esp + 0x40] }
	__asm { add esp, 4 }
	__asm { lea ecx, [esi + 0x10] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { call fn_00573ed0 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10530[];
extern "C" void fn_00421060();
extern "C" void fn_00421110();
extern "C" void fn_00573950();
// FUNCTION: ROBLOXSTUDIO 0x00573630
extern "C" __declspec(naked) void asm_00573630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd91281 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x24 }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10530] }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0057367b }
	__asm { mov ecx, esi }
	__asm { call fn_00421110 }
	__asm { L_0057367b: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { add esi, 8 }
	__asm { je L_005736c2 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 8], 0x1033bbc }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi], 0x1033bd4 }
	__asm { mov dword ptr [esi + 8], 0x1033bcc }
	__asm { mov dword ptr [esi + 0x10], edi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [esi + 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [esi + 0x18], eax }
	__asm { mov dword ptr [esi], 0x1033be4 }
	__asm { mov dword ptr [esi + 8], 0x1033bc4 }
	__asm { jmp L_005736c4 }
	__asm { L_005736c2: }
	__asm { xor esi, esi }
	__asm { L_005736c4: }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_00573950 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], esi }
	__asm { test esi, esi }
	__asm { je L_005736e1 }
	__asm { lea ecx, [esi + 5] }
	__asm { push ecx }
	__asm { call fn_00421060 }
	__asm { add esp, 4 }
	__asm { L_005736e1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00564b80();
extern "C" void fn_009cccc0();
// FUNCTION: ROBLOXSTUDIO 0x00573700
extern "C" __declspec(naked) void asm_00573700()
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
	__asm { push 0x94 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0057375e }
	__asm { push dword ptr [ebp + 0x1c] }
	__asm { mov ecx, eax }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_009cccc0 }
	__asm { mov edi, eax }
	__asm { jmp L_00573760 }
	__asm { L_0057375e: }
	__asm { xor edi, edi }
	__asm { L_00573760: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [esi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [esi], edi }
	__asm { call fn_00564b80 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00573791 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00573791 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0040e0a0 }
	__asm { L_00573791: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00564b80();
extern "C" void fn_009ccab0();
// FUNCTION: ROBLOXSTUDIO 0x005737b0
extern "C" __declspec(naked) void asm_005737b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd77f66 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { push 0x94 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x1c], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edi, edi }
	__asm { je L_00573837 }
	__asm { mov ecx, dword ptr [ebp + 0x18] }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { sub esp, 0xc }
	__asm { mov edx, esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [edx], ecx }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { mov dword ptr [edx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { push 9 }
	__asm { mov ecx, edi }
	__asm { call fn_009ccab0 }
	__asm { mov edi, eax }
	__asm { jmp L_00573839 }
	__asm { L_00573837: }
	__asm { xor edi, edi }
	__asm { L_00573839: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [esi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [esi], edi }
	__asm { call fn_00564b80 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00573867 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00573867 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0040e0a0 }
	__asm { L_00573867: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10504[];
extern "C" void fn_0040e0a0();
extern "C" void fn_00564b80();
extern "C" void fn_009ccbb0();
// FUNCTION: ROBLOXSTUDIO 0x00573880
extern "C" __declspec(naked) void asm_00573880()
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
	__asm { push 0x94 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [g_00e10504] }
	__asm { mov edx, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test edx, edx }
	__asm { je L_00573906 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { mov eax, dword ptr [ebp + 0x20] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x24] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x28] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov ecx, esp }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0x1c] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { mov ecx, edx }
	__asm { call fn_009ccbb0 }
	__asm { mov edi, eax }
	__asm { jmp L_00573908 }
	__asm { L_00573906: }
	__asm { xor edi, edi }
	__asm { L_00573908: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [esi + 4] }
	__asm { push edi }
	__asm { mov dword ptr [esi], edi }
	__asm { call fn_00564b80 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test edi, edi }
	__asm { je L_00573939 }
	__asm { lea ecx, [edi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00573939 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_0040e0a0 }
	__asm { L_00573939: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004b0770();
extern "C" void fn_004b1fc0();
extern "C" void fn_004b2110();
extern "C" void fn_004b3780();
extern "C" void fn_00573be0();
// FUNCTION: ROBLOXSTUDIO 0x00573b10
extern "C" __declspec(naked) void asm_00573b10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94618 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [eax] }
	__asm { push edi }
	__asm { push ecx }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov edi, ecx }
	__asm { call fn_004b2110 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { jne L_00573bc0 }
	__asm { lea eax, [edi + 3] }
	__asm { test eax, eax }
	__asm { je L_00573b51 }
	__asm { inc eax }
	__asm { jmp L_00573b53 }
	__asm { L_00573b51: }
	__asm { xor eax, eax }
	__asm { L_00573b53: }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov word ptr [ebp - 0x10], 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004b3780 }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { test eax, eax }
	__asm { je L_00573b7b }
	__asm { mov dword ptr [eax], esi }
	__asm { L_00573b7b: }
	__asm { add eax, 4 }
	__asm { je L_00573b8d }
	__asm { mov dword ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { L_00573b8d: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { inc eax }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 0xf], 1 }
	__asm { call fn_00573be0 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004b0770 }
	__asm { mov esi, dword ptr [eax] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004b1fc0 }
	__asm { mov eax, esi }
	__asm { L_00573bc0: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e1307c[];
extern "C" void fn_004038a0();
extern "C" void fn_00986a00();
// FUNCTION: ROBLOXSTUDIO 0x005744b0
extern "C" __declspec(naked) void asm_005744b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd947f1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov edi, ecx }
	__asm { mov byte ptr [esi], 0 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 0x14], 1 }
	__asm { jb L_00574503 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00574503: }
	__asm { push eax }
	__asm { movzx eax, word ptr [edi + 2] }
	__asm { push eax }
	__asm { movzx eax, word ptr [edi] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push 0x1033c30 }
	__asm { push eax }
	__asm { call fn_00986a00 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { cmovae eax, dword ptr [ebp - 0x30] }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { call dword ptr [g_00e1307c] }
	__asm { test eax, eax }
	__asm { je L_00574577 }
	__asm { mov edx, dword ptr [ebp - 0x10] }
	__asm { cmp byte ptr [edx], 0 }
	__asm { jne L_00574560 }
	__asm { xor ecx, ecx }
	__asm { jmp L_0057456e }
	__asm { L_00574560: }
	__asm { mov ecx, edx }
	__asm { lea edi, [ecx + 1] }
	__asm { L_00574565: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_00574565 }
	__asm { sub ecx, edi }
	__asm { L_0057456e: }
	__asm { push ecx }
	__asm { push edx }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { L_00574577: }
	__asm { cmp dword ptr [ebp - 0x1c], 0x10 }
	__asm { jb L_00574589 }
	__asm { push dword ptr [ebp - 0x30] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00574589: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00403540();
extern "C" void fn_00574720();
extern "C" void fn_00574bc0();
extern "C" void fn_00574ce0();
// FUNCTION: ROBLOXSTUDIO 0x00574630
extern "C" __declspec(naked) void asm_00574630()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd94830 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x6c }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ecx + 4] }
	__asm { lea edi, [ecx + 8] }
	__asm { push dword ptr [ecx + 4] }
	__asm { mov dword ptr [esp + 0x10], 0 }
	__asm { sub esp, 0x3c }
	__asm { mov esi, esp }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esp + 0x5c], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { push -1 }
	__asm { mov dword ptr [esp + 0xc4], 0 }
	__asm { push 0 }
	__asm { lea eax, [edi + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { movzx eax, byte ptr [edi + 0x30] }
	__asm { mov byte ptr [esi + 0x30], al }
	__asm { movzx eax, byte ptr [edi + 0x31] }
	__asm { mov byte ptr [esi + 0x31], al }
	__asm { mov eax, dword ptr [edi + 0x34] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { movzx eax, byte ptr [edi + 0x38] }
	__asm { lea ecx, [esp + 0x54] }
	__asm { mov byte ptr [esi + 0x38], al }
	__asm { mov dword ptr [esp + 0xc0], 0xffffffff }
	__asm { call fn_00574bc0 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x80], 1 }
	__asm { call fn_00574720 }
	__asm { lea ecx, [esp + 0x10] }
	__asm { call fn_00574ce0 }
	__asm { mov ecx, dword ptr [esp + 0x74] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00574720
extern "C" __declspec(naked) void asm_00574720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94790 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [edi + 0x18] }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { movzx eax, byte ptr [esi + 0x30] }
	__asm { mov byte ptr [edi + 0x30], al }
	__asm { movzx eax, byte ptr [esi + 0x31] }
	__asm { mov byte ptr [edi + 0x31], al }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { movzx eax, byte ptr [esi + 0x38] }
	__asm { mov byte ptr [edi + 0x38], al }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { mov dword ptr [edi + 0x3c], eax }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { mov dword ptr [edi + 0x40], eax }
	__asm { movzx eax, byte ptr [esi + 0x44] }
	__asm { mov byte ptr [edi + 0x44], al }
	__asm { lea ecx, [edi + 0x48] }
	__asm { push -1 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x48] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_004034a0();
extern "C" void fn_00412a30();
// FUNCTION: ROBLOXSTUDIO 0x00574850
extern "C" __declspec(naked) void asm_00574850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp esi, edx }
	__asm { jne L_005748a5 }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_0057486b }
	__asm { mov edx, dword ptr [edi] }
	__asm { jmp L_0057486d }
	__asm { L_0057486b: }
	__asm { mov edx, edi }
	__asm { L_0057486d: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_0057487b }
	__asm { xor ecx, ecx }
	__asm { jmp L_0057487d }
	__asm { L_0057487b: }
	__asm { sub ecx, eax }
	__asm { L_0057487d: }
	__asm { test eax, eax }
	__asm { jne L_00574892 }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004034a0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_00574892: }
	__asm { push ecx }
	__asm { sub eax, edx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_004034a0 }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
	__asm { L_005748a5: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { push ebx }
	__asm { jb L_005748b0 }
	__asm { mov ebx, dword ptr [edi] }
	__asm { jmp L_005748b2 }
	__asm { L_005748b0: }
	__asm { mov ebx, edi }
	__asm { L_005748b2: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test ecx, ecx }
	__asm { jne L_005748c0 }
	__asm { xor ecx, ecx }
	__asm { jmp L_005748c2 }
	__asm { L_005748c0: }
	__asm { sub ecx, eax }
	__asm { L_005748c2: }
	__asm { test eax, eax }
	__asm { je L_005748c8 }
	__asm { sub eax, ebx }
	__asm { L_005748c8: }
	__asm { sub edx, esi }
	__asm { push edx }
	__asm { push esi }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00412a30 }
	__asm { pop ebx }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403540();
extern "C" void fn_005748e0();
// FUNCTION: ROBLOXSTUDIO 0x00574bc0
extern "C" __declspec(naked) void asm_00574bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd947c3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [esi + 0x18] }
	__asm { push -1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push 0 }
	__asm { lea eax, [ebp + 0x20] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { mov al, byte ptr [ebp + 0x38] }
	__asm { mov byte ptr [esi + 0x30], al }
	__asm { mov al, byte ptr [ebp + 0x39] }
	__asm { mov byte ptr [esi + 0x31], al }
	__asm { mov eax, dword ptr [ebp + 0x3c] }
	__asm { mov dword ptr [esi + 0x34], eax }
	__asm { mov al, byte ptr [ebp + 0x40] }
	__asm { mov byte ptr [esi + 0x38], al }
	__asm { mov eax, dword ptr [ebp + 0x44] }
	__asm { lea ecx, [esi + 0x3c] }
	__asm { lea edx, [esi + 0x48] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov byte ptr [esi + 0x44], 0 }
	__asm { mov dword ptr [edx + 0x14], 0xf }
	__asm { mov dword ptr [edx + 0x10], 0 }
	__asm { mov byte ptr [edx], 0 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { cmp byte ptr [esi + 0x44], 0 }
	__asm { jne L_00574c90 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { cmp eax, dword ptr [esi + 0x40] }
	__asm { je L_00574c8b }
	__asm { push edx }
	__asm { push dword ptr [esi + 0x40] }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { call fn_005748e0 }
	__asm { jmp L_00574c8d }
	__asm { L_00574c8b: }
	__asm { xor al, al }
	__asm { L_00574c8d: }
	__asm { mov byte ptr [esi + 0x44], al }
	__asm { L_00574c90: }
	__asm { cmp dword ptr [ebp + 0x34], 0x10 }
	__asm { jb L_00574ca2 }
	__asm { push dword ptr [ebp + 0x20] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00574ca2: }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { mov dword ptr [ebp + 0x34], 0xf }
	__asm { mov dword ptr [ebp + 0x30], 0 }
	__asm { mov byte ptr [ebp + 0x20], 0 }
	__asm { jb L_00574cc6 }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_00574cc6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x44 }
}

extern "C" void fn_00403540();
// FUNCTION: ROBLOXSTUDIO 0x00574ee0
extern "C" __declspec(naked) void asm_00574ee0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd94768 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { jb L_00574f0a }
	__asm { mov edx, dword ptr [eax] }
	__asm { jmp L_00574f0c }
	__asm { L_00574f0a: }
	__asm { mov edx, eax }
	__asm { L_00574f0c: }
	__asm { mov dword ptr [ebx], edx }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { jb L_00574f18 }
	__asm { mov ecx, dword ptr [eax] }
	__asm { jmp L_00574f1a }
	__asm { L_00574f18: }
	__asm { mov ecx, eax }
	__asm { L_00574f1a: }
	__asm { mov eax, dword ptr [eax + 0x10] }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { lea edi, [ebx + 8] }
	__asm { push -1 }
	__asm { add eax, ecx }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { lea ecx, [edi + 0x18] }
	__asm { push -1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push 0 }
	__asm { lea eax, [esi + 0x18] }
	__asm { mov dword ptr [ecx + 0x14], 0xf }
	__asm { mov dword ptr [ecx + 0x10], 0 }
	__asm { push eax }
	__asm { mov byte ptr [ecx], 0 }
	__asm { call fn_00403540 }
	__asm { movzx eax, byte ptr [esi + 0x30] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [edi + 0x30], al }
	__asm { movzx eax, byte ptr [esi + 0x31] }
	__asm { mov byte ptr [edi + 0x31], al }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { mov dword ptr [edi + 0x34], eax }
	__asm { movzx eax, byte ptr [esi + 0x38] }
	__asm { mov byte ptr [edi + 0x38], al }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov eax, ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

// FUNCTION: ROBLOXSTUDIO 0x00574fa0
extern "C" __declspec(naked) void asm_00574fa0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd948a3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [esi + 0x40] }
	__asm { test eax, eax }
	__asm { je L_00574fed }
	__asm { test al, 1 }
	__asm { jne L_00574fe6 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x48] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00574fe6 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00574fe6: }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { L_00574fed: }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { test eax, eax }
	__asm { je L_00575018 }
	__asm { test al, 1 }
	__asm { jne L_00575011 }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 0x28] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00575011 }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00575011: }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { L_00575018: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [esi] }
	__asm { test eax, eax }
	__asm { je L_00575044 }
	__asm { test al, 1 }
	__asm { jne L_0057503e }
	__asm { and eax, 0xfffffffe }
	__asm { lea ecx, [esi + 8] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0057503e }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0057503e: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_00575044: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040c260();
extern "C" void fn_004ade70();
// FUNCTION: ROBLOXSTUDIO 0x00575580
extern "C" __declspec(naked) void asm_00575580()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94848 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_005755eb }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, 0x1033e40 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { jmp L_005755f2 }
	__asm { L_005755eb: }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { L_005755f2: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004ade70 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { test eax, eax }
	__asm { je L_00575629 }
	__asm { test al, 1 }
	__asm { jne L_00575629 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00575629 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00575629: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0040c260();
extern "C" void fn_004ade70();
// FUNCTION: ROBLOXSTUDIO 0x00575640
extern "C" __declspec(naked) void asm_00575640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94848 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x38 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_005756ab }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x34], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, 0x1033e38 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [ebp - 0x40], eax }
	__asm { jmp L_005756b2 }
	__asm { L_005756ab: }
	__asm { mov dword ptr [ebp - 0x40], 0 }
	__asm { L_005756b2: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x40] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004ade70 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x40] }
	__asm { test eax, eax }
	__asm { je L_005756e9 }
	__asm { test al, 1 }
	__asm { jne L_005756e9 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_005756e9 }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_005756e9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0040c260();
extern "C" void fn_004adc90();
// FUNCTION: ROBLOXSTUDIO 0x00575700
extern "C" __declspec(naked) void asm_00575700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd948d8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov esi, ecx }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_00575753 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 0x30], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x2c], eax }
	__asm { mov eax, 0x1033e30 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [ebp - 0x38], eax }
	__asm { jmp L_0057575a }
	__asm { L_00575753: }
	__asm { mov dword ptr [ebp - 0x38], 0 }
	__asm { L_0057575a: }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004adc90 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x38] }
	__asm { test eax, eax }
	__asm { je L_00575791 }
	__asm { test al, 1 }
	__asm { jne L_00575791 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00575791 }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00575791: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10ffc[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e12eec[];
extern "C" char g_00e12ef0[];
extern "C" char g_00e12efc[];
extern "C" char g_00e12f08[];
// FUNCTION: ROBLOXSTUDIO 0x00575ec0
extern "C" __declspec(naked) void asm_00575ec0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd949d2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push 0x102ced8 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx + 0x28] }
	__asm { mov ecx, dword ptr [ebx + 0x1c] }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12ef0] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12eec] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12f08] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { push 0x10341f0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [ebx + 0x1c] }
	__asm { push eax }
	__asm { call dword ptr [g_00e12ef0] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12eec] }
	__asm { mov ecx, eax }
	__asm { call dword ptr [g_00e12efc] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10ff8[];
extern "C" char g_00e11030[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11ec0[];
extern "C" void fn_00515070();
extern "C" void fn_00575b60();
// FUNCTION: ROBLOXSTUDIO 0x00575fe0
extern "C" __declspec(naked) void asm_00575fe0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94913 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov byte ptr [ebp - 0x10], 0x20 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [ebp - 0xe] }
	__asm { mov dword ptr [ebp - 0x20], edi }
	__asm { call dword ptr [g_00e11030] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call fn_00515070 }
	__asm { mov esi, eax }
	__asm { push 0x103420c }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea ecx, [ebp - 0xe] }
	__asm { push ecx }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10ff8] }
	__asm { push 0x258 }
	__asm { push 0x320 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00575b60 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call dword ptr [g_00e11110] }
	__asm { push 1 }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [edi], 0x1034244 }
	__asm { mov dword ptr [edi + 8], 0x1034224 }
	__asm { call dword ptr [g_00e11ec0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10fb8[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x00576a40
extern "C" __declspec(naked) void asm_00576a40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd95e49 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esp + 4], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov esi, ecx }
	__asm { jb L_00576a73 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00576a73: }
	__asm { push eax }
	__asm { lea ecx, [esp + 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x1007d54 }
	__asm { push eax }
	__asm { push 0x1007d5c }
	__asm { lea ecx, [esp + 0x54] }
	__asm { push ecx }
	__asm { push 2 }
	__asm { lea eax, [esi - 8] }
	__asm { push 0x10344cc }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x78], 0 }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10fb8[];
extern "C" char g_00e11110[];
extern "C" char g_0131eda8[];
extern "C" void fn_00403410();
extern "C" void fn_005146a0();
extern "C" void fn_00514720();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00576af0
extern "C" __declspec(naked) void asm_00576af0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { push -1 }
	__asm { push 0xd94ce0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esp], eax }
	__asm { mov eax, dword ptr [g_0131eda8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00576b4a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eda8], eax }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { call fn_00514720 }
	__asm { push 0xdde5b0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { L_00576b4a: }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { mov ecx, 0x131edac }
	__asm { call fn_005146a0 }
	__asm { push 0x1034414 }
	__asm { mov edx, eax }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x20], 1 }
	__asm { call fn_00403410 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x1007d54 }
	__asm { push eax }
	__asm { push 0x1007d5c }
	__asm { lea ecx, [esp + 0x50] }
	__asm { push ecx }
	__asm { push 2 }
	__asm { lea eax, [esi - 8] }
	__asm { push 0x10344cc }
	__asm { push eax }
	__asm { mov byte ptr [esp + 0x78], 2 }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { lea ecx, [esp + 8] }
	__asm { mov byte ptr [esp + 0x1c], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10fb8[];
extern "C" char g_01320164[];
extern "C" char g_01320184[];
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00576eb0
extern "C" __declspec(naked) void asm_00576eb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { test al, 1 }
	__asm { jne L_00576f06 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { L_00576f06: }
	__asm { mov cl, byte ptr [ebp + 0xc] }
	__asm { test cl, cl }
	__asm { jne L_00576f1f }
	__asm { mov eax, dword ptr [g_01320184] }
	__asm { cmp dword ptr [eax + 0x410], 0 }
	__asm { je L_00576fa3 }
	__asm { L_00576f1f: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor edi, edi }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { sub eax, edx }
	__asm { sar eax, 2 }
	__asm { test eax, eax }
	__asm { je L_00576fa3 }
	__asm { test cl, cl }
	__asm { sete cl }
	__asm { mov byte ptr [esp + 0x13], cl }
	__asm { add ebx, -8 }
	__asm { mov edi, edi }
	__asm { L_00576f40: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov eax, dword ptr [edx + edi*4] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x1007e30 }
	__asm { mov dword ptr [esp + 0x58], eax }
	__asm { lea eax, [esp + 0x56] }
	__asm { push eax }
	__asm { push 0x1007d5c }
	__asm { lea eax, [esp + 0x60] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x10344ac }
	__asm { push ebx }
	__asm { mov byte ptr [esp + 0x6e], cl }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov cl, byte ptr [esp + 0x6f] }
	__asm { sub eax, edx }
	__asm { inc edi }
	__asm { sar eax, 2 }
	__asm { add esp, 0x5c }
	__asm { cmp edi, eax }
	__asm { jb L_00576f40 }
	__asm { L_00576fa3: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10fb8[];
extern "C" char g_01320164[];
extern "C" char g_01320184[];
extern "C" void fn_0057e360();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00576fc0
extern "C" __declspec(naked) void asm_00576fc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd7a9ee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_01320164] }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { test al, 1 }
	__asm { jne L_00577016 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_01320164], eax }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { call fn_0057e360 }
	__asm { push 0xddf8c0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x24], 0xffffffff }
	__asm { L_00577016: }
	__asm { mov cl, byte ptr [ebp + 0xc] }
	__asm { test cl, cl }
	__asm { jne L_0057702f }
	__asm { mov eax, dword ptr [g_01320184] }
	__asm { cmp dword ptr [eax + 0x410], 0 }
	__asm { je L_005770b3 }
	__asm { L_0057702f: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { xor edi, edi }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { sub eax, edx }
	__asm { sar eax, 2 }
	__asm { test eax, eax }
	__asm { je L_005770b3 }
	__asm { test cl, cl }
	__asm { sete cl }
	__asm { mov byte ptr [esp + 0x13], cl }
	__asm { add ebx, -8 }
	__asm { mov edi, edi }
	__asm { L_00577050: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { mov eax, dword ptr [edx + edi*4] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x1007e30 }
	__asm { mov dword ptr [esp + 0x58], eax }
	__asm { lea eax, [esp + 0x56] }
	__asm { push eax }
	__asm { push 0x1007d5c }
	__asm { lea eax, [esp + 0x60] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x10344bc }
	__asm { push ebx }
	__asm { mov byte ptr [esp + 0x6e], cl }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov cl, byte ptr [esp + 0x6f] }
	__asm { sub eax, edx }
	__asm { inc edi }
	__asm { sar eax, 2 }
	__asm { add esp, 0x5c }
	__asm { cmp edi, eax }
	__asm { jb L_00577050 }
	__asm { L_005770b3: }
	__asm { mov ecx, dword ptr [esp + 0x1c] }
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
extern "C" char g_0131c750[];
extern "C" char g_0131c754[];
extern "C" void fn_0053f860();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00577d40
extern "C" __declspec(naked) void asm_00577d40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd94f9e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_0131c754] }
	__asm { test al, 1 }
	__asm { jne L_00577d89 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131c754], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0053f860 }
	__asm { push 0xddd980 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00577d89: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00577dd0 }
	__asm { cmp dword ptr [g_0131c750], -1 }
	__asm { jne L_00577dd0 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00577dbf }
	__asm { push 0x4b }
	__asm { push 0x102e948 }
	__asm { push 0x102ea3c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00577dd0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00577dbf: }
	__asm { movzx eax, al }
	__asm { push 0x102e9d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00577dd0: }
	__asm { mov ecx, dword ptr [g_0131c750] }
	__asm { test ecx, ecx }
	__asm { jle L_00577df1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov al, 1 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00577df1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { xor al, al }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10508[];
extern "C" char g_00e10fb8[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x005783f0
extern "C" __declspec(naked) void asm_005783f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd959a1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { lea eax, [ebp + 8] }
	__asm { cmovae eax, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0x1007d54 }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 2 }
	__asm { lea eax, [esi - 8] }
	__asm { push 0x10348c0 }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e10fb8] }
	__asm { add esp, 0x5c }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { cmp dword ptr [ebp + 0x1c], 0x10 }
	__asm { pop esi }
	__asm { jb L_0057848d }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0057848d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x18 }
}

extern "C" char g_00e10920[];
extern "C" char g_00e10c74[];
extern "C" char g_00e10ff8[];
extern "C" char g_00e1100c[];
extern "C" char g_00e11030[];
extern "C" char g_00e11064[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" void fn_0057a280();
// FUNCTION: ROBLOXSTUDIO 0x0057b5b0
extern "C" __declspec(naked) void asm_0057b5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd950a7 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov edi, ecx }
	__asm { mov byte ptr [ebp - 0x18], 0x20 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { lea ecx, [ebp - 0xe] }
	__asm { mov esi, edx }
	__asm { mov dword ptr [ebp - 0x2c], edi }
	__asm { call dword ptr [g_00e11030] }
	__asm { push 0x1016a48 }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea ecx, [ebp - 0xe] }
	__asm { push ecx }
	__asm { push 0xa }
	__asm { push 0 }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e1100c] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call fn_0057a280 }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { call dword ptr [g_00e11064] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 0x20], 1 }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov byte ptr [ebp - 0x14], 0x20 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { lea ecx, [ebp - 0x12] }
	__asm { call dword ptr [g_00e11030] }
	__asm { push 0x1016a48 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea ecx, [ebp - 0x12] }
	__asm { push ecx }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { push ecx }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push ecx }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e10ff8] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 6 }
	__asm { call dword ptr [g_00e10c74] }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { mov byte ptr [ebp - 4], 5 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10920] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x0057d3a0
extern "C" __declspec(naked) void asm_0057d3a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94aaa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [ebp - 0x24], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov byte ptr [ebp - 4], 4 }
	__asm { mov eax, dword ptr [ebp - 0x24] }
	__asm { mov dword ptr [esi], 0x5790e0 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { lea ecx, [ebp - 0x20] }
	__asm { mov dword ptr [ebp - 0x18], 1 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_004b1d80();
// FUNCTION: ROBLOXSTUDIO 0x0057d790
extern "C" __declspec(naked) void asm_0057d790()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94ba0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { cmp dword ptr [edi + 0xc], 0 }
	__asm { je L_0057d820 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [g_00e10508] }
	__asm { push esi }
	__asm { L_0057d7c6: }
	__asm { mov esi, dword ptr [edi + 0xc] }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov eax, dword ptr [esi + 0x5c] }
	__asm { test eax, eax }
	__asm { je L_0057d7d8 }
	__asm { add eax, -0x5c }
	__asm { jmp L_0057d7da }
	__asm { L_0057d7d8: }
	__asm { xor eax, eax }
	__asm { L_0057d7da: }
	__asm { mov dword ptr [edi + 0xc], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_0057d7f4 }
	__asm { lea eax, [esi + 0x20] }
	__asm { push eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { call eax }
	__asm { add esp, 4 }
	__asm { L_0057d7f4: }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0057d801 }
	__asm { push dword ptr [esi] }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { L_0057d801: }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call ebx }
	__asm { add esp, 4 }
	__asm { cmp dword ptr [edi + 0xc], 0 }
	__asm { jne L_0057d7c6 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_0057d820: }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_004b1d80 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10508[];
extern "C" void fn_00403160();
extern "C" void fn_004b0630();
extern "C" void fn_0057de10();
// FUNCTION: ROBLOXSTUDIO 0x0057dbf0
extern "C" __declspec(naked) void asm_0057dbf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd949e8 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { sub esp, 0x1c }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [edi], esi }
	__asm { push esi }
	__asm { lea ecx, [edi + 4] }
	__asm { mov byte ptr [eax], 0 }
	__asm { call fn_0057de10 }
	__asm { push esi }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_00403160 }
	__asm { add esp, 0xc }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { je L_0057dc6c }
	__asm { mov ecx, dword ptr [ebp + 0x24] }
	__asm { test ecx, ecx }
	__asm { je L_0057dc6c }
	__asm { cmp dword ptr [ebp + 0x18], 0 }
	__asm { je L_0057dc62 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_004b0630 }
	__asm { mov ecx, dword ptr [ebp + 0x24] }
	__asm { L_0057dc62: }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0057dc6c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x20 }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_0057e250();
// FUNCTION: ROBLOXSTUDIO 0x0057dd50
extern "C" __declspec(naked) void asm_0057dd50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94a30 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { lea esi, [edi + 8] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { push esi }
	__asm { sub esp, 0xc }
	__asm { mov ecx, esp }
	__asm { add ecx, 8 }
	__asm { mov dword ptr [ecx - 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx - 4], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { call fn_0057e250 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { xor eax, eax }
	__asm { test bl, bl }
	__asm { mov ecx, 0x1034eb0 }
	__asm { cmove ecx, eax }
	__asm { mov dword ptr [edi], ecx }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10504[];
extern "C" char g_00e10508[];
extern "C" void fn_004b0630();
extern "C" void fn_0057dee0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0057de10
extern "C" __declspec(naked) void asm_0057de10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94a08 }
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
	__asm { call dword ptr [g_00e10504] }
	__asm { add esp, 4 }
	__asm { test eax, eax }
	__asm { je L_0057de71 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov dword ptr [eax + 4], 1 }
	__asm { mov dword ptr [eax + 8], 1 }
	__asm { mov dword ptr [eax], 0xe74040 }
	__asm { mov dword ptr [eax + 0xc], ecx }
	__asm { mov byte ptr [eax + 0x10], 0 }
	__asm { jmp L_0057de73 }
	__asm { L_0057de71: }
	__asm { xor eax, eax }
	__asm { L_0057de73: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp byte ptr [ebp + 0xc], 0 }
	__asm { mov dword ptr [esi], eax }
	__asm { je L_0057dead }
	__asm { mov ecx, dword ptr [ebp + 0x24] }
	__asm { test ecx, ecx }
	__asm { je L_0057dead }
	__asm { cmp dword ptr [ebp + 0x18], 0 }
	__asm { je L_0057dea3 }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push 0 }
	__asm { lea eax, [ecx + eax*4] }
	__asm { push eax }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { call fn_004b0630 }
	__asm { mov ecx, dword ptr [ebp + 0x24] }
	__asm { L_0057dea3: }
	__asm { push ecx }
	__asm { call dword ptr [g_00e10508] }
	__asm { add esp, 4 }
	__asm { L_0057dead: }
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
	__asm { call fn_0057dee0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10524[];
extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x0057e180
extern "C" __declspec(naked) void asm_0057e180()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7e5c1 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov esi, edx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { je L_0057e202 }
	__asm { cmp edi, 1 }
	__asm { je L_0057e202 }
	__asm { cmp edi, 2 }
	__asm { jne L_0057e1b9 }
	__asm { lea ecx, [esi + 8] }
	__asm { jmp L_0057e236 }
	__asm { L_0057e1b9: }
	__asm { cmp edi, 3 }
	__asm { jne L_0057e1e5 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { push 0x12d7ce8 }
	__asm { call dword ptr [g_00e10524] }
	__asm { xor ecx, ecx }
	__asm { test al, al }
	__asm { cmovne ecx, ebx }
	__asm { pop edi }
	__asm { mov dword ptr [esi], ecx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0057e1e5: }
	__asm { pop edi }
	__asm { mov dword ptr [esi], 0x12d7ce8 }
	__asm { mov word ptr [esi + 4], 0 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0057e202: }
	__asm { mov dword ptr [ebp + 8], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_0057e227 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { lea eax, [ebx + 8] }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { L_0057e227: }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { cmp edi, 1 }
	__asm { jne L_0057e23c }
	__asm { lea ecx, [ebx + 8] }
	__asm { L_0057e236: }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_0057e23c: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11108[];
extern "C" char g_00e11110[];
extern "C" void fn_0040c260();
// FUNCTION: ROBLOXSTUDIO 0x0057e250
extern "C" __declspec(naked) void asm_0057e250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd94a61 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0057e2d3 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp + 0x10] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { test ecx, ecx }
	__asm { je L_0057e2c2 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { add ecx, 8 }
	__asm { push eax }
	__asm { call dword ptr [g_00e11108] }
	__asm { L_0057e2c2: }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov bl, 1 }
	__asm { jmp L_0057e2d5 }
	__asm { L_0057e2d3: }
	__asm { xor bl, bl }
	__asm { L_0057e2d5: }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_00e10f50[];
extern "C" char g_00e110a8[];
extern "C" char g_00e110b4[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e11954[];
extern "C" char g_00e11b58[];
extern "C" void fn_0057e9d0();
extern "C" void fn_005805b0();
extern "C" void fn_00580970();
extern "C" void fn_00583f40();
extern "C" void fn_005840d0();
// FUNCTION: ROBLOXSTUDIO 0x005804c0
extern "C" __declspec(naked) void asm_005804c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd95e49 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { test edi, edi }
	__asm { je L_00580593 }
	__asm { mov dword ptr [ebx + 0x1c], edi }
	__asm { mov al, byte ptr [edi + 0x420] }
	__asm { test al, al }
	__asm { jne L_00580535 }
	__asm { push 0x10355fc }
	__asm { lea ecx, [esp + 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { mov eax, dword ptr [g_00e110b4] }
	__asm { lea ecx, [esp + 0xc] }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { call dword ptr [g_00e11954] }
	__asm { lea ecx, [esp + 0xc] }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00580535: }
	__asm { mov ecx, ebx }
	__asm { call fn_0057e9d0 }
	__asm { mov ecx, ebx }
	__asm { call fn_005805b0 }
	__asm { mov ecx, ebx }
	__asm { call fn_00580970 }
	__asm { call fn_00583f40 }
	__asm { mov ecx, dword ptr [edi + 0x160] }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call dword ptr [g_00e11b58] }
	__asm { call fn_005840d0 }
	__asm { mov ecx, dword ptr [edi + 0x164] }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { call dword ptr [g_00e11b58] }
	__asm { mov byte ptr [ebx + 0x24], 1 }
	__asm { push 0x1035628 }
	__asm { call dword ptr [g_00e110a8] }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push ebx }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10f50] }
	__asm { add esp, 0xc }
	__asm { L_00580593: }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01318fbc[];
extern "C" void fn_0044cb30();
extern "C" void fn_0044cc00();
extern "C" void fn_0044cc90();
// FUNCTION: ROBLOXSTUDIO 0x00580ae0
extern "C" __declspec(naked) void asm_00580ae0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x68 }
	__asm { cmp byte ptr [g_01318fbc], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { jne L_00580af9 }
	__asm { cmp dword ptr [ebp + 8], 0xa }
	__asm { je L_00580b45 }
	__asm { L_00580af9: }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { je L_00580b0a }
	__asm { lea ecx, [edi + 0x30] }
	__asm { call fn_0044cb30 }
	__asm { L_00580b0a: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x30] }
	__asm { call fn_0044cc00 }
	__asm { mov ecx, dword ptr [edi + 0x30] }
	__asm { cmp eax, ecx }
	__asm { jne L_00580b3a }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0044cc90 }
	__asm { L_00580b3a: }
	__asm { mov ecx, dword ptr [eax - 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { L_00580b45: }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { je L_00580b56 }
	__asm { lea ecx, [edi + 0x2c] }
	__asm { call fn_0044cb30 }
	__asm { L_00580b56: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x2c] }
	__asm { call fn_0044cc00 }
	__asm { mov ecx, dword ptr [edi + 0x2c] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { cmp eax, ecx }
	__asm { jne L_00580b88 }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x68] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call fn_0044cc90 }
	__asm { L_00580b88: }
	__asm { mov ecx, dword ptr [eax - 4] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x2c] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10d18[];
extern "C" char g_00e10e4c[];
extern "C" char g_00e10f4c[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
extern "C" char g_00e12684[];
extern "C" char g_0131eb88[];
extern "C" char g_0131eb9c[];
extern "C" void fn_004a4c90();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00580ef0
extern "C" __declspec(naked) void asm_00580ef0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd96027 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { test al, 1 }
	__asm { jne L_00580f3e }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00580f3e: }
	__asm { mov edi, dword ptr [g_0131eb9c] }
	__asm { test edi, edi }
	__asm { je L_00580fb8 }
	__asm { push ebx }
	__asm { mov ecx, esi }
	__asm { call dword ptr [g_00e10f4c] }
	__asm { mov ebx, eax }
	__asm { test ebx, ebx }
	__asm { je L_00580fb7 }
	__asm { push 0x1035af4 }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10d18] }
	__asm { test al, al }
	__asm { je L_00580fb7 }
	__asm { mov eax, dword ptr [esi + 0x1c] }
	__asm { mov ecx, dword ptr [eax + 0x2dc] }
	__asm { call dword ptr [g_00e12684] }
	__asm { mov ecx, ebx }
	__asm { mov esi, eax }
	__asm { call dword ptr [g_00e10e4c] }
	__asm { cmp eax, esi }
	__asm { jne L_00580fb7 }
	__asm { push 0x1027794 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { call dword ptr [g_00e110fc] }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [edi] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { call dword ptr [eax + 0x48] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e11110] }
	__asm { L_00580fb7: }
	__asm { pop ebx }
	__asm { L_00580fb8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_01318fba[];
extern "C" char g_0131eb88[];
extern "C" char g_0131eba0[];
extern "C" void fn_00455380();
extern "C" void fn_004a4c90();
extern "C" void fn_00581380();
extern "C" void fn_00584490();
extern "C" void fn_00860040();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x005812a0
extern "C" __declspec(naked) void asm_005812a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd96096 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { cmp byte ptr [g_01318fba], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov esi, ecx }
	__asm { jne L_00581364 }
	__asm { mov eax, dword ptr [g_0131eb88] }
	__asm { test al, 1 }
	__asm { jne L_00581302 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131eb88], eax }
	__asm { mov dword ptr [esp + 0x1c], 0 }
	__asm { call fn_004a4c90 }
	__asm { push 0xddd870 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esp + 0x1c], 0xffffffff }
	__asm { L_00581302: }
	__asm { mov edi, dword ptr [g_0131eba0] }
	__asm { test edi, edi }
	__asm { je L_00581362 }
	__asm { mov ecx, edi }
	__asm { call fn_00455380 }
	__asm { test eax, eax }
	__asm { je L_00581362 }
	__asm { push 0 }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { mov dword ptr [esp + 0x30], esp }
	__asm { push 0 }
	__asm { push esi }
	__asm { push 0x581380 }
	__asm { call fn_00584490 }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esp + 0x44], 1 }
	__asm { call fn_00455380 }
	__asm { add esp, 4 }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [esp + 0x40], 0xffffffff }
	__asm { call fn_00860040 }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00581362: }
	__asm { mov ecx, esi }
	__asm { L_00581364: }
	__asm { call fn_00581380 }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11cac[];
extern "C" char g_00e12794[];
extern "C" void fn_0044cb30();
extern "C" void fn_0044cc00();
extern "C" void fn_0044cc90();
// FUNCTION: ROBLOXSTUDIO 0x00583750
extern "C" __declspec(naked) void asm_00583750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x38 }
	__asm { mov eax, dword ptr [ecx + 0x30] }
	__asm { push esi }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { lea esi, [ecx + 0x30] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { je L_00583771 }
	__asm { mov ecx, esi }
	__asm { call fn_0044cb30 }
	__asm { L_00583771: }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0044cc00 }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp eax, ecx }
	__asm { jne L_0058379f }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebp - 4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { call fn_0044cc90 }
	__asm { L_0058379f: }
	__asm { mov esi, dword ptr [eax - 4] }
	__asm { call dword ptr [g_00e11cac] }
	__asm { cmp dword ptr [esi + 0x18], eax }
	__asm { jne L_005837c1 }
	__asm { mov ecx, dword ptr [esi + 0x1c] }
	__asm { test ecx, ecx }
	__asm { je L_005837d5 }
	__asm { push 5 }
	__asm { call dword ptr [g_00e12794] }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_005837c1: }
	__asm { call dword ptr [g_00e11cac] }
	__asm { mov ecx, dword ptr [esi + 0x18] }
	__asm { push 5 }
	__asm { mov dword ptr [esi + 0x1c], eax }
	__asm { call dword ptr [g_00e12794] }
	__asm { L_005837d5: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e11b58[];
extern "C" char g_00e12c8c[];
extern "C" void fn_0044cb30();
extern "C" void fn_0044cc00();
extern "C" void fn_0044cc90();
extern "C" void fn_00584910();
extern "C" void fn_00584a30();
extern "C" void fn_00584ac0();
// FUNCTION: ROBLOXSTUDIO 0x00583e50
extern "C" __declspec(naked) void asm_00583e50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { sub esp, 0x7c }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { xor ebx, ebx }
	__asm { lea esi, [ecx + 0x2c] }
	__asm { lea edi, [ecx + 0x28] }
	__asm { L_00583e64: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [esp + 0xc], ebx }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { je L_00583e77 }
	__asm { mov ecx, esi }
	__asm { call fn_0044cb30 }
	__asm { L_00583e77: }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x2c] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_0044cc00 }
	__asm { mov ecx, eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [esp + 0x10], ecx }
	__asm { cmp ecx, eax }
	__asm { jne L_00583eb5 }
	__asm { lea ecx, [esp + 0x14] }
	__asm { push ecx }
	__asm { lea ecx, [esp + 0x10] }
	__asm { push ecx }
	__asm { lea ecx, [esp + 0x30] }
	__asm { push ecx }
	__asm { push eax }
	__asm { mov dword ptr [esp + 0x24], 0 }
	__asm { call fn_0044cc90 }
	__asm { mov dword ptr [esp + 0x10], eax }
	__asm { L_00583eb5: }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp dword ptr [eax + 0x34], 1 }
	__asm { je L_00583ec4 }
	__asm { mov ecx, edi }
	__asm { call fn_00584910 }
	__asm { L_00583ec4: }
	__asm { lea eax, [esp + 0xc] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x5c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { call fn_00584a30 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { cmp eax, ecx }
	__asm { jne L_00583f08 }
	__asm { lea eax, [esp + 0x18] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x10] }
	__asm { push eax }
	__asm { lea eax, [esp + 0x60] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov dword ptr [esp + 0x34], 0xffffffff }
	__asm { mov dword ptr [esp + 0x30], 0xffffffff }
	__asm { call fn_00584ac0 }
	__asm { mov dword ptr [esp + 0x14], eax }
	__asm { L_00583f08: }
	__asm { mov ecx, dword ptr [esp + 0x10] }
	__asm { mov ecx, dword ptr [ecx - 4] }
	__asm { call dword ptr [g_00e12c8c] }
	__asm { mov ecx, dword ptr [esp + 0x14] }
	__asm { movzx eax, al }
	__asm { mov ecx, dword ptr [ecx - 0x10] }
	__asm { push eax }
	__asm { call dword ptr [g_00e11b58] }
	__asm { inc ebx }
	__asm { cmp ebx, 0xb }
	__asm { jl L_00583e64 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10fe8[];
extern "C" char g_00e10fec[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11000[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x00583f40
extern "C" __declspec(naked) void asm_00583f40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd95e13 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { mov dword ptr [ebp - 0x18], 0x1029570 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11000] }
	__asm { push 0x1035fd0 }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10fe8] }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e10fec] }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10ec4[];
extern "C" char g_00e10fd8[];
extern "C" char g_00e10fe8[];
extern "C" char g_00e10fec[];
extern "C" char g_00e10ffc[];
extern "C" char g_00e11000[];
extern "C" char g_00e110fc[];
extern "C" char g_00e11110[];
// FUNCTION: ROBLOXSTUDIO 0x005840d0
extern "C" __declspec(naked) void asm_005840d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd95e13 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push ebx }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { call dword ptr [g_00e10ec4] }
	__asm { mov dword ptr [ebp - 0x18], 0x1029570 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e11000] }
	__asm { push 0x1035f5c }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e110fc] }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x38] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10fe8] }
	__asm { mov ecx, eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call dword ptr [g_00e10fec] }
	__asm { lea ecx, [ebp - 0x38] }
	__asm { mov bl, al }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [ebp - 0x10] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call dword ptr [g_00e11110] }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_00e10ffc] }
	__asm { lea ecx, [ebp - 0x18] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call dword ptr [g_00e10fd8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov al, bl }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00422570();
extern "C" void fn_00584850();
// FUNCTION: ROBLOXSTUDIO 0x00584780
extern "C" __declspec(naked) void asm_00584780()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd95ca0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00422570 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { push dword ptr [ebp + 0x2c] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { call fn_00584850 }
	__asm { mov eax, dword ptr [ebp + 0x30] }
	__asm { mov dword ptr [esi + 0x30], eax }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { test eax, eax }
	__asm { je L_00584801 }
	__asm { test al, 1 }
	__asm { jne L_005847fa }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_005847fa }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_005847fa: }
	__asm { mov dword ptr [ebp - 0x30], 0 }
	__asm { L_00584801: }
	__asm { mov eax, dword ptr [ebp + 0x34] }
	__asm { mov dword ptr [esi + 0x38], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_0058482e }
	__asm { test al, 1 }
	__asm { jne L_0058482e }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0058482e }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0058482e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x30 }
}

extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x00584850
extern "C" __declspec(naked) void asm_00584850()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd95c80 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { lea eax, [ebp + 0xc] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00422570 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { lea ecx, [esi + 8] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov eax, dword ptr [ebp - 0x2c] }
	__asm { test eax, eax }
	__asm { je L_005848c1 }
	__asm { test al, 1 }
	__asm { jne L_005848ba }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_005848ba }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_005848ba: }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { L_005848c1: }
	__asm { mov eax, dword ptr [ebp + 0x2c] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { test eax, eax }
	__asm { je L_005848ee }
	__asm { test al, 1 }
	__asm { jne L_005848ee }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_005848ee }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_005848ee: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x28 }
}

extern "C" char g_00e101fc[];
extern "C" char g_00e10200[];
extern "C" char g_00e10598[];
extern "C" char g_00e131ac[];
extern "C" void fn_00422570();
extern "C" void fn_0045f760();
extern "C" void fn_0045fe60();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00584cb0
extern "C" __declspec(naked) void asm_00584cb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd95c62 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push 0x88 }
	__asm { push 0 }
	__asm { mov edi, ecx }
	__asm { call dword ptr [g_00e101fc] }
	__asm { push eax }
	__asm { call dword ptr [g_00e10200] }
	__asm { mov esi, eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00584d19 }
	__asm { push 1 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { mov dword ptr [ebp - 0x14], 0x100decc }
	__asm { call dword ptr [g_00e10598] }
	__asm { mov dword ptr [ebp - 0x28], 0xe1815c }
	__asm { lea eax, [ebp - 0x28] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], esi }
	__asm { call fn_0045fe60 }
	__asm { L_00584d19: }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 0x1c], esi }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_00e131ac] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [esi], 0x1035fe4 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi + 0x40], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 0x48], eax }
	__asm { lea eax, [edi + 0x10] }
	__asm { lea ecx, [esi + 0x50] }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { mov eax, dword ptr [edi + 0x30] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x70], eax }
	__asm { mov eax, dword ptr [edi + 0x38] }
	__asm { mov dword ptr [esi + 0x78], eax }
	__asm { mov eax, dword ptr [edi + 0x40] }
	__asm { mov dword ptr [esi + 0x80], eax }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { call fn_0045f760 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_00422570();
// FUNCTION: ROBLOXSTUDIO 0x00584d90
extern "C" __declspec(naked) void asm_00584d90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd7de28 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x24 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { lea eax, [esi + 8] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x30] }
	__asm { call fn_00422570 }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [esi + 0x38] }
	__asm { lea eax, [ebp - 0x30] }
	__asm { push dword ptr [esi + 0x30] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { sub esp, 0x20 }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { call fn_00422570 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { mov eax, dword ptr [eax] }
	__asm { call eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov eax, dword ptr [ebp - 0x30] }
	__asm { test eax, eax }
	__asm { je L_00584e0b }
	__asm { test al, 1 }
	__asm { jne L_00584e0b }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00584e0b }
	__asm { lea ecx, [ebp - 0x28] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_00584e0b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e12104[];
extern "C" void fn_00585520();
extern "C" void fn_005856c0();
// FUNCTION: ROBLOXSTUDIO 0x005857d0
extern "C" __declspec(naked) void asm_005857d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12104] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_0058580f }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00585809 }
	__asm { cmp esi, 5 }
	__asm { jge L_00585806 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00585520 }
	__asm { add esp, 0x10 }
	__asm { L_00585806: }
	__asm { sub esi, 5 }
	__asm { L_00585809: }
	__asm { mov eax, esi }
	__asm { test esi, esi }
	__asm { jns L_00585818 }
	__asm { L_0058580f: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00585818: }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00585833 }
	__asm { cmp esi, 2 }
	__asm { jge L_00585830 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_005856c0 }
	__asm { add esp, 0x10 }
	__asm { L_00585830: }
	__asm { lea eax, [esi - 2] }
	__asm { L_00585833: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e12104[];
extern "C" void fn_00585520();
extern "C" void fn_00585940();
// FUNCTION: ROBLOXSTUDIO 0x00585a60
extern "C" __declspec(naked) void asm_00585a60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12104] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00585a9f }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00585a99 }
	__asm { cmp esi, 5 }
	__asm { jge L_00585a96 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00585520 }
	__asm { add esp, 0x10 }
	__asm { L_00585a96: }
	__asm { sub esi, 5 }
	__asm { L_00585a99: }
	__asm { mov eax, esi }
	__asm { test esi, esi }
	__asm { jns L_00585aa8 }
	__asm { L_00585a9f: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00585aa8: }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00585ac3 }
	__asm { cmp esi, 3 }
	__asm { jge L_00585ac0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00585940 }
	__asm { add esp, 0x10 }
	__asm { L_00585ac0: }
	__asm { lea eax, [esi - 3] }
	__asm { L_00585ac3: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e68[];
extern "C" void fn_00585fb0();
// FUNCTION: ROBLOXSTUDIO 0x005865d0
extern "C" __declspec(naked) void asm_005865d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { call dword ptr [g_00e10e68] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00586677 }
	__asm { test edi, edi }
	__asm { jne L_0058661c }
	__asm { cmp esi, 0x1a }
	__asm { jge L_0058660e }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp - 4] }
	__asm { call fn_00585fb0 }
	__asm { add esp, 0x10 }
	__asm { L_0058660e: }
	__asm { sub esi, 0x1a }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0058661c: }
	__asm { cmp edi, 1 }
	__asm { jne L_0058664f }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { sub eax, 0 }
	__asm { je L_0058663e }
	__asm { dec eax }
	__asm { je L_0058663e }
	__asm { dec eax }
	__asm { jne L_00586672 }
	__asm { sub esi, 3 }
	__asm { pop edi }
	__asm { mov byte ptr [ecx], al }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0058663e: }
	__asm { sub esi, 3 }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov byte ptr [ecx], 1 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0058664f: }
	__asm { cmp edi, 2 }
	__asm { je L_00586672 }
	__asm { cmp edi, 3 }
	__asm { je L_00586672 }
	__asm { cmp edi, 4 }
	__asm { je L_00586672 }
	__asm { cmp edi, 5 }
	__asm { je L_00586672 }
	__asm { cmp edi, 6 }
	__asm { je L_00586672 }
	__asm { cmp edi, 7 }
	__asm { je L_00586672 }
	__asm { cmp edi, 8 }
	__asm { jne L_00586675 }
	__asm { L_00586672: }
	__asm { sub esi, 3 }
	__asm { L_00586675: }
	__asm { mov eax, esi }
	__asm { L_00586677: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" char g_00e11108[];
extern "C" char g_01319e44[];
extern "C" void fn_00586900();
extern "C" void fn_006c1100();
// FUNCTION: ROBLOXSTUDIO 0x00586700
extern "C" __declspec(naked) void asm_00586700()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { jne L_005867b2 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12c0978 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00586739 }
	__asm { push 0x35 }
	__asm { push 0x1036260 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00586739: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_00586797 }
	__asm { dec eax }
	__asm { je L_00586757 }
	__asm { dec eax }
	__asm { jne L_005867b2 }
	__asm { mov ecx, dword ptr [g_01319e44] }
	__asm { call fn_006c1100 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00586757: }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov al, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0xc], al }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 4] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { lea eax, [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push 0x12c0978 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00586797: }
	__asm { mov edx, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { push dword ptr [eax] }
	__asm { push ecx }
	__asm { mov ecx, esp }
	__asm { push dword ptr [edx + 4] }
	__asm { call dword ptr [g_00e11108] }
	__asm { mov ecx, esi }
	__asm { call fn_00586900 }
	__asm { L_005867b2: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e12c58[];
extern "C" void fn_00586b20();
extern "C" void fn_00586c80();
// FUNCTION: ROBLOXSTUDIO 0x00586da0
extern "C" __declspec(naked) void asm_00586da0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e12c58] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_00586ddd }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00586dd7 }
	__asm { cmp esi, 1 }
	__asm { jge L_00586dd6 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00586b20 }
	__asm { add esp, 0x10 }
	__asm { L_00586dd6: }
	__asm { dec esi }
	__asm { L_00586dd7: }
	__asm { mov eax, esi }
	__asm { test esi, esi }
	__asm { jns L_00586de6 }
	__asm { L_00586ddd: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_00586de6: }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00586e01 }
	__asm { cmp esi, 1 }
	__asm { jge L_00586dfe }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00586c80 }
	__asm { add esp, 0x10 }
	__asm { L_00586dfe: }
	__asm { lea eax, [esi - 1] }
	__asm { L_00586e01: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10e58[];
extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
// FUNCTION: ROBLOXSTUDIO 0x00586f00
extern "C" __declspec(naked) void asm_00586f00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { jne L_00586f9f }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, 0x12c09a8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00586f3c }
	__asm { push 0x110 }
	__asm { push 0x1036300 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00586f3c: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_00586f79 }
	__asm { dec eax }
	__asm { je L_00586f61 }
	__asm { dec eax }
	__asm { jne L_00586f9e }
	__asm { push eax }
	__asm { push 2 }
	__asm { push 0x12c09a8 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00586f61: }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push 0x12c09a8 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00586f79: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 8], 0 }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 0x12c09a8 }
	__asm { push esi }
	__asm { call dword ptr [g_00e10e58] }
	__asm { add esp, 0x10 }
	__asm { L_00586f9e: }
	__asm { pop esi }
	__asm { L_00586f9f: }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e13480[];
extern "C" void fn_0046c370();
extern "C" void fn_005874a0();
// FUNCTION: ROBLOXSTUDIO 0x005879a0
extern "C" __declspec(naked) void asm_005879a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push esi }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_00e13480] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { js L_005879df }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_005879d9 }
	__asm { cmp esi, 0xf }
	__asm { jge L_005879d6 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_0046c370 }
	__asm { add esp, 0x10 }
	__asm { L_005879d6: }
	__asm { sub esi, 0xf }
	__asm { L_005879d9: }
	__asm { mov eax, esi }
	__asm { test esi, esi }
	__asm { jns L_005879e8 }
	__asm { L_005879df: }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_005879e8: }
	__asm { cmp dword ptr [ebp + 8], 0 }
	__asm { jne L_00587a03 }
	__asm { cmp esi, 0x2e }
	__asm { jge L_00587a00 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_005874a0 }
	__asm { add esp, 0x10 }
	__asm { L_00587a00: }
	__asm { lea eax, [esi - 0x2e] }
	__asm { L_00587a03: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e10f8c[];
extern "C" char g_00e11004[];
extern "C" void fn_004f72a0();
extern "C" void fn_004f8060();
extern "C" void fn_00cf67f8();
// FUNCTION: ROBLOXSTUDIO 0x00587a10
extern "C" __declspec(naked) void asm_00587a10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { and esp, 0xfffffff8 }
	__asm { cmp dword ptr [ebp + 0xc], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { jne L_00587abe }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ecx, 0x12c09e8 }
	__asm { call dword ptr [g_00e10f8c] }
	__asm { test eax, eax }
	__asm { jne L_00587a4a }
	__asm { push 0x31 }
	__asm { push 0x10363f0 }
	__asm { push 0x100cef4 }
	__asm { call dword ptr [g_00e11004] }
	__asm { add esp, 0xc }
	__asm { L_00587a4a: }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 0 }
	__asm { je L_00587a87 }
	__asm { dec eax }
	__asm { jne L_00587abe }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00587abe }
	__asm { push 0 }
	__asm { push 0x12ce7f4 }
	__asm { push 0x12c61f4 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { add esp, 0x14 }
	__asm { push eax }
	__asm { call fn_004f8060 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00587a87: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax + 4] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_00587abe }
	__asm { push 0 }
	__asm { push 0x12ce7f4 }
	__asm { push 0x12c61f4 }
	__asm { push 0 }
	__asm { push eax }
	__asm { call fn_00cf67f8 }
	__asm { mov ecx, dword ptr [edi + 0x34] }
	__asm { add esp, 0x14 }
	__asm { mov esi, eax }
	__asm { push esi }
	__asm { call fn_004f72a0 }
	__asm { mov ecx, dword ptr [edi + 0x38] }
	__asm { push esi }
	__asm { call fn_004f8060 }
	__asm { L_00587abe: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}
