#include "v8datamodel/SelectionBox.h"

#include "decomp.h"

namespace RBX {

class GuiBase3d
{
public:
    void construct(const char* name);
};

// FUNCTION: ROBLOXSTUDIO 0x00aa2df0
SelectionBox::SelectionBox()
{
    reinterpret_cast<GuiBase3d*>(this)->construct("SelectionBox");

    *(void**)this = (void*)0x00EB6CD4;
    *(void**)((char*)this + 4) = (void*)0x00EB6D5C;
    *(void**)((char*)this + 0x18) = (void*)0x00EB6D64;
    *(void**)((char*)this + 0x1C) = (void*)0x00EB6D70;
    *(void**)((char*)this + 0x64) = (void*)0x00EB6D80;
    *(void**)((char*)this + 0x68) = (void*)0x00EB6D88;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
