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

namespace {

struct UnionOpSlot59Result
{
	void sub_995CD0(void* arg); // 0x00995cd0
};

UnionOpSlot59Result* sub_968F00(void* arg); // 0x00968f00

} // namespace

// FUNCTION: ROBLOXSTUDIO 0x008940e0
void UnionOperation::sub_8940E0()
{
	UnionOpSlot59Result* result = sub_968F00(this);
	if (result)
		result->sub_995CD0(*(void**)((char*)this + 0xE0));
}

// FUNCTION: ROBLOXSTUDIO 0x00a9c530
int UnionOperation::getField170() const
{
	return field_0170;
}

// FUNCTION: ROBLOXSTUDIO 0x008ac630
int UnionOperation::getConst512000() const
{
	return 512000;
}

// FUNCTION: ROBLOXSTUDIO 0x008ac640
int UnionOperation::getConst2500() const
{
	return 2500;
}

// FUNCTION: ROBLOXSTUDIO 0x008930f0
char* UnionOperation::getPrimitiveDataOffset3C() const
{
	return (*(UnionOpPrimitiveOwner**)((const char*)this + 0xE0))->getPrimitiveData() + 0x3C;
}

// FUNCTION: ROBLOXSTUDIO 0x008940a0
bool UnionOperation::sub_8940A0() const
{
	char* data = *(char**)((char*)this + 0xE0);
	if (*(int*)(data + 0x130) != 4)
		goto fail;
	if (*(int*)(data + 0x134) != 0)
		goto fail;
	if (*(int*)(data + 0x128) != 0)
		goto fail;
	if (*(int*)(data + 0x12C) != 0)
		goto fail;
	if (*(int*)(data + 0x120) != 0)
		goto fail;
	return true;

fail:
	return false;
}

#if defined(_MSC_VER)
extern "C" long _InterlockedExchangeAdd(long volatile* Addend, long Value);
extern "C" unsigned char _interlockedbittestandset(long volatile* a, long b);
#pragma intrinsic(_InterlockedExchangeAdd)
#pragma intrinsic(_interlockedbittestandset)
#endif

namespace {

struct UnionOpPoolAlloc
{
	void* head;
	void* sub_48AF30();
};

struct UnionOpPool
{
	volatile long state;
	void* field4;
	UnionOpPoolAlloc alloc;

	void sub_40ED30();
	void* sub_40FB10();
};

UnionOpPool* sub_55A4D0();

extern "C" __declspec(dllimport) int __stdcall SetEvent(void* hEvent);

} // namespace

// FUNCTION: ROBLOXSTUDIO 0x008942a0
void* UnionOperation::sub_8942A0()
{
	UnionOpPool* pool = sub_55A4D0();
	pool->sub_40ED30();

	void* node = pool->alloc.head;
	if (node)
		pool->alloc.head = *(void**)node;
	else
		node = pool->alloc.sub_48AF30();

	long oldState = _InterlockedExchangeAdd(&pool->state, (-2147483647 - 1));
	if ((oldState & 0x40000000) == 0 && oldState > (-2147483647 - 1))
	{
		if (_interlockedbittestandset(&pool->state, 30) == 0)
			SetEvent(pool->sub_40FB10());
	}

	return node;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
