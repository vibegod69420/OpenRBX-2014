#pragma once

#include "Joint.h"

namespace RBX {

class ManualWeldJoint : public Joint
{
public:
	int getJointType() const;
};

} // namespace RBX
