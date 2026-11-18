#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_NUMPUNCT_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_NUMPUNCT_H

#include "decomp.h"

namespace std {

// AUTO-GENERATED HELPERS

class numpunct
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_flag_000c[0xc]; bool flag_000c; };
		struct { char _pad_flag_000d[0xd]; bool flag_000d; };
		// AUTO-GENERATED FIELDS
	};

	bool getFlag0C() const;
	bool getFlag0D() const;
	// AUTO-GENERATED METHODS
};

} // namespace std

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_NUMPUNCT_H
