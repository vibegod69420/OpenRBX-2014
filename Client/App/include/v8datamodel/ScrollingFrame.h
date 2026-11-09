#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_SCROLLINGFRAME_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_SCROLLINGFRAME_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00ebe6cc
class ScrollingFrame
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_flag_0278[0x278]; bool flag_0278; };
		struct { char _pad_field_00a4[0xa4]; int field_00a4; };
		struct { char _pad_field_00a0[0xa0]; int field_00a0; };
		// AUTO-GENERATED FIELDS
	};

	bool getFlag278() const;
	int getFieldA4() const;
	int getFieldA0() const;
	int evalConst16(int a0) const;
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_SCROLLINGFRAME_H
