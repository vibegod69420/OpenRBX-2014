#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_STANDARDOUT_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_STANDARDOUT_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class StandardOut
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_ptr_000c[0xc]; StandardOut* ptr_000c; };
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	void destroySubPtr0C();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_STANDARDOUT_H
