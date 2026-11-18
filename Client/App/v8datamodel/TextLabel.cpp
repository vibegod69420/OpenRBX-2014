#include "v8datamodel/TextLabel.h"

#include "decomp.h"

namespace RBX {

class GuiObject
{
public:
	void update();
	void raisePropertyChanged(const char* propertyName);
};

// FUNCTION: ROBLOXSTUDIO 0x0087b6a0
void TextLabel::update()
{
	reinterpret_cast<GuiObject*>(this)->GuiObject::update();
	reinterpret_cast<GuiObject*>(this)->GuiObject::raisePropertyChanged("TextBounds");
	reinterpret_cast<GuiObject*>(this)->GuiObject::raisePropertyChanged("TextFits");
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
