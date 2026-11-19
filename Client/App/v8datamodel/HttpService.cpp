#include "v8datamodel/HttpService.h"

#include "decomp.h"

namespace RBX {

void dealloc(void* ptr);

struct HttpString
{
	union
	{
		char* ptr;
		char buf[16];
	};
	unsigned int size;     // 0x10
	unsigned int capacity; // 0x14
};

struct HttpServiceList
{
	void* head; // 0x00
	void tidy();
};

// FUNCTION: ROBLOXSTUDIO 0x009377a0
HttpService::~HttpService()
{
	dealloc(*(void**)((char*)this + 0x38));

	HttpString* s = *(HttpString**)((char*)this + 0x34);
	if (s)
	{
		if (s->capacity >= 0x10)
			dealloc(s->ptr);
		s->capacity = 0x0F;
		s->size = 0;
		s->buf[0] = 0;
		dealloc(s);
	}

	s = *(HttpString**)((char*)this + 0x30);
	if (s)
	{
		if (s->capacity >= 0x10)
			dealloc(s->ptr);
		s->capacity = 0x0F;
		s->size = 0;
		s->buf[0] = 0;
		dealloc(s);
	}

	HttpServiceList* list = (HttpServiceList*)((char*)this + 0x20);
	list->tidy();
	dealloc(*(void**)((char*)this + 0x20));

	*(void**)this = (void*)0x00E33A28;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
