#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_GAMEPERFMONITOR_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_GAMEPERFMONITOR_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00eff638
class GamePerfMonitor
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_ptr_000c[0xc]; GamePerfMonitor* ptr_000c; };
		struct { char _pad_field_0010[0x10]; int field_0010; };
		struct { char _pad_field_08c0[0x8c0]; int field_08c0; };
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	void destroySubPtr0C();
	void setField10(int value);
	void setField8C0(int value);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_GAMEPERFMONITOR_H
