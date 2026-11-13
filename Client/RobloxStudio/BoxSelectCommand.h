#pragma once

// The box-select command clears a three-int destination through this slot.
class BoxSelectCommand
{
public:
	void zeroTriple(int* out) const;
	void clearField28();
};
