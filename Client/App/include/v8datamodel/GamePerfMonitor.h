#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_GAMEPERFMONITOR_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_GAMEPERFMONITOR_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class GamePerfMonitor
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_ptr_000c[0xc]; GamePerfMonitor* ptr_000c; };
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	void destroySubPtr0C();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_GAMEPERFMONITOR_H
