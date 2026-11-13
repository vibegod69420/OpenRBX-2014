// Deleting destructors that republish two vtable slots, release an intrusive
// reference member at +0x10 through its fourth virtual slot, then call the
// imported base destructor. The read/write barrier keeps MSVC from hoisting
// the reference load above the vtable stores; it emits no instructions.

#include <intrin.h>

extern "C" __declspec(dllimport) void __cdecl deleteObject(void*);
extern "C" void freeObject(void*);
struct RefCounter { virtual void a(); virtual void b(); virtual void c(); virtual void d(); virtual bool dispose(); };
struct __declspec(dllimport) BaseOne { virtual ~BaseOne(); void* p4; void* p8; };
struct __declspec(dllimport) BaseTwo { virtual ~BaseTwo(); };

extern "C" int vtableMarker0_00410430;
extern "C" int vtableMarker1_00410430;
struct DeletingDtorRef_00410430 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x00410430
void* DeletingDtorRef_00410430::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_00410430;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_00410430;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_004120b0;
extern "C" int vtableMarker1_004120b0;
struct DeletingDtorRef_004120b0 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x004120b0
void* DeletingDtorRef_004120b0::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_004120b0;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_004120b0;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_00421c80;
extern "C" int vtableMarker1_00421c80;
struct DeletingDtorRef_00421c80 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x00421c80
void* DeletingDtorRef_00421c80::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_00421c80;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_00421c80;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_004b63b0;
extern "C" int vtableMarker1_004b63b0;
struct DeletingDtorRef_004b63b0 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x004b63b0
void* DeletingDtorRef_004b63b0::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_004b63b0;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_004b63b0;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_0067d4e0;
extern "C" int vtableMarker1_0067d4e0;
struct DeletingDtorRef_0067d4e0 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x0067d4e0
void* DeletingDtorRef_0067d4e0::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_0067d4e0;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_0067d4e0;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0067d530;
extern "C" int vtableMarker1_0067d530;
struct DeletingDtorRef_0067d530 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x0067d530
void* DeletingDtorRef_0067d530::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_0067d530;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_0067d530;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0067d580;
extern "C" int vtableMarker1_0067d580;
struct DeletingDtorRef_0067d580 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x0067d580
void* DeletingDtorRef_0067d580::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_0067d580;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_0067d580;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0067d5d0;
extern "C" int vtableMarker1_0067d5d0;
struct DeletingDtorRef_0067d5d0 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x0067d5d0
void* DeletingDtorRef_0067d5d0::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_0067d5d0;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_0067d5d0;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0067d620;
extern "C" int vtableMarker1_0067d620;
struct DeletingDtorRef_0067d620 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x0067d620
void* DeletingDtorRef_0067d620::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_0067d620;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_0067d620;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00953330;
extern "C" int vtableMarker1_00953330;
struct DeletingDtorRef_00953330 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x00953330
void* DeletingDtorRef_00953330::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_00953330;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_00953330;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009533d0;
extern "C" int vtableMarker1_009533d0;
struct DeletingDtorRef_009533d0 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x009533d0
void* DeletingDtorRef_009533d0::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_009533d0;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_009533d0;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00953420;
extern "C" int vtableMarker1_00953420;
struct DeletingDtorRef_00953420 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x00953420
void* DeletingDtorRef_00953420::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_00953420;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_00953420;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009534c0;
extern "C" int vtableMarker1_009534c0;
struct DeletingDtorRef_009534c0 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x009534c0
void* DeletingDtorRef_009534c0::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_009534c0;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_009534c0;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00953510;
extern "C" int vtableMarker1_00953510;
struct DeletingDtorRef_00953510 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x00953510
void* DeletingDtorRef_00953510::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_00953510;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_00953510;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00953560;
extern "C" int vtableMarker1_00953560;
struct DeletingDtorRef_00953560 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x00953560
void* DeletingDtorRef_00953560::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_00953560;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_00953560;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009535b0;
extern "C" int vtableMarker1_009535b0;
struct DeletingDtorRef_009535b0 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x009535b0
void* DeletingDtorRef_009535b0::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_009535b0;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_009535b0;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00953600;
extern "C" int vtableMarker1_00953600;
struct DeletingDtorRef_00953600 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x00953600
void* DeletingDtorRef_00953600::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_00953600;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_00953600;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00953650;
extern "C" int vtableMarker1_00953650;
struct DeletingDtorRef_00953650 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x00953650
void* DeletingDtorRef_00953650::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_00953650;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_00953650;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009536a0;
extern "C" int vtableMarker1_009536a0;
struct DeletingDtorRef_009536a0 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x009536a0
void* DeletingDtorRef_009536a0::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_009536a0;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_009536a0;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009536f0;
extern "C" int vtableMarker1_009536f0;
struct DeletingDtorRef_009536f0 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x009536f0
void* DeletingDtorRef_009536f0::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_009536f0;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_009536f0;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a2ce50;
extern "C" int vtableMarker1_00a2ce50;
struct DeletingDtorRef_00a2ce50 : BaseOne, BaseTwo {
	RefCounter* ref;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x00a2ce50
void* DeletingDtorRef_00a2ce50::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_00a2ce50;
	*(const void**)((char*)this + 0xc) = &vtableMarker1_00a2ce50;
	_ReadWriteBarrier();
	if (this->ref && this->ref->dispose())
		this->ref = 0;
	this->BaseOne::~BaseOne();
	if (flags & 1)
		freeObject(this);
	return this;
}
