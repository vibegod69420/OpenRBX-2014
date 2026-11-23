#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_CAMERAZOOMOUTCOMMAND_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_CAMERAZOOMOUTCOMMAND_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class CameraZoomOutCommand
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void zoomOut();
	void onDestroy();
	static void destroyInstance(CameraZoomOutCommand* p);
	static void destroyInstance_49e0(CameraZoomOutCommand* p);
	unsigned char isEnabled();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_CAMERAZOOMOUTCOMMAND_H
