// Scalar deleting destructors that republish the class vtable pointer into
// the member at +0x28 before freeing. The vtable address is wildcarded by the
// comparator, so one marker symbol stands in for each target.

extern "C" __declspec(dllimport) void __cdecl deleteObject(void*);

extern "C" int vtableMarker_00410310;
struct DeletingDtorVptr_00410310 { virtual ~DeletingDtorVptr_00410310(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00410310
void* DeletingDtorVptr_00410310::destroy(int flags)
{
	this->DeletingDtorVptr_00410310::~DeletingDtorVptr_00410310();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_00410310;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker_00411f60;
struct DeletingDtorVptr_00411f60 { virtual ~DeletingDtorVptr_00411f60(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00411f60
void* DeletingDtorVptr_00411f60::destroy(int flags)
{
	this->DeletingDtorVptr_00411f60::~DeletingDtorVptr_00411f60();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_00411f60;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker_00421b60;
struct DeletingDtorVptr_00421b60 { virtual ~DeletingDtorVptr_00421b60(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00421b60
void* DeletingDtorVptr_00421b60::destroy(int flags)
{
	this->DeletingDtorVptr_00421b60::~DeletingDtorVptr_00421b60();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_00421b60;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker_0045fc30;
struct DeletingDtorVptr_0045fc30 { virtual ~DeletingDtorVptr_0045fc30(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0045fc30
void* DeletingDtorVptr_0045fc30::destroy(int flags)
{
	this->DeletingDtorVptr_0045fc30::~DeletingDtorVptr_0045fc30();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_0045fc30;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker_004b6290;
struct DeletingDtorVptr_004b6290 { virtual ~DeletingDtorVptr_004b6290(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004b6290
void* DeletingDtorVptr_004b6290::destroy(int flags)
{
	this->DeletingDtorVptr_004b6290::~DeletingDtorVptr_004b6290();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_004b6290;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker_00564190;
struct DeletingDtorVptr_00564190 { virtual ~DeletingDtorVptr_00564190(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00564190
void* DeletingDtorVptr_00564190::destroy(int flags)
{
	this->DeletingDtorVptr_00564190::~DeletingDtorVptr_00564190();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_00564190;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker_00564250;
struct DeletingDtorVptr_00564250 { virtual ~DeletingDtorVptr_00564250(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00564250
void* DeletingDtorVptr_00564250::destroy(int flags)
{
	this->DeletingDtorVptr_00564250::~DeletingDtorVptr_00564250();
	bool del = (flags & 1) != 0;
	*(const void**)((char*)this + 0x28) = &vtableMarker_00564250;
	if (del)
		deleteObject(this);
	return this;
}
