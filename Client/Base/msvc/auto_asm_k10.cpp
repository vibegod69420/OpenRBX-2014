// Tiny functions reproduced verbatim as inline assembly. Internal
// branches use labels; absolute references use relocation symbols.

extern "C" char g_00e108b8[];
extern "C" char g_012dacf0[];
extern "C" char g_012dacf4[];
extern "C" char g_012dacfc[];
extern "C" char g_012dad04[];
extern "C" char g_012dad10[];
extern "C" char g_012dad1c[];
// FUNCTION: ROBLOXSTUDIO 0x005fad40
extern "C" __declspec(naked) void asm_005fad40()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe24dd0 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe24df4 }
	__asm { mov dword ptr [g_012dacf0], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dacf4], eax }
	__asm { test eax, eax }
	__asm { je L_005fad6d }
	__asm { test bl, bl }
	__asm { je L_005fad6f }
	__asm { L_005fad6d: }
	__asm { mov bl, 1 }
	__asm { L_005fad6f: }
	__asm { push 0xe24e18 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dacfc], eax }
	__asm { test eax, eax }
	__asm { je L_005fad83 }
	__asm { test bl, bl }
	__asm { je L_005fad85 }
	__asm { L_005fad83: }
	__asm { mov bl, 1 }
	__asm { L_005fad85: }
	__asm { push 0xe24e38 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dad04], eax }
	__asm { test eax, eax }
	__asm { je L_005fad99 }
	__asm { test bl, bl }
	__asm { je L_005fad9b }
	__asm { L_005fad99: }
	__asm { mov bl, 1 }
	__asm { L_005fad9b: }
	__asm { push 0xe24e58 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dad10], eax }
	__asm { test eax, eax }
	__asm { je L_005fadaf }
	__asm { test bl, bl }
	__asm { je L_005fadb1 }
	__asm { L_005fadaf: }
	__asm { mov bl, 1 }
	__asm { L_005fadb1: }
	__asm { push 0xe24e78 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dad1c], eax }
	__asm { test eax, eax }
	__asm { je L_005fadca }
	__asm { test bl, bl }
	__asm { jne L_005fadca }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fadca: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dae5c[];
extern "C" char g_012dae64[];
extern "C" char g_012dae6c[];
extern "C" char g_012dae78[];
extern "C" char g_012dae80[];
extern "C" char g_012dae8c[];
// FUNCTION: ROBLOXSTUDIO 0x005fb180
extern "C" __declspec(naked) void asm_005fb180()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe251b8 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe251cc }
	__asm { mov dword ptr [g_012dae5c], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae64], eax }
	__asm { test eax, eax }
	__asm { je L_005fb1ad }
	__asm { test bl, bl }
	__asm { je L_005fb1af }
	__asm { L_005fb1ad: }
	__asm { mov bl, 1 }
	__asm { L_005fb1af: }
	__asm { push 0xe251e0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae6c], eax }
	__asm { test eax, eax }
	__asm { je L_005fb1c3 }
	__asm { test bl, bl }
	__asm { je L_005fb1c5 }
	__asm { L_005fb1c3: }
	__asm { mov bl, 1 }
	__asm { L_005fb1c5: }
	__asm { push 0xe251f8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae78], eax }
	__asm { test eax, eax }
	__asm { je L_005fb1d9 }
	__asm { test bl, bl }
	__asm { je L_005fb1db }
	__asm { L_005fb1d9: }
	__asm { mov bl, 1 }
	__asm { L_005fb1db: }
	__asm { push 0xe25214 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae80], eax }
	__asm { test eax, eax }
	__asm { je L_005fb1ef }
	__asm { test bl, bl }
	__asm { je L_005fb1f1 }
	__asm { L_005fb1ef: }
	__asm { mov bl, 1 }
	__asm { L_005fb1f1: }
	__asm { push 0xe2522c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dae8c], eax }
	__asm { test eax, eax }
	__asm { je L_005fb20a }
	__asm { test bl, bl }
	__asm { jne L_005fb20a }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fb20a: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012daee8[];
extern "C" char g_012daef0[];
extern "C" char g_012daef8[];
extern "C" char g_012daf00[];
extern "C" char g_012daf0c[];
extern "C" char g_012daf10[];
extern "C" char g_012daf18[];
// FUNCTION: ROBLOXSTUDIO 0x005fb300
extern "C" __declspec(naked) void asm_005fb300()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2530c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe25328 }
	__asm { mov dword ptr [g_012daee8], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012daef0], eax }
	__asm { test eax, eax }
	__asm { je L_005fb32d }
	__asm { test bl, bl }
	__asm { je L_005fb32f }
	__asm { L_005fb32d: }
	__asm { mov bl, 1 }
	__asm { L_005fb32f: }
	__asm { push 0xe2533c }
	__asm { call esi }
	__asm { mov dword ptr [g_012daef8], eax }
	__asm { test eax, eax }
	__asm { je L_005fb343 }
	__asm { test bl, bl }
	__asm { je L_005fb345 }
	__asm { L_005fb343: }
	__asm { mov bl, 1 }
	__asm { L_005fb345: }
	__asm { push 0xe25354 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf00], eax }
	__asm { test eax, eax }
	__asm { je L_005fb359 }
	__asm { test bl, bl }
	__asm { je L_005fb35b }
	__asm { L_005fb359: }
	__asm { mov bl, 1 }
	__asm { L_005fb35b: }
	__asm { push 0xe2536c }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf0c], eax }
	__asm { test eax, eax }
	__asm { je L_005fb36f }
	__asm { test bl, bl }
	__asm { je L_005fb371 }
	__asm { L_005fb36f: }
	__asm { mov bl, 1 }
	__asm { L_005fb371: }
	__asm { push 0xe25388 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf10], eax }
	__asm { test eax, eax }
	__asm { je L_005fb385 }
	__asm { test bl, bl }
	__asm { je L_005fb387 }
	__asm { L_005fb385: }
	__asm { mov bl, 1 }
	__asm { L_005fb387: }
	__asm { push 0xe253ac }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf18], eax }
	__asm { test eax, eax }
	__asm { je L_005fb3a0 }
	__asm { test bl, bl }
	__asm { jne L_005fb3a0 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fb3a0: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012daf24[];
extern "C" char g_012daf2c[];
extern "C" char g_012daf34[];
extern "C" char g_012daf3c[];
extern "C" char g_012daf44[];
extern "C" char g_012daf50[];
extern "C" char g_012daf58[];
extern "C" char g_012daf60[];
// FUNCTION: ROBLOXSTUDIO 0x005fb3b0
extern "C" __declspec(naked) void asm_005fb3b0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe253cc }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe253e0 }
	__asm { mov dword ptr [g_012daf24], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf2c], eax }
	__asm { test eax, eax }
	__asm { je L_005fb3dd }
	__asm { test bl, bl }
	__asm { je L_005fb3df }
	__asm { L_005fb3dd: }
	__asm { mov bl, 1 }
	__asm { L_005fb3df: }
	__asm { push 0xe253f4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf34], eax }
	__asm { test eax, eax }
	__asm { je L_005fb3f3 }
	__asm { test bl, bl }
	__asm { je L_005fb3f5 }
	__asm { L_005fb3f3: }
	__asm { mov bl, 1 }
	__asm { L_005fb3f5: }
	__asm { push 0xe25404 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf3c], eax }
	__asm { test eax, eax }
	__asm { je L_005fb409 }
	__asm { test bl, bl }
	__asm { je L_005fb40b }
	__asm { L_005fb409: }
	__asm { mov bl, 1 }
	__asm { L_005fb40b: }
	__asm { push 0xe2541c }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf44], eax }
	__asm { test eax, eax }
	__asm { je L_005fb41f }
	__asm { test bl, bl }
	__asm { je L_005fb421 }
	__asm { L_005fb41f: }
	__asm { mov bl, 1 }
	__asm { L_005fb421: }
	__asm { push 0xe25430 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf50], eax }
	__asm { test eax, eax }
	__asm { je L_005fb435 }
	__asm { test bl, bl }
	__asm { je L_005fb437 }
	__asm { L_005fb435: }
	__asm { mov bl, 1 }
	__asm { L_005fb437: }
	__asm { push 0xe25444 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf58], eax }
	__asm { test eax, eax }
	__asm { je L_005fb44b }
	__asm { test bl, bl }
	__asm { je L_005fb44d }
	__asm { L_005fb44b: }
	__asm { mov bl, 1 }
	__asm { L_005fb44d: }
	__asm { push 0xe2545c }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf60], eax }
	__asm { test eax, eax }
	__asm { je L_005fb466 }
	__asm { test bl, bl }
	__asm { jne L_005fb466 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fb466: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012daf70[];
extern "C" char g_012daf74[];
extern "C" char g_012daf7c[];
extern "C" char g_012daf84[];
extern "C" char g_012daf90[];
extern "C" char g_012daf98[];
extern "C" char g_012dafa0[];
extern "C" char g_012dafac[];
extern "C" char g_012dafb4[];
extern "C" char g_012dafbc[];
extern "C" char g_012dafc4[];
// FUNCTION: ROBLOXSTUDIO 0x005fb470
extern "C" __declspec(naked) void asm_005fb470()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe25470 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe25488 }
	__asm { mov dword ptr [g_012daf70], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf74], eax }
	__asm { test eax, eax }
	__asm { je L_005fb49d }
	__asm { test bl, bl }
	__asm { je L_005fb49f }
	__asm { L_005fb49d: }
	__asm { mov bl, 1 }
	__asm { L_005fb49f: }
	__asm { push 0xe254ac }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf7c], eax }
	__asm { test eax, eax }
	__asm { je L_005fb4b3 }
	__asm { test bl, bl }
	__asm { je L_005fb4b5 }
	__asm { L_005fb4b3: }
	__asm { mov bl, 1 }
	__asm { L_005fb4b5: }
	__asm { push 0xe254c4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf84], eax }
	__asm { test eax, eax }
	__asm { je L_005fb4c9 }
	__asm { test bl, bl }
	__asm { je L_005fb4cb }
	__asm { L_005fb4c9: }
	__asm { mov bl, 1 }
	__asm { L_005fb4cb: }
	__asm { push 0xe254dc }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf90], eax }
	__asm { test eax, eax }
	__asm { je L_005fb4df }
	__asm { test bl, bl }
	__asm { je L_005fb4e1 }
	__asm { L_005fb4df: }
	__asm { mov bl, 1 }
	__asm { L_005fb4e1: }
	__asm { push 0xe254f4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012daf98], eax }
	__asm { test eax, eax }
	__asm { je L_005fb4f5 }
	__asm { test bl, bl }
	__asm { je L_005fb4f7 }
	__asm { L_005fb4f5: }
	__asm { mov bl, 1 }
	__asm { L_005fb4f7: }
	__asm { push 0xe2550c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dafa0], eax }
	__asm { test eax, eax }
	__asm { je L_005fb50b }
	__asm { test bl, bl }
	__asm { je L_005fb50d }
	__asm { L_005fb50b: }
	__asm { mov bl, 1 }
	__asm { L_005fb50d: }
	__asm { push 0xe25524 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dafac], eax }
	__asm { test eax, eax }
	__asm { je L_005fb521 }
	__asm { test bl, bl }
	__asm { je L_005fb523 }
	__asm { L_005fb521: }
	__asm { mov bl, 1 }
	__asm { L_005fb523: }
	__asm { push 0xe2553c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dafb4], eax }
	__asm { test eax, eax }
	__asm { je L_005fb537 }
	__asm { test bl, bl }
	__asm { je L_005fb539 }
	__asm { L_005fb537: }
	__asm { mov bl, 1 }
	__asm { L_005fb539: }
	__asm { push 0xe25554 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dafbc], eax }
	__asm { test eax, eax }
	__asm { je L_005fb54d }
	__asm { test bl, bl }
	__asm { je L_005fb54f }
	__asm { L_005fb54d: }
	__asm { mov bl, 1 }
	__asm { L_005fb54f: }
	__asm { push 0xe2556c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dafc4], eax }
	__asm { test eax, eax }
	__asm { je L_005fb568 }
	__asm { test bl, bl }
	__asm { jne L_005fb568 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fb568: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db180[];
extern "C" char g_012db184[];
extern "C" char g_012db194[];
extern "C" char g_012db198[];
extern "C" char g_012db1a4[];
extern "C" char g_012db1b0[];
// FUNCTION: ROBLOXSTUDIO 0x005fb9d0
extern "C" __declspec(naked) void asm_005fb9d0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe259c0 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe259e4 }
	__asm { mov dword ptr [g_012db180], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db184], eax }
	__asm { test eax, eax }
	__asm { je L_005fb9fd }
	__asm { test bl, bl }
	__asm { je L_005fb9ff }
	__asm { L_005fb9fd: }
	__asm { mov bl, 1 }
	__asm { L_005fb9ff: }
	__asm { push 0xe25a08 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db194], eax }
	__asm { test eax, eax }
	__asm { je L_005fba13 }
	__asm { test bl, bl }
	__asm { je L_005fba15 }
	__asm { L_005fba13: }
	__asm { mov bl, 1 }
	__asm { L_005fba15: }
	__asm { push 0xe25a28 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db198], eax }
	__asm { test eax, eax }
	__asm { je L_005fba29 }
	__asm { test bl, bl }
	__asm { je L_005fba2b }
	__asm { L_005fba29: }
	__asm { mov bl, 1 }
	__asm { L_005fba2b: }
	__asm { push 0xe25a48 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db1a4], eax }
	__asm { test eax, eax }
	__asm { je L_005fba3f }
	__asm { test bl, bl }
	__asm { je L_005fba41 }
	__asm { L_005fba3f: }
	__asm { mov bl, 1 }
	__asm { L_005fba41: }
	__asm { push 0xe25a68 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db1b0], eax }
	__asm { test eax, eax }
	__asm { je L_005fba5a }
	__asm { test bl, bl }
	__asm { jne L_005fba5a }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fba5a: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db1c8[];
extern "C" char g_012db1d0[];
extern "C" char g_012db1dc[];
extern "C" char g_012db1e4[];
extern "C" char g_012db1ec[];
extern "C" char g_012db1f0[];
extern "C" char g_012db1fc[];
extern "C" char g_012db208[];
// FUNCTION: ROBLOXSTUDIO 0x005fbaa0
extern "C" __declspec(naked) void asm_005fbaa0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe25ac0 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe25ad8 }
	__asm { mov dword ptr [g_012db1c8], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db1d0], eax }
	__asm { test eax, eax }
	__asm { je L_005fbacd }
	__asm { test bl, bl }
	__asm { je L_005fbacf }
	__asm { L_005fbacd: }
	__asm { mov bl, 1 }
	__asm { L_005fbacf: }
	__asm { push 0xe25af4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db1dc], eax }
	__asm { test eax, eax }
	__asm { je L_005fbae3 }
	__asm { test bl, bl }
	__asm { je L_005fbae5 }
	__asm { L_005fbae3: }
	__asm { mov bl, 1 }
	__asm { L_005fbae5: }
	__asm { push 0xe25b10 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db1e4], eax }
	__asm { test eax, eax }
	__asm { je L_005fbaf9 }
	__asm { test bl, bl }
	__asm { je L_005fbafb }
	__asm { L_005fbaf9: }
	__asm { mov bl, 1 }
	__asm { L_005fbafb: }
	__asm { push 0xe25b28 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db1ec], eax }
	__asm { test eax, eax }
	__asm { je L_005fbb0f }
	__asm { test bl, bl }
	__asm { je L_005fbb11 }
	__asm { L_005fbb0f: }
	__asm { mov bl, 1 }
	__asm { L_005fbb11: }
	__asm { push 0xe25b40 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db1f0], eax }
	__asm { test eax, eax }
	__asm { je L_005fbb25 }
	__asm { test bl, bl }
	__asm { je L_005fbb27 }
	__asm { L_005fbb25: }
	__asm { mov bl, 1 }
	__asm { L_005fbb27: }
	__asm { push 0xe25b60 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db1fc], eax }
	__asm { test eax, eax }
	__asm { je L_005fbb3b }
	__asm { test bl, bl }
	__asm { je L_005fbb3d }
	__asm { L_005fbb3b: }
	__asm { mov bl, 1 }
	__asm { L_005fbb3d: }
	__asm { push 0xe25b7c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db208], eax }
	__asm { test eax, eax }
	__asm { je L_005fbb56 }
	__asm { test bl, bl }
	__asm { jne L_005fbb56 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fbb56: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db25c[];
extern "C" char g_012db26c[];
extern "C" char g_012db274[];
extern "C" char g_012db278[];
extern "C" char g_012db288[];
extern "C" char g_012db290[];
extern "C" char g_012db298[];
extern "C" char g_012db29c[];
extern "C" char g_012db2ac[];
extern "C" char g_012db2b0[];
// FUNCTION: ROBLOXSTUDIO 0x005fbc60
extern "C" __declspec(naked) void asm_005fbc60()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe25c60 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe25c78 }
	__asm { mov dword ptr [g_012db25c], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db26c], eax }
	__asm { test eax, eax }
	__asm { je L_005fbc8d }
	__asm { test bl, bl }
	__asm { je L_005fbc8f }
	__asm { L_005fbc8d: }
	__asm { mov bl, 1 }
	__asm { L_005fbc8f: }
	__asm { push 0xe25c90 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db274], eax }
	__asm { test eax, eax }
	__asm { je L_005fbca3 }
	__asm { test bl, bl }
	__asm { je L_005fbca5 }
	__asm { L_005fbca3: }
	__asm { mov bl, 1 }
	__asm { L_005fbca5: }
	__asm { push 0xe25ca8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db278], eax }
	__asm { test eax, eax }
	__asm { je L_005fbcb9 }
	__asm { test bl, bl }
	__asm { je L_005fbcbb }
	__asm { L_005fbcb9: }
	__asm { mov bl, 1 }
	__asm { L_005fbcbb: }
	__asm { push 0xe25cc0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db288], eax }
	__asm { test eax, eax }
	__asm { je L_005fbccf }
	__asm { test bl, bl }
	__asm { je L_005fbcd1 }
	__asm { L_005fbccf: }
	__asm { mov bl, 1 }
	__asm { L_005fbcd1: }
	__asm { push 0xe25cd4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db290], eax }
	__asm { test eax, eax }
	__asm { je L_005fbce5 }
	__asm { test bl, bl }
	__asm { je L_005fbce7 }
	__asm { L_005fbce5: }
	__asm { mov bl, 1 }
	__asm { L_005fbce7: }
	__asm { push 0xe25ce8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db298], eax }
	__asm { test eax, eax }
	__asm { je L_005fbcfb }
	__asm { test bl, bl }
	__asm { je L_005fbcfd }
	__asm { L_005fbcfb: }
	__asm { mov bl, 1 }
	__asm { L_005fbcfd: }
	__asm { push 0xe25cf8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db29c], eax }
	__asm { test eax, eax }
	__asm { je L_005fbd11 }
	__asm { test bl, bl }
	__asm { je L_005fbd13 }
	__asm { L_005fbd11: }
	__asm { mov bl, 1 }
	__asm { L_005fbd13: }
	__asm { push 0xe25d0c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db2ac], eax }
	__asm { test eax, eax }
	__asm { je L_005fbd27 }
	__asm { test bl, bl }
	__asm { je L_005fbd29 }
	__asm { L_005fbd27: }
	__asm { mov bl, 1 }
	__asm { L_005fbd29: }
	__asm { push 0xe25d1c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db2b0], eax }
	__asm { test eax, eax }
	__asm { je L_005fbd42 }
	__asm { test bl, bl }
	__asm { jne L_005fbd42 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fbd42: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db4ec[];
extern "C" char g_012db4fc[];
extern "C" char g_012db510[];
extern "C" char g_012db514[];
extern "C" char g_012db528[];
extern "C" char g_012db530[];
extern "C" char g_012db53c[];
extern "C" char g_012db550[];
extern "C" char g_012db558[];
// FUNCTION: ROBLOXSTUDIO 0x005fc2d0
extern "C" __declspec(naked) void asm_005fc2d0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe26240 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe26250 }
	__asm { mov dword ptr [g_012db4ec], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db4fc], eax }
	__asm { test eax, eax }
	__asm { je L_005fc2fd }
	__asm { test bl, bl }
	__asm { je L_005fc2ff }
	__asm { L_005fc2fd: }
	__asm { mov bl, 1 }
	__asm { L_005fc2ff: }
	__asm { push 0xe2626c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db510], eax }
	__asm { test eax, eax }
	__asm { je L_005fc313 }
	__asm { test bl, bl }
	__asm { je L_005fc315 }
	__asm { L_005fc313: }
	__asm { mov bl, 1 }
	__asm { L_005fc315: }
	__asm { push 0xe26288 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db514], eax }
	__asm { test eax, eax }
	__asm { je L_005fc329 }
	__asm { test bl, bl }
	__asm { je L_005fc32b }
	__asm { L_005fc329: }
	__asm { mov bl, 1 }
	__asm { L_005fc32b: }
	__asm { push 0xe262a0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db528], eax }
	__asm { test eax, eax }
	__asm { je L_005fc33f }
	__asm { test bl, bl }
	__asm { je L_005fc341 }
	__asm { L_005fc33f: }
	__asm { mov bl, 1 }
	__asm { L_005fc341: }
	__asm { push 0xe262b8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db530], eax }
	__asm { test eax, eax }
	__asm { je L_005fc355 }
	__asm { test bl, bl }
	__asm { je L_005fc357 }
	__asm { L_005fc355: }
	__asm { mov bl, 1 }
	__asm { L_005fc357: }
	__asm { push 0xe262d0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db53c], eax }
	__asm { test eax, eax }
	__asm { je L_005fc36b }
	__asm { test bl, bl }
	__asm { je L_005fc36d }
	__asm { L_005fc36b: }
	__asm { mov bl, 1 }
	__asm { L_005fc36d: }
	__asm { push 0xe262e8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db550], eax }
	__asm { test eax, eax }
	__asm { je L_005fc381 }
	__asm { test bl, bl }
	__asm { je L_005fc383 }
	__asm { L_005fc381: }
	__asm { mov bl, 1 }
	__asm { L_005fc383: }
	__asm { push 0xe262fc }
	__asm { call esi }
	__asm { mov dword ptr [g_012db558], eax }
	__asm { test eax, eax }
	__asm { je L_005fc39c }
	__asm { test bl, bl }
	__asm { jne L_005fc39c }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fc39c: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db58c[];
extern "C" char g_012db59c[];
extern "C" char g_012db5a8[];
extern "C" char g_012db5b8[];
extern "C" char g_012db5c4[];
extern "C" char g_012db5cc[];
extern "C" char g_012db5dc[];
// FUNCTION: ROBLOXSTUDIO 0x005fc400
extern "C" __declspec(naked) void asm_005fc400()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe26354 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe26368 }
	__asm { mov dword ptr [g_012db58c], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db59c], eax }
	__asm { test eax, eax }
	__asm { je L_005fc42d }
	__asm { test bl, bl }
	__asm { je L_005fc42f }
	__asm { L_005fc42d: }
	__asm { mov bl, 1 }
	__asm { L_005fc42f: }
	__asm { push 0xe26378 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db5a8], eax }
	__asm { test eax, eax }
	__asm { je L_005fc443 }
	__asm { test bl, bl }
	__asm { je L_005fc445 }
	__asm { L_005fc443: }
	__asm { mov bl, 1 }
	__asm { L_005fc445: }
	__asm { push 0xe26388 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db5b8], eax }
	__asm { test eax, eax }
	__asm { je L_005fc459 }
	__asm { test bl, bl }
	__asm { je L_005fc45b }
	__asm { L_005fc459: }
	__asm { mov bl, 1 }
	__asm { L_005fc45b: }
	__asm { push 0xe26398 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db5c4], eax }
	__asm { test eax, eax }
	__asm { je L_005fc46f }
	__asm { test bl, bl }
	__asm { je L_005fc471 }
	__asm { L_005fc46f: }
	__asm { mov bl, 1 }
	__asm { L_005fc471: }
	__asm { push 0xe263a4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db5cc], eax }
	__asm { test eax, eax }
	__asm { je L_005fc485 }
	__asm { test bl, bl }
	__asm { je L_005fc487 }
	__asm { L_005fc485: }
	__asm { mov bl, 1 }
	__asm { L_005fc487: }
	__asm { push 0xe263b4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db5dc], eax }
	__asm { test eax, eax }
	__asm { je L_005fc4a0 }
	__asm { test bl, bl }
	__asm { jne L_005fc4a0 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fc4a0: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dba70[];
extern "C" char g_012dba78[];
extern "C" char g_012dba7c[];
extern "C" char g_012dba88[];
extern "C" char g_012dba90[];
extern "C" char g_012dba98[];
extern "C" char g_012dbaa4[];
// FUNCTION: ROBLOXSTUDIO 0x005fcda0
extern "C" __declspec(naked) void asm_005fcda0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe26c7c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe26c94 }
	__asm { mov dword ptr [g_012dba70], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba78], eax }
	__asm { test eax, eax }
	__asm { je L_005fcdcd }
	__asm { test bl, bl }
	__asm { je L_005fcdcf }
	__asm { L_005fcdcd: }
	__asm { mov bl, 1 }
	__asm { L_005fcdcf: }
	__asm { push 0xe26cb0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba7c], eax }
	__asm { test eax, eax }
	__asm { je L_005fcde3 }
	__asm { test bl, bl }
	__asm { je L_005fcde5 }
	__asm { L_005fcde3: }
	__asm { mov bl, 1 }
	__asm { L_005fcde5: }
	__asm { push 0xe26cc8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba88], eax }
	__asm { test eax, eax }
	__asm { je L_005fcdf9 }
	__asm { test bl, bl }
	__asm { je L_005fcdfb }
	__asm { L_005fcdf9: }
	__asm { mov bl, 1 }
	__asm { L_005fcdfb: }
	__asm { push 0xe26ce0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba90], eax }
	__asm { test eax, eax }
	__asm { je L_005fce0f }
	__asm { test bl, bl }
	__asm { je L_005fce11 }
	__asm { L_005fce0f: }
	__asm { mov bl, 1 }
	__asm { L_005fce11: }
	__asm { push 0xe26cf8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dba98], eax }
	__asm { test eax, eax }
	__asm { je L_005fce25 }
	__asm { test bl, bl }
	__asm { je L_005fce27 }
	__asm { L_005fce25: }
	__asm { mov bl, 1 }
	__asm { L_005fce27: }
	__asm { push 0xe26d14 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbaa4], eax }
	__asm { test eax, eax }
	__asm { je L_005fce40 }
	__asm { test bl, bl }
	__asm { jne L_005fce40 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fce40: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbc84[];
extern "C" char g_012dbc90[];
extern "C" char g_012dbc94[];
extern "C" char g_012dbc9c[];
extern "C" char g_012dbca4[];
extern "C" char g_012dbcb0[];
// FUNCTION: ROBLOXSTUDIO 0x005fd370
extern "C" __declspec(naked) void asm_005fd370()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe271ec }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe27200 }
	__asm { mov dword ptr [g_012dbc84], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc90], eax }
	__asm { test eax, eax }
	__asm { je L_005fd39d }
	__asm { test bl, bl }
	__asm { je L_005fd39f }
	__asm { L_005fd39d: }
	__asm { mov bl, 1 }
	__asm { L_005fd39f: }
	__asm { push 0xe27210 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc94], eax }
	__asm { test eax, eax }
	__asm { je L_005fd3b3 }
	__asm { test bl, bl }
	__asm { je L_005fd3b5 }
	__asm { L_005fd3b3: }
	__asm { mov bl, 1 }
	__asm { L_005fd3b5: }
	__asm { push 0xe27224 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbc9c], eax }
	__asm { test eax, eax }
	__asm { je L_005fd3c9 }
	__asm { test bl, bl }
	__asm { je L_005fd3cb }
	__asm { L_005fd3c9: }
	__asm { mov bl, 1 }
	__asm { L_005fd3cb: }
	__asm { push 0xe27234 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbca4], eax }
	__asm { test eax, eax }
	__asm { je L_005fd3df }
	__asm { test bl, bl }
	__asm { je L_005fd3e1 }
	__asm { L_005fd3df: }
	__asm { mov bl, 1 }
	__asm { L_005fd3e1: }
	__asm { push 0xe27250 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbcb0], eax }
	__asm { test eax, eax }
	__asm { je L_005fd3fa }
	__asm { test bl, bl }
	__asm { jne L_005fd3fa }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fd3fa: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012dbdb0[];
extern "C" char g_012dbdb8[];
extern "C" char g_012dbdbc[];
extern "C" char g_012dbdc8[];
extern "C" char g_012dbdd0[];
extern "C" char g_012dbdd4[];
// FUNCTION: ROBLOXSTUDIO 0x005fd700
extern "C" __declspec(naked) void asm_005fd700()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe275b4 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe275d8 }
	__asm { mov dword ptr [g_012dbdb0], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbdb8], eax }
	__asm { test eax, eax }
	__asm { je L_005fd72d }
	__asm { test bl, bl }
	__asm { je L_005fd72f }
	__asm { L_005fd72d: }
	__asm { mov bl, 1 }
	__asm { L_005fd72f: }
	__asm { push 0xe275fc }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbdbc], eax }
	__asm { test eax, eax }
	__asm { je L_005fd743 }
	__asm { test bl, bl }
	__asm { je L_005fd745 }
	__asm { L_005fd743: }
	__asm { mov bl, 1 }
	__asm { L_005fd745: }
	__asm { push 0xe27624 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbdc8], eax }
	__asm { test eax, eax }
	__asm { je L_005fd759 }
	__asm { test bl, bl }
	__asm { je L_005fd75b }
	__asm { L_005fd759: }
	__asm { mov bl, 1 }
	__asm { L_005fd75b: }
	__asm { push 0xe27644 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbdd0], eax }
	__asm { test eax, eax }
	__asm { je L_005fd76f }
	__asm { test bl, bl }
	__asm { je L_005fd771 }
	__asm { L_005fd76f: }
	__asm { mov bl, 1 }
	__asm { L_005fd771: }
	__asm { push 0xe2766c }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbdd4], eax }
	__asm { test eax, eax }
	__asm { je L_005fd78a }
	__asm { test bl, bl }
	__asm { jne L_005fd78a }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fd78a: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d981c[];
extern "C" char g_012d9824[];
extern "C" char g_012d982c[];
extern "C" char g_012d9834[];
extern "C" char g_012dbddc[];
extern "C" char g_012dbde8[];
extern "C" char g_012dbdec[];
extern "C" char g_012dbdf8[];
extern "C" char g_012dbe00[];
extern "C" char g_012dbe04[];
extern "C" char g_012dbe0c[];
// FUNCTION: ROBLOXSTUDIO 0x005fd790
extern "C" __declspec(naked) void asm_005fd790()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2768c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe276a0 }
	__asm { mov dword ptr [g_012dbddc], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbde8], eax }
	__asm { test eax, eax }
	__asm { je L_005fd7bd }
	__asm { test bl, bl }
	__asm { je L_005fd7bf }
	__asm { L_005fd7bd: }
	__asm { mov bl, 1 }
	__asm { L_005fd7bf: }
	__asm { push 0xe276bc }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbdec], eax }
	__asm { test eax, eax }
	__asm { je L_005fd7d3 }
	__asm { test bl, bl }
	__asm { je L_005fd7d5 }
	__asm { L_005fd7d3: }
	__asm { mov bl, 1 }
	__asm { L_005fd7d5: }
	__asm { push 0xe276d0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbdf8], eax }
	__asm { test eax, eax }
	__asm { je L_005fd7e9 }
	__asm { test bl, bl }
	__asm { je L_005fd7eb }
	__asm { L_005fd7e9: }
	__asm { mov bl, 1 }
	__asm { L_005fd7eb: }
	__asm { push 0xe276e8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbe00], eax }
	__asm { test eax, eax }
	__asm { je L_005fd7ff }
	__asm { test bl, bl }
	__asm { je L_005fd801 }
	__asm { L_005fd7ff: }
	__asm { mov bl, 1 }
	__asm { L_005fd801: }
	__asm { push 0xe276fc }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbe04], eax }
	__asm { test eax, eax }
	__asm { je L_005fd815 }
	__asm { test bl, bl }
	__asm { je L_005fd817 }
	__asm { L_005fd815: }
	__asm { mov bl, 1 }
	__asm { L_005fd817: }
	__asm { push 0xe27718 }
	__asm { call esi }
	__asm { mov dword ptr [g_012dbe0c], eax }
	__asm { test eax, eax }
	__asm { je L_005fd82b }
	__asm { test bl, bl }
	__asm { je L_005fd82d }
	__asm { L_005fd82b: }
	__asm { mov bl, 1 }
	__asm { L_005fd82d: }
	__asm { push 0xe27730 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d981c], eax }
	__asm { test eax, eax }
	__asm { je L_005fd841 }
	__asm { test bl, bl }
	__asm { je L_005fd843 }
	__asm { L_005fd841: }
	__asm { mov bl, 1 }
	__asm { L_005fd843: }
	__asm { push 0xe27750 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9824], eax }
	__asm { test eax, eax }
	__asm { je L_005fd857 }
	__asm { test bl, bl }
	__asm { je L_005fd859 }
	__asm { L_005fd857: }
	__asm { mov bl, 1 }
	__asm { L_005fd859: }
	__asm { push 0xe27768 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d982c], eax }
	__asm { test eax, eax }
	__asm { je L_005fd86d }
	__asm { test bl, bl }
	__asm { je L_005fd86f }
	__asm { L_005fd86d: }
	__asm { mov bl, 1 }
	__asm { L_005fd86f: }
	__asm { push 0xe27788 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9834], eax }
	__asm { test eax, eax }
	__asm { je L_005fd888 }
	__asm { test bl, bl }
	__asm { jne L_005fd888 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fd888: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9838[];
extern "C" char g_012d9840[];
extern "C" char g_012d984c[];
extern "C" char g_012d9850[];
extern "C" char g_012d9858[];
extern "C" char g_012d9864[];
extern "C" char g_012d986c[];
// FUNCTION: ROBLOXSTUDIO 0x005fd890
extern "C" __declspec(naked) void asm_005fd890()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe277a8 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe277c4 }
	__asm { mov dword ptr [g_012d9838], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9840], eax }
	__asm { test eax, eax }
	__asm { je L_005fd8bd }
	__asm { test bl, bl }
	__asm { je L_005fd8bf }
	__asm { L_005fd8bd: }
	__asm { mov bl, 1 }
	__asm { L_005fd8bf: }
	__asm { push 0xe277e4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d984c], eax }
	__asm { test eax, eax }
	__asm { je L_005fd8d3 }
	__asm { test bl, bl }
	__asm { je L_005fd8d5 }
	__asm { L_005fd8d3: }
	__asm { mov bl, 1 }
	__asm { L_005fd8d5: }
	__asm { push 0xe27800 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9850], eax }
	__asm { test eax, eax }
	__asm { je L_005fd8e9 }
	__asm { test bl, bl }
	__asm { je L_005fd8eb }
	__asm { L_005fd8e9: }
	__asm { mov bl, 1 }
	__asm { L_005fd8eb: }
	__asm { push 0xe2781c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9858], eax }
	__asm { test eax, eax }
	__asm { je L_005fd8ff }
	__asm { test bl, bl }
	__asm { je L_005fd901 }
	__asm { L_005fd8ff: }
	__asm { mov bl, 1 }
	__asm { L_005fd901: }
	__asm { push 0xe27834 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9864], eax }
	__asm { test eax, eax }
	__asm { je L_005fd915 }
	__asm { test bl, bl }
	__asm { je L_005fd917 }
	__asm { L_005fd915: }
	__asm { mov bl, 1 }
	__asm { L_005fd917: }
	__asm { push 0xe27850 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d986c], eax }
	__asm { test eax, eax }
	__asm { je L_005fd930 }
	__asm { test bl, bl }
	__asm { jne L_005fd930 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fd930: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9874[];
extern "C" char g_012d9878[];
extern "C" char g_012d9880[];
extern "C" char g_012d988c[];
extern "C" char g_012d9890[];
extern "C" char g_012d989c[];
extern "C" char g_012d98a4[];
extern "C" char g_012d98a8[];
extern "C" char g_012d98b0[];
extern "C" char g_012d98bc[];
// FUNCTION: ROBLOXSTUDIO 0x005fd940
extern "C" __declspec(naked) void asm_005fd940()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2786c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe2787c }
	__asm { mov dword ptr [g_012d9874], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9878], eax }
	__asm { test eax, eax }
	__asm { je L_005fd96d }
	__asm { test bl, bl }
	__asm { je L_005fd96f }
	__asm { L_005fd96d: }
	__asm { mov bl, 1 }
	__asm { L_005fd96f: }
	__asm { push 0xe27894 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9880], eax }
	__asm { test eax, eax }
	__asm { je L_005fd983 }
	__asm { test bl, bl }
	__asm { je L_005fd985 }
	__asm { L_005fd983: }
	__asm { mov bl, 1 }
	__asm { L_005fd985: }
	__asm { push 0xe278a4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d988c], eax }
	__asm { test eax, eax }
	__asm { je L_005fd999 }
	__asm { test bl, bl }
	__asm { je L_005fd99b }
	__asm { L_005fd999: }
	__asm { mov bl, 1 }
	__asm { L_005fd99b: }
	__asm { push 0xe278b8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9890], eax }
	__asm { test eax, eax }
	__asm { je L_005fd9af }
	__asm { test bl, bl }
	__asm { je L_005fd9b1 }
	__asm { L_005fd9af: }
	__asm { mov bl, 1 }
	__asm { L_005fd9b1: }
	__asm { push 0xe278d0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d989c], eax }
	__asm { test eax, eax }
	__asm { je L_005fd9c5 }
	__asm { test bl, bl }
	__asm { je L_005fd9c7 }
	__asm { L_005fd9c5: }
	__asm { mov bl, 1 }
	__asm { L_005fd9c7: }
	__asm { push 0xe278f0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d98a4], eax }
	__asm { test eax, eax }
	__asm { je L_005fd9db }
	__asm { test bl, bl }
	__asm { je L_005fd9dd }
	__asm { L_005fd9db: }
	__asm { mov bl, 1 }
	__asm { L_005fd9dd: }
	__asm { push 0xe27910 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d98a8], eax }
	__asm { test eax, eax }
	__asm { je L_005fd9f1 }
	__asm { test bl, bl }
	__asm { je L_005fd9f3 }
	__asm { L_005fd9f1: }
	__asm { mov bl, 1 }
	__asm { L_005fd9f3: }
	__asm { push 0xe27928 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d98b0], eax }
	__asm { test eax, eax }
	__asm { je L_005fda07 }
	__asm { test bl, bl }
	__asm { je L_005fda09 }
	__asm { L_005fda07: }
	__asm { mov bl, 1 }
	__asm { L_005fda09: }
	__asm { push 0xe27940 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d98bc], eax }
	__asm { test eax, eax }
	__asm { je L_005fda22 }
	__asm { test bl, bl }
	__asm { jne L_005fda22 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fda22: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012d9c2c[];
extern "C" char g_012d9c30[];
extern "C" char g_012d9c38[];
extern "C" char g_012d9c44[];
extern "C" char g_012d9c48[];
extern "C" char g_012d9c50[];
// FUNCTION: ROBLOXSTUDIO 0x005fe3f0
extern "C" __declspec(naked) void asm_005fe3f0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe28340 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe28354 }
	__asm { mov dword ptr [g_012d9c2c], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c30], eax }
	__asm { test eax, eax }
	__asm { je L_005fe41d }
	__asm { test bl, bl }
	__asm { je L_005fe41f }
	__asm { L_005fe41d: }
	__asm { mov bl, 1 }
	__asm { L_005fe41f: }
	__asm { push 0xe28364 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c38], eax }
	__asm { test eax, eax }
	__asm { je L_005fe433 }
	__asm { test bl, bl }
	__asm { je L_005fe435 }
	__asm { L_005fe433: }
	__asm { mov bl, 1 }
	__asm { L_005fe435: }
	__asm { push 0xe28378 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c44], eax }
	__asm { test eax, eax }
	__asm { je L_005fe449 }
	__asm { test bl, bl }
	__asm { je L_005fe44b }
	__asm { L_005fe449: }
	__asm { mov bl, 1 }
	__asm { L_005fe44b: }
	__asm { push 0xe28388 }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c48], eax }
	__asm { test eax, eax }
	__asm { je L_005fe45f }
	__asm { test bl, bl }
	__asm { je L_005fe461 }
	__asm { L_005fe45f: }
	__asm { mov bl, 1 }
	__asm { L_005fe461: }
	__asm { push 0xe2839c }
	__asm { call esi }
	__asm { mov dword ptr [g_012d9c50], eax }
	__asm { test eax, eax }
	__asm { je L_005fe47a }
	__asm { test bl, bl }
	__asm { jne L_005fe47a }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005fe47a: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012da0ec[];
extern "C" char g_012da100[];
extern "C" char g_012da104[];
extern "C" char g_012da114[];
extern "C" char g_012da124[];
extern "C" char g_012da128[];
extern "C" char g_012da13c[];
// FUNCTION: ROBLOXSTUDIO 0x005fef70
extern "C" __declspec(naked) void asm_005fef70()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe28c60 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe28c7c }
	__asm { mov dword ptr [g_012da0ec], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012da100], eax }
	__asm { test eax, eax }
	__asm { je L_005fef9d }
	__asm { test bl, bl }
	__asm { je L_005fef9f }
	__asm { L_005fef9d: }
	__asm { mov bl, 1 }
	__asm { L_005fef9f: }
	__asm { push 0xe28c94 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da104], eax }
	__asm { test eax, eax }
	__asm { je L_005fefb3 }
	__asm { test bl, bl }
	__asm { je L_005fefb5 }
	__asm { L_005fefb3: }
	__asm { mov bl, 1 }
	__asm { L_005fefb5: }
	__asm { push 0xe28cac }
	__asm { call esi }
	__asm { mov dword ptr [g_012da114], eax }
	__asm { test eax, eax }
	__asm { je L_005fefc9 }
	__asm { test bl, bl }
	__asm { je L_005fefcb }
	__asm { L_005fefc9: }
	__asm { mov bl, 1 }
	__asm { L_005fefcb: }
	__asm { push 0xe28cc4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da124], eax }
	__asm { test eax, eax }
	__asm { je L_005fefdf }
	__asm { test bl, bl }
	__asm { je L_005fefe1 }
	__asm { L_005fefdf: }
	__asm { mov bl, 1 }
	__asm { L_005fefe1: }
	__asm { push 0xe28cdc }
	__asm { call esi }
	__asm { mov dword ptr [g_012da128], eax }
	__asm { test eax, eax }
	__asm { je L_005feff5 }
	__asm { test bl, bl }
	__asm { je L_005feff7 }
	__asm { L_005feff5: }
	__asm { mov bl, 1 }
	__asm { L_005feff7: }
	__asm { push 0xe28cf4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012da13c], eax }
	__asm { test eax, eax }
	__asm { je L_005ff010 }
	__asm { test bl, bl }
	__asm { jne L_005ff010 }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_005ff010: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db43c[];
extern "C" char g_012db448[];
extern "C" char g_012db458[];
extern "C" char g_012db460[];
extern "C" char g_012db46c[];
extern "C" char g_012db47c[];
extern "C" char g_012db488[];
extern "C" char g_012db494[];
extern "C" char g_012db4a4[];
// FUNCTION: ROBLOXSTUDIO 0x006039e0
extern "C" __declspec(naked) void asm_006039e0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2c4f8 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe2c518 }
	__asm { mov dword ptr [g_012db43c], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db448], eax }
	__asm { test eax, eax }
	__asm { je L_00603a0d }
	__asm { test bl, bl }
	__asm { je L_00603a0f }
	__asm { L_00603a0d: }
	__asm { mov bl, 1 }
	__asm { L_00603a0f: }
	__asm { push 0xe2c538 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db458], eax }
	__asm { test eax, eax }
	__asm { je L_00603a23 }
	__asm { test bl, bl }
	__asm { je L_00603a25 }
	__asm { L_00603a23: }
	__asm { mov bl, 1 }
	__asm { L_00603a25: }
	__asm { push 0xe2c560 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db460], eax }
	__asm { test eax, eax }
	__asm { je L_00603a39 }
	__asm { test bl, bl }
	__asm { je L_00603a3b }
	__asm { L_00603a39: }
	__asm { mov bl, 1 }
	__asm { L_00603a3b: }
	__asm { push 0xe2c580 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db46c], eax }
	__asm { test eax, eax }
	__asm { je L_00603a4f }
	__asm { test bl, bl }
	__asm { je L_00603a51 }
	__asm { L_00603a4f: }
	__asm { mov bl, 1 }
	__asm { L_00603a51: }
	__asm { push 0xe2c598 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db47c], eax }
	__asm { test eax, eax }
	__asm { je L_00603a65 }
	__asm { test bl, bl }
	__asm { je L_00603a67 }
	__asm { L_00603a65: }
	__asm { mov bl, 1 }
	__asm { L_00603a67: }
	__asm { push 0xe2c5bc }
	__asm { call esi }
	__asm { mov dword ptr [g_012db488], eax }
	__asm { test eax, eax }
	__asm { je L_00603a7b }
	__asm { test bl, bl }
	__asm { je L_00603a7d }
	__asm { L_00603a7b: }
	__asm { mov bl, 1 }
	__asm { L_00603a7d: }
	__asm { push 0xe2c5cc }
	__asm { call esi }
	__asm { mov dword ptr [g_012db494], eax }
	__asm { test eax, eax }
	__asm { je L_00603a91 }
	__asm { test bl, bl }
	__asm { je L_00603a93 }
	__asm { L_00603a91: }
	__asm { mov bl, 1 }
	__asm { L_00603a93: }
	__asm { push 0xe2c5e0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db4a4], eax }
	__asm { test eax, eax }
	__asm { je L_00603aac }
	__asm { test bl, bl }
	__asm { jne L_00603aac }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_00603aac: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db94c[];
extern "C" char g_012db954[];
extern "C" char g_012db964[];
extern "C" char g_012db96c[];
extern "C" char g_012db980[];
extern "C" char g_012db98c[];
// FUNCTION: ROBLOXSTUDIO 0x006044d0
extern "C" __declspec(naked) void asm_006044d0()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2cf8c }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe2cfa0 }
	__asm { mov dword ptr [g_012db94c], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db954], eax }
	__asm { test eax, eax }
	__asm { je L_006044fd }
	__asm { test bl, bl }
	__asm { je L_006044ff }
	__asm { L_006044fd: }
	__asm { mov bl, 1 }
	__asm { L_006044ff: }
	__asm { push 0xe2cfb4 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db964], eax }
	__asm { test eax, eax }
	__asm { je L_00604513 }
	__asm { test bl, bl }
	__asm { je L_00604515 }
	__asm { L_00604513: }
	__asm { mov bl, 1 }
	__asm { L_00604515: }
	__asm { push 0xe2cfc8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db96c], eax }
	__asm { test eax, eax }
	__asm { je L_00604529 }
	__asm { test bl, bl }
	__asm { je L_0060452b }
	__asm { L_00604529: }
	__asm { mov bl, 1 }
	__asm { L_0060452b: }
	__asm { push 0xe2cfe0 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db980], eax }
	__asm { test eax, eax }
	__asm { je L_0060453f }
	__asm { test bl, bl }
	__asm { je L_00604541 }
	__asm { L_0060453f: }
	__asm { mov bl, 1 }
	__asm { L_00604541: }
	__asm { push 0xe2cff8 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db98c], eax }
	__asm { test eax, eax }
	__asm { je L_0060455a }
	__asm { test bl, bl }
	__asm { jne L_0060455a }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_0060455a: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e108b8[];
extern "C" char g_012db998[];
extern "C" char g_012db99c[];
extern "C" char g_012db9a8[];
extern "C" char g_012db9b4[];
extern "C" char g_012db9c0[];
extern "C" char g_012db9d0[];
// FUNCTION: ROBLOXSTUDIO 0x00604560
extern "C" __declspec(naked) void asm_00604560()
{
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [g_00e108b8] }
	__asm { push 0xe2d010 }
	__asm { call esi }
	__asm { test eax, eax }
	__asm { push 0xe2d024 }
	__asm { mov dword ptr [g_012db998], eax }
	__asm { sete bl }
	__asm { call esi }
	__asm { mov dword ptr [g_012db99c], eax }
	__asm { test eax, eax }
	__asm { je L_0060458d }
	__asm { test bl, bl }
	__asm { je L_0060458f }
	__asm { L_0060458d: }
	__asm { mov bl, 1 }
	__asm { L_0060458f: }
	__asm { push 0xe2d038 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db9a8], eax }
	__asm { test eax, eax }
	__asm { je L_006045a3 }
	__asm { test bl, bl }
	__asm { je L_006045a5 }
	__asm { L_006045a3: }
	__asm { mov bl, 1 }
	__asm { L_006045a5: }
	__asm { push 0xe2d050 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db9b4], eax }
	__asm { test eax, eax }
	__asm { je L_006045b9 }
	__asm { test bl, bl }
	__asm { je L_006045bb }
	__asm { L_006045b9: }
	__asm { mov bl, 1 }
	__asm { L_006045bb: }
	__asm { push 0xe2d06c }
	__asm { call esi }
	__asm { mov dword ptr [g_012db9c0], eax }
	__asm { test eax, eax }
	__asm { je L_006045cf }
	__asm { test bl, bl }
	__asm { je L_006045d1 }
	__asm { L_006045cf: }
	__asm { mov bl, 1 }
	__asm { L_006045d1: }
	__asm { push 0xe2d080 }
	__asm { call esi }
	__asm { mov dword ptr [g_012db9d0], eax }
	__asm { test eax, eax }
	__asm { je L_006045ea }
	__asm { test bl, bl }
	__asm { jne L_006045ea }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { ret }
	__asm { L_006045ea: }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { ret }
}

extern "C" char g_00e10858[];
extern "C" char g_00e10878[];
extern "C" char g_012da360[];
extern "C" char g_012dadec[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00606750
extern "C" __declspec(naked) void asm_00606750()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x40 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x34] }
	__asm { push edi }
	__asm { push 0x8d40 }
	__asm { call dword ptr [g_012dadec] }
	__asm { push dword ptr [esi + 0x2c] }
	__asm { push dword ptr [esi + 0x28] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call dword ptr [g_00e10878] }
	__asm { mov ebx, dword ptr [esi + 0x3c] }
	__asm { sub ebx, dword ptr [esi + 0x38] }
	__asm { sar ebx, 3 }
	__asm { test edi, edi }
	__asm { jne L_0060679c }
	__asm { push 0x405 }
	__asm { call dword ptr [g_00e10858] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0060679c: }
	__asm { cmp dword ptr [g_012da360], 0 }
	__asm { je L_0060680b }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_006067eb }
	__asm { cmp ebx, 0x10 }
	__asm { jb L_006067eb }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006067da }
	__asm { push 0x8f }
	__asm { push 0xe2fbc0 }
	__asm { push 0xe2fe4c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006067eb }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006067da: }
	__asm { movzx eax, al }
	__asm { push 0xe2fe70 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006067eb: }
	__asm { xor ecx, ecx }
	__asm { test ebx, ebx }
	__asm { je L_00606800 }
	__asm { L_006067f1: }
	__asm { lea eax, [ecx + 0x8ce0] }
	__asm { mov dword ptr [ebp + ecx*4 - 0x40], eax }
	__asm { inc ecx }
	__asm { cmp ecx, ebx }
	__asm { jb L_006067f1 }
	__asm { L_00606800: }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { push ebx }
	__asm { call dword ptr [g_012da360] }
	__asm { L_0060680b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10830[];
extern "C" char g_00e10834[];
extern "C" char g_00e10838[];
extern "C" char g_00e1083c[];
extern "C" char g_00e10870[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00606820
extern "C" __declspec(naked) void asm_00606820()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { xor esi, esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test bl, 1 }
	__asm { je L_00606875 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 8] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 8], esi }
	__asm { mov dword ptr [ebp - 4], 0xf }
	__asm { call dword ptr [eax + 0x34] }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x10 }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { mov esi, 0x4000 }
	__asm { fstp dword ptr [esp + 0xc] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [esp + 8] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [esp] }
	__asm { call dword ptr [g_00e10834] }
	__asm { L_00606875: }
	__asm { test bl, 2 }
	__asm { je L_006068ac }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { push ecx }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [ebp - 0xc], 0 }
	__asm { mov byte ptr [ebp - 8], 1 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [eax + 0x38] }
	__asm { fld dword ptr [ebp + 0x10] }
	__asm { sub esp, 8 }
	__asm { or esi, 0x100 }
	__asm { fstp qword ptr [esp] }
	__asm { call dword ptr [g_00e10838] }
	__asm { L_006068ac: }
	__asm { test bl, 4 }
	__asm { je L_006068c8 }
	__asm { push -1 }
	__asm { call dword ptr [g_00e10870] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { or esi, 0x400 }
	__asm { call dword ptr [g_00e1083c] }
	__asm { L_006068c8: }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0060690d }
	__asm { test esi, esi }
	__asm { jne L_0060690d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006068fc }
	__asm { push 0xb8 }
	__asm { push 0xe2fbc0 }
	__asm { push 0xe2fef0 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060690d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006068fc: }
	__asm { movzx eax, al }
	__asm { push 0xe2fef8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060690d: }
	__asm { push esi }
	__asm { call dword ptr [g_00e10830] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10828[];
extern "C" char g_00e10844[];
extern "C" char g_00e10860[];
extern "C" char g_00e108c0[];
extern "C" char g_012d9db0[];
extern "C" char g_012dadec[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00606920
extern "C" __declspec(naked) void asm_00606920()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ebx, ecx }
	__asm { je L_006069c6 }
	__asm { cmp dword ptr [edi + 0x28], 0 }
	__asm { je L_00606977 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00606962 }
	__asm { push 0xbe }
	__asm { push 0xe2fbc0 }
	__asm { push 0xe1879c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00606977 }
	__asm { L_00606962: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe2ff60 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00606977: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006069c6 }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { cmp eax, dword ptr [edi + 0x30] }
	__asm { jne L_00606990 }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { cmp eax, dword ptr [edi + 0x34] }
	__asm { je L_006069c6 }
	__asm { L_00606990: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006069b1 }
	__asm { push 0xbf }
	__asm { push 0xe2fbc0 }
	__asm { push 0xe188f0 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006069c6 }
	__asm { L_006069b1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe2ffe8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006069c6: }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0x8ca6 }
	__asm { mov dword ptr [ebx + 0x1c], 0 }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { call dword ptr [g_00e10860] }
	__asm { push dword ptr [esi + 0x34] }
	__asm { push 0x8d40 }
	__asm { call dword ptr [g_012dadec] }
	__asm { push 0x84c0 }
	__asm { call dword ptr [g_012d9db0] }
	__asm { push dword ptr [edi + 0x4c] }
	__asm { mov esi, dword ptr [g_00e10828] }
	__asm { push 0xde1 }
	__asm { call esi }
	__asm { push 0x8ce0 }
	__asm { call dword ptr [g_00e108c0] }
	__asm { push dword ptr [edi + 0x34] }
	__asm { push dword ptr [edi + 0x30] }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { push 0xde1 }
	__asm { call dword ptr [g_00e10844] }
	__asm { push 0 }
	__asm { push 0xde1 }
	__asm { call esi }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0x8d40 }
	__asm { call dword ptr [g_012dadec] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0060f150();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00606c50
extern "C" __declspec(naked) void asm_00606c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { sub esp, 0x18 }
	__asm { cmp dword ptr [edx], 2 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { jne L_00606c7a }
	__asm { cmp dword ptr [edx + 8], 0 }
	__asm { jne L_00606c7a }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [ebp - 0xc], 2 }
	__asm { jmp L_00606c88 }
	__asm { L_00606c7a: }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { L_00606c88: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0xc] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ecx + 4] }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ecx + 8] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00606ce8 }
	__asm { cmp esi, 8 }
	__asm { jb L_00606ce8 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_00606cd7 }
	__asm { push 0x133 }
	__asm { push 0xe2fbc0 }
	__asm { push 0xe2fc10 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00606ce8 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_00606cd7: }
	__asm { movzx eax, al }
	__asm { push 0xe30258 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00606ce8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { lea eax, [esi + 7] }
	__asm { lea eax, [edi + eax*4] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_0060f150 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_00e1082c[];
extern "C" char g_00e10840[];
extern "C" char g_00e10854[];
extern "C" char g_00e1085c[];
// FUNCTION: ROBLOXSTUDIO 0x00606dd0
extern "C" __declspec(naked) void asm_00606dd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ecx + 0x44] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp eax, dword ptr [esi] }
	__asm { jne L_00606de6 }
	__asm { mov eax, dword ptr [ecx + 0x48] }
	__asm { cmp eax, dword ptr [esi + 4] }
	__asm { je L_00606e56 }
	__asm { L_00606de6: }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ecx + 0x44], eax }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov dword ptr [ecx + 0x48], eax }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, ecx }
	__asm { shr eax, 3 }
	__asm { and al, 1 }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { mov eax, ecx }
	__asm { shr eax, 2 }
	__asm { and al, 1 }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { mov eax, ecx }
	__asm { shr eax, 1 }
	__asm { and al, 1 }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { and cl, 1 }
	__asm { movzx eax, cl }
	__asm { push eax }
	__asm { call dword ptr [g_00e10840] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { jne L_00606e35 }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], 0xbe2 }
	__asm { pop ebp }
	__asm { jmp dword ptr [g_00e10854] }
	__asm { L_00606e35: }
	__asm { push 0xbe2 }
	__asm { call dword ptr [g_00e1085c] }
	__asm { mov eax, dword ptr [esi] }
	__asm { push dword ptr [eax*8 + 0xe2fb34] }
	__asm { push dword ptr [eax*8 + 0xe2fb30] }
	__asm { call dword ptr [g_00e1082c] }
	__asm { L_00606e56: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_006070a0();
// FUNCTION: ROBLOXSTUDIO 0x00607110
extern "C" __declspec(naked) void asm_00607110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00607175 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx] }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { dec eax }
	__asm { cmp eax, edi }
	__asm { jae L_0060713d }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0060713d: }
	__asm { sub esi, ebx }
	__asm { sub edx, ebx }
	__asm { add esi, edi }
	__asm { mov edi, edx }
	__asm { shr edi, 1 }
	__asm { or eax, 0xffffffff }
	__asm { sub eax, edi }
	__asm { pop ebx }
	__asm { cmp eax, edx }
	__asm { jae L_00607163 }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_006070a0 }
	__asm { L_00607163: }
	__asm { add edx, edi }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_006070a0 }
	__asm { L_00607175: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10500[];
extern "C" void fn_00607110();
extern "C" void fn_00cf6804();
// FUNCTION: ROBLOXSTUDIO 0x006071e0
extern "C" __declspec(naked) void asm_006071e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, eax }
	__asm { sub ecx, edx }
	__asm { cmp ecx, esi }
	__asm { jbe L_00607228 }
	__asm { add esi, edx }
	__asm { cmp esi, edx }
	__asm { jne L_00607206 }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00607206: }
	__asm { cmp esi, eax }
	__asm { je L_00607252 }
	__asm { push edi }
	__asm { mov edi, eax }
	__asm { sub edi, eax }
	__asm { push edi }
	__asm { push eax }
	__asm { push esi }
	__asm { call dword ptr [g_00e10500] }
	__asm { add esp, 0xc }
	__asm { lea eax, [edi + esi] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00607228: }
	__asm { jae L_00607252 }
	__asm { sub edx, eax }
	__asm { add edx, esi }
	__asm { push edx }
	__asm { mov ecx, ebx }
	__asm { call fn_00607110 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { mov eax, dword ptr [ebx] }
	__asm { sub eax, ecx }
	__asm { add eax, esi }
	__asm { push eax }
	__asm { push 0 }
	__asm { push ecx }
	__asm { call fn_00cf6804 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0xc }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { L_00607252: }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_005eb480();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00607600
extern "C" __declspec(naked) void asm_00607600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ee65 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe30344 }
	__asm { mov ecx, dword ptr [esi + 0x50] }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { test ecx, ecx }
	__asm { je L_00607639 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00607639: }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { test eax, eax }
	__asm { je L_0060765e }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x38], 0 }
	__asm { mov dword ptr [esi + 0x3c], 0 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { L_0060765e: }
	__asm { mov ecx, dword ptr [esi + 0x34] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test ecx, ecx }
	__asm { je L_0060766f }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_0060766f: }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_00607680 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00607680: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_005eb480 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00606490();
extern "C" void fn_00609370();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006077f0
extern "C" __declspec(naked) void asm_006077f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { je L_0060788b }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { cmp eax, dword ptr [esi + 0x3c] }
	__asm { je L_00607845 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00607830 }
	__asm { push 0x142 }
	__asm { push 0xe30498 }
	__asm { push 0xe196c4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00607845 }
	__asm { L_00607830: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe30568 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00607845: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0060788b }
	__asm { mov eax, dword ptr [edi] }
	__asm { cmp eax, dword ptr [edi + 4] }
	__asm { jne L_0060788b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00607876 }
	__asm { push 0x143 }
	__asm { push 0xe30498 }
	__asm { push 0xe19754 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060788b }
	__asm { L_00607876: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe305d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060788b: }
	__asm { lea ecx, [esi + 0x38] }
	__asm { push edi }
	__asm { call fn_00609370 }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [esi + 0x30] }
	__asm { call fn_00606490 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00402f60();
extern "C" void fn_00609060();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00607b80
extern "C" __declspec(naked) void asm_00607b80()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test bl, bl }
	__asm { je L_00607c09 }
	__asm { mov ecx, dword ptr [ebp + 0x14] }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { mov esi, dword ptr [ecx + 0x10] }
	__asm { jb L_00607ba5 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_00607ba5: }
	__asm { mov eax, 4 }
	__asm { cmp esi, eax }
	__asm { cmovb eax, esi }
	__asm { push eax }
	__asm { push 0xe3064c }
	__asm { push ecx }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { jne L_00607bd1 }
	__asm { cmp esi, 4 }
	__asm { jb L_00607bd1 }
	__asm { cmp esi, 4 }
	__asm { setne al }
	__asm { test eax, eax }
	__asm { je L_00607c09 }
	__asm { L_00607bd1: }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00607bf8 }
	__asm { push 0x15c }
	__asm { push 0xe30498 }
	__asm { push 0xe30654 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00607c09 }
	__asm { mov bl, byte ptr [g_012de657] }
	__asm { L_00607bf8: }
	__asm { movzx eax, bl }
	__asm { push 0xe30670 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00607c09: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ecx + 0x14] }
	__asm { cmp edx, 0x10 }
	__asm { jb L_00607c18 }
	__asm { mov esi, dword ptr [ecx] }
	__asm { jmp L_00607c1a }
	__asm { L_00607c18: }
	__asm { mov esi, ecx }
	__asm { L_00607c1a: }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { add eax, esi }
	__asm { cmp edx, 0x10 }
	__asm { jb L_00607c26 }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_00607c26: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { push ecx }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { call fn_00609060 }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_00608f30();
extern "C" void fn_0060ae10();
extern "C" void fn_0068eca0();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00607c50
extern "C" __declspec(naked) void asm_00607c50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0eec3 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { jne L_00607c9a }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0xe19998 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00607c9a: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { call fn_0068eca0 }
	__asm { push 0x30 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00607ce9 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_0060ae10 }
	__asm { jmp L_00607ceb }
	__asm { L_00607ce9: }
	__asm { xor eax, eax }
	__asm { L_00607ceb: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00608f30 }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { jb L_00607d0b }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00607d0b: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_00608520();
extern "C" void fn_0060af20();
extern "C" void fn_0068eca0();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00607d20
extern "C" __declspec(naked) void asm_00607d20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0eee0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { cmp byte ptr [esi + 0xd], 0 }
	__asm { jne L_00607d6a }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0xe19998 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00607d6a: }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push dword ptr [eax + 4] }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { push dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { call fn_0068eca0 }
	__asm { push 0x38 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_00607db9 }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_0060af20 }
	__asm { jmp L_00607dbb }
	__asm { L_00607db9: }
	__asm { xor eax, eax }
	__asm { L_00607dbb: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { call fn_00608520 }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { jb L_00607ddb }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00607ddb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012dadf0[];
extern "C" char g_012dae54[];
extern "C" char g_012dae88[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005eb960();
extern "C" void fn_0060f270();
extern "C" void fn_006b9740();
extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00609670
extern "C" __declspec(naked) void asm_00609670()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f095 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x18] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, ecx }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_005eb960 }
	__asm { lea ebx, [esi + 0x3c] }
	__asm { mov dword ptr [esi], 0xe307d0 }
	__asm { mov dword ptr [esi + 0x38], 0xffffffff }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [esi + 0x40], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x44], 0 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test cl, cl }
	__asm { je L_0060971a }
	__asm { test edi, edi }
	__asm { jne L_0060971a }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00609709 }
	__asm { push 0x1a }
	__asm { push 0xe307f0 }
	__asm { push 0xe3083c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060971a }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_00609709: }
	__asm { movzx eax, cl }
	__asm { push 0xe30848 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060971a: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x4c] }
	__asm { cmp edi, dword ptr [eax + 0x10] }
	__asm { jbe L_00609747 }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0xe308ac }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00609747: }
	__asm { push ebx }
	__asm { push 1 }
	__asm { call dword ptr [g_012dae54] }
	__asm { push dword ptr [ebx] }
	__asm { push 0x8d41 }
	__asm { call dword ptr [g_012dadf0] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_0060f270 }
	__asm { add esp, 4 }
	__asm { push eax }
	__asm { push 0x8d41 }
	__asm { call dword ptr [g_012dae88] }
	__asm { push 0 }
	__asm { push 0x8d41 }
	__asm { call dword ptr [g_012dadf0] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_012dbc88[];
extern "C" char g_012dbc98[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_005ebca0();
extern "C" void fn_0060a460();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0060a270
extern "C" __declspec(naked) void asm_0060a270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f13c }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov edi, ecx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { call fn_005ebca0 }
	__asm { lea ebx, [edi + 0x48] }
	__asm { mov dword ptr [edi], 0xe3107c }
	__asm { mov dword ptr [ebx], 0 }
	__asm { mov dword ptr [edi + 0x4c], 0 }
	__asm { cmp byte ptr [esi + 0x28], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_0060a32f }
	__asm { push ebx }
	__asm { push 1 }
	__asm { call dword ptr [g_012dbc98] }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0060a318 }
	__asm { cmp dword ptr [ebx], 0 }
	__asm { jne L_0060a318 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0060a307 }
	__asm { push 0xea }
	__asm { push 0xe31088 }
	__asm { push 0x1016e4c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060a318 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0060a307: }
	__asm { movzx eax, al }
	__asm { push 0xe31348 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060a318: }
	__asm { push dword ptr [ebx] }
	__asm { call dword ptr [g_012dbc88] }
	__asm { mov ecx, edi }
	__asm { call fn_0060a460 }
	__asm { push 0 }
	__asm { call dword ptr [g_012dbc88] }
	__asm { L_0060a32f: }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0060a33e }
	__asm { mov eax, dword ptr [eax + 0x28] }
	__asm { mov dword ptr [edi + 0x4c], eax }
	__asm { L_0060a33e: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}

extern "C" char g_012da218[];
extern "C" char g_012da228[];
extern "C" char g_012da2dc[];
extern "C" char g_012db11c[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf64a0();
// FUNCTION: ROBLOXSTUDIO 0x0060ab70
extern "C" __declspec(naked) void asm_0060ab70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { test al, al }
	__asm { je L_0060abbd }
	__asm { cmp dword ptr [esi + 0x3c], 0 }
	__asm { je L_0060abbd }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0060abac }
	__asm { push 0x85 }
	__asm { push 0xe31088 }
	__asm { push 0xe31548 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060abbd }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0060abac: }
	__asm { movzx eax, al }
	__asm { push 0xe315b0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060abbd: }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x2c] }
	__asm { imul edi, dword ptr [esi + 0x28] }
	__asm { cmp byte ptr [ebx + 0x2a], 0 }
	__asm { je L_0060ac25 }
	__asm { push dword ptr [esi + 0x38] }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call dword ptr [g_012da218] }
	__asm { cmp byte ptr [ebx + 0x2b], 0 }
	__asm { je L_0060abf9 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push dword ptr [eax*4 + 0xe30f80] }
	__asm { push edi }
	__asm { push 0 }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call dword ptr [g_012db11c] }
	__asm { jmp L_0060ac2e }
	__asm { L_0060abf9: }
	__asm { cmp dword ptr [ebp + 8], 1 }
	__asm { jne L_0060ac15 }
	__asm { mov eax, dword ptr [esi + 0x30] }
	__asm { push dword ptr [eax*4 + 0xe30f78] }
	__asm { push 0 }
	__asm { push edi }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call dword ptr [g_012da228] }
	__asm { L_0060ac15: }
	__asm { push 0x88b9 }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call dword ptr [g_012da2dc] }
	__asm { jmp L_0060ac2e }
	__asm { L_0060ac25: }
	__asm { push edi }
	__asm { call fn_00cf64a0 }
	__asm { add esp, 4 }
	__asm { L_0060ac2e: }
	__asm { mov dword ptr [esi + 0x3c], eax }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { test al, al }
	__asm { je L_0060ac7a }
	__asm { cmp dword ptr [esi + 0x3c], 0 }
	__asm { jne L_0060ac7a }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0060ac69 }
	__asm { push 0xa0 }
	__asm { push 0xe31088 }
	__asm { push 0xe31610 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060ac7a }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0060ac69: }
	__asm { movzx eax, al }
	__asm { push 0xe31618 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060ac7a: }
	__asm { mov eax, dword ptr [esi + 0x3c] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012da218[];
extern "C" char g_012da230[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0060ad40
extern "C" __declspec(naked) void asm_0060ad40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov esi, ecx }
	__asm { je L_0060ade4 }
	__asm { cmp dword ptr [esi + 0x3c], 0 }
	__asm { je L_0060ad97 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0060ad82 }
	__asm { push 0xbd }
	__asm { push 0xe31088 }
	__asm { push 0xe31548 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060ad97 }
	__asm { L_0060ad82: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe316d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060ad97: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0060ade4 }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { imul ecx, dword ptr [esi + 0x28] }
	__asm { lea eax, [ebx + edi] }
	__asm { cmp eax, ecx }
	__asm { jbe L_0060ade4 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0060adcf }
	__asm { push 0xbe }
	__asm { push 0xe31088 }
	__asm { push 0xe31738 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060ade4 }
	__asm { L_0060adcf: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe31770 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060ade4: }
	__asm { push dword ptr [esi + 0x38] }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call dword ptr [g_012da218] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { push ebx }
	__asm { push dword ptr [esi + 0x34] }
	__asm { call dword ptr [g_012da230] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0060c000();
extern "C" void fn_0060c600();
extern "C" void fn_0060dbb0();
extern "C" void fn_0060de00();
extern "C" void fn_0060f6d0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0060af20
extern "C" __declspec(naked) void asm_0060af20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f1bf }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push edi }
	__asm { push dword ptr [ebp + 8] }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { call fn_0060f6d0 }
	__asm { mov dword ptr [ebx], 0xe31874 }
	__asm { mov dword ptr [ebx + 0x28], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebx + 0x2c], 0 }
	__asm { mov dword ptr [ebx + 0x30], 0 }
	__asm { mov dword ptr [ebx + 0x34], 0 }
	__asm { push 0x8b30 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0060c000 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebx + 0x28], eax }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_0060c600 }
	__asm { add esp, 0x10 }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x2c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0060dbb0 }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { test eax, eax }
	__asm { je L_0060afc1 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { push eax }
	__asm { call fn_0060de00 }
	__asm { push dword ptr [ebp - 0x1c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0060afc1: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, ebx }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012da33c[];
extern "C" void fn_006065e0();
extern "C" void fn_0060ddc0();
extern "C" void fn_0060f6f0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0060b9e0
extern "C" __declspec(naked) void asm_0060b9e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f274 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe31888 }
	__asm { push dword ptr [esi + 0x38] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call dword ptr [g_012da33c] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [eax + 0x30] }
	__asm { call fn_006065e0 }
	__asm { mov eax, dword ptr [esi + 0x54] }
	__asm { test eax, eax }
	__asm { je L_0060ba54 }
	__asm { push dword ptr [esi + 0x58] }
	__asm { lea ecx, [esi + 0x54] }
	__asm { push eax }
	__asm { call fn_0060ddc0 }
	__asm { push dword ptr [esi + 0x54] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x54], 0 }
	__asm { mov dword ptr [esi + 0x58], 0 }
	__asm { mov dword ptr [esi + 0x5c], 0 }
	__asm { L_0060ba54: }
	__asm { mov eax, dword ptr [esi + 0x48] }
	__asm { test eax, eax }
	__asm { je L_0060ba79 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [esi + 0x48], 0 }
	__asm { mov dword ptr [esi + 0x4c], 0 }
	__asm { mov dword ptr [esi + 0x50], 0 }
	__asm { L_0060ba79: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0060f6f0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012da4b0[];
extern "C" char g_012da4dc[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0060cd90();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0060bcc0
extern "C" __declspec(naked) void asm_0060bcc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x40 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { test edi, edi }
	__asm { je L_0060bd5c }
	__asm { cmp dword ptr [esi + 0x3c], 0 }
	__asm { jl L_0060bd00 }
	__asm { push 0xe31c18 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { call fn_0060cd90 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0x40] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push 1 }
	__asm { push dword ptr [esi + 0x3c] }
	__asm { call dword ptr [g_012da4dc] }
	__asm { L_0060bd00: }
	__asm { cmp dword ptr [esi + 0x40], 0 }
	__asm { jl L_0060bd5c }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0060bd4c }
	__asm { cmp edi, dword ptr [esi + 0x60] }
	__asm { jbe L_0060bd4c }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0060bd3b }
	__asm { push 0x1fc }
	__asm { push 0xe318a0 }
	__asm { push 0xe31c28 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060bd4c }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0060bd3b: }
	__asm { movzx eax, al }
	__asm { push 0xe31c50 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060bd4c: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [edi + edi*2] }
	__asm { push eax }
	__asm { push dword ptr [esi + 0x40] }
	__asm { call dword ptr [g_012da4b0] }
	__asm { L_0060bd5c: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_00e10528[];
extern "C" char g_012da314[];
extern "C" char g_012da32c[];
extern "C" char g_012da340[];
extern "C" char g_012da3a4[];
extern "C" char g_012da3b8[];
extern "C" char g_012da418[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_0060c120();
extern "C" void fn_0060c210();
extern "C" void fn_006b9740();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0060c000
extern "C" __declspec(naked) void asm_0060c000()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f286 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x30 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call dword ptr [g_012da32c] }
	__asm { mov esi, eax }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_0060c069 }
	__asm { test esi, esi }
	__asm { jne L_0060c069 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0060c058 }
	__asm { push 0x44 }
	__asm { push 0xe318a0 }
	__asm { push 0x1016e4c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060c069 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0060c058: }
	__asm { movzx eax, al }
	__asm { push 0xe318e8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060c069: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [ecx + 0x14], 0x10 }
	__asm { mov eax, dword ptr [ecx + 0x10] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { jb L_0060c07a }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { L_0060c07a: }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { push 1 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 0x14], ecx }
	__asm { call dword ptr [g_012da418] }
	__asm { push esi }
	__asm { call dword ptr [g_012da314] }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { push 0x8b81 }
	__asm { push esi }
	__asm { call dword ptr [g_012da3b8] }
	__asm { cmp dword ptr [ebp + 8], 1 }
	__asm { push dword ptr [g_012da3a4] }
	__asm { push 0x60bfc0 }
	__asm { push esi }
	__asm { je L_0060c101 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { push eax }
	__asm { call fn_0060c120 }
	__asm { add esp, 0x10 }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [g_012da340] }
	__asm { cmp dword ptr [ebp - 0x28], 0x10 }
	__asm { lea eax, [ebp - 0x3c] }
	__asm { cmovae eax, dword ptr [ebp - 0x3c] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { lea ecx, [ebp - 0x24] }
	__asm { call dword ptr [g_00e10528] }
	__asm { push 0x1179d58 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x24], 0xe18168 }
	__asm { call fn_00cf67ec }
	__asm { L_0060c101: }
	__asm { call fn_0060c210 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { add esp, 0xc }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004038a0();
extern "C" void fn_006071e0();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0060c120
extern "C" __declspec(naked) void asm_0060c120()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f298 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push esi }
	__asm { push 0x8b84 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call dword ptr [ebp + 0x10] }
	__asm { mov esi, eax }
	__asm { add esp, 8 }
	__asm { test esi, esi }
	__asm { jle L_0060c1dd }
	__asm { push edi }
	__asm { push esi }
	__asm { lea ecx, [ebp - 0x1c] }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x18], 0 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { call fn_006071e0 }
	__asm { mov edi, dword ptr [ebp - 0x1c] }
	__asm { push edi }
	__asm { push 0 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call dword ptr [ebp + 0x14] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { mov byte ptr [esi], 0 }
	__asm { cmp byte ptr [edi], 0 }
	__asm { jne L_0060c1ab }
	__asm { xor ecx, ecx }
	__asm { jmp L_0060c1b9 }
	__asm { L_0060c1ab: }
	__asm { mov ecx, edi }
	__asm { lea edx, [ecx + 1] }
	__asm { L_0060c1b0: }
	__asm { mov al, byte ptr [ecx] }
	__asm { inc ecx }
	__asm { test al, al }
	__asm { jne L_0060c1b0 }
	__asm { sub ecx, edx }
	__asm { L_0060c1b9: }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_004038a0 }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov eax, esi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0060c1dd: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { mov dword ptr [esi + 0x14], 0xf }
	__asm { mov dword ptr [esi + 0x10], 0 }
	__asm { push 0xf12f2d }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [esi], 0 }
	__asm { call fn_004038a0 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e105f0[];
extern "C" char g_012d97c4[];
extern "C" void fn_0060c120();
extern "C" void fn_0060f7a0();
extern "C" void fn_006b8aae();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0060c210
extern "C" __declspec(naked) void asm_0060c210()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f2aa }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 8] }
	__asm { push eax }
	__asm { call fn_0060c120 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { mov esi, dword ptr [g_00e105f0] }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push 0xe31fd4 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call esi }
	__asm { add esp, 0x18 }
	__asm { test eax, eax }
	__asm { jne L_0060c299 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push 0xe31fdc }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { jne L_0060c299 }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { lea eax, [ebp - 0x24] }
	__asm { cmovae eax, dword ptr [ebp - 0x24] }
	__asm { push 0xe31fe4 }
	__asm { push eax }
	__asm { call esi }
	__asm { add esp, 8 }
	__asm { test eax, eax }
	__asm { je L_0060c2d0 }
	__asm { L_0060c299: }
	__asm { mov al, byte ptr [g_012d97c4] }
	__asm { test al, al }
	__asm { je L_0060c2c0 }
	__asm { push 0 }
	__asm { push dword ptr [ebp - 0x14] }
	__asm { movzx eax, al }
	__asm { push dword ptr [ebp + 8] }
	__asm { push 0xe31fec }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { mov al, byte ptr [g_012d97c4] }
	__asm { add esp, 0x14 }
	__asm { L_0060c2c0: }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push eax }
	__asm { call fn_0060f7a0 }
	__asm { add esp, 8 }
	__asm { L_0060c2d0: }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { pop esi }
	__asm { jb L_0060c2e2 }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0060c2e2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012da3c4[];
extern "C" void fn_00451670();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0060c830
extern "C" __declspec(naked) void asm_0060c830()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0f319 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x18 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_0060c859 }
	__asm { mov eax, dword ptr [esi] }
	__asm { jmp L_0060c85b }
	__asm { L_0060c859: }
	__asm { mov eax, esi }
	__asm { L_0060c85b: }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_012da3c4] }
	__asm { test eax, eax }
	__asm { jns L_0060c8b6 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x24] }
	__asm { push 0xe319b4 }
	__asm { push eax }
	__asm { call fn_00451670 }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jb L_0060c88a }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0060c88a: }
	__asm { push ebx }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call dword ptr [g_012da3c4] }
	__asm { mov esi, eax }
	__asm { test esi, esi }
	__asm { setns bl }
	__asm { cmp dword ptr [ebp - 0x10], 0x10 }
	__asm { jb L_0060c8ad }
	__asm { push dword ptr [ebp - 0x24] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0060c8ad: }
	__asm { or eax, 0xffffffff }
	__asm { test bl, bl }
	__asm { cmovne eax, esi }
	__asm { pop ebx }
	__asm { L_0060c8b6: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00402fd0();
extern "C" void fn_00403540();
extern "C" void fn_00513a40();
extern "C" void fn_0060ce80();
extern "C" void fn_0060d310();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0060dc20
extern "C" __declspec(naked) void asm_0060dc20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd55138 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x28 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_00513a40 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_0060dc6f }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { mov ecx, dword ptr [esi + 0x20] }
	__asm { lea eax, [esi + 0x10] }
	__asm { jb L_0060dc5d }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_0060dc5d: }
	__asm { push ecx }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x10] }
	__asm { mov ecx, edi }
	__asm { push 0 }
	__asm { call fn_00402fd0 }
	__asm { test eax, eax }
	__asm { jns L_0060dccf }
	__asm { L_0060dc6f: }
	__asm { push -1 }
	__asm { push 0 }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x34] }
	__asm { mov dword ptr [ebp - 0x20], 0xf }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov byte ptr [ebp - 0x34], 0 }
	__asm { call fn_00403540 }
	__asm { xor eax, eax }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { lea eax, [ebp - 0x34] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0060ce80 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_0060d310 }
	__asm { cmp dword ptr [ebp - 0x20], 0x10 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { jb L_0060dccf }
	__asm { push dword ptr [ebp - 0x34] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0060dccf: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x28] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" void fn_0060d9d0();
extern "C" void fn_0060ddc0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0060de40
extern "C" __declspec(naked) void asm_0060de40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f3c0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test ebx, ebx }
	__asm { je L_0060de95 }
	__asm { cmp ebx, 0x6666666 }
	__asm { ja L_0060de8f }
	__asm { lea eax, [ebx + ebx*4] }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_0060de95 }
	__asm { L_0060de8f: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0060de95: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi] }
	__asm { call fn_0060d9d0 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { sub ecx, dword ptr [edi] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { sar edx, 4 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { test eax, eax }
	__asm { je L_0060deea }
	__asm { push dword ptr [edi + 4] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call fn_0060ddc0 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { L_0060deea: }
	__asm { lea eax, [ebx + ebx*4] }
	__asm { mov dword ptr [edi], esi }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { lea eax, [ecx + ecx*4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [edi + 4], eax }
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

extern "C" char g_00e1025c[];
extern "C" void fn_0060de00();
extern "C" void fn_00971d50();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0060df30
extern "C" __declspec(naked) void asm_0060df30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f3d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test ebx, ebx }
	__asm { je L_0060df8b }
	__asm { cmp ebx, 0x9249249 }
	__asm { ja L_0060df85 }
	__asm { lea eax, [ebx*8] }
	__asm { sub eax, ebx }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_0060df8b }
	__asm { L_0060df85: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0060df8b: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00971d50 }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { sub ecx, dword ptr [edi] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { mov eax, dword ptr [edi] }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov ecx, edx }
	__asm { shr ecx, 0x1f }
	__asm { add ecx, edx }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { test eax, eax }
	__asm { je L_0060dfe2 }
	__asm { push dword ptr [edi + 4] }
	__asm { mov ecx, edi }
	__asm { push eax }
	__asm { call fn_0060de00 }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { add esp, 4 }
	__asm { L_0060dfe2: }
	__asm { lea eax, [ebx*8] }
	__asm { sub eax, ebx }
	__asm { mov dword ptr [edi], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [edi + 8], eax }
	__asm { lea eax, [ecx*8] }
	__asm { sub eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [edi + 4], eax }
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

extern "C" char g_00e1025c[];
extern "C" void fn_0061de60();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0060e030
extern "C" __declspec(naked) void asm_0060e030()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f3e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], ebx }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { test esi, esi }
	__asm { je L_0060e087 }
	__asm { cmp esi, 0xfffffff }
	__asm { ja L_0060e081 }
	__asm { mov eax, esi }
	__asm { shl eax, 4 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { test edi, edi }
	__asm { jne L_0060e087 }
	__asm { L_0060e081: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0060e087: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push edi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_0061de60 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ebx, dword ptr [ebx + 4] }
	__asm { add esp, 0x18 }
	__asm { sub ebx, eax }
	__asm { test eax, eax }
	__asm { je L_0060e0b9 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0060e0b9: }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { shl esi, 4 }
	__asm { add esi, edi }
	__asm { and ebx, 0xfffffff0 }
	__asm { add ebx, edi }
	__asm { mov dword ptr [eax], edi }
	__asm { pop edi }
	__asm { mov dword ptr [eax + 8], esi }
	__asm { mov dword ptr [eax + 4], ebx }
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

extern "C" char g_00e10260[];
extern "C" void fn_0060de40();
// FUNCTION: ROBLOXSTUDIO 0x0060e100
extern "C" __declspec(naked) void asm_0060e100()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x66666667 }
	__asm { imul edx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_0060e19b }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul esi }
	__asm { sar edx, 4 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x6666666 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_0060e151 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0060e151: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x66666667 }
	__asm { imul ebx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x6666666 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_0060e188 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_0060de40 }
	__asm { L_0060e188: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_0060de40 }
	__asm { L_0060e19b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_0060e030();
// FUNCTION: ROBLOXSTUDIO 0x0060e220
extern "C" __declspec(naked) void asm_0060e220()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sar eax, 4 }
	__asm { cmp eax, edi }
	__asm { jae L_0060e28d }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0xfffffff }
	__asm { sar esi, 4 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_0060e257 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0060e257: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_0060e27b }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_0060e030 }
	__asm { L_0060e27b: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_0060e030 }
	__asm { L_0060e28d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00403540();
extern "C" void fn_0060e1b0();
// FUNCTION: ROBLOXSTUDIO 0x0060e2a0
extern "C" __declspec(naked) void asm_0060e2a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd428b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp ebx, ecx }
	__asm { jae L_0060e311 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, ebx }
	__asm { ja L_0060e311 }
	__asm { sub ebx, eax }
	__asm { mov eax, 0x92492493 }
	__asm { imul ebx }
	__asm { add edx, ebx }
	__asm { sar edx, 4 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_0060e2f1 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0060e1b0 }
	__asm { L_0060e2f1: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi*8] }
	__asm { sub ecx, edi }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { lea ebx, [eax + ecx*4] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jmp L_0060e32f }
	__asm { L_0060e311: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_0060e31f }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0060e1b0 }
	__asm { L_0060e31f: }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { L_0060e32f: }
	__asm { test edi, edi }
	__asm { je L_0060e356 }
	__asm { push -1 }
	__asm { push 0 }
	__asm { mov dword ptr [edi + 0x14], 0xf }
	__asm { mov dword ptr [edi + 0x10], 0 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [edi], 0 }
	__asm { call fn_00403540 }
	__asm { mov eax, dword ptr [ebx + 0x18] }
	__asm { mov dword ptr [edi + 0x18], eax }
	__asm { L_0060e356: }
	__asm { add dword ptr [esi + 4], 0x1c }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00402f60();
extern "C" void fn_00403380();
// FUNCTION: ROBLOXSTUDIO 0x0060e370
extern "C" __declspec(naked) void asm_0060e370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { test ebx, ebx }
	__asm { jne L_0060e38e }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { cmp dword ptr [ebp + 0xc], eax }
	__asm { pop edi }
	__asm { cmovb eax, dword ptr [ebp + 0xc] }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0060e38e: }
	__asm { mov ecx, dword ptr [edi + 0x10] }
	__asm { push esi }
	__asm { cmp ebx, ecx }
	__asm { ja L_0060e3f0 }
	__asm { sub ecx, ebx }
	__asm { cmp dword ptr [ebp + 0xc], ecx }
	__asm { cmovb ecx, dword ptr [ebp + 0xc] }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_0060e3a9 }
	__asm { mov eax, dword ptr [edi] }
	__asm { jmp L_0060e3ab }
	__asm { L_0060e3a9: }
	__asm { mov eax, edi }
	__asm { L_0060e3ab: }
	__asm { lea esi, [eax + ecx] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov cl, byte ptr [eax] }
	__asm { mov byte ptr [ebp + 0xf], cl }
	__asm { L_0060e3b6: }
	__asm { cmp byte ptr [esi], cl }
	__asm { jne L_0060e3c9 }
	__asm { push ebx }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00402f60 }
	__asm { add esp, 0xc }
	__asm { test eax, eax }
	__asm { je L_0060e3dd }
	__asm { L_0060e3c9: }
	__asm { mov ecx, edi }
	__asm { call fn_00403380 }
	__asm { cmp esi, eax }
	__asm { je L_0060e3f0 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov cl, byte ptr [ebp + 0xf] }
	__asm { dec esi }
	__asm { jmp L_0060e3b6 }
	__asm { L_0060e3dd: }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_0060e3e5 }
	__asm { mov edi, dword ptr [edi] }
	__asm { L_0060e3e5: }
	__asm { sub esi, edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop edi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_0060e3f0: }
	__asm { pop esi }
	__asm { pop edi }
	__asm { or eax, 0xffffffff }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x0060f3f0
extern "C" __declspec(naked) void asm_0060f3f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f48b }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0xe327dc }
	__asm { mov dword ptr [esi + 4], edi }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov dword ptr [esi + 0xc], 0 }
	__asm { mov dword ptr [esi + 0x24], 0xf }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { cmp dword ptr [edi + 4], 0 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { je L_0060f49b }
	__asm { test al, al }
	__asm { je L_0060f48d }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { jne L_0060f48d }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0060f47c }
	__asm { push 0x11 }
	__asm { push 0xe327e8 }
	__asm { push 0xe3282c }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060f48d }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0060f47c: }
	__asm { movzx eax, al }
	__asm { push 0xe32848 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060f48d: }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [esi + 8], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [eax + 0xc], esi }
	__asm { jmp L_0060f4dd }
	__asm { L_0060f49b: }
	__asm { test al, al }
	__asm { je L_0060f4da }
	__asm { cmp dword ptr [edi + 8], 0 }
	__asm { je L_0060f4da }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_0060f4c9 }
	__asm { push 0x19 }
	__asm { push 0xe327e8 }
	__asm { push 0xe328b4 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060f4da }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_0060f4c9: }
	__asm { movzx eax, al }
	__asm { push 0xe328d0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060f4da: }
	__asm { mov dword ptr [edi + 4], esi }
	__asm { L_0060f4dd: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [edi + 8], esi }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x0060f500
extern "C" __declspec(naked) void asm_0060f500()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f4a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe327dc }
	__asm { mov ecx, dword ptr [esi + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ecx, ecx }
	__asm { je L_0060f53b }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ecx + 0xc], eax }
	__asm { jmp L_0060f58b }
	__asm { L_0060f53b: }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0060f582 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp dword ptr [eax + 4], esi }
	__asm { je L_0060f582 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0060f571 }
	__asm { push 0x26 }
	__asm { push 0xe327e8 }
	__asm { push 0xe3293c }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060f582 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0060f571: }
	__asm { movzx eax, cl }
	__asm { push 0xe32960 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060f582: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov eax, dword ptr [esi + 0xc] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_0060f58b: }
	__asm { mov ecx, dword ptr [esi + 0xc] }
	__asm { test ecx, ecx }
	__asm { jne L_0060f5dc }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { test cl, cl }
	__asm { je L_0060f5d9 }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { cmp dword ptr [eax + 8], esi }
	__asm { je L_0060f5d9 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0060f5c8 }
	__asm { push 0x2e }
	__asm { push 0xe327e8 }
	__asm { push 0xe329d4 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0060f5d9 }
	__asm { mov cl, byte ptr [g_012de657] }
	__asm { L_0060f5c8: }
	__asm { movzx eax, cl }
	__asm { push 0xe329f8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0060f5d9: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { L_0060f5dc: }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { cmp dword ptr [esi + 0x24], 0x10 }
	__asm { jb L_0060f5f3 }
	__asm { push dword ptr [esi + 0x10] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0060f5f3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi + 0x24], 0xf }
	__asm { mov dword ptr [esi + 0x20], 0 }
	__asm { mov byte ptr [esi + 0x10], 0 }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0040c260();
extern "C" void fn_00610280();
// FUNCTION: ROBLOXSTUDIO 0x0060f960
extern "C" __declspec(naked) void asm_0060f960()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd41938 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x14 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov eax, dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { lea eax, [ebp - 0x18] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0 }
	__asm { call fn_0040c260 }
	__asm { add esp, 4 }
	__asm { test al, al }
	__asm { jne L_0060f9c1 }
	__asm { lea ecx, [esi + 8] }
	__asm { test ecx, ecx }
	__asm { je L_0060f9b5 }
	__asm { mov eax, dword ptr [ebp - 0x18] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { L_0060f9b5: }
	__asm { mov eax, 0xe32ab0 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [esi], eax }
	__asm { jmp L_0060f9c7 }
	__asm { L_0060f9c1: }
	__asm { mov dword ptr [esi], 0 }
	__asm { L_0060f9c7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov dword ptr [esi + 0x24], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov byte ptr [esi + 0x30], 0 }
	__asm { cmp eax, ecx }
	__asm { je L_0060fa24 }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0060fa02 }
	__asm { push ecx }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x20] }
	__asm { push eax }
	__asm { mov ecx, esi }
	__asm { call fn_00610280 }
	__asm { mov ecx, dword ptr [ebp - 0x1c] }
	__asm { mov edx, dword ptr [ebp - 0x20] }
	__asm { jmp L_0060fa04 }
	__asm { L_0060fa02: }
	__asm { mov edx, ecx }
	__asm { L_0060fa04: }
	__asm { mov eax, dword ptr [esi + 0x2c] }
	__asm { cmp edx, eax }
	__asm { jne L_0060fa18 }
	__asm { cmp ecx, eax }
	__asm { jne L_0060fa18 }
	__asm { cmp dword ptr [esi + 0x24], eax }
	__asm { jne L_0060fa18 }
	__asm { mov byte ptr [esi + 0x30], 1 }
	__asm { L_0060fa18: }
	__asm { mov eax, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [esi + 0x20], eax }
	__asm { mov dword ptr [esi + 0x24], edx }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { L_0060fa24: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" void fn_0060fb10();
extern "C" void fn_0068f930();
// FUNCTION: ROBLOXSTUDIO 0x0060fa40
extern "C" __declspec(naked) void asm_0060fa40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f4f8 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { sub esp, 0x40 }
	__asm { lea eax, [ebp + 0x48] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { call fn_0068f930 }
	__asm { sub esp, 0x40 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0068f930 }
	__asm { mov ecx, esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0060fb10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0060fad2 }
	__asm { test al, 1 }
	__asm { jne L_0060facb }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0060facb }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0060facb: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_0060fad2: }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0060faf9 }
	__asm { test al, 1 }
	__asm { jne L_0060faf9 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0060faf9 }
	__asm { lea ecx, [ebp + 0x50] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0060faf9: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x84 }
}

extern "C" void fn_00412d40();
extern "C" void fn_0060ff50();
extern "C" void fn_0068f930();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0060fb10
extern "C" __declspec(naked) void asm_0060fb10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f528 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], edi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov esi, dword ptr [edi] }
	__asm { sub esp, 0x40 }
	__asm { lea eax, [ebp + 0x48] }
	__asm { mov dword ptr [ebp - 0x18], esp }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0068f930 }
	__asm { sub esp, 0x40 }
	__asm { lea eax, [ebp + 8] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0068f930 }
	__asm { push esi }
	__asm { lea eax, [ebp - 0x1c] }
	__asm { push eax }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0060ff50 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0060fba4 }
	__asm { test al, 1 }
	__asm { jne L_0060fb9d }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0060fb9d }
	__asm { lea ecx, [ebp + 0x10] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0060fb9d: }
	__asm { mov dword ptr [ebp + 8], 0 }
	__asm { L_0060fba4: }
	__asm { mov eax, dword ptr [ebp + 0x48] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0060fbcb }
	__asm { test al, 1 }
	__asm { jne L_0060fbcb }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0060fbcb }
	__asm { lea ecx, [ebp + 0x50] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0060fbcb: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x80 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00412d40 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_0060fbf0();
extern "C" void fn_0068f930();
// FUNCTION: ROBLOXSTUDIO 0x0060ff50
extern "C" __declspec(naked) void asm_0060ff50()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd13918 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { sub edx, dword ptr [edi] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { sar edx, 2 }
	__asm { sub esp, 0x40 }
	__asm { mov esi, edx }
	__asm { lea eax, [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ecx, esp }
	__asm { shr esi, 0x1f }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { add esi, edx }
	__asm { call fn_0068f930 }
	__asm { sub esp, 0x40 }
	__asm { lea eax, [ebp + 0x10] }
	__asm { mov ecx, esp }
	__asm { push eax }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0068f930 }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { mov ecx, edi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0060fbf0 }
	__asm { mov eax, dword ptr [edi] }
	__asm { lea ecx, [esi + esi*2] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea eax, [eax + ecx*8] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0060fff8 }
	__asm { test al, 1 }
	__asm { jne L_0060fff1 }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0060fff1 }
	__asm { lea ecx, [ebp + 0x18] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0060fff1: }
	__asm { mov dword ptr [ebp + 0x10], 0 }
	__asm { L_0060fff8: }
	__asm { mov eax, dword ptr [ebp + 0x50] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0061001f }
	__asm { test al, 1 }
	__asm { jne L_0061001f }
	__asm { and eax, 0xfffffffe }
	__asm { mov eax, dword ptr [eax] }
	__asm { test eax, eax }
	__asm { je L_0061001f }
	__asm { lea ecx, [ebp + 0x58] }
	__asm { push 2 }
	__asm { push ecx }
	__asm { push ecx }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { L_0061001f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x88 }
}

extern "C" void fn_00cf67fe();
// FUNCTION: ROBLOXSTUDIO 0x00610420
extern "C" __declspec(naked) void asm_00610420()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { cmp dword ptr [esi + 0x14], 0x10 }
	__asm { jb L_00610461 }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [edi + 0x14], 0x10 }
	__asm { jb L_00610444 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov dword ptr [edi], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00610444: }
	__asm { mov eax, dword ptr [edi + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [esi] }
	__asm { inc eax }
	__asm { je L_00610458 }
	__asm { push eax }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { L_00610458: }
	__asm { mov dword ptr [edi], ebx }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00610461: }
	__asm { mov edx, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [edx + 0x14], 0x10 }
	__asm { jae L_0061048c }
	__asm { cmp esi, edx }
	__asm { je L_006104a1 }
	__asm { lea edi, [esi + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_006104a1 }
	__asm { sub edx, esi }
	__asm { L_00610477: }
	__asm { mov al, byte ptr [edx + esi] }
	__asm { mov cl, byte ptr [esi] }
	__asm { mov byte ptr [esi], al }
	__asm { mov byte ptr [edx + esi], cl }
	__asm { inc esi }
	__asm { cmp esi, edi }
	__asm { jne L_00610477 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0061048c: }
	__asm { mov eax, dword ptr [esi + 0x10] }
	__asm { mov edi, dword ptr [edx] }
	__asm { inc eax }
	__asm { je L_0061049f }
	__asm { push eax }
	__asm { push esi }
	__asm { push edx }
	__asm { call fn_00cf67fe }
	__asm { add esp, 0xc }
	__asm { L_0061049f: }
	__asm { mov dword ptr [esi], edi }
	__asm { L_006104a1: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006103a0();
// FUNCTION: ROBLOXSTUDIO 0x006104e0
extern "C" __declspec(naked) void asm_006104e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { push esi }
	__asm { cmp dword ptr [ebx], 0 }
	__asm { je L_006104f6 }
	__asm { cmp byte ptr [ebx + 0x30], 0 }
	__asm { jne L_006104f6 }
	__asm { xor cl, cl }
	__asm { jmp L_006104f8 }
	__asm { L_006104f6: }
	__asm { mov cl, 1 }
	__asm { L_006104f8: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp dword ptr [esi], 0 }
	__asm { je L_0061050a }
	__asm { cmp byte ptr [esi + 0x30], 0 }
	__asm { jne L_0061050a }
	__asm { xor dl, dl }
	__asm { jmp L_0061050c }
	__asm { L_0061050a: }
	__asm { mov dl, 1 }
	__asm { L_0061050c: }
	__asm { test cl, cl }
	__asm { jne L_0061055e }
	__asm { test dl, dl }
	__asm { jne L_0061055e }
	__asm { mov eax, dword ptr [esi + 0x20] }
	__asm { mov ecx, dword ptr [ebx + 0x24] }
	__asm { mov edx, dword ptr [ebx + 0x20] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi + 0x24] }
	__asm { mov esi, ecx }
	__asm { sub edi, eax }
	__asm { sub esi, edx }
	__asm { cmp esi, edi }
	__asm { pop edi }
	__asm { jne L_00610556 }
	__asm { push eax }
	__asm { push ecx }
	__asm { push edx }
	__asm { call fn_006103a0 }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { je L_00610556 }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { cmp eax, dword ptr [ecx + 0x28] }
	__asm { jne L_00610556 }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { cmp eax, dword ptr [ecx + 0x2c] }
	__asm { jne L_00610556 }
	__asm { pop esi }
	__asm { mov al, 1 }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00610556: }
	__asm { pop esi }
	__asm { xor al, al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_0061055e: }
	__asm { xor eax, eax }
	__asm { cmp cl, dl }
	__asm { pop esi }
	__asm { sete al }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_006179d0();
// FUNCTION: ROBLOXSTUDIO 0x00617c00
extern "C" __declspec(naked) void asm_00617c00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov ecx, esi }
	__asm { sub ecx, edi }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { cmp eax, 0x28 }
	__asm { jle L_00617c91 }
	__asm { inc eax }
	__asm { cdq }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { and edx, 7 }
	__asm { lea ebx, [edx + eax] }
	__asm { sar ebx, 3 }
	__asm { mov eax, ebx }
	__asm { imul ebx, ebx, 0x4c }
	__asm { imul eax, eax, 0x98 }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { add eax, edi }
	__asm { push eax }
	__asm { lea ecx, [ebx + edi] }
	__asm { push ecx }
	__asm { push edi }
	__asm { call fn_006179d0 }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebx + edi] }
	__asm { push eax }
	__asm { mov eax, edi }
	__asm { sub eax, ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_006179d0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, esi }
	__asm { push eax }
	__asm { sub eax, dword ptr [ebp - 4] }
	__asm { sub esi, ebx }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_006179d0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, ebx }
	__asm { push edi }
	__asm { push eax }
	__asm { call fn_006179d0 }
	__asm { add esp, 0x40 }
	__asm { pop ebx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00617c91: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { call fn_006179d0 }
	__asm { add esp, 0x10 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_00618990();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00618ff0
extern "C" __declspec(naked) void asm_00618ff0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f990 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test edi, edi }
	__asm { je L_00619044 }
	__asm { cmp edi, 0x35e50d7 }
	__asm { ja L_0061903e }
	__asm { mov eax, edi }
	__asm { imul eax, eax, 0x4c }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00619044 }
	__asm { L_0061903e: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00619044: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00618990 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00619091 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00619091: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { imul edi, edi, 0x4c }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { imul eax, eax, 0x4c }
	__asm { add edi, esi }
	__asm { mov dword ptr [ebx + 8], edi }
	__asm { mov dword ptr [ebx], esi }
	__asm { pop edi }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebx + 4], eax }
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

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_00618a50();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x006190e0
extern "C" __declspec(naked) void asm_006190e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0f9a0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { test edi, edi }
	__asm { je L_00619137 }
	__asm { cmp edi, 0x7ffffff }
	__asm { ja L_00619131 }
	__asm { mov eax, edi }
	__asm { shl eax, 5 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { test esi, esi }
	__asm { jne L_00619137 }
	__asm { L_00619131: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00619137: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00618a50 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ebx, dword ptr [ebx + 4] }
	__asm { add esp, 0x18 }
	__asm { sub ebx, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00619170 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00619170: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { shl edi, 5 }
	__asm { add edi, esi }
	__asm { mov dword ptr [eax + 8], edi }
	__asm { and ebx, 0xffffffe0 }
	__asm { add ebx, esi }
	__asm { pop edi }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10260[];
extern "C" void fn_00618ff0();
// FUNCTION: ROBLOXSTUDIO 0x006191c0
extern "C" __declspec(naked) void asm_006191c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_0061925b }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul esi }
	__asm { sar edx, 5 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x35e50d7 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00619211 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00619211: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul ebx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x35e50d7 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00619248 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00618ff0 }
	__asm { L_00619248: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00618ff0 }
	__asm { L_0061925b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_006190e0();
// FUNCTION: ROBLOXSTUDIO 0x00619270
extern "C" __declspec(naked) void asm_00619270()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sar eax, 5 }
	__asm { cmp eax, edi }
	__asm { jae L_006192dd }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0x7ffffff }
	__asm { sar esi, 5 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_006192a7 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_006192a7: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_006192cb }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_006190e0 }
	__asm { L_006192cb: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_006190e0 }
	__asm { L_006192dd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00618cb0();
extern "C" void fn_006191c0();
// FUNCTION: ROBLOXSTUDIO 0x00619550
extern "C" __declspec(naked) void asm_00619550()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd428b2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_006195b5 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_006195b5 }
	__asm { sub edi, eax }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul edi }
	__asm { sar edx, 5 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_0061959e }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_006191c0 }
	__asm { L_0061959e: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { imul edi, edi, 0x4c }
	__asm { add edi, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jmp L_006195d3 }
	__asm { L_006195b5: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_006195c3 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_006191c0 }
	__asm { L_006195c3: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], ecx }
	__asm { mov dword ptr [ebp - 0x10], ecx }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { L_006195d3: }
	__asm { test ecx, ecx }
	__asm { je L_006195dd }
	__asm { push edi }
	__asm { call fn_00618cb0 }
	__asm { L_006195dd: }
	__asm { add dword ptr [esi + 4], 0x4c }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00619270();
// FUNCTION: ROBLOXSTUDIO 0x00619600
extern "C" __declspec(naked) void asm_00619600()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, eax }
	__asm { jae L_0061962e }
	__asm { mov ecx, dword ptr [esi] }
	__asm { cmp ecx, edi }
	__asm { ja L_0061962e }
	__asm { sub edi, ecx }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_00619627 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00619270 }
	__asm { L_00619627: }
	__asm { and edi, 0xffffffe0 }
	__asm { add edi, dword ptr [esi] }
	__asm { jmp L_0061963c }
	__asm { L_0061962e: }
	__asm { cmp eax, dword ptr [esi + 8] }
	__asm { jne L_0061963c }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00619270 }
	__asm { L_0061963c: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00619671 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { fld dword ptr [edi + 0xc] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [edi + 0x10] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov dword ptr [ecx + 0x14], eax }
	__asm { mov eax, dword ptr [edi + 0x18] }
	__asm { mov dword ptr [ecx + 0x18], eax }
	__asm { mov eax, dword ptr [edi + 0x1c] }
	__asm { mov dword ptr [ecx + 0x1c], eax }
	__asm { L_00619671: }
	__asm { add dword ptr [esi + 4], 0x20 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_01038248[];
// FUNCTION: ROBLOXSTUDIO 0x0061c380
extern "C" __declspec(naked) void asm_0061c380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { fld1 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [esi] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { mov ecx, esi }
	__asm { fld dword ptr [g_01038248] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { fstp dword ptr [esp] }
	__asm { call eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { fstp dword ptr [ebp + 0xc] }
	__asm { fld1 }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [g_01038248] }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call eax }
	__asm { fstp dword ptr [ebp - 4] }
	__asm { fld1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [g_01038248] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call eax }
	__asm { fstp dword ptr [ebp - 8] }
	__asm { fld1 }
	__asm { mov eax, dword ptr [esi] }
	__asm { sub esp, 8 }
	__asm { fstp dword ptr [esp + 4] }
	__asm { fld dword ptr [g_01038248] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { mov ecx, esi }
	__asm { fstp dword ptr [esp] }
	__asm { call eax }
	__asm { fld dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop esi }
	__asm { fstp dword ptr [eax] }
	__asm { fld dword ptr [ebp - 4] }
	__asm { fstp dword ptr [eax + 4] }
	__asm { fld dword ptr [ebp - 8] }
	__asm { fstp dword ptr [eax + 8] }
	__asm { fstp dword ptr [eax + 0xc] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x0061e0e0
extern "C" __declspec(naked) void asm_0061e0e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { fld dword ptr [eax] }
	__asm { fstp dword ptr [ecx] }
	__asm { fld dword ptr [eax + 4] }
	__asm { fstp dword ptr [ecx + 4] }
	__asm { fld dword ptr [eax + 8] }
	__asm { fstp dword ptr [ecx + 8] }
	__asm { fld dword ptr [eax + 0xc] }
	__asm { fstp dword ptr [ecx + 0xc] }
	__asm { fld dword ptr [eax + 0x10] }
	__asm { fstp dword ptr [ecx + 0x10] }
	__asm { fld dword ptr [eax + 0x14] }
	__asm { fstp dword ptr [ecx + 0x14] }
	__asm { fld dword ptr [eax + 0x18] }
	__asm { fstp dword ptr [ecx + 0x18] }
	__asm { fld dword ptr [eax + 0x1c] }
	__asm { fstp dword ptr [ecx + 0x1c] }
	__asm { fld dword ptr [eax + 0x20] }
	__asm { fstp dword ptr [ecx + 0x20] }
	__asm { fld dword ptr [eax + 0x24] }
	__asm { fstp dword ptr [ecx + 0x24] }
	__asm { fld dword ptr [eax + 0x28] }
	__asm { fstp dword ptr [ecx + 0x28] }
	__asm { fld dword ptr [eax + 0x2c] }
	__asm { fstp dword ptr [ecx + 0x2c] }
	__asm { fld dword ptr [eax + 0x30] }
	__asm { fstp dword ptr [ecx + 0x30] }
	__asm { fld dword ptr [eax + 0x34] }
	__asm { fstp dword ptr [ecx + 0x34] }
	__asm { fld dword ptr [eax + 0x38] }
	__asm { fstp dword ptr [ecx + 0x38] }
	__asm { fld dword ptr [eax + 0x3c] }
	__asm { fstp dword ptr [ecx + 0x3c] }
	__asm { fld dword ptr [eax + 0x40] }
	__asm { fstp dword ptr [ecx + 0x40] }
	__asm { fld dword ptr [eax + 0x44] }
	__asm { fstp dword ptr [ecx + 0x44] }
	__asm { fld dword ptr [eax + 0x48] }
	__asm { fstp dword ptr [ecx + 0x48] }
	__asm { fld dword ptr [eax + 0x4c] }
	__asm { fstp dword ptr [ecx + 0x4c] }
	__asm { fld dword ptr [eax + 0x50] }
	__asm { fstp dword ptr [ecx + 0x50] }
	__asm { fld dword ptr [eax + 0x54] }
	__asm { fstp dword ptr [ecx + 0x54] }
	__asm { fld dword ptr [eax + 0x58] }
	__asm { fstp dword ptr [ecx + 0x58] }
	__asm { fld dword ptr [eax + 0x5c] }
	__asm { fstp dword ptr [ecx + 0x5c] }
	__asm { fld dword ptr [eax + 0x60] }
	__asm { fstp dword ptr [ecx + 0x60] }
	__asm { fld dword ptr [eax + 0x64] }
	__asm { fstp dword ptr [ecx + 0x64] }
	__asm { fld dword ptr [eax + 0x68] }
	__asm { fstp dword ptr [ecx + 0x68] }
	__asm { fld dword ptr [eax + 0x6c] }
	__asm { fstp dword ptr [ecx + 0x6c] }
	__asm { fld dword ptr [eax + 0x70] }
	__asm { fstp dword ptr [ecx + 0x70] }
	__asm { fld dword ptr [eax + 0x74] }
	__asm { fstp dword ptr [ecx + 0x74] }
	__asm { fld dword ptr [eax + 0x78] }
	__asm { fstp dword ptr [ecx + 0x78] }
	__asm { fld dword ptr [eax + 0x7c] }
	__asm { fstp dword ptr [ecx + 0x7c] }
	__asm { fld dword ptr [eax + 0x80] }
	__asm { fstp dword ptr [ecx + 0x80] }
	__asm { fld dword ptr [eax + 0x84] }
	__asm { fstp dword ptr [ecx + 0x84] }
	__asm { fld dword ptr [eax + 0x88] }
	__asm { fstp dword ptr [ecx + 0x88] }
	__asm { fld dword ptr [eax + 0x8c] }
	__asm { fstp dword ptr [ecx + 0x8c] }
	__asm { fld dword ptr [eax + 0x90] }
	__asm { fstp dword ptr [ecx + 0x90] }
	__asm { fld dword ptr [eax + 0x94] }
	__asm { fstp dword ptr [ecx + 0x94] }
	__asm { fld dword ptr [eax + 0x98] }
	__asm { fstp dword ptr [ecx + 0x98] }
	__asm { fld dword ptr [eax + 0x9c] }
	__asm { fstp dword ptr [ecx + 0x9c] }
	__asm { fld dword ptr [eax + 0xa0] }
	__asm { mov eax, ecx }
	__asm { fstp dword ptr [ecx + 0xa0] }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_0061de20();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0061e370
extern "C" __declspec(naked) void asm_0061e370()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fb90 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test edi, edi }
	__asm { je L_0061e3cb }
	__asm { cmp edi, 0x4924924 }
	__asm { ja L_0061e3c5 }
	__asm { lea eax, [edi*8] }
	__asm { sub eax, edi }
	__asm { shl eax, 3 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_0061e3cb }
	__asm { L_0061e3c5: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0061e3cb: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_0061de20 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0061e41a }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0061e41a: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [edi*8] }
	__asm { sub eax, edi }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { lea eax, [ecx*8] }
	__asm { sub eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + eax*8] }
	__asm { mov dword ptr [ebx + 4], eax }
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

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_0061de60();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0061e470
extern "C" __declspec(naked) void asm_0061e470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fba0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], ebx }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { test edi, edi }
	__asm { je L_0061e4c7 }
	__asm { cmp edi, 0xfffffff }
	__asm { ja L_0061e4c1 }
	__asm { mov eax, edi }
	__asm { shl eax, 4 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { test esi, esi }
	__asm { jne L_0061e4c7 }
	__asm { L_0061e4c1: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0061e4c7: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_0061de60 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ebx, dword ptr [ebx + 4] }
	__asm { add esp, 0x18 }
	__asm { sub ebx, eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_0061e500 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0061e500: }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { shl edi, 4 }
	__asm { add edi, esi }
	__asm { mov dword ptr [eax + 8], edi }
	__asm { and ebx, 0xfffffff0 }
	__asm { add ebx, esi }
	__asm { pop edi }
	__asm { mov dword ptr [eax], esi }
	__asm { mov dword ptr [eax + 4], ebx }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e10260[];
extern "C" void fn_0061e470();
// FUNCTION: ROBLOXSTUDIO 0x0061e5c0
extern "C" __declspec(naked) void asm_0061e5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov eax, edx }
	__asm { sub eax, esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { sar eax, 4 }
	__asm { cmp eax, edi }
	__asm { jae L_0061e62d }
	__asm { sub esi, dword ptr [ecx] }
	__asm { push ebx }
	__asm { mov ebx, 0xfffffff }
	__asm { sar esi, 4 }
	__asm { mov eax, ebx }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_0061e5f7 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0061e5f7: }
	__asm { sub edx, dword ptr [ecx] }
	__asm { add esi, edi }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 1 }
	__asm { sub ebx, eax }
	__asm { cmp ebx, edx }
	__asm { pop ebx }
	__asm { jae L_0061e61b }
	__asm { xor edx, edx }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_0061e470 }
	__asm { L_0061e61b: }
	__asm { add edx, eax }
	__asm { cmp edx, esi }
	__asm { pop edi }
	__asm { cmovb edx, esi }
	__asm { pop esi }
	__asm { mov dword ptr [ebp + 8], edx }
	__asm { pop ebp }
	__asm { jmp fn_0061e470 }
	__asm { L_0061e62d: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012dc240[];
extern "C" void fn_00673ed0();
extern "C" void fn_00681240();
extern "C" void fn_006b8aae();
extern "C" void fn_006b8ab4();
// FUNCTION: ROBLOXSTUDIO 0x00620570
extern "C" __declspec(naked) void asm_00620570()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fd26 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push 2 }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { call fn_00673ed0 }
	__asm { mov dword ptr [esi], 0xe33ba0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [esi + 0x9c], 0 }
	__asm { mov dword ptr [esi + 0xa0], 0 }
	__asm { mov dword ptr [esi + 0xa4], 0 }
	__asm { mov dword ptr [esi + 0xa8], 0 }
	__asm { mov dword ptr [esi + 0xac], 0 }
	__asm { mov dword ptr [esi + 0xb0], 0 }
	__asm { mov dword ptr [esi + 0xb4], 0 }
	__asm { mov dword ptr [esi + 0xb8], 0 }
	__asm { mov dword ptr [esi + 0xbc], 0 }
	__asm { mov dword ptr [esi + 0xc0], 0 }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov bl, byte ptr [ebp + 0x14] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { mov dword ptr [esi + 0xc4], edx }
	__asm { mov dword ptr [esi + 0xc8], ecx }
	__asm { mov byte ptr [esi + 0xcc], bl }
	__asm { mov byte ptr [esi + 0xcd], 0 }
	__asm { test edx, edx }
	__asm { je L_00620657 }
	__asm { mov al, byte ptr [g_012dc240] }
	__asm { test al, al }
	__asm { je L_00620687 }
	__asm { push 0 }
	__asm { push edx }
	__asm { push esi }
	__asm { movzx eax, al }
	__asm { push 0xe34a74 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { jmp L_00620687 }
	__asm { L_00620657: }
	__asm { mov dl, byte ptr [g_012dc240] }
	__asm { test dl, dl }
	__asm { je L_00620687 }
	__asm { movzx eax, word ptr [ecx + 0xe] }
	__asm { push eax }
	__asm { movsx eax, word ptr [ecx + 0xc] }
	__asm { push eax }
	__asm { movsx eax, word ptr [ecx + 0xa] }
	__asm { push eax }
	__asm { movsx eax, word ptr [ecx + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { movzx eax, dl }
	__asm { push 0xe34a9c }
	__asm { push eax }
	__asm { call fn_006b8ab4 }
	__asm { add esp, 0x1c }
	__asm { L_00620687: }
	__asm { test bl, bl }
	__asm { jne L_00620697 }
	__asm { mov ecx, dword ptr [edi + 0x198] }
	__asm { push esi }
	__asm { call fn_00681240 }
	__asm { L_00620697: }
	__asm { cmp dword ptr [esi + 0xc4], 0 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [eax + 0x1c8] }
	__asm { je L_006206b1 }
	__asm { inc dword ptr [eax + 0xb4] }
	__asm { jmp L_006206c8 }
	__asm { L_006206b1: }
	__asm { cmp byte ptr [esi + 0xcc], 0 }
	__asm { je L_006206c2 }
	__asm { inc dword ptr [eax + 0xac] }
	__asm { jmp L_006206c8 }
	__asm { L_006206c2: }
	__asm { inc dword ptr [eax + 0xa4] }
	__asm { L_006206c8: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

extern "C" char g_00e10268[];
extern "C" void fn_006204f0();
extern "C" void fn_006212b0();
extern "C" void fn_00673f40();
extern "C" void fn_006813a0();
extern "C" void fn_00adee70();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006206e0
extern "C" __declspec(naked) void asm_006206e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fd62 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 0x10], esi }
	__asm { mov dword ptr [esi], 0xe33ba0 }
	__asm { mov dword ptr [ebp - 4], 3 }
	__asm { call fn_006212b0 }
	__asm { lea ecx, [esi + 0xb4] }
	__asm { call fn_006204f0 }
	__asm { cmp dword ptr [esi + 0xc4], 0 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [eax + 0x1c8] }
	__asm { je L_00620736 }
	__asm { add eax, 0xb4 }
	__asm { jmp L_0062074b }
	__asm { L_00620736: }
	__asm { cmp byte ptr [esi + 0xcc], 0 }
	__asm { je L_00620746 }
	__asm { add eax, 0xac }
	__asm { jmp L_0062074b }
	__asm { L_00620746: }
	__asm { add eax, 0xa4 }
	__asm { L_0062074b: }
	__asm { dec dword ptr [eax] }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { push esi }
	__asm { mov ecx, dword ptr [eax + 0x198] }
	__asm { call fn_006813a0 }
	__asm { lea ecx, [esi + 0xb4] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_00adee70 }
	__asm { cmp dword ptr [esi + 0xa8], 0 }
	__asm { lea edi, [esi + 0xa8] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { je L_006207a4 }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { L_006207a4: }
	__asm { cmp dword ptr [esi + 0x9c], 0 }
	__asm { lea edi, [esi + 0x9c] }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { je L_006207dd }
	__asm { mov ecx, edi }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi], 0 }
	__asm { mov dword ptr [edi + 4], 0 }
	__asm { mov dword ptr [edi + 8], 0 }
	__asm { L_006207dd: }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_00673f40 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dc240[];
extern "C" void fn_00620160();
extern "C" void fn_00626590();
extern "C" void fn_0068bac0();
extern "C" void fn_006b8a9c();
extern "C" void fn_006b8aae();
extern "C" void fn_007b3a00();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x00620800
extern "C" __declspec(naked) void asm_00620800()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0fd7f }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x20 }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { mov cl, byte ptr [g_012dc240] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { test cl, cl }
	__asm { je L_006208b7 }
	__asm { mov eax, dword ptr [esi + 0xac] }
	__asm { sub eax, dword ptr [esi + 0xa8] }
	__asm { sar eax, 3 }
	__asm { push eax }
	__asm { push dword ptr [edi] }
	__asm { movzx eax, cl }
	__asm { push esi }
	__asm { push 0xe34ad0 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { cmp byte ptr [g_012dc240], 0 }
	__asm { je L_006208b7 }
	__asm { mov ecx, dword ptr [edi] }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { call fn_007b3a00 }
	__asm { cmp dword ptr [eax + 0x14], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { jb L_00620877 }
	__asm { mov eax, dword ptr [eax] }
	__asm { L_00620877: }
	__asm { push eax }
	__asm { movzx eax, byte ptr [g_012dc240] }
	__asm { push 0xe34b00 }
	__asm { push eax }
	__asm { call fn_006b8a9c }
	__asm { add esp, 0xc }
	__asm { cmp dword ptr [ebp - 0x18], 0x10 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { jb L_006208a5 }
	__asm { push dword ptr [ebp - 0x2c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006208a5: }
	__asm { mov dword ptr [ebp - 0x18], 0xf }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov byte ptr [ebp - 0x2c], 0 }
	__asm { L_006208b7: }
	__asm { mov eax, dword ptr [edi] }
	__asm { push 0x20 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { call fn_00626590 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test eax, eax }
	__asm { je L_006208df }
	__asm { push edi }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00620160 }
	__asm { jmp L_006208e1 }
	__asm { L_006208df: }
	__asm { xor eax, eax }
	__asm { L_006208e1: }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { lea eax, [ebp - 0x14] }
	__asm { lea ecx, [esi + 0xa8] }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_0068bac0 }
	__asm { cmp dword ptr [esi + 0xc4], 0 }
	__asm { mov eax, dword ptr [esi + 0x38] }
	__asm { mov eax, dword ptr [eax + 0x1c8] }
	__asm { je L_00620913 }
	__asm { add eax, 0xb4 }
	__asm { jmp L_00620928 }
	__asm { L_00620913: }
	__asm { cmp byte ptr [esi + 0xcc], 0 }
	__asm { je L_00620923 }
	__asm { add eax, 0xac }
	__asm { jmp L_00620928 }
	__asm { L_00620923: }
	__asm { add eax, 0xa4 }
	__asm { L_00620928: }
	__asm { inc dword ptr [eax + 4] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov byte ptr [esi + 0xce], 1 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" char g_012dc240[];
extern "C" void fn_006b8aae();
extern "C" void fn_007700e0();
// FUNCTION: ROBLOXSTUDIO 0x006212b0
extern "C" __declspec(naked) void asm_006212b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov cl, byte ptr [g_012dc240] }
	__asm { push esi }
	__asm { push edi }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { test cl, cl }
	__asm { je L_006212f2 }
	__asm { mov eax, dword ptr [ebx + 0x10] }
	__asm { sub eax, dword ptr [ebx + 0xc] }
	__asm { sar eax, 2 }
	__asm { push eax }
	__asm { mov eax, dword ptr [ebx + 0xac] }
	__asm { sub eax, dword ptr [ebx + 0xa8] }
	__asm { sar eax, 3 }
	__asm { push eax }
	__asm { push ebx }
	__asm { movzx eax, cl }
	__asm { push 0xe34f40 }
	__asm { push eax }
	__asm { call fn_006b8aae }
	__asm { add esp, 0x14 }
	__asm { L_006212f2: }
	__asm { mov ecx, ebx }
	__asm { call fn_007700e0 }
	__asm { cmp dword ptr [ebx + 0xc4], 0 }
	__asm { mov eax, dword ptr [ebx + 0x38] }
	__asm { mov ecx, dword ptr [eax + 0x1c8] }
	__asm { je L_00621313 }
	__asm { add ecx, 0xb4 }
	__asm { jmp L_0062132a }
	__asm { L_00621313: }
	__asm { cmp byte ptr [ebx + 0xcc], 0 }
	__asm { je L_00621324 }
	__asm { add ecx, 0xac }
	__asm { jmp L_0062132a }
	__asm { L_00621324: }
	__asm { add ecx, 0xa4 }
	__asm { L_0062132a: }
	__asm { mov eax, dword ptr [ebx + 0xac] }
	__asm { sub eax, dword ptr [ebx + 0xa8] }
	__asm { lea edi, [ebx + 0xa8] }
	__asm { sar eax, 3 }
	__asm { sub dword ptr [ecx + 4], eax }
	__asm { mov ebx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ebx }
	__asm { sar eax, 3 }
	__asm { xor esi, esi }
	__asm { test eax, eax }
	__asm { je L_00621378 }
	__asm { L_00621352: }
	__asm { mov ecx, dword ptr [ebx + esi*8 + 4] }
	__asm { mov eax, dword ptr [ecx] }
	__asm { call dword ptr [eax + 0x20] }
	__asm { mov ecx, dword ptr [ebx + esi*8 + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00621369 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push 1 }
	__asm { call dword ptr [eax] }
	__asm { L_00621369: }
	__asm { mov ebx, dword ptr [edi] }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, ebx }
	__asm { inc esi }
	__asm { sar eax, 3 }
	__asm { cmp esi, eax }
	__asm { jb L_00621352 }
	__asm { L_00621378: }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { lea ecx, [esi + 0x9c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [esi + 0x9c] }
	__asm { mov ecx, edi }
	__asm { mov dword ptr [esi + 0xa0], eax }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dc240[];
extern "C" void fn_00681fa0();
extern "C" void fn_00682020();
extern "C" void fn_006b8ab4();
// FUNCTION: ROBLOXSTUDIO 0x006217a0
extern "C" __declspec(naked) void asm_006217a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { cmp dword ptr [esi + 0xc8], 0 }
	__asm { je L_0062182a }
	__asm { mov al, byte ptr [esi + 0xcc] }
	__asm { push ebx }
	__asm { mov bl, byte ptr [ebp + 8] }
	__asm { test al, al }
	__asm { je L_006217c5 }
	__asm { test bl, bl }
	__asm { je L_006217c9 }
	__asm { test al, al }
	__asm { jne L_00621829 }
	__asm { L_006217c5: }
	__asm { test bl, bl }
	__asm { je L_00621829 }
	__asm { L_006217c9: }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { call fn_00682020 }
	__asm { mov dl, byte ptr [esi + 0xcc] }
	__asm { add esp, 4 }
	__asm { cmp al, dl }
	__asm { je L_00621829 }
	__asm { mov cl, byte ptr [g_012dc240] }
	__asm { test cl, cl }
	__asm { je L_00621809 }
	__asm { movzx eax, al }
	__asm { push eax }
	__asm { movzx eax, dl }
	__asm { push eax }
	__asm { movzx eax, bl }
	__asm { push eax }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { movzx eax, cl }
	__asm { push esi }
	__asm { push 0xe34f78 }
	__asm { push eax }
	__asm { call fn_006b8ab4 }
	__asm { add esp, 0x1c }
	__asm { L_00621809: }
	__asm { cmp dword ptr [esi + 0xc8], 0 }
	__asm { je L_00621829 }
	__asm { movzx eax, byte ptr [esi + 0xcc] }
	__asm { mov ecx, dword ptr [esi + 0x38] }
	__asm { push eax }
	__asm { mov ecx, dword ptr [ecx + 0x198] }
	__asm { push esi }
	__asm { call fn_00681fa0 }
	__asm { L_00621829: }
	__asm { pop ebx }
	__asm { L_0062182a: }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" char g_012dc240[];
extern "C" void fn_006237c0();
extern "C" void fn_00623a30();
extern "C" void fn_006b8ab4();
// FUNCTION: ROBLOXSTUDIO 0x00621bc0
extern "C" __declspec(naked) void asm_00621bc0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { cmp byte ptr [edi + 0xcc], 0 }
	__asm { jne L_00621c54 }
	__asm { push esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { push dword ptr [ebp - 4] }
	__asm { push dword ptr [edi + 0xac] }
	__asm { push dword ptr [edi + 0xa8] }
	__asm { call fn_006237c0 }
	__asm { mov ecx, dword ptr [edi + 0xac] }
	__asm { mov esi, eax }
	__asm { mov eax, ecx }
	__asm { sub eax, esi }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebp - 4] }
	__asm { sar eax, 3 }
	__asm { push eax }
	__asm { push ecx }
	__asm { push esi }
	__asm { call fn_00623a30 }
	__asm { mov dl, byte ptr [g_012dc240] }
	__asm { add esp, 0x20 }
	__asm { test dl, dl }
	__asm { je L_00621c53 }
	__asm { mov eax, dword ptr [edi + 0xac] }
	__asm { mov ecx, dword ptr [edi + 0xa8] }
	__asm { sub eax, esi }
	__asm { push 0 }
	__asm { sar eax, 3 }
	__asm { push eax }
	__asm { mov eax, dword ptr [edi + 0xac] }
	__asm { sub esi, ecx }
	__asm { sub eax, ecx }
	__asm { sar esi, 3 }
	__asm { push esi }
	__asm { sar eax, 3 }
	__asm { push eax }
	__asm { push edi }
	__asm { movzx eax, dl }
	__asm { push 0xe34ef8 }
	__asm { push eax }
	__asm { call fn_006b8ab4 }
	__asm { add esp, 0x1c }
	__asm { L_00621c53: }
	__asm { pop esi }
	__asm { L_00621c54: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00623850();
// FUNCTION: ROBLOXSTUDIO 0x00622800
extern "C" __declspec(naked) void asm_00622800()
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
	__asm { jge L_00622856 }
	__asm { nop }
	__asm { L_00622820: }
	__asm { mov ecx, dword ptr [esi + eax*8 - 8] }
	__asm { mov edx, dword ptr [ecx + 0x14] }
	__asm { mov ecx, dword ptr [esi + eax*8] }
	__asm { and edx, 4 }
	__asm { mov ecx, dword ptr [ecx + 0x14] }
	__asm { and ecx, 4 }
	__asm { cmp cl, dl }
	__asm { jbe L_00622838 }
	__asm { dec eax }
	__asm { L_00622838: }
	__asm { mov ecx, dword ptr [esi + eax*8] }
	__asm { mov dword ptr [esi + edi*8], ecx }
	__asm { mov ecx, dword ptr [esi + eax*8 + 4] }
	__asm { mov dword ptr [esi + edi*8 + 4], ecx }
	__asm { mov edi, eax }
	__asm { lea eax, [eax*2 + 2] }
	__asm { cmp eax, ebx }
	__asm { jl L_00622820 }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { L_00622856: }
	__asm { jne L_0062286a }
	__asm { mov eax, dword ptr [esi + ebx*8 - 8] }
	__asm { mov dword ptr [esi + edi*8], eax }
	__asm { mov eax, dword ptr [esi + ebx*8 - 4] }
	__asm { mov dword ptr [esi + edi*8 + 4], eax }
	__asm { lea edi, [ebx - 1] }
	__asm { L_0062286a: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00623850 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006238c0();
extern "C" void fn_00891c30();
// FUNCTION: ROBLOXSTUDIO 0x00622880
extern "C" __declspec(naked) void asm_00622880()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { push edi }
	__asm { lea esi, [ecx*2 + 2] }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 4], edi }
	__asm { cmp esi, edx }
	__asm { jge L_006228df }
	__asm { L_006228a0: }
	__asm { mov ecx, dword ptr [ebx + esi*8 - 8] }
	__asm { call fn_00891c30 }
	__asm { mov ecx, dword ptr [ebx + esi*8] }
	__asm { mov edi, eax }
	__asm { call fn_00891c30 }
	__asm { cmp eax, edi }
	__asm { jae L_006228b8 }
	__asm { dec esi }
	__asm { L_006228b8: }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebx + esi*8] }
	__asm { mov edx, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebx + ecx*8], eax }
	__asm { mov eax, dword ptr [ebx + esi*8 + 4] }
	__asm { mov dword ptr [ebx + ecx*8 + 4], eax }
	__asm { mov ecx, esi }
	__asm { lea esi, [esi*2 + 2] }
	__asm { mov dword ptr [ebp + 0xc], ecx }
	__asm { cmp esi, edx }
	__asm { jl L_006228a0 }
	__asm { mov edi, dword ptr [ebp - 4] }
	__asm { L_006228df: }
	__asm { jne L_006228f3 }
	__asm { mov eax, dword ptr [ebx + edx*8 - 8] }
	__asm { mov dword ptr [ebx + ecx*8], eax }
	__asm { mov eax, dword ptr [ebx + edx*8 - 4] }
	__asm { mov dword ptr [ebx + ecx*8 + 4], eax }
	__asm { lea ecx, [edx - 1] }
	__asm { L_006228f3: }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { push ecx }
	__asm { push ebx }
	__asm { call fn_006238c0 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_00e10260[];
extern "C" void fn_00622910();
extern "C" void fn_00627030();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00623020
extern "C" __declspec(naked) void asm_00623020()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0fef0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, ecx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00623053: }
	__asm { cmp eax, dword ptr [ebp + 0x10] }
	__asm { je L_006230c4 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { add eax, 8 }
	__asm { push eax }
	__asm { push dword ptr [esi + 4] }
	__asm { mov ecx, edi }
	__asm { push esi }
	__asm { call fn_00622910 }
	__asm { mov edx, eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov ecx, 0x38e38e2 }
	__asm { sub ecx, eax }
	__asm { cmp ecx, 1 }
	__asm { jae L_00623086 }
	__asm { push 0x1007d24 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00623086: }
	__asm { inc eax }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [eax], edx }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { jmp L_00623053 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { je L_006230bb }
	__asm { mov edi, dword ptr [ebp - 0x18] }
	__asm { L_006230a7: }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, edi }
	__asm { push dword ptr [eax + 4] }
	__asm { call fn_00627030 }
	__asm { mov esi, dword ptr [esi] }
	__asm { cmp esi, dword ptr [ebp + 0xc] }
	__asm { jne L_006230a7 }
	__asm { L_006230bb: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_006230c4: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x10 }
}

// FUNCTION: ROBLOXSTUDIO 0x006230e0
extern "C" __declspec(naked) void asm_006230e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esp, 0x14 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { cmp esi, eax }
	__asm { je L_006231a7 }
	__asm { push edi }
	__asm { lea edi, [esi + 8] }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { cmp edi, eax }
	__asm { je L_006231a6 }
	__asm { push ebx }
	__asm { L_00623105: }
	__asm { mov edx, dword ptr [edi] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { lea eax, [edi + 4] }
	__asm { mov dword ptr [ebp - 0xc], ecx }
	__asm { mov ecx, dword ptr [edx + 0x14] }
	__asm { and ecx, 4 }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov ebx, edi }
	__asm { mov ecx, dword ptr [ecx + 0x14] }
	__asm { and ecx, 4 }
	__asm { mov dword ptr [ebp - 8], edx }
	__asm { cmp dword ptr [ebp - 4], ecx }
	__asm { jbe L_0062314f }
	__asm { cmp esi, edi }
	__asm { je L_00623145 }
	__asm { nop }
	__asm { L_00623130: }
	__asm { mov ecx, dword ptr [eax - 0xc] }
	__asm { lea eax, [eax - 8] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [eax] }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { lea ecx, [eax - 4] }
	__asm { cmp ecx, esi }
	__asm { jne L_00623130 }
	__asm { L_00623145: }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [esi], edx }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { jmp L_00623196 }
	__asm { L_0062314f: }
	__asm { mov eax, dword ptr [edi - 8] }
	__asm { lea edx, [edi - 8] }
	__asm { mov eax, dword ptr [eax + 0x14] }
	__asm { and eax, 4 }
	__asm { cmp dword ptr [ebp - 4], eax }
	__asm { jbe L_0062318b }
	__asm { mov esi, dword ptr [edx] }
	__asm { mov edi, dword ptr [ebp - 8] }
	__asm { L_00623165: }
	__asm { mov dword ptr [ebx], esi }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { mov esi, dword ptr [edx - 8] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { mov ebx, edx }
	__asm { sub edx, 8 }
	__asm { and ecx, 4 }
	__asm { and eax, 4 }
	__asm { cmp al, cl }
	__asm { ja L_00623165 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov edi, dword ptr [ebp - 0x10] }
	__asm { L_0062318b: }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { mov dword ptr [ebx], eax }
	__asm { mov eax, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { L_00623196: }
	__asm { add edi, 8 }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { cmp edi, dword ptr [ebp + 0xc] }
	__asm { jne L_00623105 }
	__asm { pop ebx }
	__asm { L_006231a6: }
	__asm { pop edi }
	__asm { L_006231a7: }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

// FUNCTION: ROBLOXSTUDIO 0x00623450
extern "C" __declspec(naked) void asm_00623450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [edx] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { push edi }
	__asm { mov edi, dword ptr [esi] }
	__asm { and ecx, 4 }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { and eax, 4 }
	__asm { cmp cl, al }
	__asm { jbe L_00623484 }
	__asm { cmp edx, esi }
	__asm { je L_00623484 }
	__asm { mov dword ptr [edx], edi }
	__asm { mov dword ptr [esi], ebx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { L_00623484: }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov ebx, dword ptr [edx] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov ecx, dword ptr [eax + 0x14] }
	__asm { mov eax, dword ptr [ebx + 0x14] }
	__asm { and ecx, 4 }
	__asm { and eax, 4 }
	__asm { cmp cl, al }
	__asm { jbe L_006234dd }
	__asm { cmp edi, edx }
	__asm { je L_006234b5 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov dword ptr [edi], ebx }
	__asm { mov dword ptr [edx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov ecx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [edx + 4], ecx }
	__asm { L_006234b5: }
	__asm { mov edi, dword ptr [esi] }
	__asm { mov ebx, dword ptr [edx] }
	__asm { mov eax, dword ptr [edi + 0x14] }
	__asm { mov ecx, dword ptr [ebx + 0x14] }
	__asm { and ecx, 4 }
	__asm { and eax, 4 }
	__asm { cmp cl, al }
	__asm { jbe L_006234dd }
	__asm { cmp edx, esi }
	__asm { je L_006234dd }
	__asm { mov dword ptr [edx], edi }
	__asm { mov dword ptr [esi], ebx }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { mov dword ptr [edx + 4], eax }
	__asm { mov dword ptr [esi + 4], ecx }
	__asm { L_006234dd: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00891c30();
// FUNCTION: ROBLOXSTUDIO 0x006234f0
extern "C" __declspec(naked) void asm_006234f0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { call fn_00891c30 }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { mov esi, eax }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { call fn_00891c30 }
	__asm { cmp esi, eax }
	__asm { jae L_00623524 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { L_00623524: }
	__asm { mov ecx, dword ptr [edi] }
	__asm { call fn_00891c30 }
	__asm { mov ecx, dword ptr [ebp + 0x10] }
	__asm { mov esi, eax }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { call fn_00891c30 }
	__asm { cmp eax, esi }
	__asm { jae L_00623578 }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [esi] }
	__asm { mov edx, dword ptr [esi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { mov dword ptr [edi], ecx }
	__asm { mov dword ptr [edi + 4], edx }
	__asm { call fn_00891c30 }
	__asm { mov ecx, dword ptr [ebx] }
	__asm { mov esi, eax }
	__asm { call fn_00891c30 }
	__asm { cmp esi, eax }
	__asm { jae L_00623578 }
	__asm { mov eax, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [edi] }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { mov dword ptr [edi], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [edi + 4], eax }
	__asm { mov dword ptr [ebx], ecx }
	__asm { mov dword ptr [ebx + 4], edx }
	__asm { L_00623578: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00623450();
// FUNCTION: ROBLOXSTUDIO 0x00623580
extern "C" __declspec(naked) void asm_00623580()
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
	__asm { jle L_00623607 }
	__asm { inc eax }
	__asm { cdq }
	__asm { and edx, 7 }
	__asm { add eax, edx }
	__asm { sar eax, 3 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, eax }
	__asm { shl ecx, 4 }
	__asm { lea edi, [eax*8] }
	__asm { lea eax, [ecx + ebx] }
	__asm { push eax }
	__asm { lea edx, [edi + ebx] }
	__asm { push edx }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { call fn_00623450 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [edi + ebx] }
	__asm { push eax }
	__asm { mov eax, ebx }
	__asm { sub eax, edi }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00623450 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, eax }
	__asm { push eax }
	__asm { sub eax, dword ptr [ebp - 4] }
	__asm { sub esi, edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_00623450 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, edi }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_00623450 }
	__asm { add esp, 0x40 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00623607: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call fn_00623450 }
	__asm { add esp, 0x10 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_006234f0();
// FUNCTION: ROBLOXSTUDIO 0x00623620
extern "C" __declspec(naked) void asm_00623620()
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
	__asm { jle L_006236a7 }
	__asm { inc eax }
	__asm { cdq }
	__asm { and edx, 7 }
	__asm { add eax, edx }
	__asm { sar eax, 3 }
	__asm { push esi }
	__asm { push edi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov ecx, eax }
	__asm { shl ecx, 4 }
	__asm { lea edi, [eax*8] }
	__asm { lea eax, [ecx + ebx] }
	__asm { push eax }
	__asm { lea edx, [edi + ebx] }
	__asm { push edx }
	__asm { push ebx }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { call fn_006234f0 }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [edi + ebx] }
	__asm { push eax }
	__asm { mov eax, ebx }
	__asm { sub eax, edi }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_006234f0 }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov esi, eax }
	__asm { push eax }
	__asm { sub eax, dword ptr [ebp - 4] }
	__asm { sub esi, edi }
	__asm { push esi }
	__asm { push eax }
	__asm { call fn_006234f0 }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { add eax, edi }
	__asm { push ebx }
	__asm { push eax }
	__asm { call fn_006234f0 }
	__asm { add esp, 0x40 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006236a7: }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { push ecx }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push ebx }
	__asm { call fn_006234f0 }
	__asm { add esp, 0x10 }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00622800();
// FUNCTION: ROBLOXSTUDIO 0x00623b20
extern "C" __declspec(naked) void asm_00623b20()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov eax, esi }
	__asm { sub eax, edi }
	__asm { and eax, 0xfffffff8 }
	__asm { cmp eax, 8 }
	__asm { jle L_00623b8f }
	__asm { push ebx }
	__asm { mov ebx, 0xfffffffc }
	__asm { mov eax, 4 }
	__asm { add esi, -4 }
	__asm { sub ebx, edi }
	__asm { sub eax, edi }
	__asm { mov dword ptr [ebp + 0xc], eax }
	__asm { nop }
	__asm { L_00623b50: }
	__asm { mov eax, dword ptr [esi - 4] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], eax }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [esi - 4], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [esi], eax }
	__asm { lea eax, [ebp - 8] }
	__asm { push eax }
	__asm { lea eax, [ebx + esi] }
	__asm { sar eax, 3 }
	__asm { push eax }
	__asm { push 0 }
	__asm { push edi }
	__asm { call fn_00622800 }
	__asm { mov eax, dword ptr [ebp + 0xc] }
	__asm { sub esi, 8 }
	__asm { add eax, esi }
	__asm { and eax, 0xfffffff8 }
	__asm { add esp, 0x14 }
	__asm { cmp eax, 8 }
	__asm { jg L_00623b50 }
	__asm { pop ebx }
	__asm { L_00623b8f: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dc698[];
extern "C" char g_012dc69c[];
extern "C" char g_012dc6a0[];
extern "C" char g_012dc6a4[];
extern "C" char g_012dc6a8[];
extern "C" char g_012dc6ac[];
extern "C" char g_012dc6b0[];
extern "C" char g_012dc6b4[];
extern "C" void fn_007cb250();
// FUNCTION: ROBLOXSTUDIO 0x00624380
extern "C" __declspec(naked) void asm_00624380()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0ff4e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012dc69c] }
	__asm { test al, 1 }
	__asm { jne L_006243c2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dc69c], eax }
	__asm { push 0xe99304 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dc698], eax }
	__asm { L_006243c2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0ffce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012dc6ac] }
	__asm { test al, 1 }
	__asm { jne L_00624412 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dc6ac], eax }
	__asm { push 0xe9a5d4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dc6a8], eax }
	__asm { L_00624412: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd0ffee }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012dc6b4] }
	__asm { test al, 1 }
	__asm { jne L_00624462 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dc6b4], eax }
	__asm { push 0xe9a5e4 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dc6b0], eax }
	__asm { L_00624462: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd1000e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { mov eax, dword ptr [g_012dc6a4] }
	__asm { test al, 1 }
	__asm { jne L_006244b2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dc6a4], eax }
	__asm { push 0xe99308 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_007cb250 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [g_012dc6a0], eax }
	__asm { L_006244b2: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00622480();
extern "C" void fn_007de8e0();
extern "C" void fn_009f7ea0();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x006244c0
extern "C" __declspec(naked) void asm_006244c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xec }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00624510 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_009f7ea0 }
	__asm { mov esi, eax }
	__asm { jmp L_00624512 }
	__asm { L_00624510: }
	__asm { xor esi, esi }
	__asm { L_00624512: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00622480 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00624543 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00624543 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00624543: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c48[];
extern "C" void fn_00622510();
extern "C" void fn_006275e0();
extern "C" void fn_007de8e0();
extern "C" void fn_009fa670();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00624560
extern "C" __declspec(naked) void asm_00624560()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ff7e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x9c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006245f6 }
	__asm { mov ecx, esi }
	__asm { call fn_009fa670 }
	__asm { mov dword ptr [esi], 0xe33d04 }
	__asm { mov dword ptr [esi + 4], 0xe33d7c }
	__asm { mov dword ptr [esi + 0x18], 0xe33d84 }
	__asm { mov dword ptr [esi + 0x1c], 0xe33d90 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_006275e0 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4c48] }
	__asm { mov dword ptr [esi], 0xe33da4 }
	__asm { mov dword ptr [esi + 4], 0xe33e1c }
	__asm { mov dword ptr [esi + 0x18], 0xe33e24 }
	__asm { mov dword ptr [esi + 0x1c], 0xe33e30 }
	__asm { jmp L_006245f8 }
	__asm { L_006245f6: }
	__asm { xor esi, esi }
	__asm { L_006245f8: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00622510 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00624629 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00624629 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00624629: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012e4c4c[];
extern "C" void fn_006225a0();
extern "C" void fn_00627660();
extern "C" void fn_007de8e0();
extern "C" void fn_009fa670();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00624640
extern "C" __declspec(naked) void asm_00624640()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd0ffae }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x9c }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test esi, esi }
	__asm { je L_006246d6 }
	__asm { mov ecx, esi }
	__asm { call fn_009fa670 }
	__asm { mov dword ptr [esi], 0xe33e4c }
	__asm { mov dword ptr [esi + 4], 0xe33ec4 }
	__asm { mov dword ptr [esi + 0x18], 0xe33ecc }
	__asm { mov dword ptr [esi + 0x1c], 0xe33ed8 }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_00627660 }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { inc dword ptr [g_012e4c4c] }
	__asm { mov dword ptr [esi], 0xe33eec }
	__asm { mov dword ptr [esi + 4], 0xe33f64 }
	__asm { mov dword ptr [esi + 0x18], 0xe33f6c }
	__asm { mov dword ptr [esi + 0x1c], 0xe33f78 }
	__asm { jmp L_006246d8 }
	__asm { L_006246d6: }
	__asm { xor esi, esi }
	__asm { L_006246d8: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_006225a0 }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test esi, esi }
	__asm { je L_00624709 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_00624709 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_00624709: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00622630();
extern "C" void fn_007de8e0();
extern "C" void fn_009f8050();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x00624720
extern "C" __declspec(naked) void asm_00624720()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0xec }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_00624770 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_009f8050 }
	__asm { mov esi, eax }
	__asm { jmp L_00624772 }
	__asm { L_00624770: }
	__asm { xor esi, esi }
	__asm { L_00624772: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00622630 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_006247a3 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_006247a3 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_006247a3: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_004063f0();
extern "C" void fn_00789980();
extern "C" void fn_008e9590();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00624b30
extern "C" __declspec(naked) void asm_00624b30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10040 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { sub eax, dword ptr [edi] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { sar eax, 2 }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_008e9590 }
	__asm { test al, al }
	__asm { je L_00624b9f }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_00789980 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_00624b9f: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_004063f0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" void fn_006240c0();
extern "C" void fn_00625cf0();
extern "C" void fn_00626990();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00624bd0
extern "C" __declspec(naked) void asm_00624bd0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10050 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [esi], 0 }
	__asm { mov dword ptr [esi + 4], 0 }
	__asm { mov dword ptr [esi + 8], 0 }
	__asm { mov edx, dword ptr [edi + 4] }
	__asm { sub edx, dword ptr [edi] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { push eax }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { call fn_00626990 }
	__asm { test al, al }
	__asm { je L_00624c4d }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push eax }
	__asm { push dword ptr [esi] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [edi + 4] }
	__asm { push dword ptr [edi] }
	__asm { call fn_006240c0 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [esi + 4], eax }
	__asm { L_00624c4d: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { mov ecx, dword ptr [ebp - 0x14] }
	__asm { call fn_00625cf0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012dc250[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006247c0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00625e40
extern "C" __declspec(naked) void asm_00625e40()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe33cdc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00625efb }
	__asm { cmp dword ptr [g_012dc250], 0x29a }
	__asm { je L_00625eb0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00625e9b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00625eb0 }
	__asm { L_00625e9b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00625eb0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00625efb }
	__asm { cmp dword ptr [g_012dc250], 0x29a }
	__asm { je L_00625efb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00625ee6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00625efb }
	__asm { L_00625ee6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00625efb: }
	__asm { call fn_006247c0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00625f52 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00625f52: }
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

extern "C" char g_012dc260[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00624860();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00625f90
extern "C" __declspec(naked) void asm_00625f90()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe33cfc }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0062604b }
	__asm { cmp dword ptr [g_012dc260], 0x29a }
	__asm { je L_00626000 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00625feb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00626000 }
	__asm { L_00625feb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00626000: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0062604b }
	__asm { cmp dword ptr [g_012dc260], 0x29a }
	__asm { je L_0062604b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00626036 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0062604b }
	__asm { L_00626036: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0062604b: }
	__asm { call fn_00624860 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_006260a2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_006260a2: }
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

extern "C" char g_012dc268[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_00624900();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x006260e0
extern "C" __declspec(naked) void asm_006260e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe33e40 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0062619b }
	__asm { cmp dword ptr [g_012dc268], 0x29a }
	__asm { je L_00626150 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0062613b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00626150 }
	__asm { L_0062613b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00626150: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0062619b }
	__asm { cmp dword ptr [g_012dc268], 0x29a }
	__asm { je L_0062619b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00626186 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0062619b }
	__asm { L_00626186: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0062619b: }
	__asm { call fn_00624900 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_006261f2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_006261f2: }
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

extern "C" char g_012dc258[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_006249a0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00626230
extern "C" __declspec(naked) void asm_00626230()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe33ce4 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006262eb }
	__asm { cmp dword ptr [g_012dc258], 0x29a }
	__asm { je L_006262a0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0062628b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006262a0 }
	__asm { L_0062628b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006262a0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_006262eb }
	__asm { cmp dword ptr [g_012dc258], 0x29a }
	__asm { je L_006262eb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_006262d6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_006262eb }
	__asm { L_006262d6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_006262eb: }
	__asm { call fn_006249a0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_00626342 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00626342: }
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

extern "C" void fn_00622760();
extern "C" void fn_006229b0();
extern "C" void fn_00622c90();
extern "C" void fn_006264e0();
extern "C" void fn_00626a00();
extern "C" void fn_00626b30();
// FUNCTION: ROBLOXSTUDIO 0x00626660
extern "C" __declspec(naked) void asm_00626660()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd100c0 }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x48 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push edi }
	__asm { mov ebx, ecx }
	__asm { call fn_00626b30 }
	__asm { mov esi, eax }
	__asm { cmp esi, dword ptr [ebx] }
	__asm { je L_006266ac }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov ecx, dword ptr [esi + 0x10] }
	__asm { cmp eax, ecx }
	__asm { jb L_006266ac }
	__asm { cmp ecx, eax }
	__asm { jb L_00626741 }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { cmp eax, dword ptr [esi + 0x14] }
	__asm { jge L_00626741 }
	__asm { L_006266ac: }
	__asm { mov dword ptr [ebp - 0x2c], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { lea ecx, [ebp - 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { call fn_00626a00 }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x2c] }
	__asm { push eax }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x54] }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { call fn_00622760 }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_006229b0 }
	__asm { push eax }
	__asm { add eax, 0x10 }
	__asm { push eax }
	__asm { push esi }
	__asm { lea eax, [ebp + 8] }
	__asm { push eax }
	__asm { mov ecx, ebx }
	__asm { call fn_00622c90 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp - 0x4c] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_006264e0 }
	__asm { lea ecx, [ebp - 0x2c] }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { call fn_006264e0 }
	__asm { L_00626741: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + 0x18] }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_00622a30();
extern "C" void fn_00624230();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00626b70
extern "C" __declspec(naked) void asm_00626b70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd100d0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test edi, edi }
	__asm { je L_00626bc5 }
	__asm { cmp edi, 0x71c71c7 }
	__asm { ja L_00626bbf }
	__asm { lea eax, [edi + edi*8] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00626bc5 }
	__asm { L_00626bbf: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00626bc5: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00624230 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp - 0x14], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00626c23 }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0xb] }
	__asm { push ecx }
	__asm { push dword ptr [ebx + 4] }
	__asm { push eax }
	__asm { call fn_00622a30 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { L_00626c23: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [edi + edi*8] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x14] }
	__asm { pop edi }
	__asm { lea eax, [eax + eax*8] }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 4], eax }
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

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_006242c0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00626c70
extern "C" __declspec(naked) void asm_00626c70()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd100e0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test edi, edi }
	__asm { je L_00626cc4 }
	__asm { cmp edi, 0x35e50d7 }
	__asm { ja L_00626cbe }
	__asm { mov eax, edi }
	__asm { imul eax, eax, 0x4c }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00626cc4 }
	__asm { L_00626cbe: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00626cc4: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_006242c0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul ecx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00626d11 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00626d11: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { imul edi, edi, 0x4c }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { imul eax, eax, 0x4c }
	__asm { add edi, esi }
	__asm { mov dword ptr [ebx + 8], edi }
	__asm { mov dword ptr [ebx], esi }
	__asm { pop edi }
	__asm { add eax, esi }
	__asm { mov dword ptr [ebx + 4], eax }
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

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_00688db0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00626d60
extern "C" __declspec(naked) void asm_00626d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd100f0 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test edi, edi }
	__asm { je L_00626dbb }
	__asm { cmp edi, 0x9249249 }
	__asm { ja L_00626db5 }
	__asm { lea eax, [edi*8] }
	__asm { sub eax, edi }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_00626dbb }
	__asm { L_00626db5: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_00626dbb: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00688db0 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x92492493 }
	__asm { imul ecx }
	__asm { add edx, ecx }
	__asm { sar edx, 4 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_00626e0a }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_00626e0a: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { lea eax, [edi*8] }
	__asm { sub eax, edi }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { lea eax, [ecx*8] }
	__asm { sub eax, ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 4], eax }
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

extern "C" char g_00e10260[];
extern "C" void fn_00626b70();
// FUNCTION: ROBLOXSTUDIO 0x00626e60
extern "C" __declspec(naked) void asm_00626e60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul edx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_00626efb }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul esi }
	__asm { sar edx, 3 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x71c71c7 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00626eb1 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00626eb1: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x38e38e39 }
	__asm { imul ebx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x71c71c7 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00626ee8 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00626b70 }
	__asm { L_00626ee8: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00626b70 }
	__asm { L_00626efb: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10260[];
extern "C" void fn_00626c70();
// FUNCTION: ROBLOXSTUDIO 0x00626f10
extern "C" __declspec(naked) void asm_00626f10()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul edx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_00626fab }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul esi }
	__asm { sar edx, 5 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x35e50d7 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_00626f61 }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_00626f61: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x6bca1af3 }
	__asm { imul ebx }
	__asm { sar edx, 5 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x35e50d7 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_00626f98 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00626c70 }
	__asm { L_00626f98: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00626c70 }
	__asm { L_00626fab: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e10268[];
extern "C" void fn_00622a30();
extern "C" void fn_00cf6522();
// FUNCTION: ROBLOXSTUDIO 0x006276e0
extern "C" __declspec(naked) void asm_006276e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 8 }
	__asm { mov eax, dword ptr [ecx] }
	__asm { push edi }
	__asm { mov edi, dword ptr [eax] }
	__asm { mov dword ptr [eax], eax }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov dword ptr [ebp - 8], ecx }
	__asm { mov dword ptr [eax + 4], eax }
	__asm { mov dword ptr [ecx + 4], 0 }
	__asm { cmp edi, dword ptr [ecx] }
	__asm { je L_00627790 }
	__asm { push ebx }
	__asm { push esi }
	__asm { L_00627706: }
	__asm { cmp dword ptr [edi + 0x3c], 0 }
	__asm { mov ebx, dword ptr [edi] }
	__asm { je L_00627737 }
	__asm { lea ecx, [edi + 0x3c] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [edi + 0x3c] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [edi + 0x3c], 0 }
	__asm { mov dword ptr [edi + 0x40], 0 }
	__asm { mov dword ptr [edi + 0x44], 0 }
	__asm { L_00627737: }
	__asm { cmp dword ptr [edi + 0x30], 0 }
	__asm { je L_00627778 }
	__asm { lea ecx, [edi + 0x30] }
	__asm { call dword ptr [g_00e10268] }
	__asm { push dword ptr [ebp - 8] }
	__asm { lea eax, [ebp - 1] }
	__asm { push eax }
	__asm { push dword ptr [edi + 0x34] }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00622a30 }
	__asm { push dword ptr [edi + 0x30] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 0x14 }
	__asm { mov dword ptr [edi + 0x30], 0 }
	__asm { mov dword ptr [edi + 0x34], 0 }
	__asm { mov dword ptr [edi + 0x38], 0 }
	__asm { L_00627778: }
	__asm { push edi }
	__asm { call fn_00cf6522 }
	__asm { mov eax, dword ptr [ebp - 8] }
	__asm { add esp, 4 }
	__asm { mov edi, ebx }
	__asm { cmp ebx, dword ptr [eax] }
	__asm { jne L_00627706 }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { L_00627790: }
	__asm { pop edi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dc294[];
extern "C" char g_012dc298[];
extern "C" char g_012dc29c[];
extern "C" char g_012dc2a0[];
extern "C" void fn_00629b70();
extern "C" void fn_006d19a0();
extern "C" void fn_006da0e0();
extern "C" void fn_00892440();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00629110
extern "C" __declspec(naked) void asm_00629110()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { mov ecx, dword ptr [ebp + 0xc] }
	__asm { push -1 }
	__asm { push 0xd1020e }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp ecx, edi }
	__asm { jne L_006291a8 }
	__asm { mov eax, dword ptr [g_012dc2a0] }
	__asm { test al, 1 }
	__asm { jne L_0062916a }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_012dc2a0], eax }
	__asm { mov ecx, 0x12dc270 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_006da0e0 }
	__asm { push 0xddfcd0 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0062916a: }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0x12dc270 }
	__asm { mov ecx, esi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [g_012dc294] }
	__asm { mov dword ptr [esi + 0x24], ecx }
	__asm { mov ecx, dword ptr [g_012dc298] }
	__asm { mov dword ptr [esi + 0x28], ecx }
	__asm { mov ecx, dword ptr [g_012dc29c] }
	__asm { mov dword ptr [esi + 0x2c], ecx }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_006291a8: }
	__asm { call fn_00892440 }
	__asm { mov esi, eax }
	__asm { test edi, edi }
	__asm { je L_006291da }
	__asm { mov ecx, edi }
	__asm { call fn_00892440 }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, eax }
	__asm { call fn_00629b70 }
	__asm { mov eax, esi }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
	__asm { L_006291da: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov ecx, edi }
	__asm { call fn_006d19a0 }
	__asm { mov ecx, dword ptr [esi + 0x24] }
	__asm { mov dword ptr [edi + 0x24], ecx }
	__asm { mov ecx, dword ptr [esi + 0x28] }
	__asm { mov dword ptr [edi + 0x28], ecx }
	__asm { mov ecx, dword ptr [esi + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], ecx }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop esi }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0xc }
}

extern "C" void fn_0062a1f0();
extern "C" void fn_006da0e0();
// FUNCTION: ROBLOXSTUDIO 0x0062a130
extern "C" __declspec(naked) void asm_0062a130()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10292 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x50 }
	__asm { push ebx }
	__asm { push esi }
	__asm { mov ebx, ecx }
	__asm { push edi }
	__asm { lea ecx, [ebp - 0x58] }
	__asm { mov dword ptr [ebp - 0x5c], 0 }
	__asm { call fn_006da0e0 }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { or dword ptr [ebp - 0x5c], 1 }
	__asm { mov edi, dword ptr [esi + 0xe8] }
	__asm { mov eax, edi }
	__asm { or eax, 4 }
	__asm { mov dword ptr [esi + 0xe8], eax }
	__asm { mov eax, dword ptr [esi] }
	__asm { mov ecx, esi }
	__asm { mov dword ptr [ebp - 0x1c], 0 }
	__asm { mov dword ptr [ebp - 0x20], 0 }
	__asm { mov dword ptr [ebp - 0x24], 0 }
	__asm { mov dword ptr [ebp - 0x28], 0 }
	__asm { mov byte ptr [ebp - 0x18], 0 }
	__asm { call dword ptr [eax + 0x88] }
	__asm { cmp eax, 3 }
	__asm { je L_0062a1d7 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov dword ptr [ebp - 0x10], 0 }
	__asm { push 1 }
	__asm { push 0 }
	__asm { lea eax, [ebp - 0x14] }
	__asm { push eax }
	__asm { lea eax, [ebp - 0x5c] }
	__asm { push eax }
	__asm { push 0 }
	__asm { push esi }
	__asm { mov ecx, ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { call fn_0062a1f0 }
	__asm { mov dword ptr [esi + 0xe8], edi }
	__asm { L_0062a1d7: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00631cf0();
// FUNCTION: ROBLOXSTUDIO 0x00631e00
extern "C" __declspec(naked) void asm_00631e00()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x18] }
	__asm { push esi }
	__asm { push dword ptr [ebp + 0x14] }
	__asm { lea eax, [ebp + 0x18] }
	__asm { push dword ptr [ebp + 0x10] }
	__asm { push dword ptr [ebp + 0xc] }
	__asm { push eax }
	__asm { call fn_00631cf0 }
	__asm { add esp, 0x14 }
	__asm { cmp byte ptr [ebp + 0x20], 0 }
	__asm { je L_00631e54 }
	__asm { test byte ptr [esi], 0x10 }
	__asm { je L_00631e54 }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dl, byte ptr [ebp + 0x1c] }
	__asm { and al, 0xf8 }
	__asm { and ah, 0xf8 }
	__asm { and dl, 7 }
	__asm { or al, dl }
	__asm { or ah, dl }
	__asm { mov byte ptr [ebp + 0x20], al }
	__asm { mov byte ptr [ebp + 0x21], ah }
	__asm { movzx eax, byte ptr [ebp + 0x1a] }
	__asm { and al, 0xf8 }
	__asm { or al, dl }
	__asm { mov byte ptr [ebp + 0x22], al }
	__asm { movzx eax, byte ptr [ebp + 0x1b] }
	__asm { mov byte ptr [ebp + 0x23], al }
	__asm { jmp L_00631e5a }
	__asm { L_00631e54: }
	__asm { mov eax, dword ptr [ebp + 0x18] }
	__asm { mov dword ptr [ebp + 0x20], eax }
	__asm { L_00631e5a: }
	__asm { test byte ptr [esi], 8 }
	__asm { lea eax, [ebp + 0x20] }
	__asm { pop esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { je L_00631e8a }
	__asm { mov ecx, eax }
	__asm { shr ecx, 0x10 }
	__asm { mov byte ptr [ebp + 0x20], cl }
	__asm { mov ecx, eax }
	__asm { shr ecx, 8 }
	__asm { mov byte ptr [ebp + 0x22], al }
	__asm { mov byte ptr [ebp + 0x21], cl }
	__asm { shr eax, 0x18 }
	__asm { mov byte ptr [ebp + 0x23], al }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00631e8a: }
	__asm { mov dword ptr [ebp + 0x20], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { lea ecx, [ebp + 0x20] }
	__asm { mov ecx, dword ptr [ecx] }
	__asm { mov dword ptr [eax], ecx }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0058a1e0();
extern "C" void fn_0063c420();
extern "C" void fn_0063c500();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00632df0
extern "C" __declspec(naked) void asm_00632df0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd103b9 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x10] }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { L_00632e24: }
	__asm { cmp edi, ebx }
	__asm { je L_00632e87 }
	__asm { mov dword ptr [ebp + 0xc], esi }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_00632e57 }
	__asm { push edi }
	__asm { mov ecx, esi }
	__asm { call fn_0063c500 }
	__asm { lea eax, [edi + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [esi + 0x14] }
	__asm { mov byte ptr [ebp - 4], 2 }
	__asm { call fn_0063c420 }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [esi + 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [esi + 0x2c], eax }
	__asm { L_00632e57: }
	__asm { add esi, 0x30 }
	__asm { mov byte ptr [ebp - 4], 0 }
	__asm { mov dword ptr [ebp + 0x10], esi }
	__asm { add edi, 0x30 }
	__asm { jmp L_00632e24 }
	__asm { mov esi, dword ptr [ebp - 0x14] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { cmp esi, edi }
	__asm { je L_00632e7e }
	__asm { L_00632e70: }
	__asm { mov ecx, esi }
	__asm { call fn_0058a1e0 }
	__asm { add esi, 0x30 }
	__asm { cmp esi, edi }
	__asm { jne L_00632e70 }
	__asm { L_00632e7e: }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
	__asm { L_00632e87: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { mov eax, esi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_00632a00();
extern "C" void fn_007de8e0();
extern "C" void fn_00a02330();
extern "C" void fn_00cf661e();
// FUNCTION: ROBLOXSTUDIO 0x0063b5b0
extern "C" __declspec(naked) void asm_0063b5b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd26676 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { push esi }
	__asm { push edi }
	__asm { push 0x120 }
	__asm { mov dword ptr [ebp - 0x14], 0 }
	__asm { mov byte ptr [ebp - 0x10], 0 }
	__asm { call fn_00cf661e }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test eax, eax }
	__asm { je L_0063b600 }
	__asm { push 1 }
	__asm { mov ecx, eax }
	__asm { call fn_00a02330 }
	__asm { mov esi, eax }
	__asm { jmp L_0063b602 }
	__asm { L_0063b600: }
	__asm { xor esi, esi }
	__asm { L_0063b602: }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { push dword ptr [ebp - 0x10] }
	__asm { lea ecx, [edi + 4] }
	__asm { push esi }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [edi], esi }
	__asm { call fn_00632a00 }
	__asm { mov dword ptr [ebp - 4], 1 }
	__asm { test esi, esi }
	__asm { je L_0063b633 }
	__asm { lea ecx, [esi + 0x20] }
	__asm { test ecx, ecx }
	__asm { je L_0063b633 }
	__asm { push esi }
	__asm { push edi }
	__asm { call fn_007de8e0 }
	__asm { L_0063b633: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" char g_012dc878[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_0063bb10();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0063e1d0
extern "C" __declspec(naked) void asm_0063e1d0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe3523c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063e28b }
	__asm { cmp dword ptr [g_012dc878], 0x29a }
	__asm { je L_0063e240 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063e22b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063e240 }
	__asm { L_0063e22b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063e240: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063e28b }
	__asm { cmp dword ptr [g_012dc878], 0x29a }
	__asm { je L_0063e28b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063e276 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063e28b }
	__asm { L_0063e276: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063e28b: }
	__asm { call fn_0063bb10 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0063e2e2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063e2e2: }
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

extern "C" char g_012dc888[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_0063bbb0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0063e320
extern "C" __declspec(naked) void asm_0063e320()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe3524c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063e3db }
	__asm { cmp dword ptr [g_012dc888], 0x29a }
	__asm { je L_0063e390 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063e37b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063e390 }
	__asm { L_0063e37b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063e390: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063e3db }
	__asm { cmp dword ptr [g_012dc888], 0x29a }
	__asm { je L_0063e3db }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063e3c6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063e3db }
	__asm { L_0063e3c6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063e3db: }
	__asm { call fn_0063bbb0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0063e432 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063e432: }
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

extern "C" char g_012dc890[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_0063bc50();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0063e470
extern "C" __declspec(naked) void asm_0063e470()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe35254 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063e52b }
	__asm { cmp dword ptr [g_012dc890], 0x29a }
	__asm { je L_0063e4e0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063e4cb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063e4e0 }
	__asm { L_0063e4cb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063e4e0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063e52b }
	__asm { cmp dword ptr [g_012dc890], 0x29a }
	__asm { je L_0063e52b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063e516 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063e52b }
	__asm { L_0063e516: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063e52b: }
	__asm { call fn_0063bc50 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0063e582 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063e582: }
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

extern "C" char g_012dc868[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_0063bd90();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0063e5c0
extern "C" __declspec(naked) void asm_0063e5c0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe3522c }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063e67b }
	__asm { cmp dword ptr [g_012dc868], 0x29a }
	__asm { je L_0063e630 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063e61b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063e630 }
	__asm { L_0063e61b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063e630: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063e67b }
	__asm { cmp dword ptr [g_012dc868], 0x29a }
	__asm { je L_0063e67b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063e666 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063e67b }
	__asm { L_0063e666: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063e67b: }
	__asm { call fn_0063bd90 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0063e6d2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063e6d2: }
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

extern "C" char g_012dc870[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_0063be30();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0063e710
extern "C" __declspec(naked) void asm_0063e710()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe35234 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063e7cb }
	__asm { cmp dword ptr [g_012dc870], 0x29a }
	__asm { je L_0063e780 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063e76b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063e780 }
	__asm { L_0063e76b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063e780: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063e7cb }
	__asm { cmp dword ptr [g_012dc870], 0x29a }
	__asm { je L_0063e7cb }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063e7b6 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063e7cb }
	__asm { L_0063e7b6: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063e7cb: }
	__asm { call fn_0063be30 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0063e822 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063e822: }
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

extern "C" char g_012dc860[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_0063bed0();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0063e860
extern "C" __declspec(naked) void asm_0063e860()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe35224 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063e91b }
	__asm { cmp dword ptr [g_012dc860], 0x29a }
	__asm { je L_0063e8d0 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063e8bb }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063e8d0 }
	__asm { L_0063e8bb: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063e8d0: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063e91b }
	__asm { cmp dword ptr [g_012dc860], 0x29a }
	__asm { je L_0063e91b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063e906 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063e91b }
	__asm { L_0063e906: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063e91b: }
	__asm { call fn_0063bed0 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0063e972 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063e972: }
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

extern "C" char g_012dc880[];
extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" char g_0131a2a4[];
extern "C" char g_0131a2a8[];
extern "C" char g_0131a2ac[];
extern "C" void fn_004097c0();
extern "C" void fn_00409860();
extern "C" void fn_00410ef0();
extern "C" void fn_0063bf70();
extern "C" void fn_006b9740();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x0063e9b0
extern "C" __declspec(naked) void asm_0063e9b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push -1 }
	__asm { push 0xd230ce }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0xc }
	__asm { mov dword ptr [ecx], 0xe35244 }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063ea6b }
	__asm { cmp dword ptr [g_012dc880], 0x29a }
	__asm { je L_0063ea20 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063ea0b }
	__asm { push 0xfc }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063ea20 }
	__asm { L_0063ea0b: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe33128 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063ea20: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_0063ea6b }
	__asm { cmp dword ptr [g_012dc880], 0x29a }
	__asm { je L_0063ea6b }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_0063ea56 }
	__asm { push 0xe9 }
	__asm { push 0xe32e0c }
	__asm { push 0xf14918 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_0063ea6b }
	__asm { L_0063ea56: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe32eb0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_0063ea6b: }
	__asm { call fn_0063bf70 }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [g_0131a2a4] }
	__asm { test al, 1 }
	__asm { jne L_0063eac2 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131a2a4], eax }
	__asm { mov ecx, 0x131a2a8 }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov dword ptr [g_0131a2a8], 0 }
	__asm { mov dword ptr [g_0131a2ac], 0 }
	__asm { call fn_00409860 }
	__asm { push 0xddc0e0 }
	__asm { mov dword ptr [g_0131a2a8], eax }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_0063eac2: }
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

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_0058a1e0();
extern "C" void fn_00632df0();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x0063ebb0
extern "C" __declspec(naked) void asm_0063ebb0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10520 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 0x10 }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { xor edi, edi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { test eax, eax }
	__asm { je L_0063ec04 }
	__asm { cmp eax, 0x5555555 }
	__asm { ja L_0063ebfe }
	__asm { lea eax, [eax + eax*2] }
	__asm { shl eax, 4 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov edi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x18], edi }
	__asm { test edi, edi }
	__asm { jne L_0063ec04 }
	__asm { L_0063ebfe: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_0063ec04: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp - 0x11] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push edi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00632df0 }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov esi, dword ptr [ebx] }
	__asm { mov ecx, eax }
	__asm { mov dword ptr [ebp - 0x18], eax }
	__asm { sub ecx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 3 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { mov dword ptr [ebp - 0x1c], eax }
	__asm { test esi, esi }
	__asm { je L_0063ec6b }
	__asm { cmp esi, dword ptr [ebp - 0x18] }
	__asm { je L_0063ec61 }
	__asm { L_0063ec52: }
	__asm { mov ecx, esi }
	__asm { call fn_0058a1e0 }
	__asm { add esi, 0x30 }
	__asm { cmp esi, dword ptr [ebp - 0x18] }
	__asm { jne L_0063ec52 }
	__asm { L_0063ec61: }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_0063ec6b: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [eax + eax*2] }
	__asm { shl eax, 4 }
	__asm { add eax, edi }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp - 0x1c] }
	__asm { mov dword ptr [ebx], edi }
	__asm { lea eax, [eax + eax*2] }
	__asm { shl eax, 4 }
	__asm { add eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr [ebx + 4], eax }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { push dword ptr [ebp - 0x18] }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { push 0 }
	__asm { push 0 }
	__asm { call fn_00cf67ec }
}

extern "C" char g_00e92814[];
extern "C" char g_0131edd0[];
extern "C" void fn_004118e0();
extern "C" void fn_004d1a60();
extern "C" void fn_007cbf10();
extern "C" void fn_007cd560();
extern "C" void fn_00cf6609();
// FUNCTION: ROBLOXSTUDIO 0x00640970
extern "C" __declspec(naked) void asm_00640970()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd1059e }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { push ebx }
	__asm { test byte ptr [eax + 0xe8], 4 }
	__asm { push esi }
	__asm { push edi }
	__asm { jne L_006409ab }
	__asm { L_00640998: }
	__asm { xor eax, eax }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_006409ab: }
	__asm { cmp dword ptr [eax + 0x3c], 0 }
	__asm { lea ecx, [eax + 0x3c] }
	__asm { je L_00640998 }
	__asm { call fn_004d1a60 }
	__asm { mov ebx, eax }
	__asm { xor edi, edi }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, edx }
	__asm { sar ecx, 3 }
	__asm { xor esi, esi }
	__asm { test ecx, ecx }
	__asm { je L_00640a60 }
	__asm { L_006409d1: }
	__asm { mov eax, dword ptr [edx + esi*8] }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [g_0131edd0] }
	__asm { test al, 1 }
	__asm { jne L_00640a31 }
	__asm { or eax, 1 }
	__asm { mov dword ptr [g_0131edd0], eax }
	__asm { push 0 }
	__asm { sub esp, 0xc }
	__asm { mov eax, esp }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { mov byte ptr [eax], 0 }
	__asm { mov dword ptr [eax + 4], 0 }
	__asm { mov dword ptr [eax + 8], 0x1b }
	__asm { push dword ptr [g_00e92814] }
	__asm { call fn_004118e0 }
	__asm { push eax }
	__asm { mov ecx, 0x131edd8 }
	__asm { call fn_007cbf10 }
	__asm { push 0xdde880 }
	__asm { call fn_00cf6609 }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { L_00640a31: }
	__asm { mov ecx, dword ptr [ebp + 8] }
	__asm { push 0x131edd8 }
	__asm { mov ecx, dword ptr [ecx + 0x28] }
	__asm { call fn_007cd560 }
	__asm { test al, al }
	__asm { je L_00640a4d }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { test eax, eax }
	__asm { cmovne edi, eax }
	__asm { L_00640a4d: }
	__asm { mov edx, dword ptr [ebx] }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, edx }
	__asm { inc esi }
	__asm { sar ecx, 3 }
	__asm { cmp esi, ecx }
	__asm { jb L_006409d1 }
	__asm { L_00640a60: }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { pop esi }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
}

extern "C" void fn_0063c420();
extern "C" void fn_0063c500();
extern "C" void fn_0063ecc0();
// FUNCTION: ROBLOXSTUDIO 0x00640cf0
extern "C" __declspec(naked) void asm_00640cf0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd105e2 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 8] }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { cmp ebx, ecx }
	__asm { jae L_00640d81 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, ebx }
	__asm { ja L_00640d81 }
	__asm { sub ebx, eax }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ebx }
	__asm { sar edx, 3 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00640d3f }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0063ecc0 }
	__asm { L_00640d3f: }
	__asm { mov ebx, dword ptr [esi + 4] }
	__asm { lea edi, [edi + edi*2] }
	__asm { shl edi, 4 }
	__asm { add edi, dword ptr [esi] }
	__asm { mov dword ptr [ebp + 8], ebx }
	__asm { mov dword ptr [ebp - 0x10], ebx }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { test ebx, ebx }
	__asm { je L_00640dc7 }
	__asm { push edi }
	__asm { mov ecx, ebx }
	__asm { call fn_0063c500 }
	__asm { lea eax, [edi + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [ebx + 0x14] }
	__asm { mov byte ptr [ebp - 4], 1 }
	__asm { call fn_0063c420 }
	__asm { mov eax, dword ptr [edi + 0x28] }
	__asm { mov dword ptr [ebx + 0x28], eax }
	__asm { mov eax, dword ptr [edi + 0x2c] }
	__asm { mov dword ptr [ebx + 0x2c], eax }
	__asm { jmp L_00640dc7 }
	__asm { L_00640d81: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00640d8f }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_0063ecc0 }
	__asm { L_00640d8f: }
	__asm { mov edi, dword ptr [esi + 4] }
	__asm { mov dword ptr [ebp + 8], edi }
	__asm { mov dword ptr [ebp - 0x10], edi }
	__asm { mov dword ptr [ebp - 4], 2 }
	__asm { test edi, edi }
	__asm { je L_00640dc7 }
	__asm { push ebx }
	__asm { mov ecx, edi }
	__asm { call fn_0063c500 }
	__asm { lea eax, [ebx + 0x14] }
	__asm { push eax }
	__asm { lea ecx, [edi + 0x14] }
	__asm { mov byte ptr [ebp - 4], 3 }
	__asm { call fn_0063c420 }
	__asm { mov eax, dword ptr [ebx + 0x28] }
	__asm { mov dword ptr [edi + 0x28], eax }
	__asm { mov eax, dword ptr [ebx + 0x2c] }
	__asm { mov dword ptr [edi + 0x2c], eax }
	__asm { L_00640dc7: }
	__asm { add dword ptr [esi + 4], 0x30 }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr fs:[0], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_00e1025c[];
extern "C" char g_00e10268[];
extern "C" void fn_00609290();
extern "C" void fn_00cf6522();
extern "C" void fn_00cf661e();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00641450
extern "C" __declspec(naked) void asm_00641450()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push -1 }
	__asm { push 0xd10610 }
	__asm { mov eax, dword ptr fs:[0] }
	__asm { push eax }
	__asm { mov dword ptr fs:[0], esp }
	__asm { sub esp, 8 }
	__asm { push ebx }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { xor esi, esi }
	__asm { mov dword ptr [ebp - 0x10], esp }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test edi, edi }
	__asm { je L_006414a5 }
	__asm { cmp edi, 0x15555555 }
	__asm { ja L_0064149f }
	__asm { lea eax, [edi + edi*2] }
	__asm { shl eax, 2 }
	__asm { push eax }
	__asm { call fn_00cf661e }
	__asm { mov esi, eax }
	__asm { add esp, 4 }
	__asm { mov dword ptr [ebp - 0x14], esi }
	__asm { test esi, esi }
	__asm { jne L_006414a5 }
	__asm { L_0064149f: }
	__asm { call dword ptr [g_00e1025c] }
	__asm { L_006414a5: }
	__asm { push dword ptr [ebp + 8] }
	__asm { lea eax, [ebp + 0xb] }
	__asm { push 0 }
	__asm { push eax }
	__asm { push esi }
	__asm { push dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 4], 0 }
	__asm { push dword ptr [ebx] }
	__asm { call fn_00609290 }
	__asm { mov ecx, dword ptr [ebx + 4] }
	__asm { sub ecx, dword ptr [ebx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ecx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { mov eax, dword ptr [ebx] }
	__asm { add esp, 0x18 }
	__asm { mov dword ptr [ebp - 4], 0xffffffff }
	__asm { test eax, eax }
	__asm { je L_006414f1 }
	__asm { push eax }
	__asm { call fn_00cf6522 }
	__asm { add esp, 4 }
	__asm { L_006414f1: }
	__asm { mov ecx, ebx }
	__asm { call dword ptr [g_00e10268] }
	__asm { mov ecx, dword ptr [ebp - 0xc] }
	__asm { lea eax, [edi + edi*2] }
	__asm { mov dword ptr [ebx], esi }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 8], eax }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { pop edi }
	__asm { lea eax, [eax + eax*2] }
	__asm { lea eax, [esi + eax*4] }
	__asm { mov dword ptr [ebx + 4], eax }
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

extern "C" char g_00e10260[];
extern "C" void fn_00641450();
// FUNCTION: ROBLOXSTUDIO 0x00641540
extern "C" __declspec(naked) void asm_00641540()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ecx + 8] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ecx + 4] }
	__asm { mov edx, ebx }
	__asm { sub edx, esi }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { add eax, edx }
	__asm { cmp eax, edi }
	__asm { jae L_006415d8 }
	__asm { sub esi, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul esi }
	__asm { sar edx, 1 }
	__asm { mov esi, edx }
	__asm { shr esi, 0x1f }
	__asm { add esi, edx }
	__asm { mov eax, 0x15555555 }
	__asm { sub eax, esi }
	__asm { cmp eax, edi }
	__asm { jae L_0064158f }
	__asm { push 0xf142e8 }
	__asm { call dword ptr [g_00e10260] }
	__asm { L_0064158f: }
	__asm { sub ebx, dword ptr [ecx] }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul ebx }
	__asm { sar edx, 1 }
	__asm { mov eax, edx }
	__asm { shr eax, 0x1f }
	__asm { add eax, edx }
	__asm { add esi, edi }
	__asm { mov edx, eax }
	__asm { shr edx, 1 }
	__asm { mov edi, 0x15555555 }
	__asm { sub edi, edx }
	__asm { cmp edi, eax }
	__asm { jae L_006415c5 }
	__asm { xor eax, eax }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00641450 }
	__asm { L_006415c5: }
	__asm { add eax, edx }
	__asm { cmp eax, esi }
	__asm { pop edi }
	__asm { cmovb eax, esi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov dword ptr [ebp + 8], eax }
	__asm { pop ebp }
	__asm { jmp fn_00641450 }
	__asm { L_006415d8: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" void fn_00641540();
// FUNCTION: ROBLOXSTUDIO 0x006415e0
extern "C" __declspec(naked) void asm_006415e0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push esi }
	__asm { mov esi, ecx }
	__asm { push edi }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { mov edi, dword ptr [ebp + 8] }
	__asm { cmp edi, ecx }
	__asm { jae L_00641640 }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, edi }
	__asm { ja L_00641640 }
	__asm { sub edi, eax }
	__asm { mov eax, 0x2aaaaaab }
	__asm { imul edi }
	__asm { sar edx, 1 }
	__asm { mov edi, edx }
	__asm { shr edi, 0x1f }
	__asm { add edi, edx }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_00641617 }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00641540 }
	__asm { L_00641617: }
	__asm { mov eax, dword ptr [esi] }
	__asm { lea ecx, [edi + edi*2] }
	__asm { lea edx, [eax + ecx*4] }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00641665 }
	__asm { mov eax, dword ptr [edx] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edx + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edx + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { add dword ptr [esi + 4], 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
	__asm { L_00641640: }
	__asm { cmp ecx, dword ptr [esi + 8] }
	__asm { jne L_0064164e }
	__asm { push 1 }
	__asm { mov ecx, esi }
	__asm { call fn_00641540 }
	__asm { L_0064164e: }
	__asm { mov ecx, dword ptr [esi + 4] }
	__asm { test ecx, ecx }
	__asm { je L_00641665 }
	__asm { mov eax, dword ptr [edi] }
	__asm { mov dword ptr [ecx], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ecx + 4], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ecx + 8], eax }
	__asm { L_00641665: }
	__asm { add dword ptr [esi + 4], 0xc }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 4 }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x00641d60
extern "C" __declspec(naked) void asm_00641d60()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { push esi }
	__asm { push edi }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, ecx }
	__asm { je L_00641e06 }
	__asm { cmp dword ptr [esi], 2 }
	__asm { mov eax, 1 }
	__asm { mov ecx, 6 }
	__asm { cmove eax, ecx }
	__asm { cmp dword ptr [ebp + 8], eax }
	__asm { jb L_00641dc2 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00641dad }
	__asm { push 0x344 }
	__asm { push 0xe36690 }
	__asm { push 0xe36cac }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00641dc2 }
	__asm { L_00641dad: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe36cc0 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00641dc2: }
	__asm { cmp byte ptr [g_012de657], 0 }
	__asm { je L_00641e06 }
	__asm { cmp edi, dword ptr [esi + 0x14] }
	__asm { jb L_00641e06 }
	__asm { mov eax, dword ptr [g_012de694] }
	__asm { test eax, eax }
	__asm { je L_00641df1 }
	__asm { push 0x345 }
	__asm { push 0xe36690 }
	__asm { push 0xe36d20 }
	__asm { call eax }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00641e06 }
	__asm { L_00641df1: }
	__asm { movzx eax, byte ptr [g_012de657] }
	__asm { push 0xe36d38 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { L_00641e06: }
	__asm { mov ecx, dword ptr [esi + 0x14] }
	__asm { imul ecx, dword ptr [ebp + 8] }
	__asm { mov eax, dword ptr [esi + 0x18] }
	__asm { add ecx, edi }
	__asm { pop edi }
	__asm { mov eax, dword ptr [eax + ecx*4] }
	__asm { add eax, dword ptr [esi + 0x24] }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_006b98f0();
extern "C" void fn_00cf67ec();
// FUNCTION: ROBLOXSTUDIO 0x00641f30
extern "C" __declspec(naked) void asm_00641f30()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { sub esp, 0xc }
	__asm { mov ecx, dword ptr [eax + 0x50] }
	__asm { test ecx, ecx }
	__asm { jne L_00641f9f }
	__asm { mov ecx, dword ptr [eax + 0x54] }
	__asm { cmp ecx, 8 }
	__asm { jne L_00641f69 }
	__asm { cmp dword ptr [eax + 0x58], 0xff }
	__asm { jne L_00641f69 }
	__asm { cmp dword ptr [eax + 0x5c], 0 }
	__asm { jne L_00641f69 }
	__asm { cmp dword ptr [eax + 0x60], 0 }
	__asm { jne L_00641f69 }
	__asm { cmp dword ptr [eax + 0x64], 0 }
	__asm { jne L_00641f69 }
	__asm { xor eax, eax }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00641f69: }
	__asm { cmp ecx, 0x10 }
	__asm { jne L_00641f93 }
	__asm { cmp dword ptr [eax + 0x58], 0xff }
	__asm { jne L_00641f93 }
	__asm { cmp dword ptr [eax + 0x5c], 0 }
	__asm { jne L_00641f93 }
	__asm { cmp dword ptr [eax + 0x60], 0 }
	__asm { jne L_00641f93 }
	__asm { cmp dword ptr [eax + 0x64], 0xff00 }
	__asm { jne L_00641f93 }
	__asm { lea eax, [ecx - 0xf] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00641f93: }
	__asm { cmp ecx, 0x20 }
	__asm { jne L_00641ff1 }
	__asm { lea eax, [ecx - 0x1d] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00641f9f: }
	__asm { cmp ecx, 0x71 }
	__asm { jne L_00641fab }
	__asm { lea eax, [ecx - 0x6c] }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00641fab: }
	__asm { cmp ecx, 0x31545844 }
	__asm { jne L_00641fbc }
	__asm { mov eax, 6 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00641fbc: }
	__asm { cmp ecx, 0x33545844 }
	__asm { jne L_00641fcd }
	__asm { mov eax, 7 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00641fcd: }
	__asm { cmp ecx, 0x35545844 }
	__asm { jne L_00641fde }
	__asm { mov eax, 8 }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_00641fde: }
	__asm { lea eax, [ebp - 0xc] }
	__asm { cmp ecx, 0x30315844 }
	__asm { je L_00642011 }
	__asm { push ecx }
	__asm { push 0xe36668 }
	__asm { jmp L_00641ffa }
	__asm { L_00641ff1: }
	__asm { push ecx }
	__asm { push 0xe36610 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { L_00641ffa: }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 0xc }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
	__asm { L_00642011: }
	__asm { push 0xe36648 }
	__asm { push eax }
	__asm { call fn_006b98f0 }
	__asm { add esp, 8 }
	__asm { lea eax, [ebp - 0xc] }
	__asm { push 0x1179d58 }
	__asm { push eax }
	__asm { call fn_00cf67ec }
}

extern "C" char g_012de657[];
extern "C" char g_012de694[];
extern "C" void fn_00642090();
extern "C" void fn_00642290();
extern "C" void fn_006423a0();
extern "C" void fn_006b9740();
// FUNCTION: ROBLOXSTUDIO 0x006425b0
extern "C" __declspec(naked) void asm_006425b0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { mov eax, dword ptr [ebp + 0x10] }
	__asm { sub eax, 6 }
	__asm { je L_0064264c }
	__asm { push esi }
	__asm { push edi }
	__asm { dec eax }
	__asm { je L_0064262c }
	__asm { dec eax }
	__asm { je L_0064260c }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { test al, al }
	__asm { je L_00642628 }
	__asm { mov ecx, dword ptr [g_012de694] }
	__asm { test ecx, ecx }
	__asm { je L_006425f7 }
	__asm { push 0x1be }
	__asm { push 0xe36690 }
	__asm { push 0xf14aa8 }
	__asm { call ecx }
	__asm { add esp, 0xc }
	__asm { test al, al }
	__asm { jne L_00642628 }
	__asm { mov al, byte ptr [g_012de657] }
	__asm { L_006425f7: }
	__asm { movzx eax, al }
	__asm { push 0xe366d8 }
	__asm { push eax }
	__asm { call fn_006b9740 }
	__asm { add esp, 8 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0064260c: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00642090 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_006423a0 }
	__asm { add esp, 0x14 }
	__asm { L_00642628: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0064262c: }
	__asm { mov edi, dword ptr [ebp + 0xc] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { push 0 }
	__asm { lea eax, [edi + 8] }
	__asm { push eax }
	__asm { push esi }
	__asm { call fn_00642090 }
	__asm { push edi }
	__asm { push esi }
	__asm { call fn_00642290 }
	__asm { add esp, 0x14 }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebp }
	__asm { ret }
	__asm { L_0064264c: }
	__asm { mov dword ptr [ebp + 0x10], 1 }
	__asm { pop ebp }
	__asm { jmp fn_00642090 }
}

// FUNCTION: ROBLOXSTUDIO 0x00647250
extern "C" __declspec(naked) void asm_00647250()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { push ecx }
	__asm { push ebx }
	__asm { mov ebx, ecx }
	__asm { mov dword ptr [ebp - 4], ebx }
	__asm { mov eax, dword ptr [ebx + 0x50] }
	__asm { test eax, eax }
	__asm { je L_0064728d }
	__asm { cmp dword ptr [eax + 0x28], 0 }
	__asm { jne L_0064728d }
	__asm { mov edx, dword ptr [ebp + 0xc] }
	__asm { mov eax, dword ptr [ebp + 8] }
	__asm { mov ecx, dword ptr [edx] }
	__asm { sub ecx, dword ptr [ebx + 0x40] }
	__asm { mov dword ptr [eax], ecx }
	__asm { mov ecx, dword ptr [edx + 4] }
	__asm { sub ecx, dword ptr [ebx + 0x44] }
	__asm { mov dword ptr [eax + 4], ecx }
	__asm { mov ecx, dword ptr [edx + 8] }
	__asm { sub ecx, dword ptr [ebx + 0x48] }
	__asm { pop ebx }
	__asm { mov dword ptr [eax + 8], ecx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
	__asm { L_0064728d: }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0xc] }
	__asm { push edi }
	__asm { mov eax, dword ptr [esi] }
	__asm { cdq }
	__asm { idiv dword ptr [ebx + 0x34] }
	__asm { mov eax, dword ptr [esi + 4] }
	__asm { mov edi, edx }
	__asm { cdq }
	__asm { idiv dword ptr [ebx + 0x38] }
	__asm { mov eax, dword ptr [esi + 8] }
	__asm { mov ebx, dword ptr [ebx + 0x3c] }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { mov ecx, edx }
	__asm { cdq }
	__asm { idiv ebx }
	__asm { mov eax, dword ptr [esi + 0x34] }
	__asm { add eax, edi }
	__asm { mov edi, esi }
	__asm { add ecx, dword ptr [edi + 0x38] }
	__asm { lea edi, [ebx + edx] }
	__asm { cdq }
	__asm { idiv dword ptr [esi + 0x34] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, ecx }
	__asm { mov dword ptr [esi], edx }
	__asm { mov esi, dword ptr [ebp - 4] }
	__asm { cdq }
	__asm { idiv dword ptr [esi + 0x38] }
	__asm { mov esi, dword ptr [ebp + 8] }
	__asm { mov eax, edi }
	__asm { pop edi }
	__asm { mov dword ptr [esi + 4], edx }
	__asm { cdq }
	__asm { idiv ebx }
	__asm { mov eax, esi }
	__asm { mov dword ptr [esi + 8], edx }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 8 }
}

extern "C" void fn_0064f490();
extern "C" void fn_0064f530();
// FUNCTION: ROBLOXSTUDIO 0x006492a0
extern "C" __declspec(naked) void asm_006492a0()
{
	__asm { push ebp }
	__asm { mov ebp, esp }
	__asm { sub esp, 0x10 }
	__asm { push ebx }
	__asm { mov ebx, dword ptr [ebp + 0xc] }
	__asm { push esi }
	__asm { mov esi, dword ptr [ebp + 0x14] }
	__asm { push edi }
	__asm { mov edx, dword ptr [esi] }
	__asm { mov edi, dword ptr [ebp + 0x10] }
	__asm { mov dword ptr [ebp - 4], ecx }
	__asm { cmp edx, dword ptr [ebx] }
	__asm { jl L_006492e4 }
	__asm { cmp edx, dword ptr [edi] }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { mov eax, edi }
	__asm { cmovl eax, esi }
	__asm { push esi }
	__asm { mov eax, dword ptr [eax] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [edi + 4] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [edi + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push ebx }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0064f490 }
	__asm { L_006492e4: }
	__asm { mov eax, dword ptr [esi] }
	__asm { cmp eax, dword ptr [edi] }
	__asm { jge L_0064931b }
	__asm { push dword ptr [ebp + 0x18] }
	__asm { inc eax }
	__asm { cmp dword ptr [ebx], eax }
	__asm { mov dword ptr [ebp + 0x14], eax }
	__asm { lea ecx, [ebp + 0x14] }
	__asm { cmovge ecx, ebx }
	__asm { push esi }
	__asm { mov eax, dword ptr [ecx] }
	__asm { mov ecx, dword ptr [ebp - 4] }
	__asm { mov dword ptr [ebp - 0x10], eax }
	__asm { mov eax, dword ptr [ebx + 4] }
	__asm { mov dword ptr [ebp - 0xc], eax }
	__asm { mov eax, dword ptr [ebx + 8] }
	__asm { mov dword ptr [ebp - 8], eax }
	__asm { push edi }
	__asm { lea eax, [ebp - 0x10] }
	__asm { push eax }
	__asm { push dword ptr [ebp + 8] }
	__asm { call fn_0064f530 }
	__asm { L_0064931b: }
	__asm { pop edi }
	__asm { pop esi }
	__asm { pop ebx }
	__asm { mov esp, ebp }
	__asm { pop ebp }
	__asm { ret 0x14 }
}
