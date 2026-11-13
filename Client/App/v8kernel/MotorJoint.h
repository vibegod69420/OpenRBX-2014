#pragma once

#include "Joint.h"

namespace RBX {

class MotorJoint : public Joint
{
public:
	int getJointType() const;
};

} // namespace RBX
