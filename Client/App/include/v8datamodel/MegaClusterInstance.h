#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_MEGACLUSTERINSTANCE_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_MEGACLUSTERINSTANCE_H

#include "decomp.h"

namespace RBX {

#ifndef NULL
#define NULL 0
#endif
// AUTO-GENERATED HELPERS

class MegaClusterInstance
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	float getMinimumSize() const;
	void clear();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_MEGACLUSTERINSTANCE_H
