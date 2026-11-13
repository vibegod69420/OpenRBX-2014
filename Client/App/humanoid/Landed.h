#pragma once

#include "HumanoidState.h"

namespace RBX {
namespace HUMAN {

class Landed : public HumanoidState
{
public:
	int getStateType() const;
};

} // namespace HUMAN
} // namespace RBX
