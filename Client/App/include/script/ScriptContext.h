#ifndef CLIENT_APP_INCLUDE_SCRIPT_SCRIPTCONTEXT_H
#define CLIENT_APP_INCLUDE_SCRIPT_SCRIPTCONTEXT_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e6f78c
class ScriptContext
{
public:
	union
	{
		int _vtable_or_head;
		ScriptContext* ptr_0000;
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	void resetPtr(ScriptContext* newPtr);
	void* scalarDeletingDestructor(unsigned int flags);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_SCRIPT_SCRIPTCONTEXT_H
