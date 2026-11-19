#include "v8datamodel/Context.h"

#include "decomp.h"

namespace RBX {
namespace Security {

struct ContextHelper
{
	void unlink(void* out, void* headValue, void* head);
};

// FUNCTION: ROBLOXSTUDIO 0x006be4a0
void Context::pop()
{
	void* oldIdentity;
	void* current = reinterpret_cast<void*>(this->_vtable_or_head);

	reinterpret_cast<ContextHelper*>(this)->unlink(&oldIdentity, *reinterpret_cast<void**>(current), current);
	::operator delete(reinterpret_cast<void*>(this->_vtable_or_head));
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Security
} // namespace RBX
