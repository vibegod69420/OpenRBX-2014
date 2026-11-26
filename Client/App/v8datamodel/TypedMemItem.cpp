#include "v8datamodel/TypedMemItem.h"

#include "decomp.h"

namespace RBX {
namespace Stats {

// FUNCTION: ROBLOXSTUDIO 0x0092db50
void sub_92c700(int, int, int*);

TypedMemItem* __cdecl TypedMemItem::init(int a, int b, int c, int d)
{
	sub_92c700(a, b, &c);
	this->_vtable_or_head = c;
	*((int*)this + 1) = d;
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Stats
} // namespace RBX
