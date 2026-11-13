// Destructors that republish vtable slots, run a cleanup helper and then
// free the object. Store addresses and call targets are wildcarded.

extern "C" void freeObject(void*);
extern "C" __declspec(dllimport) void __cdecl deleteObject(void*);
extern "C" void cleanupHelper();

extern "C" int vt0_005e06e0;
struct CVs_005e06e0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005e06e0
void* CVs_005e06e0::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_005e06e0;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_005e87e0;
struct CVs_005e87e0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005e87e0
void* CVs_005e87e0::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_005e87e0;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_005eb9e0;
struct CVs_005eb9e0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005eb9e0
void* CVs_005eb9e0::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_005eb9e0;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_005eba10;
struct CVs_005eba10 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005eba10
void* CVs_005eba10::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_005eba10;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_005ec0c0;
struct CVs_005ec0c0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005ec0c0
void* CVs_005ec0c0::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_005ec0c0;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_0060aa60;
struct CVs_0060aa60 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0060aa60
void* CVs_0060aa60::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_0060aa60;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_0060aa90;
struct CVs_0060aa90 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0060aa90
void* CVs_0060aa90::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_0060aa90;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_0060aac0;
struct CVs_0060aac0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0060aac0
void* CVs_0060aac0::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_0060aac0;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_00610310;
struct CVs_00610310 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00610310
void* CVs_00610310::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_00610310;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_00610370;
struct CVs_00610370 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00610370
void* CVs_00610370::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_00610370;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_006109f0;
struct CVs_006109f0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x006109f0
void* CVs_006109f0::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_006109f0;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_0099c140;
struct CVs_0099c140 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0099c140
void* CVs_0099c140::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_0099c140;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_00a51740;
struct CVs_00a51740 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a51740
void* CVs_00a51740::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_00a51740;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_00a51770;
struct CVs_00a51770 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a51770
void* CVs_00a51770::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_00a51770;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_00a517a0;
struct CVs_00a517a0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a517a0
void* CVs_00a517a0::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_00a517a0;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_00a517d0;
struct CVs_00a517d0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a517d0
void* CVs_00a517d0::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_00a517d0;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_00a51800;
struct CVs_00a51800 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a51800
void* CVs_00a51800::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_00a51800;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_00b59ff0;
struct CVs_00b59ff0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b59ff0
void* CVs_00b59ff0::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_00b59ff0;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_00ba3c90;
struct CVs_00ba3c90 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ba3c90
void* CVs_00ba3c90::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_00ba3c90;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_0045da10;
struct CVs_0045da10 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0045da10
void* CVs_0045da10::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_0045da10;
	cleanupHelper();
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt0_00b97240;
extern "C" int vt1_00b97240;
extern "C" int vt2_00b97240;
struct CVs_00b97240 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b97240
void* CVs_00b97240::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_00b97240;
	*(const void**)((char*)this + 0x4) = &vt1_00b97240;
	*(const void**)((char*)this + 0x1c) = &vt2_00b97240;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_00c0f360;
extern "C" int vt1_00c0f360;
extern "C" int vt2_00c0f360;
extern "C" int vt3_00c0f360;
struct CVs_00c0f360 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c0f360
void* CVs_00c0f360::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_00c0f360;
	*(const void**)((char*)this + 0x4) = &vt1_00c0f360;
	*(const void**)((char*)this + 0x1c) = &vt2_00c0f360;
	*(const void**)((char*)this + 0x5c) = &vt3_00c0f360;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_00c0ed30;
extern "C" int vt1_00c0ed30;
extern "C" int vt2_00c0ed30;
extern "C" int vt3_00c0ed30;
struct CVs_00c0ed30 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c0ed30
void* CVs_00c0ed30::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_00c0ed30;
	*(const void**)((char*)this + 0x4) = &vt1_00c0ed30;
	*(const void**)((char*)this + 0x1c) = &vt2_00c0ed30;
	*(const void**)((char*)this + 0x68) = &vt3_00c0ed30;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_00913510;
extern "C" int vt1_00913510;
struct CVs_00913510 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00913510
void* CVs_00913510::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_00913510;
	*(const void**)((char*)this + 0x1c) = &vt1_00913510;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_00913540;
extern "C" int vt1_00913540;
struct CVs_00913540 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00913540
void* CVs_00913540::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_00913540;
	*(const void**)((char*)this + 0x1c) = &vt1_00913540;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt0_00b8e1f0;
extern "C" int vt1_00b8e1f0;
struct CVs_00b8e1f0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b8e1f0
void* CVs_00b8e1f0::destroy(int flags)
{
	*(const void**)((char*)this + 0x0) = &vt0_00b8e1f0;
	*(const void**)((char*)this + 0x1c) = &vt1_00b8e1f0;
	cleanupHelper();
	if (flags & 1)
		freeObject(this);
	return this;
}
