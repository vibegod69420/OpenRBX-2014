#include "v8world/Assembly.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b5b3d0
void* Assembly::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00b5c020

namespace RBX {

class Assembly {
public:
    void onDestroy();
    // AUTO-GENERATED METHODS
};

void Assembly::onDestroy() {
    *(reinterpret_cast<char*>(this + 0x74)) = 1;
}

} // namespace RBX

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
