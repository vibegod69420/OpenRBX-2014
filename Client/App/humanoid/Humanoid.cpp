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

// FUNCTION: ROBLOXSTUDIO 0x009d9120
float Humanoid::getUnknown200Float()
{
	void* p = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x200);
	if (p)
	{
		typedef float (__thiscall *VFunc)(void*);
		VFunc* vtable = *reinterpret_cast<VFunc**>(p);
		return vtable[12](p);
	}

	int value = 0;
	return *reinterpret_cast<float*>(&value);
}

// FUNCTION: ROBLOXSTUDIO 0x009d86b0
int Humanoid::getField270() const
{
	return field_0270;
}

// FUNCTION: ROBLOXSTUDIO 0x009d8730
int Humanoid::getField280() const
{
	return field_0280;
}

// FUNCTION: ROBLOXSTUDIO 0x009d8740
int Humanoid::getField290() const
{
	return field_0290;
}

// FUNCTION: ROBLOXSTUDIO 0x009d8ac0
int Humanoid::getField278() const
{
	return field_0278;
}

// FUNCTION: ROBLOXSTUDIO 0x009d8ad0
int Humanoid::getField288() const
{
	return field_0288;
}

// FUNCTION: ROBLOXSTUDIO 0x009d8ef0
int Humanoid::getField268() const
{
	return field_0268;
}

// FUNCTION: ROBLOXSTUDIO 0x009d8ed0
int Humanoid::getField268Or298()
{
	int v = field_0268;
	if (v != 0)
		return v;
	return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x298);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
