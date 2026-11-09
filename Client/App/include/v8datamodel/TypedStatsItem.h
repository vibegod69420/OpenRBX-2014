#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_TYPEDSTATSITEM_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_TYPEDSTATSITEM_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e3c758
class TypedStatsItem
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_flag_0028[0x28]; bool flag_0028; };
		struct { char _pad_flag_01d9[0x1d9]; bool flag_01d9; };
		// AUTO-GENERATED FIELDS
	};

	static int derefInt(const int* p);
	static int derefInt_01e0(const int* p);
	void setFlag28(bool value);
	void setFlag1D9(bool value);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_TYPEDSTATSITEM_H
