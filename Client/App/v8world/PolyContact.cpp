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

// FUNCTION: ROBLOXSTUDIO 0x00bc6ff0
void __cdecl PolyContact_sub_BC6D00(void* contact, void* edge, void* arg3);

void __cdecl PolyContact::addEdge(void* edge)
{
	void* face = *(void**)((char*)this + 0x10);

	*(void**)edge = *(void**)((char*)face + 0x1C);
	*(void**)((char*)face + 0x1C) = edge;

	unsigned char cl = *(unsigned char*)((char*)edge + 5);
	if ((cl & 7) == 0)
	{
		if (*(unsigned char*)((char*)face + 0x15) == 1)
		{
			void* a = *(void**)((char*)edge + 8);
			cl |= 4;
			*(unsigned char*)((char*)edge + 5) = cl;

			if (*(int*)((char*)a + 8) >= 4)
			{
				void* b = *(void**)a;
				if ((*(unsigned char*)((char*)b + 5) & 3) != 0 && (cl & 4) != 0)
				{
					PolyContact_sub_BC6D00(this, edge, b);
					return;
				}
			}
		}
		else
		{
			unsigned char al = *(unsigned char*)((char*)face + 0x14);
			al &= 3;
			cl &= 0xF8;
			al |= cl;
			*(unsigned char*)((char*)edge + 5) = al;
		}
	}
}

void __cdecl sub_BC6450(void* arg1);

// FUNCTION: ROBLOXSTUDIO 0x00bc95c0
void* __cdecl PolyContact::createFeature(void* arg2, void* arg3)
{
	if ((unsigned int)arg2 > 0xFFFFFFE5u)
	{
		sub_BC6450(this);
	}

	void* result = ((void* (__cdecl*)(void*, void*, int, int))sub_BC6400)(this, 0, 0, (int)arg2 + 0x18);

	*(unsigned char*)((char*)result + 5) = *(unsigned char*)((char*)*(void**)((char*)this + 0x10) + 0x14) & 3;
	*(void**)((char*)result + 0x10) = arg2;
	*(unsigned char*)((char*)result + 4) = 7;
	*(int*)((char*)result + 8) = 0;
	*(void**)((char*)result + 0xC) = arg3;
	*(unsigned char*)((char*)result + 0x14) = 1;

	*(void**)result = *(void**)(*(void**)((char*)*(void**)((char*)this + 0x10) + 0x70));
	*(void**)(*(void**)((char*)*(void**)((char*)this + 0x10) + 0x70)) = result;

	return result;
}

void __cdecl PolyContact_sub_C180D0(void* arg1, void* arg2, void* arg3, int arg4, void* arg5);
void __cdecl PolyContact_sub_C18B80(void* arg1, int arg2);

// FUNCTION: ROBLOXSTUDIO 0x00bcce50
void __cdecl PolyContact::removeEdgeIndex(void* node, void* feature)
{
	void* obj = *(void**)((char*)this + 0x30);
	int changed = 0;
	void* replacement = *(void**)((char*)obj + 0x24);

	if (node)
	{
		void* feat = feature;
		do
		{
			if (*(int*)((char*)node + 8) == 9)
			{
				if (*(int*)((char*)node + 0x10) == *(int*)((char*)feat + 8))
				{
					changed = 1;
					*(void**)((char*)node + 0x10) = replacement;
				}

				if (*(int*)((char*)node + 0x14) == *(int*)((char*)feat + 8))
				{
					changed = 1;
					*(void**)((char*)node + 0x14) = replacement;
				}
			}

			node = *(void**)node;
		}
		while (node);

		if (changed)
		{
			PolyContact_sub_C180D0(obj, node, *(void**)((char*)obj + 0x24), *(int*)((char*)feat + 8), node);
			PolyContact_sub_C18B80(obj, 1);
		}
	}
}

void __cdecl PolyContact_sub_C183E0(void* obj, void* arg);
void __cdecl PolyContact_sub_C18750(void* obj, void* value, int count);
void __cdecl PolyContact_sub_C18DD0(void* obj, void* arg, int count);

// FUNCTION: ROBLOXSTUDIO 0x00bcc9d0
void __cdecl PolyContact::updateContact(int arg2, int arg3, void* arg4)
{
	void* obj = *(void**)((char*)this + 0x30);
	int diff = arg2 - arg3;
	int tag = *(int*)arg4;

	if (tag == 13 || tag == 14)
	{
		++diff;
		if (diff < 0)
			diff = 0;

		PolyContact_sub_C18DD0(obj, arg4, diff);
		if (diff > 1)
			PolyContact_sub_C18B80(obj, diff - 1);
	}
	else
	{
		if (tag != 0)
			PolyContact_sub_C183E0(obj, arg4);

		if (diff > 0)
		{
			void* v24 = *(void**)((char*)obj + 0x24);
			PolyContact_sub_C18B80(obj, diff);
			PolyContact_sub_C18750(obj, v24, diff);
		}
	}
}

void __cdecl sub_BCF6C0(void* arg1, void* arg2, int arg3);
void* __cdecl sub_A457E0(void* dest, const char* fmt, ...);
void __cdecl sub_BC8720(void* arg1, void* msg, int arg3);

// FUNCTION: ROBLOXSTUDIO 0x00bce360
void __cdecl PolyContact::checkLimit(void* arg2)
{
	sub_BCF6C0(this, arg2, 0);

	if (*(int*)((char*)arg2 + 0x20) > 0x7FFFFFFD)
	{
		void* obj = *(void**)((char*)this + 0x30);
		int line = *(int*)((char*)*(void**)obj + 0x3C);
		void* msg;

		if (line == 0)
		{
			msg = sub_A457E0(*(void**)((char*)obj + 0x10),
				"main function has more than %d %s",
				0x7FFFFFFD, "items in a constructor");
		}
		else
		{
			msg = sub_A457E0(*(void**)((char*)obj + 0x10),
				"function at line %d has more than %d %s",
				line, 0x7FFFFFFD, "items in a constructor");
		}

		sub_BC8720(*(void**)((char*)obj + 0x0C), msg, 0);
	}

	++*(int*)((char*)arg2 + 0x20);
	++*(int*)((char*)arg2 + 0x24);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
