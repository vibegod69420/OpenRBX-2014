#include "v8datamodel/AdornBillboarder.h"

#include "decomp.h"

namespace RBX {

class AdornBillboarderCallback
{
public:
	void callback(AdornBillboarder* billboarder);
};

// FUNCTION: ROBLOXSTUDIO 0x00d09250
void AdornBillboarder::adorn()
{
	AdornBillboarderCallback* callbackObj = *(AdornBillboarderCallback**)((char*)this + 0x10);
	if (callbackObj)
		callbackObj->callback(this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
