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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
