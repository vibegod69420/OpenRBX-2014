#ifndef CLIENT_APP_INCLUDE_V8WORLD_BALL_H
#define CLIENT_APP_INCLUDE_V8WORLD_BALL_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e90974
class Ball
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	bool canAccept(int a0, int a1, int a2, int a3, int a4) const;
	int identity(int a) const;
	void onDestroy();
	void* scalarDeletingDestructor(unsigned int flags);
	float getDensity() const;
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8WORLD_BALL_H
