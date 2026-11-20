#ifndef CLIENT_APP_INCLUDE_V8WORLD_BALLBALLCONTACT_H
#define CLIENT_APP_INCLUDE_V8WORLD_BALLBALLCONTACT_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class BallBallContact
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	int isColliding();
	void*allocate();
	void*allocateFromPool();
	void*allocateFromNew();
	void*allocateFromFreeList();
	void*allocateFromNewPage();
	void*allocateFromNewList();
	void*allocateFromNewChunk();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8WORLD_BALLBALLCONTACT_H
