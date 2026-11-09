#ifndef CLIENT_RENDERING_GFXRENDER_RENDERVIEW_H
#define CLIENT_RENDERING_GFXRENDER_RENDERVIEW_H

#include "decomp.h"

namespace RBX {
namespace Graphics {

struct Sub_RenderView_0c_01c8 { char pad[456]; int val; };
struct Sub_RenderView_0c_01b0 { char pad[432]; int val; };
struct Sub_RenderView_008c_0ba0 { char pad[2976]; int val; };
// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e3ba14
class RenderView
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_008c[0x8c]; int field_008c; };
		struct { char _pad_sub_000c_01c8[0xc]; Sub_RenderView_0c_01c8* sub_000c_01c8; };
		struct { char _pad_sub_000c_01b0[0xc]; Sub_RenderView_0c_01b0* sub_000c_01b0; };
		struct { char _pad_sub_008c_0ba0[0x8c]; Sub_RenderView_008c_0ba0* sub_008c_0ba0; };
		struct { char _pad_flag_009d[0x9d]; bool flag_009d; };
		// AUTO-GENERATED FIELDS
	};

	int getField8C() const;
	int getSubField0C_1C8() const;
	int getSubField0C_1B0() const;
	int getSubField8C_BA0() const;
	void setFlag9D(bool value);
	void onDispatchWithFlag(int arg, int flag);
	void dispatchWithFlag1(int arg);
	void onDestroy();
	void* scalarDeletingDestructor(unsigned int flags);
	// AUTO-GENERATED METHODS
};

} // namespace Graphics
} // namespace RBX

#endif // CLIENT_RENDERING_GFXRENDER_RENDERVIEW_H
