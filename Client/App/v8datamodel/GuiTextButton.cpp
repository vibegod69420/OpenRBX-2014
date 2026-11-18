#include "v8datamodel/GuiTextButton.h"

#include "decomp.h"

namespace RBX {

class GuiObject
{
public:
	void onDescendentRemoving();
	void raisePropertyChanged(const void*);
};

// FUNCTION: ROBLOXSTUDIO 0x0087dca0
void GuiTextButton::onDescendentRemoving()
{
	GuiObject* base = reinterpret_cast<GuiObject*>(this);
	base->GuiObject::onDescendentRemoving();
	base->raisePropertyChanged(reinterpret_cast<const void*>(0x012FAA70));
	base->raisePropertyChanged(reinterpret_cast<const void*>(0x012FAA9C));
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
