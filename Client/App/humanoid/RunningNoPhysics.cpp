#include "humanoid/RunningNoPhysics.h"

#include "decomp.h"

namespace RBX {
namespace HUMAN {

// FUNCTION: ROBLOXSTUDIO 0x00c22d30
void RunningNoPhysics::destroyInstance(RunningNoPhysics* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00c22d50
void RunningNoPhysics::destroyInstance_2d50(RunningNoPhysics* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace HUMAN
} // namespace RBX
