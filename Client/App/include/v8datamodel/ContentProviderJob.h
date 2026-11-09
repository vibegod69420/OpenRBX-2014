#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_CONTENTPROVIDERJOB_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_CONTENTPROVIDERJOB_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00ee075c
class ContentProviderJob
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_0264[0x264]; int field_0264; };
		// AUTO-GENERATED FIELDS
	};

	void setField264(int value);
	void onDestroy();
	void* scalarDeletingDestructor(unsigned int flags);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_CONTENTPROVIDERJOB_H
