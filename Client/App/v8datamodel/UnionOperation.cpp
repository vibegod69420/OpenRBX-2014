#include "v8datamodel/UnionOperation.h"

#include "decomp.h"

namespace RBX {

namespace {

struct GridSizeVec
{
    float x;
    float y;
    float z;
};

struct PartOperationVSlot35
{
    virtual void _vf0();  virtual void _vf1();  virtual void _vf2();  virtual void _vf3();
    virtual void _vf4();  virtual void _vf5();  virtual void _vf6();  virtual void _vf7();
    virtual void _vf8();  virtual void _vf9();  virtual void _vf10(); virtual void _vf11();
    virtual void _vf12(); virtual void _vf13(); virtual void _vf14(); virtual void _vf15();
    virtual void _vf16(); virtual void _vf17(); virtual void _vf18(); virtual void _vf19();
    virtual void _vf20(); virtual void _vf21(); virtual void _vf22(); virtual void _vf23();
    virtual void _vf24(); virtual void _vf25(); virtual void _vf26(); virtual void _vf27();
    virtual void _vf28(); virtual void _vf29(); virtual void _vf30(); virtual void _vf31();
    virtual void _vf32(); virtual void _vf33(); virtual void _vf34();
    virtual const GridSizeVec& getGridSize() const; // slot 35 (0x8C)
};

} // namespace

// FUNCTION: ROBLOXSTUDIO 0x008ac860
float UnionOperation::getGridSizeX() const
{
    return reinterpret_cast<const PartOperationVSlot35*>(this)->getGridSize().x;
}

// FUNCTION: ROBLOXSTUDIO 0x008ac870
float UnionOperation::getGridSizeY() const
{
	return reinterpret_cast<const PartOperationVSlot35*>(this)->getGridSize().y;
}

// FUNCTION: ROBLOXSTUDIO 0x008aca00
int UnionOperation::hasChildData() const
{
	return *(const int*)((const char*)this + 0x170) != 0;
}

namespace {

struct UnionOpPrimitiveOwner
{
	char* getPrimitiveData(); // 0x0099c980
};

} // namespace

// FUNCTION: ROBLOXSTUDIO 0x00893340
char* UnionOperation::getPrimitiveDataOffset24() const
{
	return (*(UnionOpPrimitiveOwner**)((const char*)this + 0xE0))->getPrimitiveData() + 0x24;
}

namespace {

struct UnionOperationSlot74Vf12
{
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
	virtual void vf12(void* arg);
};

} // namespace

// FUNCTION: ROBLOXSTUDIO 0x00894960
void UnionOperation::sub_894960()
{
	UnionOperationSlot74Vf12* obj = *(UnionOperationSlot74Vf12**)((char*)this + 0x74);
	if (obj)
		obj->vf12((char*)this - 0x70);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
