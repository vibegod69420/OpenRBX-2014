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
		struct { char _pad_field_0170[0x170]; int field_0170; };
		// AUTO-GENERATED FIELDS
	};

	float getGridSizeX() const;
	float getGridSizeY() const;
	int hasChildData() const;
	char* getPrimitiveDataOffset24() const;
	void sub_894960();
	void sub_8940E0();
	int getField170() const;
	int getConst512000() const;
	int getConst2500() const;
	char*getPrimitiveDataOffset3C() const;
	bool sub_8940A0() const;
	void*sub_8942A0();
	void sub_893910();
	void sub_894980();
	bool sub_893D40() const;
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_UNIONOPERATION_H
