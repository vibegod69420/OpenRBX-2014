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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
