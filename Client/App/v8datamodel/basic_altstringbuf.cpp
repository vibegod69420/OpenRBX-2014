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

extern int g_basicAltStringBufRefCount;
__declspec(dllimport) void __stdcall basicAltStringBufCleanup();

// FUNCTION: ROBLOXSTUDIO 0x00cf4fc0
void basic_altstringbuf::Release()
{
	int count = g_basicAltStringBufRefCount;
	if (count != 0)
	{
		if (count > 1)
		{
			g_basicAltStringBufRefCount = count - 1;
			return;
		}
		basicAltStringBufCleanup();
		g_basicAltStringBufRefCount = 0;
	}
}

__declspec(dllimport) int __stdcall BasicAltStringBuf_Thunk_E1018C(int, int, int, int);

// FUNCTION: ROBLOXSTUDIO 0x00cf4f20
void basic_altstringbuf::Create()
{
	_vtable_or_head = BasicAltStringBuf_Thunk_E1018C(0, 0, 0, 0);
}

__declspec(dllimport) void __stdcall BasicAltStringBuf_Thunk_E10194(int);

// FUNCTION: ROBLOXSTUDIO 0x00cf4e70
void basic_altstringbuf::Close()
{
	int handle = _vtable_or_head;
	if (handle != -1)
	{
		BasicAltStringBuf_FreeHandle(handle);
	}

	int handle20 = *(int*)((char*)this + 0x20);
	if (handle20 != -1)
	{
		BasicAltStringBuf_Thunk_E10194(handle20);
		*(int*)((char*)this + 0x20) = -1;
	}

	_vtable_or_head = -1;
}

unsigned char basic_altstringbuf_get_byte();

// FUNCTION: ROBLOXSTUDIO 0x00cf5470
int __cdecl basic_altstringbuf::Init(unsigned char mode, const unsigned char* src)
{
	if (mode == 1 || mode == 2 || mode == 3)
	{
		((unsigned char*)this)[0] = mode;

		if (src)
		{
			for (int i = 0; i < 16; ++i)
			{
				((unsigned char*)this)[i + 1] = src[i];
			}
			return 1;
		}
		else
		{
			for (int i = 0; i < 16; ++i)
			{
				((unsigned char*)this)[i + 1] = basic_altstringbuf_get_byte();
			}
			return 1;
		}
	}

	return -4;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
