#include "FastCluster.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x00621790
int FastCluster::getCount() const
{
	return (end - begin) >> 3;
}

} // namespace Graphics
} // namespace RBX
