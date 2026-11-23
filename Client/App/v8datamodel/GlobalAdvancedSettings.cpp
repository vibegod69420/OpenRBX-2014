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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
