#pragma once

// The verb tests a helper's result against zero and returns true when it is zero.
class Toggle3DGridVerb
{
public:
	bool isDisabled() const;

private:
	char _pad[0x0c];
	void* field0C;
};
