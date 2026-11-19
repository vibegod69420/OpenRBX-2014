#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_FLYWEIGHTSERVICE_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_FLYWEIGHTSERVICE_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class FlyweightService
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	static void addAssign(int* p, int v);
	void __cdecl subAssign(int* p, int v);
	FlyweightService*getIfValid();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_FLYWEIGHTSERVICE_H
