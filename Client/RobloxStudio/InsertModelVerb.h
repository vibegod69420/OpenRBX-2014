#pragma once

// Both verbs forward to a no-argument helper and ignore their own int argument;
// the engine's support code in this file was built without a frame pointer.
class InsertModelVerb
{
public:
	void invoke(int) const;
};

class SelectionSaveToFileVerb
{
public:
	void invoke(int) const;
};
