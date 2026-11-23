#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_SHARED_STATE_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_SHARED_STATE_H

#include "decomp.h"

namespace std {

// AUTO-GENERATED HELPERS

class shared_state
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void* get();
	shared_state* __cdecl init();
	// AUTO-GENERATED METHODS
};

} // namespace std

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_SHARED_STATE_H
