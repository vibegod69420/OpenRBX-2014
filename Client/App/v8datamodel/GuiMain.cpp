#include "v8datamodel/GuiMain.h"

#include "decomp.h"

namespace RBX {

class GuiMainListHelper
{
public:
	void unlink(void* result, void* link, void* node);
};

void __cdecl GuiMainDestroyNode(void* node);

// FUNCTION: ROBLOXSTUDIO 0x008b1720
void GuiMain::removeNode()
{
	void* local;
	void* node = (void*)_vtable_or_head;
	((GuiMainListHelper*)this)->unlink(&local, *(void**)node, node);
	GuiMainDestroyNode((void*)_vtable_or_head);
}

struct GuiMainBuffer
{
	char* data;
	unsigned int size;
	unsigned int capacity;
};

class GuiMainBufferHelper
{
public:
	void grow(unsigned int needed);
};

// FUNCTION: ROBLOXSTUDIO 0x008b16a0
void __cdecl GuiMain::append(const void* data)
{
	GuiMainBuffer* buffer = (GuiMainBuffer*)this;
	unsigned int needed = buffer->size + 12;
	if (needed > buffer->capacity)
		((GuiMainBufferHelper*)buffer)->grow(needed);

	char* dest = buffer->data + buffer->size;
	const int* src = (const int*)data;
	int* dst = (int*)dest;
	dst[0] = src[0];
	dst[1] = src[1];
	dst[2] = src[2];

	buffer->size += 12;
}

struct GuiMainScriptEvent
{
	void* instance;
	void* descriptor;
	void fire(void* arg);
};

class GuiMainInstance
{
public:
	unsigned char isMemberOf(void* descriptor);
};

extern unsigned char g_RBXAssertEnabled;
extern unsigned char (__cdecl* g_RBXAssertCallback)(const char*, const char*, int);
void __cdecl RBXAssert(int level, const char* message);

// FUNCTION: ROBLOXSTUDIO 0x008b0910
void __cdecl GuiMain::fireScriptEvent(void* source, void* arg)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = this;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)this)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(arg);
}

// FUNCTION: ROBLOXSTUDIO 0x008b0a10
void __cdecl GuiMain::fireTriggeredScriptEvent(void* source, void* arg)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = this;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)this)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection/property.h line: 256");
				}
			}
		}
	}

	local.fire(arg);
}

// FUNCTION: ROBLOXSTUDIO 0x008b0a90
void __cdecl GuiMain::fireMouseButton2ClickScriptEvent(void* source, void* arg)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = this;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)this)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(arg);
}

// FUNCTION: ROBLOXSTUDIO 0x008b0b10
void __cdecl GuiMain::fireMouseButton1DownScriptEvent(void* source, void* arg)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = this;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)this)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(arg);
}

// FUNCTION: ROBLOXSTUDIO 0x008b0b90
void __cdecl GuiMain::fireMouseButton1UpScriptEvent(void* source, void* arg)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = this;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)this)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(arg);
}

// FUNCTION: ROBLOXSTUDIO 0x008b0c10
void __cdecl GuiMain::fireMouseButton1ClickScriptEvent(void* source, void* arg)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = this;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)this)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(arg);
}

// FUNCTION: ROBLOXSTUDIO 0x008b0c90
void __cdecl GuiMain::fireMouseButton2DownScriptEvent(void* source, void* arg)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = this;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)this)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(arg);
}

// FUNCTION: ROBLOXSTUDIO 0x008b0d10
void __cdecl GuiMain::fireMouseButton2UpScriptEvent(void* source, void* arg)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = this;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)this)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(arg);
}

// FUNCTION: ROBLOXSTUDIO 0x008b0d90
void __cdecl GuiMain::fireMouseEnterScriptEvent(void* source, void* arg)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = this;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)this)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection/property.h line: 256");
				}
			}
		}
	}

	local.fire(arg);
}

// FUNCTION: ROBLOXSTUDIO 0x008b0e10
void __cdecl GuiMain::fireMouseLeaveScriptEvent(void* source, void* arg)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = this;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)this)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(arg);
}

// FUNCTION: ROBLOXSTUDIO 0x008b0e90
void __cdecl GuiMain::fireMouseMovedScriptEvent(void* source, void* arg)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = this;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)this)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(arg);
}

// FUNCTION: ROBLOXSTUDIO 0x008af590
void* __cdecl GuiMain::fireTriggered(void* instance, void* source)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = instance;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)instance)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x008af610
void* __cdecl GuiMain::fireTriggeredEx(void* instance, void* source)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = instance;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)instance)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x008af690
void* __cdecl GuiMain::fireRightMouseClick(void* instance, void* source)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = instance;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)instance)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x008af7a0
void* __cdecl GuiMain::fireMouseButton1Click(void* instance, void* source)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = instance;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)instance)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x008af820
void* __cdecl GuiMain::fireMouseButton1Down(void* instance, void* source)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = instance;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)instance)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x008af930
void* __cdecl GuiMain::fireMouseButton1Up(void* instance, void* source)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = instance;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)instance)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x008af9b0
void* __cdecl GuiMain::fireMouseButton2Click(void* instance, void* source)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = instance;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)instance)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x008afa30
void* __cdecl GuiMain::fireMouseButton2Down(void* instance, void* source)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = instance;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)instance)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x008afb30
void* __cdecl GuiMain::fireMouseButton2Up(void* instance, void* source)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = instance;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)instance)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x008afbb0
void* __cdecl GuiMain::fireMouseEnter(void* instance, void* source)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = instance;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)instance)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x008afab0
void* __cdecl GuiMain::fireMouseLeave(void* instance, void* source)
{
	GuiMainScriptEvent local;
	void* descriptor;

	if (source)
		descriptor = (char*)source + 0x1C;
	else
		descriptor = 0;

	local.instance = instance;
	local.descriptor = descriptor;

	if (g_RBXAssertEnabled)
	{
		if (descriptor)
		{
			if (((GuiMainInstance*)instance)->isMemberOf(descriptor) == 0)
			{
				unsigned char (__cdecl* callback)(const char*, const char*, int) = g_RBXAssertCallback;

				if (callback == 0 ||
					callback(
						"!instance || descriptor.isMemberOf(instance)",
						"d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h",
						0x100) == 0)
				{
					RBXAssert(
						(int)g_RBXAssertEnabled,
						"!instance || descriptor.isMemberOf(instance) file: d:\\buildagent\\work\\trunk2012\\client\\app\\include\\reflection\\property.h line: 256");
				}
			}
		}
	}

	local.fire(this);
	return this;
}

void __cdecl GuiMain_FireScriptEvent_008b2870(void* instance, int mode, void* arg);

// FUNCTION: ROBLOXSTUDIO 0x008b1ec0
void __cdecl GuiMain::fireEvent(void* arg)
{
	GuiMain_FireScriptEvent_008b2870(this, 0, arg);
}

// FUNCTION: ROBLOXSTUDIO 0x008b1ee0
void __cdecl GuiMain::fireEvent(int mode)
{
	GuiMain_FireScriptEvent_008b2870(this, mode, 0);
}

class GuiMainBase
{
public:
	void ctor(const char* name);
};

// FUNCTION: ROBLOXSTUDIO 0x00ac7910
GuiMain::GuiMain()
{
	((GuiMainBase*)this)->ctor("GuiMain");
	*(int*)((char*)this + 0x00) = 0x00EBB4E4;
	*(int*)((char*)this + 0x04) = 0x00EBB580;
	*(int*)((char*)this + 0x18) = 0x00EBB588;
	*(int*)((char*)this + 0x1C) = 0x00EBB594;
	*(int*)((char*)this + 0x64) = 0x00EBB5A4;
	*(int*)((char*)this + 0x68) = 0x00EBB5AC;
	*(int*)((char*)this + 0xDC) = 0x00EBB5E0;
}

extern void (__thiscall *GuiMainNodeDestroy_0xe10268)(void*);

// FUNCTION: ROBLOXSTUDIO 0x008ae1d0
void __cdecl GuiMain::clear(void* end)
{
	char* p = (char*)this;
	char* e = (char*)end;

	if (p == e)
		return;

	do
	{
		if (*(void**)p != 0)
		{
			GuiMainNodeDestroy_0xe10268(p);
			::operator delete(*(void**)p);
			*(void**)p = 0;
			*(void**)(p + 4) = 0;
			*(void**)(p + 8) = 0;
		}

		p += 0x0C;
	} while (p != e);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
