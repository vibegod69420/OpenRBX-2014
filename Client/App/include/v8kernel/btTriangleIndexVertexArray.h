#ifndef CLIENT_APP_INCLUDE_V8KERNEL_BTTRIANGLEINDEXVERTEXARRAY_H
#define CLIENT_APP_INCLUDE_V8KERNEL_BTTRIANGLEINDEXVERTEXARRAY_H

#include "decomp.h"



// AUTO-GENERATED HELPERS

class btTriangleIndexVertexArray
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_0024[0x24]; int field_0024; };
		// AUTO-GENERATED FIELDS
	};

	int getField24() const;
	int getConst28() const;
	int hasPremadeAabb() const;
	// AUTO-GENERATED METHODS
};



#endif // CLIENT_APP_INCLUDE_V8KERNEL_BTTRIANGLEINDEXVERTEXARRAY_H
