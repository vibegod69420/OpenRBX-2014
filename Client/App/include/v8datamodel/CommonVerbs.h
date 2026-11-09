#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_COMMONVERBS_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_COMMONVERBS_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e81e10
class CommonVerbs
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_ptr_000c[0xc]; CommonVerbs* ptr_000c; };
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	void destroySubPtr0C();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_COMMONVERBS_H
