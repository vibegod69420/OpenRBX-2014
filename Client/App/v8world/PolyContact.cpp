#include "v8world/PolyContact.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00bc88e0
void PolyContact_deleteEdge(PolyContact* contact, void* edge, void* face);

void __cdecl PolyContact::deleteEdge(void* edge)
{
	PolyContact_deleteEdge(this, edge, *(void**)((char*)this + 0x10));
}

void* PolyContact_findClosestFeature(PolyContact* contact, void* feature);

// FUNCTION: ROBLOXSTUDIO 0x00bc8790
void __cdecl PolyContact::findClosestFeature()
{
	*(void**)((char*)this + 0x20) = PolyContact_findClosestFeature(this, (char*)this + 0x28);
}

// FUNCTION: ROBLOXSTUDIO 0x00bc6fc0
void __cdecl PolyContact::addEdge(void* edge, unsigned char info)
{
	void* face = *(void**)((char*)this + 0x10);
	void* oldHead = *(void**)((char*)face + 0x1C);
	*(void**)edge = oldHead;
	unsigned char low2 = *(unsigned char*)((char*)face + 0x14) & 0x03u;
	*(void**)((char*)face + 0x1C) = edge;
	*((unsigned char*)edge + 5) = low2;
	*((unsigned char*)edge + 4) = info;
}

// FUNCTION: ROBLOXSTUDIO 0x00bca5b0
void __cdecl PolyContact::init(void* target, void* arg2, void* arg3)
{
	char* p = (char*)target;
	*(void**)(p + 0x10) = this;
	*(void**)(p + 0x08) = arg2;
	*(void**)(p + 0x0C) = arg3;
	*(void**)p = 0;
	*(void**)(p + 0x04) = 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00bcd220
void* PolyContact_sub_C18F70(void* a, void* b);

void __cdecl PolyContact::computeContact(void* out, void* param)
{
	void* result = PolyContact_sub_C18F70(*(void**)((char*)this + 0x30), param);

	*(int*)((char*)out + 0x10) = -1;
	*(int*)((char*)out + 0x14) = -1;
	*(int*)out = 4;
	*(void**)((char*)out + 8) = result;
}

// FUNCTION: ROBLOXSTUDIO 0x00bc87b0
void* PolyContact_sub_BC9420(void* arg1, void* arg2, void* arg3);
void* PolyContact_sub_BC9D00(void* arg1, void* arg2, void* arg3);

void* __cdecl PolyContact::getEdge(void* arg2, void* arg3)
{
	void* v34 = *(void**)((char*)this + 0x34);
	void* result = PolyContact_sub_BC9420(v34, arg2, arg3);
	void* v30 = *(void**)((char*)this + 0x30);
	void* contact = PolyContact_sub_BC9D00(v34, *(void**)((char*)v30 + 4), result);

	if (*(int*)((char*)contact + 8) == 0)
	{
		*(int*)contact = 1;
		*(int*)((char*)contact + 8) = 1;
	}

	return result;
}

// FUNCTION: ROBLOXSTUDIO 0x00bcca50
void __cdecl PolyContact::updateEdges(int count)
{
	char* obj = *(char**)((char*)this + 0x30);
	*(unsigned char*)(obj + 0x32) += (unsigned char)count;

	if (count != 0)
	{
		do
		{
			unsigned char cur = *(unsigned char*)(obj + 0x32);
			int index = (int)cur - count;
			unsigned short w = *(unsigned short*)(obj + index * 2 + 0xAC);
			int strideIndex = (int)w * 3;
			char* base = *(char**)obj;
			char* table = *(char**)(base + 0x18);
			void* value = *(void**)(obj + 0x18);
			*(void**)(table + strideIndex * 4 + 4) = value;
			--count;
		}
		while (count != 0);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00bc9880
void __cdecl sub_BC6400(void* arg1, void* arg2, int arg3, int arg4);

void __cdecl PolyContact::deleteFeature(void* feature)
{
	char* f = (char*)feature;
	void* field14 = *(void**)(f + 0x14);

	if (field14 != (void*)0x00EE1E60)
	{
		unsigned char shift = *(unsigned char*)(f + 8);
		sub_BC6400(this, field14, (1 << shift) << 5, 0);
	}

	sub_BC6400(this, *(void**)(f + 0x10), *(int*)(f + 0x20) << 4, 0);
	sub_BC6400(this, feature, 0x24, 0);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
