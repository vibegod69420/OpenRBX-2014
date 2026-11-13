#pragma once

class btCollisionObject
{
public:
	int calculateSerializeBufferSize() const;
	void assignTwoFieldsAndBump(void* value);
};
