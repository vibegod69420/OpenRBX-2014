#pragma once

#include "Joint.h"

namespace RBX {

class ManualGlueJoint : public Joint
{
public:
	int getJointType() const;
};

} // namespace RBX
