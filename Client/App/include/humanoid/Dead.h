#ifndef CLIENT_APP_INCLUDE_HUMANOID_DEAD_H
#define CLIENT_APP_INCLUDE_HUMANOID_DEAD_H

#include "decomp.h"

namespace RBX {
namespace HUMAN {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00eec80c
class Dead
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_001c[0x1c]; int field_001c; };
		struct { char _pad_flag_00a9[0xa9]; bool flag_00a9; };
		struct { char _pad_flag_00aa[0xaa]; bool flag_00aa; };
		struct { char _pad_flag_00a8[0xa8]; bool flag_00a8; };
		// AUTO-GENERATED FIELDS
	};

	void setField1C(int value);
	void setFlagA9(bool value);
	void setFlagAA(bool value);
	void setFlagA8(bool value);
	// AUTO-GENERATED METHODS
};

} // namespace HUMAN
} // namespace RBX

#endif // CLIENT_APP_INCLUDE_HUMANOID_DEAD_H
