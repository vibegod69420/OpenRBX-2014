#include "Instance.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00427650
RbxPairInt* Instance::makePair(RbxPairInt* out, int value) const
{
	out->first = value;
	out->second = (int)this;
	return out;
}

} // namespace RBX
