#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_MOUSECOMMAND_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_MOUSECOMMAND_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class MouseCommand
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void clear();
	MouseCommand* __cdecl create(void* a1, void* a2, void* a3);
	void capture();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_MOUSECOMMAND_H
