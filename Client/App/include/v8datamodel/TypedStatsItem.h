#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_TYPEDSTATSITEM_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_TYPEDSTATSITEM_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class TypedStatsItem
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_0004[0x4]; int field_0004; };
		// AUTO-GENERATED FIELDS
	};

	int getField04() const;
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_TYPEDSTATSITEM_H
