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
	static int derefInt(const int* p);
	static int derefInt_01e0(const int* p);
	int checkField17C() const;
	TypedStatsItem();
	TypedStatsItem* __cdecl getOrCreateChildItem(const char* name);
	TypedStatsItem* __cdecl getOrCreateChild(const char* name);
	TypedStatsItem* __cdecl getOrCreateTypedChildItem(const char* name);
	TypedStatsItem* __cdecl getOrCreateTypedChild(const char* name);
	TypedStatsItem* __cdecl getOrCreateItem(const char* name);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_TYPEDSTATSITEM_H
