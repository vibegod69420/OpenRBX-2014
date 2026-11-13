#pragma once

#include "Joint.h"

namespace RBX {

class FreeJoint : public Joint
{
public:
	int getJointType() const;
};

} // namespace RBX
