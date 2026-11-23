#include "Network/MarkerItem.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00cc95e0
unsigned int MarkerItem::getSizeInBytes() const
{
	unsigned int* const* base = reinterpret_cast<unsigned int* const*>(&_vtable_or_head);
	unsigned int* data = base[2];
	if (data)
		return (*data + 7) >> 3;
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
