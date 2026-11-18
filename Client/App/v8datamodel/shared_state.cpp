#include "v8datamodel/shared_state.h"

#include "decomp.h"

namespace std {

// FUNCTION: ROBLOXSTUDIO 0x00955530
void* shared_state::get()
{
	struct vtable
	{
		virtual void slot0() {}
		virtual void slot1() {}
		virtual void slot2(int) {}
	};

	((vtable*)this)->slot2(1);
	return *(void**)((char*)this + 0x88);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
