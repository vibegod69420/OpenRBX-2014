#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_PARTINSTANCE_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_PARTINSTANCE_H

#include "decomp.h"

namespace RBX {

struct SubBool_PartInstance_00e0_0110 { char pad[272]; bool val; };
// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e66c1c
class PartInstance
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_0070[0x70]; int field_0070; };
		struct { char _pad_field_0074[0x74]; int field_0074; };
		struct { char _pad_subb_00e0_0110[0xe0]; SubBool_PartInstance_00e0_0110* subb_00e0_0110; };
		// AUTO-GENERATED FIELDS
	};

	int getField70() const;
	int evalConst8(int a0) const;
	int evalConst1(int a0) const;
	int evalConst48(int a0) const;
	int getField74() const;
	bool getSubFlagE0_110() const;
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_PARTINSTANCE_H
