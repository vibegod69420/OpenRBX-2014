#pragma once

#include "Joint.h"

namespace RBX {

class KernelJoint : public Joint
{
public:
	int getJointType() const;
};

} // namespace RBX
