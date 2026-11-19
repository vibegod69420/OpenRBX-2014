#include "v8datamodel/SelectionPartLasso.h"

#include "decomp.h"

namespace RBX {

class SelectionLasso
{
public:
	void ctor(const char* name);
};

// FUNCTION: ROBLOXSTUDIO 0x00ac9500
SelectionPartLasso::SelectionPartLasso()
{
	reinterpret_cast<SelectionLasso*>(this)->ctor("SelectionPartLasso");

	reinterpret_cast<void**>(this)[0] = (void*)0x00EBB8FC;
	reinterpret_cast<void**>(this)[1] = (void*)0x00EBB988;
	reinterpret_cast<void**>(this)[6] = (void*)0x00EBB990;  // 0x18
	reinterpret_cast<void**>(this)[7] = (void*)0x00EBB99C;  // 0x1C
	reinterpret_cast<void**>(this)[25] = (void*)0x00EBB9AC; // 0x64
	reinterpret_cast<void**>(this)[26] = (void*)0x00EBB9B4; // 0x68

	reinterpret_cast<int*>(this)[0x25] = 0; // 0x94
	reinterpret_cast<int*>(this)[0x26] = 0; // 0x98
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
