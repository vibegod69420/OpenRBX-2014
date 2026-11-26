#include "v8datamodel/SurfaceSelection.h"

#include "decomp.h"

namespace RBX {

class Adorn
{
public:
	void init(const char* name);
};

// FUNCTION: ROBLOXSTUDIO 0x00aad4f0
SurfaceSelection::SurfaceSelection()
{
	reinterpret_cast<Adorn*>(this)->init("SurfaceSelection");
	*reinterpret_cast<int*>(this) = 0x00EB90BC;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 4) = 0x00EB9144;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x18) = 0x00EB914C;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x1C) = 0x00EB9158;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x64) = 0x00EB9168;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x68) = 0x00EB9170;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x94) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
