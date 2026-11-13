#pragma once

namespace RBX {

// Slot 3 hands back a pointer 0x128 bytes before the object; only that
// adjustment is proven by the body.
class Workspace
{
public:
	void* getBasePtr() const;
};

} // namespace RBX
