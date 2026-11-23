#ifndef CLIENT_APP_INCLUDE_V8KERNEL_BODY_H
#define CLIENT_APP_INCLUDE_V8KERNEL_BODY_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class Body
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void advanceStateIndex();
	void*allocFromPool();
	void*allocateFromPool();
	int getNextStateIndex();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8KERNEL_BODY_H
