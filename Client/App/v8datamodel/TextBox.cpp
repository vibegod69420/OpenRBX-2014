#include "v8datamodel/TextBox.h"

#include "decomp.h"

namespace RBX {

class GuiObject
{
public:
	void updateLayout();
	void raisePropertyChanged(const void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00880920
void TextBox::updateLayout()
{
	((GuiObject*)this)->updateLayout();
	((GuiObject*)this)->raisePropertyChanged((const void*)0x012FADF4);
	((GuiObject*)this)->raisePropertyChanged((const void*)0x012FAE20);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
