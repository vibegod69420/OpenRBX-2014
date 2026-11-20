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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
