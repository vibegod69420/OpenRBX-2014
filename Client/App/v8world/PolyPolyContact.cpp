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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
