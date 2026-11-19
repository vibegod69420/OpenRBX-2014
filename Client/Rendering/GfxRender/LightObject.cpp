#include "LightObject.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

namespace {

struct LightObjectSpatialHash
{
	void add(LightObject* light);
};

struct LightObjectLighting
{
	unsigned char pad[0x198];
	LightObjectSpatialHash* spatialHash;
};

struct LightObjectView
{
	unsigned char pad0[0x38];
	LightObjectLighting* lighting;
	unsigned char pad1[0xCC - 0x3C];
	bool spatialDirty;
};

} // namespace

// FUNCTION: ROBLOXSTUDIO 0x006556c0
void LightObject::markDirty()
{
	LightObjectView* view = reinterpret_cast<LightObjectView*>(this);
	if (!view->spatialDirty)
	{
		view->spatialDirty = true;
		view->lighting->spatialHash->add(this);
	}
}

struct LightKey;

struct LightKeyProvider
{
	LightKey* getKey();
};

struct LightKeyList
{
	bool contains(LightKey* key);
};

// FUNCTION: ROBLOXSTUDIO 0x00656940
void* LightObject::getSpatialOwner()
{
	LightKeyList* list = *(LightKeyList**)((char*)this + 0x0C);
	LightKey* key = reinterpret_cast<LightKeyProvider*>(this)->getKey();

	if (list->contains(key))
		return (char*)this - 0x1C;

	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
