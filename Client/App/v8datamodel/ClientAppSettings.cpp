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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
