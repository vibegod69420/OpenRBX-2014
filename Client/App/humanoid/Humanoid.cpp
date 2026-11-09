#include "humanoid/Humanoid.h"

#include "decomp.h"

namespace RBX {

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

// FUNCTION: ROBLOXSTUDIO 0x009dd4a0
void Humanoid::setFlag264(bool value)
{
	flag_0264 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x009dd740
void Humanoid::dispatchWithFlag1(int arg)
{
	onDispatchWithFlag(arg, 1);
}

// FUNCTION: ROBLOXSTUDIO 0x009ddf00
void Humanoid::dispatchWithFlag1_df00(int arg)
{
	onDispatchWithFlag(arg, 1);
}

// FUNCTION: ROBLOXSTUDIO 0x009d3ed0
void* Humanoid::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
