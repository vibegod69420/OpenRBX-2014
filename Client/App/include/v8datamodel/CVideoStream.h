#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_CVIDEOSTREAM_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_CVIDEOSTREAM_H

#include "decomp.h"

namespace RBX {
namespace DS {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x0100632c
class CVideoStream
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_0030[0x30]; int field_0030; };
		// AUTO-GENERATED FIELDS
	};

	int getField30() const;
	void onDestroy();
	void* scalarDeletingDestructorImp(unsigned int flags);
	// AUTO-GENERATED METHODS
};

} // namespace DS
} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_CVIDEOSTREAM_H
