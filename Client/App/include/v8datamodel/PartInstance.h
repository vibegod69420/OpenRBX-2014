#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_PARTINSTANCE_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_PARTINSTANCE_H

#include "decomp.h"

namespace RBX {

extern int s_value_00825850;
// AUTO-GENERATED HELPERS

class PartInstance
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_0070[0x70]; int field_0070; };
		struct { char _pad_field_0074[0x74]; int field_0074; };
		// AUTO-GENERATED FIELDS
	};

	int getField70() const;
	int getField74() const;
	int getGlobal_5850() const;
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_PARTINSTANCE_H
