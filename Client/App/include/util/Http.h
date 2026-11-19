#ifndef CLIENT_APP_INCLUDE_UTIL_HTTP_H
#define CLIENT_APP_INCLUDE_UTIL_HTTP_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class Http
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_ptr_000c[0xc]; Http* ptr_000c; };
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	void destroySubPtr0C();
	void clear();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_UTIL_HTTP_H
