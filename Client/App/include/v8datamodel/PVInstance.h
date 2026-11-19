#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_PVINSTANCE_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_PVINSTANCE_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class PVInstance
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	PVInstance*getAncestorPVInstance();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_PVINSTANCE_H
