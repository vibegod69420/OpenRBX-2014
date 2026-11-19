#include "v8datamodel/Animator.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00ad18c0
__declspec(dllimport) void animatorPreClear();
void animatorDeallocate(void* ptr);

struct AnimatorDestroyHelper
{
	void destroyRange(void* first, void* last);
};

void Animator::clear()
{
	void** begin = reinterpret_cast<void**>(this);
	if (*begin != 0)
	{
		animatorPreClear();
		reinterpret_cast<AnimatorDestroyHelper*>(this)->destroyRange(begin[0], begin[1]);
		animatorDeallocate(begin[0]);
		begin[0] = 0;
		begin[1] = 0;
		begin[2] = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
