#include "v8datamodel/SystemAddress.h"

#include "decomp.h"

namespace RBX {

struct SystemAddressStaticData
{
	float x;
	float y;
	float z;

	SystemAddressStaticData(float x, float y, float z)
		: x(x), y(y), z(z)
	{
	}
};

// FUNCTION: ROBLOXSTUDIO 0x008911e0
const SystemAddressStaticData& SystemAddress::getDefaultData()
{
	static SystemAddressStaticData data(1.0f, 0.1f, 1.0f);
	return data;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
