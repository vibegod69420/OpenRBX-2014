// Deleting destructors whose class has one or more republished vtable slots.
// Store addresses and call targets are wildcarded by the comparator; marker
// symbols stand in for the vtable pointers and the destructor chain.

extern "C" void freeObject(void*);
extern "C" void baseDtorChain();

extern "C" int vtableMarker_0067d3f0;
struct DeletingDtorOneVptr_0067d3f0 { virtual ~DeletingDtorOneVptr_0067d3f0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0067d3f0
void* DeletingDtorOneVptr_0067d3f0::destroy(int flags)
{
	this->DeletingDtorOneVptr_0067d3f0::~DeletingDtorOneVptr_0067d3f0();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_0067d3f0;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_0067d420;
struct DeletingDtorOneVptr_0067d420 { virtual ~DeletingDtorOneVptr_0067d420(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0067d420
void* DeletingDtorOneVptr_0067d420::destroy(int flags)
{
	this->DeletingDtorOneVptr_0067d420::~DeletingDtorOneVptr_0067d420();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_0067d420;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_0067d450;
struct DeletingDtorOneVptr_0067d450 { virtual ~DeletingDtorOneVptr_0067d450(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0067d450
void* DeletingDtorOneVptr_0067d450::destroy(int flags)
{
	this->DeletingDtorOneVptr_0067d450::~DeletingDtorOneVptr_0067d450();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_0067d450;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_0067d480;
struct DeletingDtorOneVptr_0067d480 { virtual ~DeletingDtorOneVptr_0067d480(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0067d480
void* DeletingDtorOneVptr_0067d480::destroy(int flags)
{
	this->DeletingDtorOneVptr_0067d480::~DeletingDtorOneVptr_0067d480();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_0067d480;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_0067d4b0;
struct DeletingDtorOneVptr_0067d4b0 { virtual ~DeletingDtorOneVptr_0067d4b0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0067d4b0
void* DeletingDtorOneVptr_0067d4b0::destroy(int flags)
{
	this->DeletingDtorOneVptr_0067d4b0::~DeletingDtorOneVptr_0067d4b0();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_0067d4b0;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_00952f70;
struct DeletingDtorOneVptr_00952f70 { virtual ~DeletingDtorOneVptr_00952f70(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00952f70
void* DeletingDtorOneVptr_00952f70::destroy(int flags)
{
	this->DeletingDtorOneVptr_00952f70::~DeletingDtorOneVptr_00952f70();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_00952f70;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_00952fa0;
struct DeletingDtorOneVptr_00952fa0 { virtual ~DeletingDtorOneVptr_00952fa0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00952fa0
void* DeletingDtorOneVptr_00952fa0::destroy(int flags)
{
	this->DeletingDtorOneVptr_00952fa0::~DeletingDtorOneVptr_00952fa0();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_00952fa0;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_00952fd0;
struct DeletingDtorOneVptr_00952fd0 { virtual ~DeletingDtorOneVptr_00952fd0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00952fd0
void* DeletingDtorOneVptr_00952fd0::destroy(int flags)
{
	this->DeletingDtorOneVptr_00952fd0::~DeletingDtorOneVptr_00952fd0();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_00952fd0;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_00953000;
struct DeletingDtorOneVptr_00953000 { virtual ~DeletingDtorOneVptr_00953000(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00953000
void* DeletingDtorOneVptr_00953000::destroy(int flags)
{
	this->DeletingDtorOneVptr_00953000::~DeletingDtorOneVptr_00953000();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_00953000;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_00953030;
struct DeletingDtorOneVptr_00953030 { virtual ~DeletingDtorOneVptr_00953030(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00953030
void* DeletingDtorOneVptr_00953030::destroy(int flags)
{
	this->DeletingDtorOneVptr_00953030::~DeletingDtorOneVptr_00953030();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_00953030;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_00953090;
struct DeletingDtorOneVptr_00953090 { virtual ~DeletingDtorOneVptr_00953090(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00953090
void* DeletingDtorOneVptr_00953090::destroy(int flags)
{
	this->DeletingDtorOneVptr_00953090::~DeletingDtorOneVptr_00953090();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_00953090;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_009530c0;
struct DeletingDtorOneVptr_009530c0 { virtual ~DeletingDtorOneVptr_009530c0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009530c0
void* DeletingDtorOneVptr_009530c0::destroy(int flags)
{
	this->DeletingDtorOneVptr_009530c0::~DeletingDtorOneVptr_009530c0();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_009530c0;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_009530f0;
struct DeletingDtorOneVptr_009530f0 { virtual ~DeletingDtorOneVptr_009530f0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009530f0
void* DeletingDtorOneVptr_009530f0::destroy(int flags)
{
	this->DeletingDtorOneVptr_009530f0::~DeletingDtorOneVptr_009530f0();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_009530f0;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_00953120;
struct DeletingDtorOneVptr_00953120 { virtual ~DeletingDtorOneVptr_00953120(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00953120
void* DeletingDtorOneVptr_00953120::destroy(int flags)
{
	this->DeletingDtorOneVptr_00953120::~DeletingDtorOneVptr_00953120();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_00953120;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_00953150;
struct DeletingDtorOneVptr_00953150 { virtual ~DeletingDtorOneVptr_00953150(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00953150
void* DeletingDtorOneVptr_00953150::destroy(int flags)
{
	this->DeletingDtorOneVptr_00953150::~DeletingDtorOneVptr_00953150();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_00953150;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_00953180;
struct DeletingDtorOneVptr_00953180 { virtual ~DeletingDtorOneVptr_00953180(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00953180
void* DeletingDtorOneVptr_00953180::destroy(int flags)
{
	this->DeletingDtorOneVptr_00953180::~DeletingDtorOneVptr_00953180();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_00953180;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_009531b0;
struct DeletingDtorOneVptr_009531b0 { virtual ~DeletingDtorOneVptr_009531b0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009531b0
void* DeletingDtorOneVptr_009531b0::destroy(int flags)
{
	this->DeletingDtorOneVptr_009531b0::~DeletingDtorOneVptr_009531b0();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_009531b0;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_009531e0;
struct DeletingDtorOneVptr_009531e0 { virtual ~DeletingDtorOneVptr_009531e0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009531e0
void* DeletingDtorOneVptr_009531e0::destroy(int flags)
{
	this->DeletingDtorOneVptr_009531e0::~DeletingDtorOneVptr_009531e0();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_009531e0;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_009532b0;
struct DeletingDtorOneVptr_009532b0 { virtual ~DeletingDtorOneVptr_009532b0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009532b0
void* DeletingDtorOneVptr_009532b0::destroy(int flags)
{
	this->DeletingDtorOneVptr_009532b0::~DeletingDtorOneVptr_009532b0();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_009532b0;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker_00a2cd80;
struct DeletingDtorOneVptr_00a2cd80 { virtual ~DeletingDtorOneVptr_00a2cd80(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a2cd80
void* DeletingDtorOneVptr_00a2cd80::destroy(int flags)
{
	this->DeletingDtorOneVptr_00a2cd80::~DeletingDtorOneVptr_00a2cd80();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_00a2cd80;
	if (del)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00626880;
extern "C" int vtableMarker1_00626880;
extern "C" int vtableMarker2_00626880;
extern "C" int vtableMarker3_00626880;
struct DeletingDtorMultiVptr_00626880 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00626880
void* DeletingDtorMultiVptr_00626880::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00626880;
	*(const void**)((char*)this + 4) = &vtableMarker1_00626880;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00626880;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00626880;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_006268c0;
extern "C" int vtableMarker1_006268c0;
extern "C" int vtableMarker2_006268c0;
extern "C" int vtableMarker3_006268c0;
struct DeletingDtorMultiVptr_006268c0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x006268c0
void* DeletingDtorMultiVptr_006268c0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_006268c0;
	*(const void**)((char*)this + 4) = &vtableMarker1_006268c0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_006268c0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_006268c0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00692ed0;
extern "C" int vtableMarker1_00692ed0;
extern "C" int vtableMarker2_00692ed0;
extern "C" int vtableMarker3_00692ed0;
struct DeletingDtorMultiVptr_00692ed0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00692ed0
void* DeletingDtorMultiVptr_00692ed0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00692ed0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00692ed0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00692ed0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00692ed0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0078c390;
extern "C" int vtableMarker1_0078c390;
extern "C" int vtableMarker2_0078c390;
extern "C" int vtableMarker3_0078c390;
struct DeletingDtorMultiVptr_0078c390 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0078c390
void* DeletingDtorMultiVptr_0078c390::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0078c390;
	*(const void**)((char*)this + 4) = &vtableMarker1_0078c390;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0078c390;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0078c390;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_007a0c50;
extern "C" int vtableMarker1_007a0c50;
extern "C" int vtableMarker2_007a0c50;
extern "C" int vtableMarker3_007a0c50;
struct DeletingDtorMultiVptr_007a0c50 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007a0c50
void* DeletingDtorMultiVptr_007a0c50::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_007a0c50;
	*(const void**)((char*)this + 4) = &vtableMarker1_007a0c50;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_007a0c50;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_007a0c50;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_007ba720;
extern "C" int vtableMarker1_007ba720;
extern "C" int vtableMarker2_007ba720;
extern "C" int vtableMarker3_007ba720;
struct DeletingDtorMultiVptr_007ba720 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007ba720
void* DeletingDtorMultiVptr_007ba720::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_007ba720;
	*(const void**)((char*)this + 4) = &vtableMarker1_007ba720;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_007ba720;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_007ba720;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_007c9110;
extern "C" int vtableMarker1_007c9110;
extern "C" int vtableMarker2_007c9110;
extern "C" int vtableMarker3_007c9110;
struct DeletingDtorMultiVptr_007c9110 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007c9110
void* DeletingDtorMultiVptr_007c9110::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_007c9110;
	*(const void**)((char*)this + 4) = &vtableMarker1_007c9110;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_007c9110;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_007c9110;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_007c9150;
extern "C" int vtableMarker1_007c9150;
extern "C" int vtableMarker2_007c9150;
extern "C" int vtableMarker3_007c9150;
struct DeletingDtorMultiVptr_007c9150 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007c9150
void* DeletingDtorMultiVptr_007c9150::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_007c9150;
	*(const void**)((char*)this + 4) = &vtableMarker1_007c9150;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_007c9150;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_007c9150;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0080e090;
extern "C" int vtableMarker1_0080e090;
extern "C" int vtableMarker2_0080e090;
extern "C" int vtableMarker3_0080e090;
struct DeletingDtorMultiVptr_0080e090 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e090
void* DeletingDtorMultiVptr_0080e090::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0080e090;
	*(const void**)((char*)this + 4) = &vtableMarker1_0080e090;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0080e090;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0080e090;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0080e0d0;
extern "C" int vtableMarker1_0080e0d0;
extern "C" int vtableMarker2_0080e0d0;
extern "C" int vtableMarker3_0080e0d0;
struct DeletingDtorMultiVptr_0080e0d0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e0d0
void* DeletingDtorMultiVptr_0080e0d0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0080e0d0;
	*(const void**)((char*)this + 4) = &vtableMarker1_0080e0d0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0080e0d0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0080e0d0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0080e110;
extern "C" int vtableMarker1_0080e110;
extern "C" int vtableMarker2_0080e110;
extern "C" int vtableMarker3_0080e110;
struct DeletingDtorMultiVptr_0080e110 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e110
void* DeletingDtorMultiVptr_0080e110::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0080e110;
	*(const void**)((char*)this + 4) = &vtableMarker1_0080e110;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0080e110;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0080e110;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0080e150;
extern "C" int vtableMarker1_0080e150;
extern "C" int vtableMarker2_0080e150;
extern "C" int vtableMarker3_0080e150;
struct DeletingDtorMultiVptr_0080e150 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e150
void* DeletingDtorMultiVptr_0080e150::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0080e150;
	*(const void**)((char*)this + 4) = &vtableMarker1_0080e150;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0080e150;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0080e150;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0080e190;
extern "C" int vtableMarker1_0080e190;
extern "C" int vtableMarker2_0080e190;
extern "C" int vtableMarker3_0080e190;
struct DeletingDtorMultiVptr_0080e190 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e190
void* DeletingDtorMultiVptr_0080e190::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0080e190;
	*(const void**)((char*)this + 4) = &vtableMarker1_0080e190;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0080e190;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0080e190;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0080e1d0;
extern "C" int vtableMarker1_0080e1d0;
extern "C" int vtableMarker2_0080e1d0;
extern "C" int vtableMarker3_0080e1d0;
struct DeletingDtorMultiVptr_0080e1d0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e1d0
void* DeletingDtorMultiVptr_0080e1d0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0080e1d0;
	*(const void**)((char*)this + 4) = &vtableMarker1_0080e1d0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0080e1d0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0080e1d0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0080e210;
extern "C" int vtableMarker1_0080e210;
extern "C" int vtableMarker2_0080e210;
extern "C" int vtableMarker3_0080e210;
struct DeletingDtorMultiVptr_0080e210 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e210
void* DeletingDtorMultiVptr_0080e210::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0080e210;
	*(const void**)((char*)this + 4) = &vtableMarker1_0080e210;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0080e210;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0080e210;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0080e250;
extern "C" int vtableMarker1_0080e250;
extern "C" int vtableMarker2_0080e250;
extern "C" int vtableMarker3_0080e250;
struct DeletingDtorMultiVptr_0080e250 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e250
void* DeletingDtorMultiVptr_0080e250::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0080e250;
	*(const void**)((char*)this + 4) = &vtableMarker1_0080e250;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0080e250;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0080e250;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0080e290;
extern "C" int vtableMarker1_0080e290;
extern "C" int vtableMarker2_0080e290;
extern "C" int vtableMarker3_0080e290;
struct DeletingDtorMultiVptr_0080e290 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e290
void* DeletingDtorMultiVptr_0080e290::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0080e290;
	*(const void**)((char*)this + 4) = &vtableMarker1_0080e290;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0080e290;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0080e290;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0080e2d0;
extern "C" int vtableMarker1_0080e2d0;
extern "C" int vtableMarker2_0080e2d0;
extern "C" int vtableMarker3_0080e2d0;
struct DeletingDtorMultiVptr_0080e2d0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e2d0
void* DeletingDtorMultiVptr_0080e2d0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0080e2d0;
	*(const void**)((char*)this + 4) = &vtableMarker1_0080e2d0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0080e2d0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0080e2d0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0080e310;
extern "C" int vtableMarker1_0080e310;
extern "C" int vtableMarker2_0080e310;
extern "C" int vtableMarker3_0080e310;
struct DeletingDtorMultiVptr_0080e310 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e310
void* DeletingDtorMultiVptr_0080e310::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0080e310;
	*(const void**)((char*)this + 4) = &vtableMarker1_0080e310;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0080e310;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0080e310;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0080e350;
extern "C" int vtableMarker1_0080e350;
extern "C" int vtableMarker2_0080e350;
extern "C" int vtableMarker3_0080e350;
struct DeletingDtorMultiVptr_0080e350 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e350
void* DeletingDtorMultiVptr_0080e350::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0080e350;
	*(const void**)((char*)this + 4) = &vtableMarker1_0080e350;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0080e350;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0080e350;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0080e390;
extern "C" int vtableMarker1_0080e390;
extern "C" int vtableMarker2_0080e390;
extern "C" int vtableMarker3_0080e390;
struct DeletingDtorMultiVptr_0080e390 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e390
void* DeletingDtorMultiVptr_0080e390::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0080e390;
	*(const void**)((char*)this + 4) = &vtableMarker1_0080e390;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0080e390;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0080e390;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0080e3d0;
extern "C" int vtableMarker1_0080e3d0;
extern "C" int vtableMarker2_0080e3d0;
extern "C" int vtableMarker3_0080e3d0;
struct DeletingDtorMultiVptr_0080e3d0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e3d0
void* DeletingDtorMultiVptr_0080e3d0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0080e3d0;
	*(const void**)((char*)this + 4) = &vtableMarker1_0080e3d0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0080e3d0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0080e3d0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0080e410;
extern "C" int vtableMarker1_0080e410;
extern "C" int vtableMarker2_0080e410;
extern "C" int vtableMarker3_0080e410;
struct DeletingDtorMultiVptr_0080e410 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e410
void* DeletingDtorMultiVptr_0080e410::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0080e410;
	*(const void**)((char*)this + 4) = &vtableMarker1_0080e410;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0080e410;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0080e410;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0080e450;
extern "C" int vtableMarker1_0080e450;
extern "C" int vtableMarker2_0080e450;
extern "C" int vtableMarker3_0080e450;
struct DeletingDtorMultiVptr_0080e450 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e450
void* DeletingDtorMultiVptr_0080e450::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0080e450;
	*(const void**)((char*)this + 4) = &vtableMarker1_0080e450;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0080e450;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0080e450;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00825f70;
extern "C" int vtableMarker1_00825f70;
extern "C" int vtableMarker2_00825f70;
extern "C" int vtableMarker3_00825f70;
struct DeletingDtorMultiVptr_00825f70 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00825f70
void* DeletingDtorMultiVptr_00825f70::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00825f70;
	*(const void**)((char*)this + 4) = &vtableMarker1_00825f70;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00825f70;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00825f70;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_008a73f0;
extern "C" int vtableMarker1_008a73f0;
extern "C" int vtableMarker2_008a73f0;
extern "C" int vtableMarker3_008a73f0;
struct DeletingDtorMultiVptr_008a73f0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008a73f0
void* DeletingDtorMultiVptr_008a73f0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_008a73f0;
	*(const void**)((char*)this + 4) = &vtableMarker1_008a73f0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_008a73f0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_008a73f0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_008a9ca0;
extern "C" int vtableMarker1_008a9ca0;
extern "C" int vtableMarker2_008a9ca0;
extern "C" int vtableMarker3_008a9ca0;
struct DeletingDtorMultiVptr_008a9ca0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008a9ca0
void* DeletingDtorMultiVptr_008a9ca0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_008a9ca0;
	*(const void**)((char*)this + 4) = &vtableMarker1_008a9ca0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_008a9ca0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_008a9ca0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_008bb480;
extern "C" int vtableMarker1_008bb480;
extern "C" int vtableMarker2_008bb480;
extern "C" int vtableMarker3_008bb480;
struct DeletingDtorMultiVptr_008bb480 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008bb480
void* DeletingDtorMultiVptr_008bb480::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_008bb480;
	*(const void**)((char*)this + 4) = &vtableMarker1_008bb480;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_008bb480;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_008bb480;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_008d1bd0;
extern "C" int vtableMarker1_008d1bd0;
extern "C" int vtableMarker2_008d1bd0;
extern "C" int vtableMarker3_008d1bd0;
struct DeletingDtorMultiVptr_008d1bd0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008d1bd0
void* DeletingDtorMultiVptr_008d1bd0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_008d1bd0;
	*(const void**)((char*)this + 4) = &vtableMarker1_008d1bd0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_008d1bd0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_008d1bd0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_008fe8c0;
extern "C" int vtableMarker1_008fe8c0;
extern "C" int vtableMarker2_008fe8c0;
extern "C" int vtableMarker3_008fe8c0;
struct DeletingDtorMultiVptr_008fe8c0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008fe8c0
void* DeletingDtorMultiVptr_008fe8c0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_008fe8c0;
	*(const void**)((char*)this + 4) = &vtableMarker1_008fe8c0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_008fe8c0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_008fe8c0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_008fe900;
extern "C" int vtableMarker1_008fe900;
extern "C" int vtableMarker2_008fe900;
extern "C" int vtableMarker3_008fe900;
struct DeletingDtorMultiVptr_008fe900 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008fe900
void* DeletingDtorMultiVptr_008fe900::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_008fe900;
	*(const void**)((char*)this + 4) = &vtableMarker1_008fe900;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_008fe900;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_008fe900;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009011c0;
extern "C" int vtableMarker1_009011c0;
extern "C" int vtableMarker2_009011c0;
extern "C" int vtableMarker3_009011c0;
struct DeletingDtorMultiVptr_009011c0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009011c0
void* DeletingDtorMultiVptr_009011c0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009011c0;
	*(const void**)((char*)this + 4) = &vtableMarker1_009011c0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009011c0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009011c0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00902200;
extern "C" int vtableMarker1_00902200;
extern "C" int vtableMarker2_00902200;
extern "C" int vtableMarker3_00902200;
struct DeletingDtorMultiVptr_00902200 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00902200
void* DeletingDtorMultiVptr_00902200::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00902200;
	*(const void**)((char*)this + 4) = &vtableMarker1_00902200;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00902200;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00902200;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00902240;
extern "C" int vtableMarker1_00902240;
extern "C" int vtableMarker2_00902240;
extern "C" int vtableMarker3_00902240;
struct DeletingDtorMultiVptr_00902240 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00902240
void* DeletingDtorMultiVptr_00902240::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00902240;
	*(const void**)((char*)this + 4) = &vtableMarker1_00902240;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00902240;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00902240;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00908480;
extern "C" int vtableMarker1_00908480;
extern "C" int vtableMarker2_00908480;
extern "C" int vtableMarker3_00908480;
struct DeletingDtorMultiVptr_00908480 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00908480
void* DeletingDtorMultiVptr_00908480::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00908480;
	*(const void**)((char*)this + 4) = &vtableMarker1_00908480;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00908480;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00908480;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0091f1e0;
extern "C" int vtableMarker1_0091f1e0;
extern "C" int vtableMarker2_0091f1e0;
extern "C" int vtableMarker3_0091f1e0;
struct DeletingDtorMultiVptr_0091f1e0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0091f1e0
void* DeletingDtorMultiVptr_0091f1e0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0091f1e0;
	*(const void**)((char*)this + 4) = &vtableMarker1_0091f1e0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0091f1e0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0091f1e0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00928690;
extern "C" int vtableMarker1_00928690;
extern "C" int vtableMarker2_00928690;
extern "C" int vtableMarker3_00928690;
struct DeletingDtorMultiVptr_00928690 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00928690
void* DeletingDtorMultiVptr_00928690::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00928690;
	*(const void**)((char*)this + 4) = &vtableMarker1_00928690;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00928690;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00928690;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00937920;
extern "C" int vtableMarker1_00937920;
extern "C" int vtableMarker2_00937920;
extern "C" int vtableMarker3_00937920;
struct DeletingDtorMultiVptr_00937920 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00937920
void* DeletingDtorMultiVptr_00937920::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00937920;
	*(const void**)((char*)this + 4) = &vtableMarker1_00937920;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00937920;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00937920;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00965880;
extern "C" int vtableMarker1_00965880;
extern "C" int vtableMarker2_00965880;
extern "C" int vtableMarker3_00965880;
struct DeletingDtorMultiVptr_00965880 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00965880
void* DeletingDtorMultiVptr_00965880::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00965880;
	*(const void**)((char*)this + 4) = &vtableMarker1_00965880;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00965880;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00965880;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0096fb50;
extern "C" int vtableMarker1_0096fb50;
extern "C" int vtableMarker2_0096fb50;
extern "C" int vtableMarker3_0096fb50;
struct DeletingDtorMultiVptr_0096fb50 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0096fb50
void* DeletingDtorMultiVptr_0096fb50::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0096fb50;
	*(const void**)((char*)this + 4) = &vtableMarker1_0096fb50;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0096fb50;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0096fb50;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00976470;
extern "C" int vtableMarker1_00976470;
extern "C" int vtableMarker2_00976470;
extern "C" int vtableMarker3_00976470;
struct DeletingDtorMultiVptr_00976470 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00976470
void* DeletingDtorMultiVptr_00976470::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00976470;
	*(const void**)((char*)this + 4) = &vtableMarker1_00976470;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00976470;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00976470;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0098c210;
extern "C" int vtableMarker1_0098c210;
extern "C" int vtableMarker2_0098c210;
extern "C" int vtableMarker3_0098c210;
struct DeletingDtorMultiVptr_0098c210 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0098c210
void* DeletingDtorMultiVptr_0098c210::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0098c210;
	*(const void**)((char*)this + 4) = &vtableMarker1_0098c210;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0098c210;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0098c210;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0098c250;
extern "C" int vtableMarker1_0098c250;
extern "C" int vtableMarker2_0098c250;
extern "C" int vtableMarker3_0098c250;
struct DeletingDtorMultiVptr_0098c250 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0098c250
void* DeletingDtorMultiVptr_0098c250::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0098c250;
	*(const void**)((char*)this + 4) = &vtableMarker1_0098c250;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0098c250;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0098c250;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0098c2f0;
extern "C" int vtableMarker1_0098c2f0;
extern "C" int vtableMarker2_0098c2f0;
extern "C" int vtableMarker3_0098c2f0;
struct DeletingDtorMultiVptr_0098c2f0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0098c2f0
void* DeletingDtorMultiVptr_0098c2f0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0098c2f0;
	*(const void**)((char*)this + 4) = &vtableMarker1_0098c2f0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0098c2f0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0098c2f0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009aa510;
extern "C" int vtableMarker1_009aa510;
extern "C" int vtableMarker2_009aa510;
extern "C" int vtableMarker3_009aa510;
struct DeletingDtorMultiVptr_009aa510 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009aa510
void* DeletingDtorMultiVptr_009aa510::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009aa510;
	*(const void**)((char*)this + 4) = &vtableMarker1_009aa510;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009aa510;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009aa510;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009b8210;
extern "C" int vtableMarker1_009b8210;
extern "C" int vtableMarker2_009b8210;
extern "C" int vtableMarker3_009b8210;
struct DeletingDtorMultiVptr_009b8210 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009b8210
void* DeletingDtorMultiVptr_009b8210::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009b8210;
	*(const void**)((char*)this + 4) = &vtableMarker1_009b8210;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009b8210;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009b8210;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009bd420;
extern "C" int vtableMarker1_009bd420;
extern "C" int vtableMarker2_009bd420;
extern "C" int vtableMarker3_009bd420;
struct DeletingDtorMultiVptr_009bd420 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009bd420
void* DeletingDtorMultiVptr_009bd420::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009bd420;
	*(const void**)((char*)this + 4) = &vtableMarker1_009bd420;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009bd420;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009bd420;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009d3f70;
extern "C" int vtableMarker1_009d3f70;
extern "C" int vtableMarker2_009d3f70;
extern "C" int vtableMarker3_009d3f70;
struct DeletingDtorMultiVptr_009d3f70 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009d3f70
void* DeletingDtorMultiVptr_009d3f70::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009d3f70;
	*(const void**)((char*)this + 4) = &vtableMarker1_009d3f70;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009d3f70;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009d3f70;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009e8d80;
extern "C" int vtableMarker1_009e8d80;
extern "C" int vtableMarker2_009e8d80;
extern "C" int vtableMarker3_009e8d80;
struct DeletingDtorMultiVptr_009e8d80 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009e8d80
void* DeletingDtorMultiVptr_009e8d80::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009e8d80;
	*(const void**)((char*)this + 4) = &vtableMarker1_009e8d80;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009e8d80;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009e8d80;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009e8dc0;
extern "C" int vtableMarker1_009e8dc0;
extern "C" int vtableMarker2_009e8dc0;
extern "C" int vtableMarker3_009e8dc0;
struct DeletingDtorMultiVptr_009e8dc0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009e8dc0
void* DeletingDtorMultiVptr_009e8dc0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009e8dc0;
	*(const void**)((char*)this + 4) = &vtableMarker1_009e8dc0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009e8dc0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009e8dc0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009f85f0;
extern "C" int vtableMarker1_009f85f0;
extern "C" int vtableMarker2_009f85f0;
extern "C" int vtableMarker3_009f85f0;
struct DeletingDtorMultiVptr_009f85f0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009f85f0
void* DeletingDtorMultiVptr_009f85f0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009f85f0;
	*(const void**)((char*)this + 4) = &vtableMarker1_009f85f0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009f85f0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009f85f0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a0b050;
extern "C" int vtableMarker1_00a0b050;
extern "C" int vtableMarker2_00a0b050;
extern "C" int vtableMarker3_00a0b050;
struct DeletingDtorMultiVptr_00a0b050 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a0b050
void* DeletingDtorMultiVptr_00a0b050::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a0b050;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a0b050;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a0b050;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a0b050;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a0ba20;
extern "C" int vtableMarker1_00a0ba20;
extern "C" int vtableMarker2_00a0ba20;
extern "C" int vtableMarker3_00a0ba20;
struct DeletingDtorMultiVptr_00a0ba20 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a0ba20
void* DeletingDtorMultiVptr_00a0ba20::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a0ba20;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a0ba20;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a0ba20;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a0ba20;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a0c3e0;
extern "C" int vtableMarker1_00a0c3e0;
extern "C" int vtableMarker2_00a0c3e0;
extern "C" int vtableMarker3_00a0c3e0;
struct DeletingDtorMultiVptr_00a0c3e0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a0c3e0
void* DeletingDtorMultiVptr_00a0c3e0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a0c3e0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a0c3e0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a0c3e0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a0c3e0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a0cad0;
extern "C" int vtableMarker1_00a0cad0;
extern "C" int vtableMarker2_00a0cad0;
extern "C" int vtableMarker3_00a0cad0;
struct DeletingDtorMultiVptr_00a0cad0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a0cad0
void* DeletingDtorMultiVptr_00a0cad0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a0cad0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a0cad0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a0cad0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a0cad0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a5b4b0;
extern "C" int vtableMarker1_00a5b4b0;
extern "C" int vtableMarker2_00a5b4b0;
extern "C" int vtableMarker3_00a5b4b0;
struct DeletingDtorMultiVptr_00a5b4b0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a5b4b0
void* DeletingDtorMultiVptr_00a5b4b0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a5b4b0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a5b4b0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a5b4b0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a5b4b0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a5eea0;
extern "C" int vtableMarker1_00a5eea0;
extern "C" int vtableMarker2_00a5eea0;
extern "C" int vtableMarker3_00a5eea0;
struct DeletingDtorMultiVptr_00a5eea0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a5eea0
void* DeletingDtorMultiVptr_00a5eea0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a5eea0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a5eea0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a5eea0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a5eea0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a60cf0;
extern "C" int vtableMarker1_00a60cf0;
extern "C" int vtableMarker2_00a60cf0;
extern "C" int vtableMarker3_00a60cf0;
struct DeletingDtorMultiVptr_00a60cf0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a60cf0
void* DeletingDtorMultiVptr_00a60cf0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a60cf0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a60cf0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a60cf0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a60cf0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a64240;
extern "C" int vtableMarker1_00a64240;
extern "C" int vtableMarker2_00a64240;
extern "C" int vtableMarker3_00a64240;
struct DeletingDtorMultiVptr_00a64240 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a64240
void* DeletingDtorMultiVptr_00a64240::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a64240;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a64240;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a64240;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a64240;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a69330;
extern "C" int vtableMarker1_00a69330;
extern "C" int vtableMarker2_00a69330;
extern "C" int vtableMarker3_00a69330;
struct DeletingDtorMultiVptr_00a69330 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a69330
void* DeletingDtorMultiVptr_00a69330::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a69330;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a69330;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a69330;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a69330;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a6ebe0;
extern "C" int vtableMarker1_00a6ebe0;
extern "C" int vtableMarker2_00a6ebe0;
extern "C" int vtableMarker3_00a6ebe0;
struct DeletingDtorMultiVptr_00a6ebe0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a6ebe0
void* DeletingDtorMultiVptr_00a6ebe0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a6ebe0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a6ebe0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a6ebe0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a6ebe0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a6fbd0;
extern "C" int vtableMarker1_00a6fbd0;
extern "C" int vtableMarker2_00a6fbd0;
extern "C" int vtableMarker3_00a6fbd0;
struct DeletingDtorMultiVptr_00a6fbd0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a6fbd0
void* DeletingDtorMultiVptr_00a6fbd0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a6fbd0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a6fbd0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a6fbd0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a6fbd0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a70790;
extern "C" int vtableMarker1_00a70790;
extern "C" int vtableMarker2_00a70790;
extern "C" int vtableMarker3_00a70790;
struct DeletingDtorMultiVptr_00a70790 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a70790
void* DeletingDtorMultiVptr_00a70790::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a70790;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a70790;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a70790;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a70790;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a77070;
extern "C" int vtableMarker1_00a77070;
extern "C" int vtableMarker2_00a77070;
extern "C" int vtableMarker3_00a77070;
struct DeletingDtorMultiVptr_00a77070 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a77070
void* DeletingDtorMultiVptr_00a77070::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a77070;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a77070;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a77070;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a77070;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a770b0;
extern "C" int vtableMarker1_00a770b0;
extern "C" int vtableMarker2_00a770b0;
extern "C" int vtableMarker3_00a770b0;
struct DeletingDtorMultiVptr_00a770b0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a770b0
void* DeletingDtorMultiVptr_00a770b0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a770b0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a770b0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a770b0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a770b0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a7ff70;
extern "C" int vtableMarker1_00a7ff70;
extern "C" int vtableMarker2_00a7ff70;
extern "C" int vtableMarker3_00a7ff70;
struct DeletingDtorMultiVptr_00a7ff70 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a7ff70
void* DeletingDtorMultiVptr_00a7ff70::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a7ff70;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a7ff70;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a7ff70;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a7ff70;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a86840;
extern "C" int vtableMarker1_00a86840;
extern "C" int vtableMarker2_00a86840;
extern "C" int vtableMarker3_00a86840;
struct DeletingDtorMultiVptr_00a86840 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a86840
void* DeletingDtorMultiVptr_00a86840::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a86840;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a86840;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a86840;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a86840;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a91b00;
extern "C" int vtableMarker1_00a91b00;
extern "C" int vtableMarker2_00a91b00;
extern "C" int vtableMarker3_00a91b00;
struct DeletingDtorMultiVptr_00a91b00 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a91b00
void* DeletingDtorMultiVptr_00a91b00::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a91b00;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a91b00;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a91b00;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a91b00;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00aade90;
extern "C" int vtableMarker1_00aade90;
extern "C" int vtableMarker2_00aade90;
extern "C" int vtableMarker3_00aade90;
struct DeletingDtorMultiVptr_00aade90 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aade90
void* DeletingDtorMultiVptr_00aade90::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00aade90;
	*(const void**)((char*)this + 4) = &vtableMarker1_00aade90;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00aade90;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00aade90;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00aaee50;
extern "C" int vtableMarker1_00aaee50;
extern "C" int vtableMarker2_00aaee50;
extern "C" int vtableMarker3_00aaee50;
struct DeletingDtorMultiVptr_00aaee50 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aaee50
void* DeletingDtorMultiVptr_00aaee50::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00aaee50;
	*(const void**)((char*)this + 4) = &vtableMarker1_00aaee50;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00aaee50;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00aaee50;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00aaf6b0;
extern "C" int vtableMarker1_00aaf6b0;
extern "C" int vtableMarker2_00aaf6b0;
extern "C" int vtableMarker3_00aaf6b0;
struct DeletingDtorMultiVptr_00aaf6b0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aaf6b0
void* DeletingDtorMultiVptr_00aaf6b0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00aaf6b0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00aaf6b0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00aaf6b0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00aaf6b0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00aba3e0;
extern "C" int vtableMarker1_00aba3e0;
extern "C" int vtableMarker2_00aba3e0;
extern "C" int vtableMarker3_00aba3e0;
struct DeletingDtorMultiVptr_00aba3e0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aba3e0
void* DeletingDtorMultiVptr_00aba3e0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00aba3e0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00aba3e0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00aba3e0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00aba3e0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00acd4c0;
extern "C" int vtableMarker1_00acd4c0;
extern "C" int vtableMarker2_00acd4c0;
extern "C" int vtableMarker3_00acd4c0;
struct DeletingDtorMultiVptr_00acd4c0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00acd4c0
void* DeletingDtorMultiVptr_00acd4c0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00acd4c0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00acd4c0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00acd4c0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00acd4c0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00ad1260;
extern "C" int vtableMarker1_00ad1260;
extern "C" int vtableMarker2_00ad1260;
extern "C" int vtableMarker3_00ad1260;
struct DeletingDtorMultiVptr_00ad1260 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ad1260
void* DeletingDtorMultiVptr_00ad1260::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00ad1260;
	*(const void**)((char*)this + 4) = &vtableMarker1_00ad1260;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00ad1260;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00ad1260;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00ad9b70;
extern "C" int vtableMarker1_00ad9b70;
extern "C" int vtableMarker2_00ad9b70;
extern "C" int vtableMarker3_00ad9b70;
struct DeletingDtorMultiVptr_00ad9b70 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ad9b70
void* DeletingDtorMultiVptr_00ad9b70::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00ad9b70;
	*(const void**)((char*)this + 4) = &vtableMarker1_00ad9b70;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00ad9b70;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00ad9b70;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00ae9ae0;
extern "C" int vtableMarker1_00ae9ae0;
extern "C" int vtableMarker2_00ae9ae0;
extern "C" int vtableMarker3_00ae9ae0;
struct DeletingDtorMultiVptr_00ae9ae0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ae9ae0
void* DeletingDtorMultiVptr_00ae9ae0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00ae9ae0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00ae9ae0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00ae9ae0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00ae9ae0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00aed890;
extern "C" int vtableMarker1_00aed890;
extern "C" int vtableMarker2_00aed890;
extern "C" int vtableMarker3_00aed890;
struct DeletingDtorMultiVptr_00aed890 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aed890
void* DeletingDtorMultiVptr_00aed890::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00aed890;
	*(const void**)((char*)this + 4) = &vtableMarker1_00aed890;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00aed890;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00aed890;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00b1a960;
extern "C" int vtableMarker1_00b1a960;
extern "C" int vtableMarker2_00b1a960;
extern "C" int vtableMarker3_00b1a960;
struct DeletingDtorMultiVptr_00b1a960 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b1a960
void* DeletingDtorMultiVptr_00b1a960::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00b1a960;
	*(const void**)((char*)this + 4) = &vtableMarker1_00b1a960;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00b1a960;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00b1a960;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00b1ad10;
extern "C" int vtableMarker1_00b1ad10;
extern "C" int vtableMarker2_00b1ad10;
extern "C" int vtableMarker3_00b1ad10;
struct DeletingDtorMultiVptr_00b1ad10 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b1ad10
void* DeletingDtorMultiVptr_00b1ad10::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00b1ad10;
	*(const void**)((char*)this + 4) = &vtableMarker1_00b1ad10;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00b1ad10;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00b1ad10;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00c43e30;
extern "C" int vtableMarker1_00c43e30;
extern "C" int vtableMarker2_00c43e30;
extern "C" int vtableMarker3_00c43e30;
struct DeletingDtorMultiVptr_00c43e30 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c43e30
void* DeletingDtorMultiVptr_00c43e30::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00c43e30;
	*(const void**)((char*)this + 4) = &vtableMarker1_00c43e30;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00c43e30;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00c43e30;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00c570f0;
extern "C" int vtableMarker1_00c570f0;
extern "C" int vtableMarker2_00c570f0;
extern "C" int vtableMarker3_00c570f0;
struct DeletingDtorMultiVptr_00c570f0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c570f0
void* DeletingDtorMultiVptr_00c570f0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00c570f0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00c570f0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00c570f0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00c570f0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0080e700;
extern "C" int vtableMarker1_0080e700;
extern "C" int vtableMarker2_0080e700;
extern "C" int vtableMarker3_0080e700;
extern "C" int vtableMarker4_0080e700;
struct DeletingDtorFiveVptr_0080e700 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e700
void* DeletingDtorFiveVptr_0080e700::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0080e700;
	*(const void**)((char*)this + 4) = &vtableMarker1_0080e700;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0080e700;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0080e700;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_0080e700;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009132b0;
extern "C" int vtableMarker1_009132b0;
extern "C" int vtableMarker2_009132b0;
extern "C" int vtableMarker3_009132b0;
extern "C" int vtableMarker4_009132b0;
struct DeletingDtorFiveVptr_009132b0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009132b0
void* DeletingDtorFiveVptr_009132b0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009132b0;
	*(const void**)((char*)this + 4) = &vtableMarker1_009132b0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009132b0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009132b0;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_009132b0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00913300;
extern "C" int vtableMarker1_00913300;
extern "C" int vtableMarker2_00913300;
extern "C" int vtableMarker3_00913300;
extern "C" int vtableMarker4_00913300;
struct DeletingDtorFiveVptr_00913300 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00913300
void* DeletingDtorFiveVptr_00913300::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00913300;
	*(const void**)((char*)this + 4) = &vtableMarker1_00913300;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00913300;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00913300;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00913300;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00913350;
extern "C" int vtableMarker1_00913350;
extern "C" int vtableMarker2_00913350;
extern "C" int vtableMarker3_00913350;
extern "C" int vtableMarker4_00913350;
struct DeletingDtorFiveVptr_00913350 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00913350
void* DeletingDtorFiveVptr_00913350::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00913350;
	*(const void**)((char*)this + 4) = &vtableMarker1_00913350;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00913350;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00913350;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00913350;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009133a0;
extern "C" int vtableMarker1_009133a0;
extern "C" int vtableMarker2_009133a0;
extern "C" int vtableMarker3_009133a0;
extern "C" int vtableMarker4_009133a0;
struct DeletingDtorFiveVptr_009133a0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009133a0
void* DeletingDtorFiveVptr_009133a0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009133a0;
	*(const void**)((char*)this + 4) = &vtableMarker1_009133a0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009133a0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009133a0;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_009133a0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009133f0;
extern "C" int vtableMarker1_009133f0;
extern "C" int vtableMarker2_009133f0;
extern "C" int vtableMarker3_009133f0;
extern "C" int vtableMarker4_009133f0;
struct DeletingDtorFiveVptr_009133f0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009133f0
void* DeletingDtorFiveVptr_009133f0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009133f0;
	*(const void**)((char*)this + 4) = &vtableMarker1_009133f0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009133f0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009133f0;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_009133f0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00913440;
extern "C" int vtableMarker1_00913440;
extern "C" int vtableMarker2_00913440;
extern "C" int vtableMarker3_00913440;
extern "C" int vtableMarker4_00913440;
struct DeletingDtorFiveVptr_00913440 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00913440
void* DeletingDtorFiveVptr_00913440::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00913440;
	*(const void**)((char*)this + 4) = &vtableMarker1_00913440;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00913440;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00913440;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00913440;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00913490;
extern "C" int vtableMarker1_00913490;
extern "C" int vtableMarker2_00913490;
extern "C" int vtableMarker3_00913490;
extern "C" int vtableMarker4_00913490;
struct DeletingDtorFiveVptr_00913490 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00913490
void* DeletingDtorFiveVptr_00913490::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00913490;
	*(const void**)((char*)this + 4) = &vtableMarker1_00913490;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00913490;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00913490;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00913490;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009135c0;
extern "C" int vtableMarker1_009135c0;
extern "C" int vtableMarker2_009135c0;
extern "C" int vtableMarker3_009135c0;
extern "C" int vtableMarker4_009135c0;
struct DeletingDtorFiveVptr_009135c0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009135c0
void* DeletingDtorFiveVptr_009135c0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009135c0;
	*(const void**)((char*)this + 4) = &vtableMarker1_009135c0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009135c0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009135c0;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_009135c0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00913640;
extern "C" int vtableMarker1_00913640;
extern "C" int vtableMarker2_00913640;
extern "C" int vtableMarker3_00913640;
extern "C" int vtableMarker4_00913640;
struct DeletingDtorFiveVptr_00913640 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00913640
void* DeletingDtorFiveVptr_00913640::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00913640;
	*(const void**)((char*)this + 4) = &vtableMarker1_00913640;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00913640;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00913640;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00913640;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00923560;
extern "C" int vtableMarker1_00923560;
extern "C" int vtableMarker2_00923560;
extern "C" int vtableMarker3_00923560;
extern "C" int vtableMarker4_00923560;
struct DeletingDtorFiveVptr_00923560 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00923560
void* DeletingDtorFiveVptr_00923560::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00923560;
	*(const void**)((char*)this + 4) = &vtableMarker1_00923560;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00923560;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00923560;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00923560;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00928610;
extern "C" int vtableMarker1_00928610;
extern "C" int vtableMarker2_00928610;
extern "C" int vtableMarker3_00928610;
extern "C" int vtableMarker4_00928610;
struct DeletingDtorFiveVptr_00928610 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00928610
void* DeletingDtorFiveVptr_00928610::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00928610;
	*(const void**)((char*)this + 4) = &vtableMarker1_00928610;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00928610;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00928610;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00928610;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00981030;
extern "C" int vtableMarker1_00981030;
extern "C" int vtableMarker2_00981030;
extern "C" int vtableMarker3_00981030;
extern "C" int vtableMarker4_00981030;
struct DeletingDtorFiveVptr_00981030 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00981030
void* DeletingDtorFiveVptr_00981030::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00981030;
	*(const void**)((char*)this + 4) = &vtableMarker1_00981030;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00981030;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00981030;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00981030;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009b4d10;
extern "C" int vtableMarker1_009b4d10;
extern "C" int vtableMarker2_009b4d10;
extern "C" int vtableMarker3_009b4d10;
extern "C" int vtableMarker4_009b4d10;
struct DeletingDtorFiveVptr_009b4d10 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009b4d10
void* DeletingDtorFiveVptr_009b4d10::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009b4d10;
	*(const void**)((char*)this + 4) = &vtableMarker1_009b4d10;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009b4d10;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009b4d10;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_009b4d10;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009b4e40;
extern "C" int vtableMarker1_009b4e40;
extern "C" int vtableMarker2_009b4e40;
extern "C" int vtableMarker3_009b4e40;
extern "C" int vtableMarker4_009b4e40;
struct DeletingDtorFiveVptr_009b4e40 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009b4e40
void* DeletingDtorFiveVptr_009b4e40::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009b4e40;
	*(const void**)((char*)this + 4) = &vtableMarker1_009b4e40;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009b4e40;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009b4e40;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_009b4e40;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009fbdf0;
extern "C" int vtableMarker1_009fbdf0;
extern "C" int vtableMarker2_009fbdf0;
extern "C" int vtableMarker3_009fbdf0;
extern "C" int vtableMarker4_009fbdf0;
struct DeletingDtorFiveVptr_009fbdf0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009fbdf0
void* DeletingDtorFiveVptr_009fbdf0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009fbdf0;
	*(const void**)((char*)this + 4) = &vtableMarker1_009fbdf0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009fbdf0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009fbdf0;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_009fbdf0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009fbe40;
extern "C" int vtableMarker1_009fbe40;
extern "C" int vtableMarker2_009fbe40;
extern "C" int vtableMarker3_009fbe40;
extern "C" int vtableMarker4_009fbe40;
struct DeletingDtorFiveVptr_009fbe40 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009fbe40
void* DeletingDtorFiveVptr_009fbe40::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009fbe40;
	*(const void**)((char*)this + 4) = &vtableMarker1_009fbe40;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009fbe40;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009fbe40;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_009fbe40;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009fbe90;
extern "C" int vtableMarker1_009fbe90;
extern "C" int vtableMarker2_009fbe90;
extern "C" int vtableMarker3_009fbe90;
extern "C" int vtableMarker4_009fbe90;
struct DeletingDtorFiveVptr_009fbe90 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009fbe90
void* DeletingDtorFiveVptr_009fbe90::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009fbe90;
	*(const void**)((char*)this + 4) = &vtableMarker1_009fbe90;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009fbe90;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009fbe90;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_009fbe90;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009fbf80;
extern "C" int vtableMarker1_009fbf80;
extern "C" int vtableMarker2_009fbf80;
extern "C" int vtableMarker3_009fbf80;
extern "C" int vtableMarker4_009fbf80;
struct DeletingDtorFiveVptr_009fbf80 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009fbf80
void* DeletingDtorFiveVptr_009fbf80::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009fbf80;
	*(const void**)((char*)this + 4) = &vtableMarker1_009fbf80;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009fbf80;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009fbf80;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_009fbf80;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_009fcfa0;
extern "C" int vtableMarker1_009fcfa0;
extern "C" int vtableMarker2_009fcfa0;
extern "C" int vtableMarker3_009fcfa0;
extern "C" int vtableMarker4_009fcfa0;
struct DeletingDtorFiveVptr_009fcfa0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009fcfa0
void* DeletingDtorFiveVptr_009fcfa0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_009fcfa0;
	*(const void**)((char*)this + 4) = &vtableMarker1_009fcfa0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_009fcfa0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_009fcfa0;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_009fcfa0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a01a40;
extern "C" int vtableMarker1_00a01a40;
extern "C" int vtableMarker2_00a01a40;
extern "C" int vtableMarker3_00a01a40;
extern "C" int vtableMarker4_00a01a40;
struct DeletingDtorFiveVptr_00a01a40 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a01a40
void* DeletingDtorFiveVptr_00a01a40::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a01a40;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a01a40;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a01a40;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a01a40;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00a01a40;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a586e0;
extern "C" int vtableMarker1_00a586e0;
extern "C" int vtableMarker2_00a586e0;
extern "C" int vtableMarker3_00a586e0;
extern "C" int vtableMarker4_00a586e0;
struct DeletingDtorFiveVptr_00a586e0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a586e0
void* DeletingDtorFiveVptr_00a586e0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a586e0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a586e0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a586e0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a586e0;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00a586e0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a8d3d0;
extern "C" int vtableMarker1_00a8d3d0;
extern "C" int vtableMarker2_00a8d3d0;
extern "C" int vtableMarker3_00a8d3d0;
extern "C" int vtableMarker4_00a8d3d0;
struct DeletingDtorFiveVptr_00a8d3d0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a8d3d0
void* DeletingDtorFiveVptr_00a8d3d0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a8d3d0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a8d3d0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a8d3d0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a8d3d0;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00a8d3d0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00c959c0;
extern "C" int vtableMarker1_00c959c0;
extern "C" int vtableMarker2_00c959c0;
extern "C" int vtableMarker3_00c959c0;
extern "C" int vtableMarker4_00c959c0;
struct DeletingDtorFiveVptr_00c959c0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c959c0
void* DeletingDtorFiveVptr_00c959c0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00c959c0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00c959c0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00c959c0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00c959c0;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00c959c0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}
