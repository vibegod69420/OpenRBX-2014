#include "v8datamodel/basic_altstringbuf.h"

#include "decomp.h"

namespace std {

__declspec(dllimport) void __stdcall BasicAltStringBuf_Thunk_E10140_Import(basic_altstringbuf*);

// FUNCTION: ROBLOXSTUDIO 0x00cf4f70
void basic_altstringbuf::BasicAltStringBuf_Thunk_E10140()
{
	BasicAltStringBuf_Thunk_E10140_Import(this);
}

__declspec(dllimport) void __stdcall BasicAltStringBuf_Thunk_E100D4_Import(basic_altstringbuf*);

// FUNCTION: ROBLOXSTUDIO 0x00cf4f80
void basic_altstringbuf::BasicAltStringBuf_Thunk_E100D4()
{
	BasicAltStringBuf_Thunk_E100D4_Import(this);
}

__declspec(dllimport) void __stdcall BasicAltStringBuf_FreeHandle(int);

// FUNCTION: ROBLOXSTUDIO 0x00cf4f00
void basic_altstringbuf::FreeHandle()
{
	int handle = _vtable_or_head;
	if (handle != -1)
	{
		BasicAltStringBuf_FreeHandle(handle);
		_vtable_or_head = -1;
	}
}

struct basic_altstringbuf_substate
{
	void init();
};

// FUNCTION: ROBLOXSTUDIO 0x00cf4e50
basic_altstringbuf::basic_altstringbuf()
{
	((basic_altstringbuf_substate*)((char*)this + 8))->init();
	_vtable_or_head = -1;
	*(int*)((char*)this + 0x20) = -1;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
