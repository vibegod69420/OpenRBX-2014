#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_ARCHANDLES_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_ARCHANDLES_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class ArcHandles
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_flag_0020[0x20]; bool flag_0020; };
		// AUTO-GENERATED FIELDS
	};

	int getHandleId();
	bool getFlag20() const;
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_ARCHANDLES_H
