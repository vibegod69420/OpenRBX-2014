#include "v8datamodel/Mouse.h"

#include "decomp.h"

namespace RBX {

class MouseTargetFilter
{
public:
	bool isActive();
};

// FUNCTION: ROBLOXSTUDIO 0x007bcc90
bool Mouse::isTargetFilterActive()
{
	MouseTargetFilter* targetFilter = *reinterpret_cast<MouseTargetFilter**>(reinterpret_cast<char*>(this) + 0xC74);
	if (targetFilter)
		return targetFilter->isActive();

	return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + 0xD1D);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
