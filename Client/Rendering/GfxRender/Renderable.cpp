#include "Renderable.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x00674450
typedef void (__thiscall *SlotUpdateFunc)(void*);
extern SlotUpdateFunc g_slotUpdateFunc_E10268;

void Renderable::updateSlots()
{
	char* slot = reinterpret_cast<char*>(this);
	int count = 8;

	do
	{
		g_slotUpdateFunc_E10268(slot);
		*reinterpret_cast<int*>(slot + 4) = *reinterpret_cast<int*>(slot);
		slot += 12;
		--count;
	}
	while (count != 0);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
