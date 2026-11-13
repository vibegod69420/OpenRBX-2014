#pragma once

#include "Joint.h"

namespace RBX {

class WeldJoint : public Joint
{
public:
	int getJointType() const;
};

} // namespace RBX
