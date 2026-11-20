#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_GUIMAIN_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_GUIMAIN_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class GuiMain
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void removeNode();
	void __cdecl append(const void* data);
	void __cdecl fireScriptEvent(void* source, void* arg);
	void __cdecl fireTriggeredScriptEvent(void* source, void* arg);
	void __cdecl fireMouseButton2ClickScriptEvent(void* source, void* arg);
	void __cdecl fireMouseButton1DownScriptEvent(void* source, void* arg);
	void __cdecl fireMouseButton1UpScriptEvent(void* source, void* arg);
	void __cdecl fireMouseButton1ClickScriptEvent(void* source, void* arg);
	void __cdecl fireMouseButton2DownScriptEvent(void* source, void* arg);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_GUIMAIN_H
