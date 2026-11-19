#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_GETSETIMPL_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_GETSETIMPL_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class GetSetImpl
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void __cdecl get(int* out) const;
	void __cdecl set(void* arg) const;
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_GETSETIMPL_H
