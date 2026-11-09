#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_VERBCONTAINER_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_VERBCONTAINER_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e8515c
class VerbContainer
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_000c[0xc]; int field_000c; };
		// AUTO-GENERATED FIELDS
	};

	void setField0C(int value);
	void onDestroy();
	void* scalarDeletingDestructor(unsigned int flags);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_VERBCONTAINER_H
