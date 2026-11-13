#pragma once

namespace RBX {

// Slots 16/17 of the block-mesh factory product return false and ignore the
// argument.
class FactoryProduct
{
public:
	bool alwaysFalse(int) const;
};

} // namespace RBX
