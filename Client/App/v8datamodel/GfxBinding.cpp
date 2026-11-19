#include "v8datamodel/GfxBinding.h"

#include "decomp.h"

namespace RBX {

typedef void (__cdecl *GfxBindingPFN_void)();
extern GfxBindingPFN_void g_gfxBindingIndirect_E10268;

void __cdecl GfxBindingFree_Elem_4226B0(void* p);
void __cdecl GfxBindingFree_Buf_CF6522(void* p);

// FUNCTION: ROBLOXSTUDIO 0x00619df0
void GfxBinding::clear()
{
	void** begin = (void**)_vtable_or_head;
	if (begin == 0)
		return;

	g_gfxBindingIndirect_E10268();

	void** end = (void**)((void**)this)[1];
	void** cur = (void**)((void**)this)[0];

	if (cur != end)
	{
		do
		{
			void* p = *cur;
			if (p != 0)
				GfxBindingFree_Elem_4226B0((char*)p + 5);

			++cur;
		} while (cur != end);
	}

	GfxBindingFree_Buf_CF6522(((void**)this)[0]);

	((void**)this)[0] = 0;
	((void**)this)[1] = 0;
	((void**)this)[2] = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
