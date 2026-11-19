#include "Network/Marker.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00cbd6b0
int Marker::getField8C0() const
{
	return field_08c0;
}

// FUNCTION: ROBLOXSTUDIO 0x00cbbe60
struct MarkerItem
{
	int a;
	int b;
	~MarkerItem();
};

void Marker::reset()
{
	struct Layout
	{
		MarkerItem* data;
		unsigned int size;
		unsigned int capacity;
	};

	Layout* self = reinterpret_cast<Layout*>(this);

	if (self->capacity != 0)
	{
		if (self->capacity > 0x200)
		{
			if (self->data != NULL)
			{
				delete[] self->data;
			}
			self->capacity = 0;
			self->data = NULL;
		}
		self->size = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
