#include "v8datamodel/GameBasicSettings.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x008bb880
int GameBasicSettings::getQualityLevel() const
{
	int value = *reinterpret_cast<const int*>(reinterpret_cast<const char*>(this) + 0x78);
	return value == 0 ? 1 : value;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
