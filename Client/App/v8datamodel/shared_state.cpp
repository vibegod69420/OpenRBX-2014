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

class shared_state_init_helper
{
public:
	__declspec(dllimport) void __thiscall init(int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00955550
shared_state* __cdecl shared_state::init()
{
	((shared_state_init_helper*)this)->init(0x800, 0xe00);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
