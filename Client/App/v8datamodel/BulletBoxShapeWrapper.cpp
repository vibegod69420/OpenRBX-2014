#include "v8datamodel/BulletBoxShapeWrapper.h"

#include "decomp.h"

namespace RBX {

struct BulletBoxShapePoolToken
{
	char pad[0x0C];
	void* key;
};

void BulletBoxShapePoolTokenRelease(BulletBoxShapePoolToken* token, void* key);

// FUNCTION: ROBLOXSTUDIO 0x00b9b700
void BulletBoxShapeWrapper::dispose()
{
	BulletBoxShapePoolToken* px = *(BulletBoxShapePoolToken**)((char*)this + 0x0C);
	if (px)
	{
		BulletBoxShapePoolTokenRelease(px, px->key);
		::operator delete(px);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
