#include "v8datamodel/VerbContainer.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00960a40
class Verb
{
public:
	void setVerbContainer(VerbContainer* container);
};

void VerbContainer::setVerbContainer()
{
	Verb* verb = reinterpret_cast<Verb**>(this)[2];
	if (verb)
		verb->setVerbContainer(this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
