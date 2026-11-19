#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_SYSTEMADDRESS_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_SYSTEMADDRESS_H

#include "decomp.h"

namespace RBX {

class SystemAddressStaticData;
class data;
// AUTO-GENERATED HELPERS

class SystemAddress
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	const SystemAddressStaticData&getDefaultData();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_SYSTEMADDRESS_H
