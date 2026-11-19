#ifndef CLIENT_RENDERING_GFXBASE_VIEWBASE_H
#define CLIENT_RENDERING_GFXBASE_VIEWBASE_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class ViewBase
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void dispose();
	int getUnknown();
	float getCurrentEntryFloat();
	int getCurrentEntryInt();
	bool getCurrentEntryByte();
	int getCurrentEntryInt2();
	void updateViewData();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_RENDERING_GFXBASE_VIEWBASE_H
