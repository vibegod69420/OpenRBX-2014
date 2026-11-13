// Scalar deleting destructors whose destructor is also reached through an
// import slot: call the destructor, conditionally free, return the object.

extern "C" __declspec(dllimport) void __cdecl callDestructor();
extern "C" __declspec(dllimport) void __cdecl deleteObject(void*);

struct DeletingDtorImport_004022c0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004022c0
void* DeletingDtorImport_004022c0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004122b0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004122b0
void* DeletingDtorImport_004122b0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004135b0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004135b0
void* DeletingDtorImport_004135b0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004135e0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004135e0
void* DeletingDtorImport_004135e0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00413610 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00413610
void* DeletingDtorImport_00413610::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00413640 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00413640
void* DeletingDtorImport_00413640::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00414960 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00414960
void* DeletingDtorImport_00414960::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00414e50 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00414e50
void* DeletingDtorImport_00414e50::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00414e80 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00414e80
void* DeletingDtorImport_00414e80::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00416b80 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00416b80
void* DeletingDtorImport_00416b80::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_0043fc00 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0043fc00
void* DeletingDtorImport_0043fc00::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00441f00 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00441f00
void* DeletingDtorImport_00441f00::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00442de0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00442de0
void* DeletingDtorImport_00442de0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00444ef0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00444ef0
void* DeletingDtorImport_00444ef0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00444f20 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00444f20
void* DeletingDtorImport_00444f20::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004461d0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004461d0
void* DeletingDtorImport_004461d0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00447450 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00447450
void* DeletingDtorImport_00447450::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00447840 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00447840
void* DeletingDtorImport_00447840::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00447fe0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00447fe0
void* DeletingDtorImport_00447fe0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_0044f810 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0044f810
void* DeletingDtorImport_0044f810::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004525d0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004525d0
void* DeletingDtorImport_004525d0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00453120 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00453120
void* DeletingDtorImport_00453120::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00455ed0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00455ed0
void* DeletingDtorImport_00455ed0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00460940 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00460940
void* DeletingDtorImport_00460940::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00461180 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00461180
void* DeletingDtorImport_00461180::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004611b0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004611b0
void* DeletingDtorImport_004611b0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00462410 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00462410
void* DeletingDtorImport_00462410::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00467fe0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00467fe0
void* DeletingDtorImport_00467fe0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00468010 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00468010
void* DeletingDtorImport_00468010::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00470fe0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00470fe0
void* DeletingDtorImport_00470fe0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004712e0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004712e0
void* DeletingDtorImport_004712e0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00471fe0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00471fe0
void* DeletingDtorImport_00471fe0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00479af0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00479af0
void* DeletingDtorImport_00479af0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_0047a7c0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0047a7c0
void* DeletingDtorImport_0047a7c0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_0049ac30 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0049ac30
void* DeletingDtorImport_0049ac30::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_0049ad70 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0049ad70
void* DeletingDtorImport_0049ad70::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004a2700 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004a2700
void* DeletingDtorImport_004a2700::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004aa590 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004aa590
void* DeletingDtorImport_004aa590::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004aafa0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004aafa0
void* DeletingDtorImport_004aafa0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004d2d10 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004d2d10
void* DeletingDtorImport_004d2d10::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004d5b70 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004d5b70
void* DeletingDtorImport_004d5b70::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004e98d0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004e98d0
void* DeletingDtorImport_004e98d0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004e9900 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004e9900
void* DeletingDtorImport_004e9900::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004e9930 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004e9930
void* DeletingDtorImport_004e9930::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004e9960 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004e9960
void* DeletingDtorImport_004e9960::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004f1290 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004f1290
void* DeletingDtorImport_004f1290::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004f3ff0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004f3ff0
void* DeletingDtorImport_004f3ff0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004f6be0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004f6be0
void* DeletingDtorImport_004f6be0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004f7f40 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004f7f40
void* DeletingDtorImport_004f7f40::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004f8970 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004f8970
void* DeletingDtorImport_004f8970::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_004f9b50 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004f9b50
void* DeletingDtorImport_004f9b50::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00509800 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00509800
void* DeletingDtorImport_00509800::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00509dc0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00509dc0
void* DeletingDtorImport_00509dc0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_0050a030 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0050a030
void* DeletingDtorImport_0050a030::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_0050d870 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0050d870
void* DeletingDtorImport_0050d870::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_0050d8a0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0050d8a0
void* DeletingDtorImport_0050d8a0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_005103f0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005103f0
void* DeletingDtorImport_005103f0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00514d10 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00514d10
void* DeletingDtorImport_00514d10::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_00515a20 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00515a20
void* DeletingDtorImport_00515a20::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_0052ff20 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0052ff20
void* DeletingDtorImport_0052ff20::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_0053c960 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0053c960
void* DeletingDtorImport_0053c960::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtorImport_005677c0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005677c0
void* DeletingDtorImport_005677c0::destroy(int flags)
{
	callDestructor();
	if (flags & 1)
		deleteObject(this);
	return this;
}
