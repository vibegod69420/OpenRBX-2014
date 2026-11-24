#include "v8kernel/btConvexPolyhedron.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x005d5920
void* btConvexPolyhedron::initialize()
{
	int i = 0;
	int count = *(int*)((char*)this + 4);
	void* p = *(void**)this;

	if (count > 0)
	{
		do
		{
			++i;
			*(void**)p = (i < count) ? (char*)p + 0x70 : 0;
			count = *(int*)((char*)this + 4);
			p = (char*)p + 0x70;
		}
		while (i < count);

		return *(void**)this;
	}

	return p;
}

// FUNCTION: ROBLOXSTUDIO 0x005d5960
void* btConvexPolyhedron::initializeFaces()
{
	int i = 0;
	int count = *(int*)((char*)this + 4);
	void* p = *(void**)this;

	if (count > 0)
	{
		do
		{
			++i;
			*(void**)p = (i < count) ? (char*)p + 0x18 : 0;
			count = *(int*)((char*)this + 4);
			p = (char*)p + 0x18;
		}
		while (i < count);

		return *(void**)this;
	}

	return p;
}

// FUNCTION: ROBLOXSTUDIO 0x005d59a0
void* btConvexPolyhedron::initializeEdges()
{
	int i = 0;
	int count = *(int*)((char*)this + 4);
	void* p = *(void**)this;

	if (count > 0)
	{
		do
		{
			++i;
			*(void**)p = (i < count) ? (char*)p + 0x3c : 0;
			count = *(int*)((char*)this + 4);
			p = (char*)p + 0x3c;
		}
		while (i < count);

		return *(void**)this;
	}

	return p;
}

extern int btConvexPolyhedron_deleteCounter;
extern void (__cdecl* btConvexPolyhedron_free)(void*);

// FUNCTION: ROBLOXSTUDIO 0x005d5420
void btConvexPolyhedron::destroy()
{
	while (*(void**)this)
	{
		void* node = *(void**)this;
		*(void**)this = *(void**)((char*)node + 8);

		void* child = *(void**)node;
		if (child)
		{
			++btConvexPolyhedron_deleteCounter;
			btConvexPolyhedron_free(child);
		}

		++btConvexPolyhedron_deleteCounter;
		btConvexPolyhedron_free(node);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS


