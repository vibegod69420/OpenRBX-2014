#pragma once

// Slots 20 and 21 forward (argument, this, constant) to a shared helper.
class QOgreWidget
{
public:
	void invokeWith0(int) const;
	void invokeWith2(int) const;
};
