#include "G3D/Set.h"

#include "decomp.h"

namespace G3D {

struct SetStringStorage
{
	union
	{
		char buf[16];
		char* ptr;
	} bx;
	unsigned int size;
	unsigned int capacity;
};

// FUNCTION: ROBLOXSTUDIO 0x00708b90
Set::~Set()
{
	SetStringStorage* s;

	s = (SetStringStorage*)((char*)this + 0x48);
	if (s->capacity >= 0x10)
	{
		::operator delete(s->bx.ptr);
	}
	s->capacity = 0x0F;
	s->size = 0;
	s->bx.buf[0] = 0;

	*(unsigned int*)this = 0x00E47B20;

	s = (SetStringStorage*)((char*)this + 0x30);
	if (s->capacity >= 0x10)
	{
		::operator delete(s->bx.ptr);
	}
	s->capacity = 0x0F;
	s->size = 0;
	s->bx.buf[0] = 0;

	s = (SetStringStorage*)((char*)this + 0x08);
	if (s->capacity >= 0x10)
	{
		::operator delete(s->bx.ptr);
	}
	s->capacity = 0x0F;
	s->size = 0;
	s->bx.buf[0] = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace G3D
