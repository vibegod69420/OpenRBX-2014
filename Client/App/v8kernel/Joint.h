#pragma once

namespace RBX {

// Base of the V8Kernel joint hierarchy. Slot 6 of every concrete joint vtable
// returns a per-class constant, so it is the joint-type accessor.
class Joint
{
public:
	virtual ~Joint();
	virtual int getJointType() const = 0;
};

} // namespace RBX
