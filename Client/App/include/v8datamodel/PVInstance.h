#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_PVINSTANCE_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_PVINSTANCE_H

#include "decomp.h"

namespace RBX {

#ifndef NULL
#define NULL 0
#endif
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
	PVInstance* __cdecl getTopLevelPVInstance(void* arg);
	PVInstance* __cdecl getTopLevelPVInstanceEx(void* arg);
	PVInstance* __cdecl getTopLevelPVInstance2(void* arg);
	PVInstance* __cdecl getTopLevelPVInstance3(void* arg);
	void __cdecl destroy();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_PVINSTANCE_H
