#include "script/Info.h"

#include "decomp.h"

namespace RBX {
namespace ScriptService {

// FUNCTION: ROBLOXSTUDIO 0x00a46260
void Info::destroySubPtr0C()
{
	Info* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00a45db0
void Info::destroyInstance(Info* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace ScriptService
} // namespace RBX
