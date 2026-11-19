#include "v8kernel/BodyPosition.h"

#include "decomp.h"

namespace RBX {

class KernelLink {
public:
	virtual void unk0();
	virtual void unk4();
	virtual void unk8();
	virtual void update(void* body, bool* awake);
};

// FUNCTION: ROBLOXSTUDIO 0x00a980e0
void BodyPosition::putInKernel()
{
	bool awake = true;
	(*(KernelLink**)0x1309f00)->update(this ? reinterpret_cast<char*>(this) + 0x1c : 0, &awake);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
