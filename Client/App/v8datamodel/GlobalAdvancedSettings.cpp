#include "v8datamodel/GlobalAdvancedSettings.h"

#include "decomp.h"

namespace RBX {

struct GlobalAdvancedSettingsCallee
{
	void registerGlobalAdvancedSettingsItem(void** item);
};

// FUNCTION: ROBLOXSTUDIO 0x007c6930
void GlobalAdvancedSettings::registerGlobalAdvancedSettingsItem()
{
	void* item = (void*)0x007C6950;
	((GlobalAdvancedSettingsCallee*)this)->registerGlobalAdvancedSettingsItem(&item);
}

struct GlobalAdvancedSettingsFactory
{
	static void** getItem();
};

// FUNCTION: ROBLOXSTUDIO 0x007b56c0
void GlobalAdvancedSettings::registerGlobalAdvancedSettingsItemFromFactory()
{
	((GlobalAdvancedSettingsCallee*)this)->registerGlobalAdvancedSettingsItem(GlobalAdvancedSettingsFactory::getItem());
}

void __cdecl rbxs_init_004115F0(void*, void*);
void __cdecl rbxs_init_007C5D00(GlobalAdvancedSettings*);

// FUNCTION: ROBLOXSTUDIO 0x007c6b70
GlobalAdvancedSettings* __cdecl GlobalAdvancedSettings::initSingleton()
{
	volatile int state = 0;
	rbxs_init_004115F0((void*)0x012E36BC, (void*)0x007C65F0);
	rbxs_init_007C5D00(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
