#pragma once

namespace RBX {
namespace HUMAN {

// Base of the humanoid state machine. Slot 13 of every concrete state vtable
// returns a per-state constant, so it is the state-id accessor.
class HumanoidState
{
public:
	virtual ~HumanoidState();
	virtual int getStateType() const = 0;
};

} // namespace HUMAN
} // namespace RBX
