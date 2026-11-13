#pragma once

namespace RBX {

struct RbxPairInt
{
	int first;
	int second;
};

class Instance
{
public:
	// Packs (value, this) into the caller's pair; the body stores the int value
	// first and the instance pointer second.
	RbxPairInt* makePair(RbxPairInt* out, int value) const;
};

} // namespace RBX
