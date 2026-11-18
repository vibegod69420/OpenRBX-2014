#include "humanoid/Humanoid.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x009dae60
void Humanoid::setFlag0x31()
{
	reinterpret_cast<unsigned char*>(this)[0x31] = 1;
}

// FUNCTION: ROBLOXSTUDIO 0x009d91d0
int Humanoid::getInt148() const
{
	return *reinterpret_cast<const int*>(reinterpret_cast<const char*>(this) + 0x148) != 0;
}

struct HumanoidThunk
{
	void (__thiscall *func)(void*, void*);
	int offset;
	char* target;
};

// FUNCTION: ROBLOXSTUDIO 0x007bcdc0
void __cdecl Humanoid::dispatch(int arg)
{
	HumanoidThunk* thunk = reinterpret_cast<HumanoidThunk*>(this);
	thunk->func(thunk->target + thunk->offset, &arg);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
