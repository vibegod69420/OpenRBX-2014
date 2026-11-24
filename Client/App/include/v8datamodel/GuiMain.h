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
	void __cdecl fireMouseButton2UpScriptEvent(void* source, void* arg);
	void __cdecl fireMouseEnterScriptEvent(void* source, void* arg);
	void __cdecl fireMouseLeaveScriptEvent(void* source, void* arg);
	void __cdecl fireMouseMovedScriptEvent(void* source, void* arg);
	void* __cdecl fireTriggered(void* instance, void* source);
	void* __cdecl fireTriggeredEx(void* instance, void* source);
	void* __cdecl fireRightMouseClick(void* instance, void* source);
	void* __cdecl fireMouseButton1Click(void* instance, void* source);
	void* __cdecl fireMouseButton1Down(void* instance, void* source);
	void* __cdecl fireMouseButton1Up(void* instance, void* source);
	void* __cdecl fireMouseButton2Click(void* instance, void* source);
	void* __cdecl fireMouseButton2Down(void* instance, void* source);
	void* __cdecl fireMouseButton2Up(void* instance, void* source);
	void* __cdecl fireMouseEnter(void* instance, void* source);
	void* __cdecl fireMouseLeave(void* instance, void* source);
	void __cdecl fireEvent(void* arg);
	void __cdecl fireEvent(int mode);
	GuiMain();
	void __cdecl clear(void* end);
	void __cdecl adjustHeap(int hole, int bottom, void* val, void* pred);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_GUIMAIN_H
