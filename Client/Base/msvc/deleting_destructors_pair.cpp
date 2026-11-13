// Deleting destructors republishing two vtable slots then calling the imported
// base destructor directly, with no reload of this.

extern "C" __declspec(dllimport) void __cdecl deleteObject(void*);
struct __declspec(dllimport) BaseDtor { virtual ~BaseDtor(); };

extern "C" int vtableMarker0_00442a10;
extern "C" int vtableMarker1_00442a10;
struct DeletingDtorPair_00442a10 : BaseDtor {
	void* p8;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x00442a10
void* DeletingDtorPair_00442a10::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_00442a10;
	*(const void**)((char*)this + 8) = &vtableMarker1_00442a10;
	this->BaseDtor::~BaseDtor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_0049ff10;
extern "C" int vtableMarker1_0049ff10;
struct DeletingDtorPair_0049ff10 : BaseDtor {
	void* p8;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x0049ff10
void* DeletingDtorPair_0049ff10::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_0049ff10;
	*(const void**)((char*)this + 8) = &vtableMarker1_0049ff10;
	this->BaseDtor::~BaseDtor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_004a1880;
extern "C" int vtableMarker1_004a1880;
struct DeletingDtorPair_004a1880 : BaseDtor {
	void* p8;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x004a1880
void* DeletingDtorPair_004a1880::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_004a1880;
	*(const void**)((char*)this + 8) = &vtableMarker1_004a1880;
	this->BaseDtor::~BaseDtor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_004d2ce0;
extern "C" int vtableMarker1_004d2ce0;
struct DeletingDtorPair_004d2ce0 : BaseDtor {
	void* p8;
	void* destroy(int flags);
};
// FUNCTION: ROBLOXSTUDIO 0x004d2ce0
void* DeletingDtorPair_004d2ce0::destroy(int flags)
{
	*(const void**)this = &vtableMarker0_004d2ce0;
	*(const void**)((char*)this + 8) = &vtableMarker1_004d2ce0;
	this->BaseDtor::~BaseDtor();
	if (flags & 1)
		deleteObject(this);
	return this;
}
