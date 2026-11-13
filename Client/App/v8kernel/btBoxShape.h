#pragma once

#include "btCollisionShape.h"

class btBoxShape : public btCollisionShape
{
public:
	const char* getName() const;
};
