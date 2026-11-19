#include "gui/Widget.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b28e20
struct Widget_vbase_0xb28d60
{
	void construct();
};

extern char Widget_vtbl_0xec6cbc;
extern char Widget_vtbl_0xec6d58;
extern char Widget_vtbl_0xec6d60;
extern char Widget_vtbl_0xec6d6c;
extern char Widget_vtbl_0xec6d7c;

Widget::Widget()
{
	reinterpret_cast<Widget_vbase_0xb28d60*>(this)->construct();

	*reinterpret_cast<char**>(this) = &Widget_vtbl_0xec6cbc;
	*reinterpret_cast<char**>(reinterpret_cast<char*>(this) + 4) = &Widget_vtbl_0xec6d58;
	*reinterpret_cast<char**>(reinterpret_cast<char*>(this) + 0x18) = &Widget_vtbl_0xec6d60;
	*reinterpret_cast<char**>(reinterpret_cast<char*>(this) + 0x1C) = &Widget_vtbl_0xec6d6c;
	*reinterpret_cast<char**>(reinterpret_cast<char*>(this) + 0x64) = &Widget_vtbl_0xec6d7c;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x94) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
