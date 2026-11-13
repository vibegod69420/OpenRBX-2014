// Second batch of deleting destructors: vtable republishing plus base-destructor
// chains, including a variant that clears a global flag word first. Store
// addresses and call targets are wildcarded by the comparator.

extern "C" __declspec(dllimport) void __cdecl deleteObject(void*);
extern "C" void freeObject(void*);
extern "C" void baseDtorChain();

extern "C" int vtableMarker0_00407d80;
extern "C" int vtableMarker1_00407d80;
extern "C" int vtableMarker2_00407d80;
extern "C" int vtableMarker3_00407d80;
struct DeletingDtorImport_00407d80 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00407d80
void* DeletingDtorImport_00407d80::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00407d80;
	*(const void**)((char*)this + 4) = &vtableMarker1_00407d80;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00407d80;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00407d80;
	baseDtorChain();
	bool del = (flags & 1) != 0;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_00437a50;
extern "C" int vtableMarker1_00437a50;
extern "C" int vtableMarker2_00437a50;
extern "C" int vtableMarker3_00437a50;
struct DeletingDtorImport_00437a50 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00437a50
void* DeletingDtorImport_00437a50::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00437a50;
	*(const void**)((char*)this + 4) = &vtableMarker1_00437a50;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00437a50;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00437a50;
	baseDtorChain();
	bool del = (flags & 1) != 0;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_00437a90;
extern "C" int vtableMarker1_00437a90;
extern "C" int vtableMarker2_00437a90;
extern "C" int vtableMarker3_00437a90;
struct DeletingDtorImport_00437a90 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00437a90
void* DeletingDtorImport_00437a90::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00437a90;
	*(const void**)((char*)this + 4) = &vtableMarker1_00437a90;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00437a90;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00437a90;
	baseDtorChain();
	bool del = (flags & 1) != 0;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_0048c650;
extern "C" int vtableMarker1_0048c650;
extern "C" int vtableMarker2_0048c650;
extern "C" int vtableMarker3_0048c650;
struct DeletingDtorImport_0048c650 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0048c650
void* DeletingDtorImport_0048c650::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0048c650;
	*(const void**)((char*)this + 4) = &vtableMarker1_0048c650;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0048c650;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0048c650;
	baseDtorChain();
	bool del = (flags & 1) != 0;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_00492f00;
extern "C" int vtableMarker1_00492f00;
extern "C" int vtableMarker2_00492f00;
extern "C" int vtableMarker3_00492f00;
struct DeletingDtorImport_00492f00 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00492f00
void* DeletingDtorImport_00492f00::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00492f00;
	*(const void**)((char*)this + 4) = &vtableMarker1_00492f00;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00492f00;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00492f00;
	baseDtorChain();
	bool del = (flags & 1) != 0;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_00556040;
extern "C" int vtableMarker1_00556040;
extern "C" int vtableMarker2_00556040;
extern "C" int vtableMarker3_00556040;
struct DeletingDtorImport_00556040 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00556040
void* DeletingDtorImport_00556040::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00556040;
	*(const void**)((char*)this + 4) = &vtableMarker1_00556040;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00556040;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00556040;
	baseDtorChain();
	bool del = (flags & 1) != 0;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_00556220;
extern "C" int vtableMarker1_00556220;
extern "C" int vtableMarker2_00556220;
extern "C" int vtableMarker3_00556220;
struct DeletingDtorImport_00556220 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00556220
void* DeletingDtorImport_00556220::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00556220;
	*(const void**)((char*)this + 4) = &vtableMarker1_00556220;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00556220;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00556220;
	baseDtorChain();
	bool del = (flags & 1) != 0;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_00556260;
extern "C" int vtableMarker1_00556260;
extern "C" int vtableMarker2_00556260;
extern "C" int vtableMarker3_00556260;
struct DeletingDtorImport_00556260 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00556260
void* DeletingDtorImport_00556260::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00556260;
	*(const void**)((char*)this + 4) = &vtableMarker1_00556260;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00556260;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00556260;
	baseDtorChain();
	bool del = (flags & 1) != 0;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_00558760;
extern "C" int vtableMarker1_00558760;
extern "C" int vtableMarker2_00558760;
extern "C" int vtableMarker3_00558760;
struct DeletingDtorImport_00558760 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00558760
void* DeletingDtorImport_00558760::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00558760;
	*(const void**)((char*)this + 4) = &vtableMarker1_00558760;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00558760;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00558760;
	baseDtorChain();
	bool del = (flags & 1) != 0;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_005587a0;
extern "C" int vtableMarker1_005587a0;
extern "C" int vtableMarker2_005587a0;
extern "C" int vtableMarker3_005587a0;
struct DeletingDtorImport_005587a0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005587a0
void* DeletingDtorImport_005587a0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_005587a0;
	*(const void**)((char*)this + 4) = &vtableMarker1_005587a0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_005587a0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_005587a0;
	baseDtorChain();
	bool del = (flags & 1) != 0;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_00558850;
extern "C" int vtableMarker1_00558850;
extern "C" int vtableMarker2_00558850;
extern "C" int vtableMarker3_00558850;
struct DeletingDtorImport_00558850 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00558850
void* DeletingDtorImport_00558850::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00558850;
	*(const void**)((char*)this + 4) = &vtableMarker1_00558850;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00558850;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00558850;
	baseDtorChain();
	bool del = (flags & 1) != 0;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_00558890;
extern "C" int vtableMarker1_00558890;
extern "C" int vtableMarker2_00558890;
extern "C" int vtableMarker3_00558890;
struct DeletingDtorImport_00558890 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00558890
void* DeletingDtorImport_00558890::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00558890;
	*(const void**)((char*)this + 4) = &vtableMarker1_00558890;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00558890;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00558890;
	baseDtorChain();
	bool del = (flags & 1) != 0;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_005588d0;
extern "C" int vtableMarker1_005588d0;
extern "C" int vtableMarker2_005588d0;
extern "C" int vtableMarker3_005588d0;
struct DeletingDtorImport_005588d0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005588d0
void* DeletingDtorImport_005588d0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_005588d0;
	*(const void**)((char*)this + 4) = &vtableMarker1_005588d0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_005588d0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_005588d0;
	baseDtorChain();
	bool del = (flags & 1) != 0;
	if (del)
		deleteObject(this);
	return this;
}

extern "C" int vtableMarker0_0087b620;
extern "C" int vtableMarker1_0087b620;
extern "C" int vtableMarker2_0087b620;
extern "C" int vtableMarker3_0087b620;
extern "C" int vtableMarker4_0087b620;
extern "C" int vtableMarker5_0087b620;
struct DeletingDtorSixVptr_0087b620 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0087b620
void* DeletingDtorSixVptr_0087b620::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0087b620;
	*(const void**)((char*)this + 4) = &vtableMarker1_0087b620;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0087b620;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0087b620;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_0087b620;
	*(const void**)((char*)this + 0x68) = &vtableMarker5_0087b620;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0087dc20;
extern "C" int vtableMarker1_0087dc20;
extern "C" int vtableMarker2_0087dc20;
extern "C" int vtableMarker3_0087dc20;
extern "C" int vtableMarker4_0087dc20;
extern "C" int vtableMarker5_0087dc20;
struct DeletingDtorSixVptr_0087dc20 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0087dc20
void* DeletingDtorSixVptr_0087dc20::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0087dc20;
	*(const void**)((char*)this + 4) = &vtableMarker1_0087dc20;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0087dc20;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0087dc20;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_0087dc20;
	*(const void**)((char*)this + 0x68) = &vtableMarker5_0087dc20;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00880750;
extern "C" int vtableMarker1_00880750;
extern "C" int vtableMarker2_00880750;
extern "C" int vtableMarker3_00880750;
extern "C" int vtableMarker4_00880750;
extern "C" int vtableMarker5_00880750;
struct DeletingDtorSixVptr_00880750 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00880750
void* DeletingDtorSixVptr_00880750::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00880750;
	*(const void**)((char*)this + 4) = &vtableMarker1_00880750;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00880750;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00880750;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00880750;
	*(const void**)((char*)this + 0x68) = &vtableMarker5_00880750;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00884630;
extern "C" int vtableMarker1_00884630;
extern "C" int vtableMarker2_00884630;
extern "C" int vtableMarker3_00884630;
extern "C" int vtableMarker4_00884630;
extern "C" int vtableMarker5_00884630;
struct DeletingDtorSixVptr_00884630 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00884630
void* DeletingDtorSixVptr_00884630::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00884630;
	*(const void**)((char*)this + 4) = &vtableMarker1_00884630;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00884630;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00884630;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00884630;
	*(const void**)((char*)this + 0x68) = &vtableMarker5_00884630;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00885750;
extern "C" int vtableMarker1_00885750;
extern "C" int vtableMarker2_00885750;
extern "C" int vtableMarker3_00885750;
extern "C" int vtableMarker4_00885750;
extern "C" int vtableMarker5_00885750;
struct DeletingDtorSixVptr_00885750 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00885750
void* DeletingDtorSixVptr_00885750::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00885750;
	*(const void**)((char*)this + 4) = &vtableMarker1_00885750;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00885750;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00885750;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00885750;
	*(const void**)((char*)this + 0x68) = &vtableMarker5_00885750;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0090a690;
extern "C" int vtableMarker1_0090a690;
extern "C" int vtableMarker2_0090a690;
extern "C" int vtableMarker3_0090a690;
extern "C" int vtableMarker4_0090a690;
extern "C" int vtableMarker5_0090a690;
struct DeletingDtorSixVptr_0090a690 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0090a690
void* DeletingDtorSixVptr_0090a690::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0090a690;
	*(const void**)((char*)this + 4) = &vtableMarker1_0090a690;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0090a690;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0090a690;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_0090a690;
	*(const void**)((char*)this + 0x68) = &vtableMarker5_0090a690;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_0093b010;
extern "C" int vtableMarker1_0093b010;
extern "C" int vtableMarker2_0093b010;
extern "C" int vtableMarker3_0093b010;
extern "C" int vtableMarker4_0093b010;
extern "C" int vtableMarker5_0093b010;
struct DeletingDtorSixVptr_0093b010 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0093b010
void* DeletingDtorSixVptr_0093b010::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_0093b010;
	*(const void**)((char*)this + 4) = &vtableMarker1_0093b010;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_0093b010;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_0093b010;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_0093b010;
	*(const void**)((char*)this + 0x68) = &vtableMarker5_0093b010;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00981a40;
extern "C" int vtableMarker1_00981a40;
extern "C" int vtableMarker2_00981a40;
extern "C" int vtableMarker3_00981a40;
extern "C" int vtableMarker4_00981a40;
extern "C" int vtableMarker5_00981a40;
struct DeletingDtorSixVptr_00981a40 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00981a40
void* DeletingDtorSixVptr_00981a40::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00981a40;
	*(const void**)((char*)this + 4) = &vtableMarker1_00981a40;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00981a40;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00981a40;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00981a40;
	*(const void**)((char*)this + 0x68) = &vtableMarker5_00981a40;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00983330;
extern "C" int vtableMarker1_00983330;
extern "C" int vtableMarker2_00983330;
extern "C" int vtableMarker3_00983330;
extern "C" int vtableMarker4_00983330;
extern "C" int vtableMarker5_00983330;
struct DeletingDtorSixVptr_00983330 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00983330
void* DeletingDtorSixVptr_00983330::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00983330;
	*(const void**)((char*)this + 4) = &vtableMarker1_00983330;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00983330;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00983330;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00983330;
	*(const void**)((char*)this + 0x68) = &vtableMarker5_00983330;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a572b0;
extern "C" int vtableMarker1_00a572b0;
extern "C" int vtableMarker2_00a572b0;
extern "C" int vtableMarker3_00a572b0;
extern "C" int vtableMarker4_00a572b0;
extern "C" int vtableMarker5_00a572b0;
struct DeletingDtorSixVptr_00a572b0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a572b0
void* DeletingDtorSixVptr_00a572b0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a572b0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a572b0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a572b0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a572b0;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00a572b0;
	*(const void**)((char*)this + 0x68) = &vtableMarker5_00a572b0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a9b4a0;
extern "C" int vtableMarker1_00a9b4a0;
extern "C" int vtableMarker2_00a9b4a0;
extern "C" int vtableMarker3_00a9b4a0;
extern "C" int vtableMarker4_00a9b4a0;
extern "C" int vtableMarker5_00a9b4a0;
struct DeletingDtorSixVptr_00a9b4a0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a9b4a0
void* DeletingDtorSixVptr_00a9b4a0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a9b4a0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a9b4a0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a9b4a0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a9b4a0;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00a9b4a0;
	*(const void**)((char*)this + 0x68) = &vtableMarker5_00a9b4a0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00a9f850;
extern "C" int vtableMarker1_00a9f850;
extern "C" int vtableMarker2_00a9f850;
extern "C" int vtableMarker3_00a9f850;
extern "C" int vtableMarker4_00a9f850;
extern "C" int vtableMarker5_00a9f850;
struct DeletingDtorSixVptr_00a9f850 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a9f850
void* DeletingDtorSixVptr_00a9f850::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00a9f850;
	*(const void**)((char*)this + 4) = &vtableMarker1_00a9f850;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00a9f850;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00a9f850;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00a9f850;
	*(const void**)((char*)this + 0x68) = &vtableMarker5_00a9f850;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00ac8060;
extern "C" int vtableMarker1_00ac8060;
extern "C" int vtableMarker2_00ac8060;
extern "C" int vtableMarker3_00ac8060;
extern "C" int vtableMarker4_00ac8060;
extern "C" int vtableMarker5_00ac8060;
struct DeletingDtorSixVptr_00ac8060 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ac8060
void* DeletingDtorSixVptr_00ac8060::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00ac8060;
	*(const void**)((char*)this + 4) = &vtableMarker1_00ac8060;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00ac8060;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00ac8060;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00ac8060;
	*(const void**)((char*)this + 0x68) = &vtableMarker5_00ac8060;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vtableMarker0_00ae41c0;
extern "C" int vtableMarker1_00ae41c0;
extern "C" int vtableMarker2_00ae41c0;
extern "C" int vtableMarker3_00ae41c0;
extern "C" int vtableMarker4_00ae41c0;
extern "C" int vtableMarker5_00ae41c0;
struct DeletingDtorSixVptr_00ae41c0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ae41c0
void* DeletingDtorSixVptr_00ae41c0::destroy(int flags)
{
	*(const void**)((char*)this + 0) = &vtableMarker0_00ae41c0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00ae41c0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00ae41c0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00ae41c0;
	*(const void**)((char*)this + 0x64) = &vtableMarker4_00ae41c0;
	*(const void**)((char*)this + 0x68) = &vtableMarker5_00ae41c0;
	baseDtorChain();
	if (flags & 1)
		freeObject(this);
	return this;
}

// Variant that clears a global flag word before republishing four vtable slots.
extern "C" int globalFlag_00407d30;
extern "C" int vtableMarker0_00407d30;
extern "C" int vtableMarker1_00407d30;
extern "C" int vtableMarker2_00407d30;
extern "C" int vtableMarker3_00407d30;
struct DeletingDtorGlobal_00407d30 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00407d30
void* DeletingDtorGlobal_00407d30::destroy(int flags)
{
	globalFlag_00407d30 = 0;
	*(const void**)((char*)this + 0) = &vtableMarker0_00407d30;
	*(const void**)((char*)this + 4) = &vtableMarker1_00407d30;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00407d30;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00407d30;
	baseDtorChain();
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int globalFlag_00492eb0;
extern "C" int vtableMarker0_00492eb0;
extern "C" int vtableMarker1_00492eb0;
extern "C" int vtableMarker2_00492eb0;
extern "C" int vtableMarker3_00492eb0;
struct DeletingDtorGlobal_00492eb0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00492eb0
void* DeletingDtorGlobal_00492eb0::destroy(int flags)
{
	globalFlag_00492eb0 = 0;
	*(const void**)((char*)this + 0) = &vtableMarker0_00492eb0;
	*(const void**)((char*)this + 4) = &vtableMarker1_00492eb0;
	*(const void**)((char*)this + 0x18) = &vtableMarker2_00492eb0;
	*(const void**)((char*)this + 0x1c) = &vtableMarker3_00492eb0;
	baseDtorChain();
	if (flags & 1)
		deleteObject(this);
	return this;
}

