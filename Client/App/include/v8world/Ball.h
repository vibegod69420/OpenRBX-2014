#ifndef CLIENT_APP_INCLUDE_V8WORLD_BALL_H
#define CLIENT_APP_INCLUDE_V8WORLD_BALL_H

#include "decomp.h"

namespace RBX {

class Primitive;
// AUTO-GENERATED HELPERS

class Ball
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	float getGridVolume() const;
	Primitive*getPrimitive() const;
	void*allocateFromPool();
	void __cdecl ballKernelPair(Ball* b);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8WORLD_BALL_H
