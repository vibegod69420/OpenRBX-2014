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

// FUNCTION: ROBLOXSTUDIO 0x00bea2d0
void __cdecl EventSlot::slotThunk(void* a1, void* a2)
{
	typedef void (__thiscall *SlotThunkFn)(void*, void*, void*);
	char* self = reinterpret_cast<char*>(this);
	(*reinterpret_cast<SlotThunkFn*>(self))(
		reinterpret_cast<char*>(*reinterpret_cast<void**>(self + 8)) + *reinterpret_cast<int*>(self + 4),
		a1,
		a2);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace DataStore
} // namespace RBX
