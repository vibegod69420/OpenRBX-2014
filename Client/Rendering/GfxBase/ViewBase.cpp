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

// FUNCTION: ROBLOXSTUDIO 0x0076f0d0
float ViewBase::getCurrentEntryFloat()
{
	const char* base = reinterpret_cast<const char*>(this);
	unsigned int index = *reinterpret_cast<const unsigned int*>(base + 0x28);
	const char* arrayBase = *reinterpret_cast<const char* const*>(base + 0x148);
	return *reinterpret_cast<const float*>(arrayBase + (index << 6) + 0x20);
}

// FUNCTION: ROBLOXSTUDIO 0x0076f0f0
int ViewBase::getCurrentEntryInt()
{
	const char* base = reinterpret_cast<const char*>(this);
	unsigned int index = *reinterpret_cast<const unsigned int*>(base + 0x28);
	const char* arrayBase = *reinterpret_cast<const char* const*>(base + 0x148);
	return *reinterpret_cast<const int*>(arrayBase + (index << 6) + 0x28);
}

// FUNCTION: ROBLOXSTUDIO 0x0076f110
bool ViewBase::getCurrentEntryByte()
{
	const char* base = reinterpret_cast<const char*>(this);
	unsigned int index = *reinterpret_cast<const unsigned int*>(base + 0x28);
	const char* arrayBase = *reinterpret_cast<const char* const*>(base + 0x148);
	return *reinterpret_cast<const bool*>(arrayBase + (index << 6) + 0x24);
}

// FUNCTION: ROBLOXSTUDIO 0x0076f480
int ViewBase::getCurrentEntryInt2()
{
    const char* base = reinterpret_cast<const char*>(this);
    int idx = *reinterpret_cast<const int*>(base + 0x28);
    const char* arrBase = *reinterpret_cast<const char* const*>(base + 0x148);
    return *reinterpret_cast<const int*>(arrBase + (idx << 6) + 0x14);
}

// FUNCTION: ROBLOXSTUDIO 0x0076ef40
void ViewBase::updateViewData()
{
	char* base = reinterpret_cast<char*>(this);
	char* info = *reinterpret_cast<char**>(base + 4);
	char* entries = *reinterpret_cast<char**>(base + 0x148);

	int value;
	if (*reinterpret_cast<int*>(info + 0xC) != 2)
	{
		unsigned int index = *reinterpret_cast<unsigned int*>(base + 0x28);
		value = *reinterpret_cast<int*>(entries + (index << 6) + 0xC);
	}
	else
	{
		value = *reinterpret_cast<int*>(entries + 0xC);
	}

	*reinterpret_cast<int*>(base + 0x140) = value;
	*reinterpret_cast<unsigned char*>(base + 0x139) = 1;

	float f = *reinterpret_cast<float*>(entries + 8);
	*reinterpret_cast<float*>(base + 0x98) = f * f;

	*reinterpret_cast<int*>(base + 0x8C) = *reinterpret_cast<int*>(0x011DDD08);
}

// FUNCTION: ROBLOXSTUDIO 0x0076f3f0
int ViewBase::getCurrentEntryInt3()
{
	const char* base = reinterpret_cast<const char*>(this);
	unsigned int index = *reinterpret_cast<const unsigned int*>(base + 0x28);
	const char* arrayBase = *reinterpret_cast<const char* const*>(base + 0x148);
	return *reinterpret_cast<const int*>(arrayBase + (index << 6) + 0x2C);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
