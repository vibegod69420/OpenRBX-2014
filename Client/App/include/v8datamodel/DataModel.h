#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_DATAMODEL_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_DATAMODEL_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e5d2bc
class DataModel
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_flag_0b68[0xb68]; bool flag_0b68; };
		struct { char _pad_flag_0c71[0xc71]; bool flag_0c71; };
		struct { char _pad_flag_0e00[0xe00]; bool flag_0e00; };
		struct { char _pad_field_0bfc[0xbfc]; int field_0bfc; };
		struct { char _pad_flag_0db0[0xdb0]; bool flag_0db0; };
		// AUTO-GENERATED FIELDS
	};

	bool getFlagB68() const;
	void setFlagB68(bool value);
	void setFlagC71(bool value);
	void setFlagE00(bool value);
	void setFieldBFC(int value);
	void setFlagDB0(bool value);
	void onDestroy();
	void* scalarDeletingDestructor(unsigned int flags);
	void* scalarDeletingDestructor_slot0(unsigned int flags);
	void* scalarDeletingDestructor_9d00(unsigned int flags);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_DATAMODEL_H
