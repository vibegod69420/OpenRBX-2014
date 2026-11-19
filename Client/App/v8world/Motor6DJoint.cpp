#include "v8world/Motor6DJoint.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00af1390
namespace {

struct Motor6DWakeTarget
{
	void wake();
};

struct Motor6DBody
{
	char padding[0x108];
	Motor6DWakeTarget* wakeTarget;
};

}

void Motor6DJoint::wake()
{
	Motor6DBody* body0 = reinterpret_cast<Motor6DBody**>(this)[3];
	Motor6DBody* body1 = reinterpret_cast<Motor6DBody**>(this)[4];

	if (body0 && body0->wakeTarget)
		body0->wakeTarget->wake();

	if (body1 && body1->wakeTarget)
		body1->wakeTarget->wake();
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
