#pragma once

namespace rbx {

// Thrown when a placement_any holds a different type than the one requested
// (rbx/Types.h in the 2014 tree). Only the proven virtual is declared.
class bad_placement_any_cast
{
public:
	virtual const char* what() const;
};

} // namespace rbx
