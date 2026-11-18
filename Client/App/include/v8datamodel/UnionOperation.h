#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_UNIONOPERATION_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_UNIONOPERATION_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class UnionOperation
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	float getGridSizeX() const;
	float getGridSizeY() const;
	int hasChildData() const;
	char* getPrimitiveDataOffset24() const;
	void sub_894960();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_UNIONOPERATION_H
