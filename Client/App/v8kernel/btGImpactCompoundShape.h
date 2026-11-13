#pragma once

#include "btCollisionShape.h"

class btGImpactCompoundShape : public btCollisionShape
{
public:
	const char* getName() const;
};
