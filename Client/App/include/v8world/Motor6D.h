#ifndef CLIENT_APP_INCLUDE_V8WORLD_MOTOR6D_H
#define CLIENT_APP_INCLUDE_V8WORLD_MOTOR6D_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class Motor6D
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	float getDesiredAngle();
	float getCurrentAngle();
	float getMaxVelocity();
	float getAngle();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8WORLD_MOTOR6D_H
