#include "v8datamodel/BoundVerb.h"

#include "decomp.h"

namespace RBX {

struct VerbEnabledPredicate
{
	void* state;
	bool evaluate(void* context);
};

// FUNCTION: ROBLOXSTUDIO 0x004d1e00
bool BoundVerb::isEnabled()
{
	if (((VerbEnabledPredicate*)((char*)this + 0x30))->state == 0)
		return true;

	return ((VerbEnabledPredicate*)((char*)this + 0x30))->evaluate(*(void**)((char*)this + 0x8));
}

// FUNCTION: ROBLOXSTUDIO 0x004d1e20
bool BoundVerb::isChecked()
{
	VerbEnabledPredicate* predicate = (VerbEnabledPredicate*)((char*)this + 0x50);
	if (predicate->state == 0)
		return false;

	return predicate->evaluate(*(void**)((char*)this + 0x8));
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
