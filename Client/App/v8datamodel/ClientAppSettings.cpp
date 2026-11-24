#include "v8datamodel/ClientAppSettings.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x008bdb00
typedef int (__cdecl *ClientAppSettingsFunc_E105F4)(ClientAppSettings*);
extern ClientAppSettingsFunc_E105F4 g_ClientAppSettingsFunc_E105F4;
extern ClientAppSettings* g_ClientAppSettingsInstance_12FC984;

void __cdecl ClientAppSettings::ApplySettingFromFunc()
{
	*(int*)((char*)g_ClientAppSettingsInstance_12FC984 + 0x90) = g_ClientAppSettingsFunc_E105F4(this);
}

// FUNCTION: ROBLOXSTUDIO 0x008bdb20
void __cdecl ClientAppSettings::ApplySettingFromFunc_E105F4()
{
    *(int*)((char*)g_ClientAppSettingsInstance_12FC984 + 0x94) = g_ClientAppSettingsFunc_E105F4(this);
}

// FUNCTION: ROBLOXSTUDIO 0x008bde70
int ClientAppSettings::getConst19909520() const
{
	return 19909520;
}

// FUNCTION: ROBLOXSTUDIO 0x008bd880
extern bool __cdecl StringToBool_D02EE0(const char*);

void __cdecl ClientAppSettings::ApplySettingFromFunc_D02EE0()
{
	*(bool*)((char*)g_ClientAppSettingsInstance_12FC984 + 0x15) = StringToBool_D02EE0((const char*)this);
}

// FUNCTION: ROBLOXSTUDIO 0x008bd8a0
void __cdecl ClientAppSettings::ApplySettingFromFunc_14()
{
	*(bool*)((char*)g_ClientAppSettingsInstance_12FC984 + 0x14) = StringToBool_D02EE0((const char*)this);
}

// FUNCTION: ROBLOXSTUDIO 0x008bde20
void __cdecl ClientAppSettings::ApplySettingFromFunc_58()
{
	*(bool*)((char*)g_ClientAppSettingsInstance_12FC984 + 0x58) = StringToBool_D02EE0((const char*)this);
}

// FUNCTION: ROBLOXSTUDIO 0x008bd840
void __cdecl ClientAppSettings::ApplySettingFromFunc_5C()
{
	*(int*)((char*)g_ClientAppSettingsInstance_12FC984 + 0x5C) = g_ClientAppSettingsFunc_E105F4(this);
}

// FUNCTION: ROBLOXSTUDIO 0x008bd860
void __cdecl ClientAppSettings::ApplySettingFromFunc_18()
{
	*(int*)((char*)g_ClientAppSettingsInstance_12FC984 + 0x18) = g_ClientAppSettingsFunc_E105F4(this);
}

// FUNCTION: ROBLOXSTUDIO 0x008bd8c0
void __cdecl ClientAppSettings::ApplySettingFromFunc_1C()
{
	*(int*)((char*)g_ClientAppSettingsInstance_12FC984 + 0x1C) = g_ClientAppSettingsFunc_E105F4(this);
}

// FUNCTION: ROBLOXSTUDIO 0x008bdc80
void __cdecl ClientAppSettings::ApplySettingFromFunc_54()
{
	*(int*)((char*)g_ClientAppSettingsInstance_12FC984 + 0x54) = g_ClientAppSettingsFunc_E105F4(this);
}

// FUNCTION: ROBLOXSTUDIO 0x008bdd40
void __cdecl ClientAppSettings::ApplySettingFromFunc_50()
{
	*(int*)((char*)g_ClientAppSettingsInstance_12FC984 + 0x50) = g_ClientAppSettingsFunc_E105F4(this);
}

// FUNCTION: ROBLOXSTUDIO 0x008bde00
void __cdecl ClientAppSettings::ApplySettingFromFunc_10()
{
	*(int*)((char*)g_ClientAppSettingsInstance_12FC984 + 0x10) = g_ClientAppSettingsFunc_E105F4(this);
}

// FUNCTION: ROBLOXSTUDIO 0x008bda20
void __cdecl ClientAppSettings::ApplySettingFromFunc_CC()
{
	*(int*)((char*)g_ClientAppSettingsInstance_12FC984 + 0xCC) = g_ClientAppSettingsFunc_E105F4(this);
}

// FUNCTION: ROBLOXSTUDIO 0x008bda40
void __cdecl ClientAppSettings::ApplySettingFromFunc_D0()
{
	*(int*)((char*)g_ClientAppSettingsInstance_12FC984 + 0xD0) = g_ClientAppSettingsFunc_E105F4(this);
}

// FUNCTION: ROBLOXSTUDIO 0x008bda60
void __cdecl ClientAppSettings::ApplySettingFromFunc_60()
{
    *(int*)((char*)g_ClientAppSettingsInstance_12FC984 + 0xC8) = g_ClientAppSettingsFunc_E105F4(this);
}

// FUNCTION: ROBLOXSTUDIO 0x008bda80
void __cdecl ClientAppSettings::ApplySettingFromFunc_D4()
{
	*(int*)((char*)g_ClientAppSettingsInstance_12FC984 + 0xD4) = g_ClientAppSettingsFunc_E105F4(this);
}

// FUNCTION: ROBLOXSTUDIO 0x008bdaa0
void __cdecl ClientAppSettings::ApplySettingFromFunc_D8()
{
	*(int*)((char*)g_ClientAppSettingsInstance_12FC984 + 0xD8) = g_ClientAppSettingsFunc_E105F4(this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
