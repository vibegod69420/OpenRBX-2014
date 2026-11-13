#pragma once

#include "HumanoidState.h"

namespace RBX {
namespace HUMAN {

class Landed : public HumanoidState
{
public:
	int getStateId() const;
};

} // namespace HUMAN
} // namespace RBX
