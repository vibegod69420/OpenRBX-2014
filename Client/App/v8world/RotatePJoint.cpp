#include "v8world/RotatePJoint.h"

#include "decomp.h"

namespace RBX {

class RotateJointKernel;

class RotateJointKernel
{
public:
	void step();
};

// FUNCTION: ROBLOXSTUDIO 0x00b8f1f0
void RotatePJoint::stepUi()
{
	struct Layout
	{
		char pad[0xD0];
		RotateJointKernel* kernelJoint;
	};

	RotateJointKernel* kernelJoint = reinterpret_cast<Layout*>(this)->kernelJoint;
	if (kernelJoint)
		kernelJoint->step();
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
