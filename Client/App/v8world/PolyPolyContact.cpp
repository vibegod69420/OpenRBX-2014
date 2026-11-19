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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
