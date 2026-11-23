#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_PLUGININTERFACE2_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_PLUGININTERFACE2_H

#include "decomp.h"

namespace RakNet {

// AUTO-GENERATED HELPERS

class PluginInterface2
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	bool IsEmpty() const;
	void __cdecl Sub_CC76F0(int* out);
	void __cdecl Sub_CC7750(int value);
	void __cdecl Sub_CC6590();
	// AUTO-GENERATED METHODS
};

} // namespace RakNet

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_PLUGININTERFACE2_H
