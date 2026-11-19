#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_STARTERPACKSERVICE_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_STARTERPACKSERVICE_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class StarterPackService
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_flag_008c[0x8c]; bool flag_008c; };
		struct { char _pad_field_0068[0x68]; int field_0068; };
		// AUTO-GENERATED FIELDS
	};

	int getConst12() const;
	bool getFlag8C() const;
	int getField68() const;
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_STARTERPACKSERVICE_H
