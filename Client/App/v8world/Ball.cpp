#include "v8world/Ball.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00c53720
bool Ball::canAccept(int a0, int a1, int a2, int a3, int a4) const
{
	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x00402eb0
int Ball::identity(int a) const
{
	return a;
}

// FUNCTION: ROBLOXSTUDIO 0x0099bfe0
void* Ball::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x0099d2f0
float Ball::getDensity() const
{
	return *reinterpret_cast<const float*>(reinterpret_cast<const char*>(this) + 0x14);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
