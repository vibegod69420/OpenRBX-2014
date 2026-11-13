#pragma once

namespace RBX {

// Slots 19 of StringValue and ObjectValue share this body, which ignores its
// argument and reports success.
class StringValue
{
public:
	bool alwaysTrue(int) const;
};

} // namespace RBX
