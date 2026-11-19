#include "ViewBase.h"

#include "decomp.h"

namespace RBX {

class ViewBaseImpl
{
public:
	virtual void vf0();
	virtual void vf1();
	virtual void vf2();
	virtual void vf3();
	virtual void vf4();
	virtual void vf5();
	virtual void vf6();
	virtual void vf7();
	virtual void vf8();
	virtual void vf9();
	virtual void vf10();
	virtual void vf11();
	virtual void vf12();
	virtual void vf13();
	virtual void vf14();
	virtual void vf15();
	virtual void vf16();
	virtual void vf17();
	virtual void vf18();
	virtual void vf19();
	virtual void vf20();
	virtual void vf21();
	virtual void vf22();
	virtual void vf23();
	virtual void vf24();
	virtual void vf25();
	virtual void vf26(int);
};

// FUNCTION: ROBLOXSTUDIO 0x00545f00
void ViewBase::dispose()
{
	ViewBaseImpl* impl = *reinterpret_cast<ViewBaseImpl**>(reinterpret_cast<char*>(this) + 0x0C);
	if (impl)
		impl->vf26(1);
}

// FUNCTION: ROBLOXSTUDIO 0x0076f0b0
int ViewBase::getUnknown()
{
    int* p = *reinterpret_cast<int**>(reinterpret_cast<char*>(this) + 4);
    int value = p[2];
    return value ? value : 2;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
