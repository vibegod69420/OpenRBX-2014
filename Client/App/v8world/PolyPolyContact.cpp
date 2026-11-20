#include "v8world/PolyPolyContact.h"

#include "decomp.h"

namespace RBX {

void __stdcall PolyPolyContact_deleteAllConnectors(void*);

// FUNCTION: ROBLOXSTUDIO 0x00c192e0
void PolyPolyContact::deleteAllConnectors()
{
	PolyPolyContact_deleteAllConnectors(reinterpret_cast<char*>(this) + 0x2c);
}

// FUNCTION: ROBLOXSTUDIO 0x00c57310
int PolyPolyContact::getFieldCC() const
{
	return field_00cc;
}

void __cdecl sub_00C18130(RBX::PolyPolyContact* contact, void* list, int value);

// FUNCTION: ROBLOXSTUDIO 0x00c18860
void __cdecl PolyPolyContact::update(int value)
{
	*(int*)((char*)this + 0x1C) = *(int*)((char*)this + 0x18);
	sub_00C18130(this, (char*)this + 0x20, value);
}

int __cdecl sub_C18280(void* a1, void* a2);

// FUNCTION: ROBLOXSTUDIO 0x00c18650
void __cdecl PolyPolyContact::compute(void* out, void* param)
{
	*(int*)((char*)out + 0x0C) = sub_C18280(this, param);
	*(int*)out = 9;
}

void __cdecl sub_C18030(PolyPolyContact* contact, unsigned int flags, void* feature);

// FUNCTION: ROBLOXSTUDIO 0x00c18bc0
void __cdecl PolyPolyContact::match(int a, int b)
{
	sub_C18030(
		this,
		(((unsigned int)b + 1) << 23) | ((unsigned int)a << 6) | 0x1Eu,
		*(void**)((char*)*(void**)((char*)this + 0x0C) + 8));
}

void __cdecl sub_C19000(PolyPolyContact* contact, int a, int b, int c, int d);

// FUNCTION: ROBLOXSTUDIO 0x00c18820
void __cdecl PolyPolyContact::matchSeparatingEdge(int featureId, int separatingEdge)
{
	int cachedEdge = *(int*)((char*)this + 0x18);
	if (separatingEdge == cachedEdge)
	{
		*(int*)((char*)this + 0x1C) = cachedEdge;
		sub_00C18130(this, (char*)this + 0x20, featureId);
	}
	else
	{
		sub_C19000(this, featureId, separatingEdge, 0xFF, separatingEdge);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00c18710
int __cdecl PolyPolyContact::getSeparatingEdgeCandidate()
{
	typedef int(__cdecl* SubC18030Func)(PolyPolyContact*, unsigned int, void*);

	void* base = *(void**)((char*)this + 0x0C);
	int oldValue = *(int*)((char*)this + 0x20);
	*(int*)((char*)this + 0x20) = -1;

	int result = ((SubC18030Func)sub_C18030)(
		this,
		0x7fff8016u,
		*(void**)((char*)base + 8));

	sub_00C18130(this, &result, oldValue);
	return result;
}

void __cdecl sub_BC88E0(void*, const char*);

// FUNCTION: ROBLOXSTUDIO 0x00c18b80
void __cdecl PolyPolyContact::accumulate(int value)
{
	unsigned char* obj = *(unsigned char**)this;
	int count = *(int*)((char*)this + 0x24);
	int v = value;
	int limit = obj[0x4b];
	int newCount = count + v;

	if (newCount > limit)
	{
		if (newCount >= 250)
		{
			sub_BC88E0(*(void**)((char*)this + 0x0C), "function or expression too complex");
		}

		(*(unsigned char**)this)[0x4b] = (unsigned char)newCount;
	}

	*(int*)((char*)this + 0x24) += v;
}

// FUNCTION: ROBLOXSTUDIO 0x00c18d70
void __cdecl PolyPolyContact::compute(void* param)
{
	int* feature = (int*)param;
	int type = feature[0];

	if (type == 13)
	{
		int index = feature[2];
		feature[0] = 12;

		void* obj = *(void**)this;
		unsigned int* data = *(unsigned int**)((char*)obj + 0x0C);
		feature[2] = (data[index] >> 6) & 0xFFu;
	}
	else if (type == 14)
	{
		int index = feature[2];
		void* obj = *(void**)this;
		unsigned int* data = *(unsigned int**)((char*)obj + 0x0C);

		data[index] = (data[index] & 0x007FFFFFu) | 0x01000000u;
		feature[0] = 11;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
