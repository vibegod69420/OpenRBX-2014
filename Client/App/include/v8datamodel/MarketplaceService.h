#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_MARKETPLACESERVICE_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_MARKETPLACESERVICE_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00eb9ad0
class MarketplaceService
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_00cc[0xcc]; int field_00cc; };
		// AUTO-GENERATED FIELDS
	};

	void setFieldCC(int value);
	void onDestroy();
	void* scalarDeletingDestructor(unsigned int flags);
	void* scalarDeletingDestructor_slot0(unsigned int flags);
	void* scalarDeletingDestructor_a350(unsigned int flags);
	void* scalarDeletingDestructor_a380(unsigned int flags);
	void* scalarDeletingDestructor_a3b0(unsigned int flags);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_MARKETPLACESERVICE_H
