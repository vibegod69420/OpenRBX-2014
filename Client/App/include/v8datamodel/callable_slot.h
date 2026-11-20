#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_CALLABLE_SLOT_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_CALLABLE_SLOT_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class callable_slot
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	int __cdecl invoke();
	float __cdecl invoke_float();
	void* __cdecl get();
	int size();
	int notEmpty();
	void __cdecl clear();
	bool hasValue();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_CALLABLE_SLOT_H
