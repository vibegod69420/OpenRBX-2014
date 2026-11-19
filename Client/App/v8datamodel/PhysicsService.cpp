#include "v8datamodel/PhysicsService.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b1a2e0
struct PhysicsServiceRefCount
{
	void add_ref(int);
};

void PhysicsService::addRefAtOffsetAC()
{
	((PhysicsServiceRefCount*)((char*)this + 0xAC))->add_ref(0);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
