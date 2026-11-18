#include "Network/RoundRobinPhysicsSender.h"

#include "decomp.h"

namespace RBX {
namespace Network {

struct RoundRobinPhysicsSender_DisposeTarget
{
	virtual void vf0();
	virtual void vf4();
	virtual void vf8();
	virtual void vfC(int);
};

// FUNCTION: ROBLOXSTUDIO 0x0052fcf0
void RoundRobinPhysicsSender::dispose()
{
	RoundRobinPhysicsSender_DisposeTarget* target =
		*(RoundRobinPhysicsSender_DisposeTarget**)((char*)this + 0x0C);

	if (target)
		target->vfC(1);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
