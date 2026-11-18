#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_INDIRECT_STREAMBUF_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_INDIRECT_STREAMBUF_H

#include "decomp.h"

namespace std {

// AUTO-GENERATED HELPERS

class indirect_streambuf
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_member_003c[0x3c]; int member_003c; };
		// AUTO-GENERATED FIELDS
	};

	const int* getMemberPtr3C() const;
	// AUTO-GENERATED METHODS
};

} // namespace std

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_INDIRECT_STREAMBUF_H
