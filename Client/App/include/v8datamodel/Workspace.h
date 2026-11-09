#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_WORKSPACE_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_WORKSPACE_H

#include "decomp.h"

namespace RBX {

extern int s_val_00900040;
extern int s_val_00900070;
extern int s_val_009000f0;
// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e85768
class Workspace
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_flag_007c[0x7c]; bool flag_007c; };
		struct { char _pad_flag_0228[0x228]; bool flag_0228; };
		// AUTO-GENERATED FIELDS
	};

	void setFlag7C(bool value);
	void setGlobal_0040(int value);
	void setGlobal_0070(int value);
	void setGlobal_00f0(int value);
	void setFlag228(bool value);
	void onDestroy();
	void* scalarDeletingDestructor(unsigned int flags);
	void* scalarDeletingDestructor_slot0(unsigned int flags);
	void* scalarDeletingDestructor_5850(unsigned int flags);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_WORKSPACE_H
