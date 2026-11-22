#include "v8datamodel/EventSlot.h"

#include "decomp.h"

namespace RBX {
namespace DataStore {

// Helper for the object stored at EventSlot offset 0x14.
struct EventSlotData14
{
	void cleanup();
};

// FUNCTION: ROBLOXSTUDIO 0x00be8140
void EventSlot::dispose()
{
	unsigned char* base = reinterpret_cast<unsigned char*>(this);
	if (base[0x10] != 0)
	{
		reinterpret_cast<EventSlotData14*>(base + 0x14)->cleanup();
		base[0x10] = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace DataStore
} // namespace RBX
