#include "v8datamodel/SoundId.h"

#include "decomp.h"

namespace RBX {
namespace Soundscape {

// FUNCTION: ROBLOXSTUDIO 0x009977c0
int SoundId::getFieldB8() const
{
	return field_00b8;
}

// FUNCTION: ROBLOXSTUDIO 0x00992eb0
void SoundId::resetPtr(SoundId* newPtr)
{
	SoundId* old = ptr_0000;
	ptr_0000 = newPtr;
	if (old) {
		old->onDestroy();
		rbx_free_mem(old);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Soundscape
} // namespace RBX
