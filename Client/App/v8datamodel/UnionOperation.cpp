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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
