#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_MOUSE_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_MOUSE_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class Mouse
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	bool isTargetFilterActive();
	int getY();
	Mouse();
	int getX();
	int getViewSizeX();
	int getViewSizeY();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_MOUSE_H
