#pragma once

// Qt's tree widget slot 1 hands back a pointer 0x14 bytes before the object.
class RobloxTreeWidget
{
public:
	void* getFieldECPtr() const;
	bool isBaseNonZero() const;
};
