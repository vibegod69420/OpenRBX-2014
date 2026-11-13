// Cleanup-then-delete destructors, global setters, import tail calls and
// vtable-store deleting destructors.

extern "C" void freeObject(void*);
extern "C" __declspec(dllimport) void __cdecl deleteObject(void*);
extern "C" __declspec(dllimport) void __fastcall fastcallImport(void*);

struct CCleanup_0041ea70 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0041ea70
void* CCleanup_0041ea70::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_005e39b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005e39b0
void* CCleanup_005e39b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_005e4af0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005e4af0
void* CCleanup_005e4af0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_005e4b20 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005e4b20
void* CCleanup_005e4b20::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_005e8740 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005e8740
void* CCleanup_005e8740::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_005e8810 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005e8810
void* CCleanup_005e8810::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_005eaf50 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005eaf50
void* CCleanup_005eaf50::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_005eb7b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005eb7b0
void* CCleanup_005eb7b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_005ec090 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005ec090
void* CCleanup_005ec090::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_006094e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x006094e0
void* CCleanup_006094e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0060a060 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0060a060
void* CCleanup_0060a060::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0060a090 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0060a090
void* CCleanup_0060a090::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0060a990 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0060a990
void* CCleanup_0060a990::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0060a9c0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0060a9c0
void* CCleanup_0060a9c0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0060dcf0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0060dcf0
void* CCleanup_0060dcf0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0060dd20 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0060dd20
void* CCleanup_0060dd20::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0060f2f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0060f2f0
void* CCleanup_0060f2f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00610340 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00610340
void* CCleanup_00610340::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00618ef0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00618ef0
void* CCleanup_00618ef0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00618f80 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00618f80
void* CCleanup_00618f80::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00619dc0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00619dc0
void* CCleanup_00619dc0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0061fba0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0061fba0
void* CCleanup_0061fba0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00626900 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00626900
void* CCleanup_00626900::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00626930 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00626930
void* CCleanup_00626930::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00626960 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00626960
void* CCleanup_00626960::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00654850 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00654850
void* CCleanup_00654850::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_006569e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x006569e0
void* CCleanup_006569e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_006656c0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x006656c0
void* CCleanup_006656c0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0066d700 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0066d700
void* CCleanup_0066d700::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00672330 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00672330
void* CCleanup_00672330::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00674300 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00674300
void* CCleanup_00674300::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00674330 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00674330
void* CCleanup_00674330::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0067d670 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0067d670
void* CCleanup_0067d670::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00698460 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00698460
void* CCleanup_00698460::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0069e5c0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0069e5c0
void* CCleanup_0069e5c0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_006adea0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x006adea0
void* CCleanup_006adea0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_006b7340 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x006b7340
void* CCleanup_006b7340::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_006b8d30 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x006b8d30
void* CCleanup_006b8d30::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007855b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007855b0
void* CCleanup_007855b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007856a0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007856a0
void* CCleanup_007856a0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007857b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007857b0
void* CCleanup_007857b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0078c3d0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0078c3d0
void* CCleanup_0078c3d0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007943b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007943b0
void* CCleanup_007943b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007a0c20 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007a0c20
void* CCleanup_007a0c20::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007a0f10 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007a0f10
void* CCleanup_007a0f10::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007a0f40 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007a0f40
void* CCleanup_007a0f40::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007b0d80 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007b0d80
void* CCleanup_007b0d80::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007b0e60 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007b0e60
void* CCleanup_007b0e60::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007b0f10 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007b0f10
void* CCleanup_007b0f10::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007ba690 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007ba690
void* CCleanup_007ba690::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007ba6c0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007ba6c0
void* CCleanup_007ba6c0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007ba6f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007ba6f0
void* CCleanup_007ba6f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007ba760 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007ba760
void* CCleanup_007ba760::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007c2400 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007c2400
void* CCleanup_007c2400::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007c2430 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007c2430
void* CCleanup_007c2430::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007c5940 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007c5940
void* CCleanup_007c5940::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007c59e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007c59e0
void* CCleanup_007c59e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007c91c0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007c91c0
void* CCleanup_007c91c0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007c91f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007c91f0
void* CCleanup_007c91f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_007d64c0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x007d64c0
void* CCleanup_007d64c0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d010 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d010
void* CCleanup_0080d010::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d040 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d040
void* CCleanup_0080d040::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d070 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d070
void* CCleanup_0080d070::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d0a0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d0a0
void* CCleanup_0080d0a0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d0d0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d0d0
void* CCleanup_0080d0d0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d100 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d100
void* CCleanup_0080d100::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d130 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d130
void* CCleanup_0080d130::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d160 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d160
void* CCleanup_0080d160::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d190 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d190
void* CCleanup_0080d190::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d1c0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d1c0
void* CCleanup_0080d1c0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d1f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d1f0
void* CCleanup_0080d1f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d220 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d220
void* CCleanup_0080d220::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d250 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d250
void* CCleanup_0080d250::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d280 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d280
void* CCleanup_0080d280::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d2b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d2b0
void* CCleanup_0080d2b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d2e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d2e0
void* CCleanup_0080d2e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d310 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d310
void* CCleanup_0080d310::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d340 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d340
void* CCleanup_0080d340::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d370 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d370
void* CCleanup_0080d370::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d3a0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d3a0
void* CCleanup_0080d3a0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d3d0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d3d0
void* CCleanup_0080d3d0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d400 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d400
void* CCleanup_0080d400::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d430 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d430
void* CCleanup_0080d430::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d460 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d460
void* CCleanup_0080d460::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d490 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d490
void* CCleanup_0080d490::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d4c0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d4c0
void* CCleanup_0080d4c0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d4f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d4f0
void* CCleanup_0080d4f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d520 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d520
void* CCleanup_0080d520::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d550 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d550
void* CCleanup_0080d550::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d580 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d580
void* CCleanup_0080d580::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d5b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d5b0
void* CCleanup_0080d5b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d5e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d5e0
void* CCleanup_0080d5e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d610 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d610
void* CCleanup_0080d610::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d640 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d640
void* CCleanup_0080d640::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d670 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d670
void* CCleanup_0080d670::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d6a0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d6a0
void* CCleanup_0080d6a0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d6d0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d6d0
void* CCleanup_0080d6d0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d700 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d700
void* CCleanup_0080d700::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d730 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d730
void* CCleanup_0080d730::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d760 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d760
void* CCleanup_0080d760::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d790 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d790
void* CCleanup_0080d790::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d7c0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d7c0
void* CCleanup_0080d7c0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d7f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d7f0
void* CCleanup_0080d7f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d820 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d820
void* CCleanup_0080d820::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d850 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d850
void* CCleanup_0080d850::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d880 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d880
void* CCleanup_0080d880::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d8b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d8b0
void* CCleanup_0080d8b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d8e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d8e0
void* CCleanup_0080d8e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d910 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d910
void* CCleanup_0080d910::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d940 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d940
void* CCleanup_0080d940::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d970 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d970
void* CCleanup_0080d970::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d9a0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d9a0
void* CCleanup_0080d9a0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080d9d0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080d9d0
void* CCleanup_0080d9d0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080da00 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080da00
void* CCleanup_0080da00::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080da30 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080da30
void* CCleanup_0080da30::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080da60 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080da60
void* CCleanup_0080da60::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080da90 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080da90
void* CCleanup_0080da90::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080dac0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080dac0
void* CCleanup_0080dac0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080daf0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080daf0
void* CCleanup_0080daf0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080db20 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080db20
void* CCleanup_0080db20::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080db50 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080db50
void* CCleanup_0080db50::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080db80 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080db80
void* CCleanup_0080db80::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080dbb0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080dbb0
void* CCleanup_0080dbb0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080dbe0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080dbe0
void* CCleanup_0080dbe0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080dc10 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080dc10
void* CCleanup_0080dc10::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080dc40 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080dc40
void* CCleanup_0080dc40::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080dc70 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080dc70
void* CCleanup_0080dc70::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080dca0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080dca0
void* CCleanup_0080dca0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080dcd0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080dcd0
void* CCleanup_0080dcd0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080dd00 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080dd00
void* CCleanup_0080dd00::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080dd30 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080dd30
void* CCleanup_0080dd30::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080dd60 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080dd60
void* CCleanup_0080dd60::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080dd90 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080dd90
void* CCleanup_0080dd90::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080ddc0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080ddc0
void* CCleanup_0080ddc0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080ddf0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080ddf0
void* CCleanup_0080ddf0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080de20 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080de20
void* CCleanup_0080de20::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080de50 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080de50
void* CCleanup_0080de50::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080de80 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080de80
void* CCleanup_0080de80::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080deb0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080deb0
void* CCleanup_0080deb0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080dee0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080dee0
void* CCleanup_0080dee0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080df10 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080df10
void* CCleanup_0080df10::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080df40 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080df40
void* CCleanup_0080df40::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080df70 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080df70
void* CCleanup_0080df70::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080dfa0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080dfa0
void* CCleanup_0080dfa0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080dfd0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080dfd0
void* CCleanup_0080dfd0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080e000 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e000
void* CCleanup_0080e000::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080e030 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e030
void* CCleanup_0080e030::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080e060 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e060
void* CCleanup_0080e060::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080e490 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e490
void* CCleanup_0080e490::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080e4c0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e4c0
void* CCleanup_0080e4c0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080e4f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e4f0
void* CCleanup_0080e4f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080e520 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e520
void* CCleanup_0080e520::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080e550 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e550
void* CCleanup_0080e550::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080e580 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e580
void* CCleanup_0080e580::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080e5b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e5b0
void* CCleanup_0080e5b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080e5e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e5e0
void* CCleanup_0080e5e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080e610 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e610
void* CCleanup_0080e610::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080e640 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e640
void* CCleanup_0080e640::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080e670 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e670
void* CCleanup_0080e670::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080e6a0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e6a0
void* CCleanup_0080e6a0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0080e6d0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0080e6d0
void* CCleanup_0080e6d0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00825fb0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00825fb0
void* CCleanup_00825fb0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00829e40 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00829e40
void* CCleanup_00829e40::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00829e70 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00829e70
void* CCleanup_00829e70::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00829ea0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00829ea0
void* CCleanup_00829ea0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00849ca0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00849ca0
void* CCleanup_00849ca0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00849cd0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00849cd0
void* CCleanup_00849cd0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00849d00 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00849d00
void* CCleanup_00849d00::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0084a0b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0084a0b0
void* CCleanup_0084a0b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0084a0e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0084a0e0
void* CCleanup_0084a0e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0084a110 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0084a110
void* CCleanup_0084a110::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0086c3a0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0086c3a0
void* CCleanup_0086c3a0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0086c470 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0086c470
void* CCleanup_0086c470::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0086c4a0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0086c4a0
void* CCleanup_0086c4a0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0086c4d0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0086c4d0
void* CCleanup_0086c4d0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0087b670 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0087b670
void* CCleanup_0087b670::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0087dc70 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0087dc70
void* CCleanup_0087dc70::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008807a0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008807a0
void* CCleanup_008807a0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00884680 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00884680
void* CCleanup_00884680::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008857a0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008857a0
void* CCleanup_008857a0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0088f160 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0088f160
void* CCleanup_0088f160::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0088f2e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0088f2e0
void* CCleanup_0088f2e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0088f310 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0088f310
void* CCleanup_0088f310::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0088f340 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0088f340
void* CCleanup_0088f340::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0089a340 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0089a340
void* CCleanup_0089a340::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008a1010 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008a1010
void* CCleanup_008a1010::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008a1100 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008a1100
void* CCleanup_008a1100::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008a1130 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008a1130
void* CCleanup_008a1130::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008a7430 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008a7430
void* CCleanup_008a7430::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008a9ce0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008a9ce0
void* CCleanup_008a9ce0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008abc70 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008abc70
void* CCleanup_008abc70::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008abca0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008abca0
void* CCleanup_008abca0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008abcd0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008abcd0
void* CCleanup_008abcd0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008abd00 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008abd00
void* CCleanup_008abd00::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008bb510 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008bb510
void* CCleanup_008bb510::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008bc5d0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008bc5d0
void* CCleanup_008bc5d0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008c40c0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008c40c0
void* CCleanup_008c40c0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008d1ba0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008d1ba0
void* CCleanup_008d1ba0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008d1c90 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008d1c90
void* CCleanup_008d1c90::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008edf10 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008edf10
void* CCleanup_008edf10::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008edf40 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008edf40
void* CCleanup_008edf40::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008edfe0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008edfe0
void* CCleanup_008edfe0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_008f5230 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x008f5230
void* CCleanup_008f5230::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00901200 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00901200
void* CCleanup_00901200::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00902280 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00902280
void* CCleanup_00902280::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009062f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009062f0
void* CCleanup_009062f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00908510 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00908510
void* CCleanup_00908510::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0090a6e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0090a6e0
void* CCleanup_0090a6e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0090a710 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0090a710
void* CCleanup_0090a710::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0090a740 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0090a740
void* CCleanup_0090a740::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0090d400 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0090d400
void* CCleanup_0090d400::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0090fe00 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0090fe00
void* CCleanup_0090fe00::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0090fe30 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0090fe30
void* CCleanup_0090fe30::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0090fe60 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0090fe60
void* CCleanup_0090fe60::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009134e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009134e0
void* CCleanup_009134e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00913610 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00913610
void* CCleanup_00913610::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00916a80 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00916a80
void* CCleanup_00916a80::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00916ab0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00916ab0
void* CCleanup_00916ab0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00916ae0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00916ae0
void* CCleanup_00916ae0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00916b10 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00916b10
void* CCleanup_00916b10::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00919a40 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00919a40
void* CCleanup_00919a40::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00919a70 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00919a70
void* CCleanup_00919a70::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00919aa0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00919aa0
void* CCleanup_00919aa0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00919b10 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00919b10
void* CCleanup_00919b10::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009235b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009235b0
void* CCleanup_009235b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009235e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009235e0
void* CCleanup_009235e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00928660 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00928660
void* CCleanup_00928660::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00933520 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00933520
void* CCleanup_00933520::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00935440 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00935440
void* CCleanup_00935440::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009378f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009378f0
void* CCleanup_009378f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0093b060 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0093b060
void* CCleanup_0093b060::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00941320 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00941320
void* CCleanup_00941320::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00941350 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00941350
void* CCleanup_00941350::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00941380 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00941380
void* CCleanup_00941380::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009413b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009413b0
void* CCleanup_009413b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009538c0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009538c0
void* CCleanup_009538c0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0095d480 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0095d480
void* CCleanup_0095d480::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0095d540 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0095d540
void* CCleanup_0095d540::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00960ad0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00960ad0
void* CCleanup_00960ad0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009657f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009657f0
void* CCleanup_009657f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00965820 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00965820
void* CCleanup_00965820::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00965850 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00965850
void* CCleanup_00965850::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009658c0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009658c0
void* CCleanup_009658c0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009658f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009658f0
void* CCleanup_009658f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00965a40 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00965a40
void* CCleanup_00965a40::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0096fb90 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0096fb90
void* CCleanup_0096fb90::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009764b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009764b0
void* CCleanup_009764b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0097f7b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0097f7b0
void* CCleanup_0097f7b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00981000 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00981000
void* CCleanup_00981000::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00982620 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00982620
void* CCleanup_00982620::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00982650 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00982650
void* CCleanup_00982650::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00983380 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00983380
void* CCleanup_00983380::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00984710 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00984710
void* CCleanup_00984710::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009872e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009872e0
void* CCleanup_009872e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00987310 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00987310
void* CCleanup_00987310::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0098c1e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0098c1e0
void* CCleanup_0098c1e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0098c290 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0098c290
void* CCleanup_0098c290::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0098c2c0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0098c2c0
void* CCleanup_0098c2c0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0099bfe0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0099bfe0
void* CCleanup_0099bfe0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0099c010 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0099c010
void* CCleanup_0099c010::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0099c110 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0099c110
void* CCleanup_0099c110::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0099c170 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0099c170
void* CCleanup_0099c170::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0099c1a0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0099c1a0
void* CCleanup_0099c1a0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_0099fab0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0099fab0
void* CCleanup_0099fab0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009aa5f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009aa5f0
void* CCleanup_009aa5f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009aa620 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009aa620
void* CCleanup_009aa620::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009b4ce0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009b4ce0
void* CCleanup_009b4ce0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009b4de0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009b4de0
void* CCleanup_009b4de0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009b4e10 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009b4e10
void* CCleanup_009b4e10::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009b8250 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009b8250
void* CCleanup_009b8250::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009bd4f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009bd4f0
void* CCleanup_009bd4f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009cb9e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009cb9e0
void* CCleanup_009cb9e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009d3ed0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009d3ed0
void* CCleanup_009d3ed0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009d3fb0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009d3fb0
void* CCleanup_009d3fb0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009d3fe0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009d3fe0
void* CCleanup_009d3fe0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009e8e90 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009e8e90
void* CCleanup_009e8e90::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009e8ec0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009e8ec0
void* CCleanup_009e8ec0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009f8630 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009f8630
void* CCleanup_009f8630::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009f8660 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009f8660
void* CCleanup_009f8660::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_009fbee0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x009fbee0
void* CCleanup_009fbee0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a01a10 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a01a10
void* CCleanup_00a01a10::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a025e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a025e0
void* CCleanup_00a025e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a02610 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a02610
void* CCleanup_00a02610::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a0b090 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a0b090
void* CCleanup_00a0b090::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a0ba60 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a0ba60
void* CCleanup_00a0ba60::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a0c420 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a0c420
void* CCleanup_00a0c420::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a0cb10 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a0cb10
void* CCleanup_00a0cb10::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a0de10 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a0de10
void* CCleanup_00a0de10::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a1bc40 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a1bc40
void* CCleanup_00a1bc40::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a1bcb0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a1bcb0
void* CCleanup_00a1bcb0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a1bce0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a1bce0
void* CCleanup_00a1bce0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a2d0c0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a2d0c0
void* CCleanup_00a2d0c0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a2d0f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a2d0f0
void* CCleanup_00a2d0f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a2d120 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a2d120
void* CCleanup_00a2d120::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a2d150 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a2d150
void* CCleanup_00a2d150::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a2d180 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a2d180
void* CCleanup_00a2d180::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a2d1b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a2d1b0
void* CCleanup_00a2d1b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a32090 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a32090
void* CCleanup_00a32090::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a49f00 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a49f00
void* CCleanup_00a49f00::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a49f30 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a49f30
void* CCleanup_00a49f30::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a51710 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a51710
void* CCleanup_00a51710::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a54c80 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a54c80
void* CCleanup_00a54c80::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a57300 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a57300
void* CCleanup_00a57300::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a5b4f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a5b4f0
void* CCleanup_00a5b4f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a5ee70 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a5ee70
void* CCleanup_00a5ee70::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a60d30 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a60d30
void* CCleanup_00a60d30::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a62230 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a62230
void* CCleanup_00a62230::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a64280 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a64280
void* CCleanup_00a64280::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a69400 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a69400
void* CCleanup_00a69400::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a6ebb0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a6ebb0
void* CCleanup_00a6ebb0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a6ec20 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a6ec20
void* CCleanup_00a6ec20::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a6fc10 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a6fc10
void* CCleanup_00a6fc10::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a77010 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a77010
void* CCleanup_00a77010::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a77040 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a77040
void* CCleanup_00a77040::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a770f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a770f0
void* CCleanup_00a770f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a77120 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a77120
void* CCleanup_00a77120::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a7ffb0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a7ffb0
void* CCleanup_00a7ffb0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a86810 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a86810
void* CCleanup_00a86810::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a86880 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a86880
void* CCleanup_00a86880::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a868b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a868b0
void* CCleanup_00a868b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a868e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a868e0
void* CCleanup_00a868e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a86960 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a86960
void* CCleanup_00a86960::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a8b6e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a8b6e0
void* CCleanup_00a8b6e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a8b710 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a8b710
void* CCleanup_00a8b710::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a8d4a0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a8d4a0
void* CCleanup_00a8d4a0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a8ef60 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a8ef60
void* CCleanup_00a8ef60::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a90320 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a90320
void* CCleanup_00a90320::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a90350 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a90350
void* CCleanup_00a90350::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a90380 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a90380
void* CCleanup_00a90380::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a958a0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a958a0
void* CCleanup_00a958a0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a958d0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a958d0
void* CCleanup_00a958d0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a95960 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a95960
void* CCleanup_00a95960::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a9b4f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a9b4f0
void* CCleanup_00a9b4f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00a9f8a0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00a9f8a0
void* CCleanup_00a9f8a0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aa1f50 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aa1f50
void* CCleanup_00aa1f50::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aa2c20 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aa2c20
void* CCleanup_00aa2c20::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aa2c50 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aa2c50
void* CCleanup_00aa2c50::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aa2c80 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aa2c80
void* CCleanup_00aa2c80::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aa2ee0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aa2ee0
void* CCleanup_00aa2ee0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aa5fa0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aa5fa0
void* CCleanup_00aa5fa0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aa5fd0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aa5fd0
void* CCleanup_00aa5fd0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aaab40 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aaab40
void* CCleanup_00aaab40::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aac520 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aac520
void* CCleanup_00aac520::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aac550 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aac550
void* CCleanup_00aac550::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aac580 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aac580
void* CCleanup_00aac580::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aad5f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aad5f0
void* CCleanup_00aad5f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aaded0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aaded0
void* CCleanup_00aaded0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aaee90 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aaee90
void* CCleanup_00aaee90::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aaf6f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aaf6f0
void* CCleanup_00aaf6f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aba320 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aba320
void* CCleanup_00aba320::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aba350 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aba350
void* CCleanup_00aba350::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aba380 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aba380
void* CCleanup_00aba380::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aba3b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aba3b0
void* CCleanup_00aba3b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00aba420 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00aba420
void* CCleanup_00aba420::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ac80b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ac80b0
void* CCleanup_00ac80b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ac9730 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ac9730
void* CCleanup_00ac9730::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ac9760 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ac9760
void* CCleanup_00ac9760::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00acac10 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00acac10
void* CCleanup_00acac10::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00acc010 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00acc010
void* CCleanup_00acc010::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00acd500 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00acd500
void* CCleanup_00acd500::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ad12a0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ad12a0
void* CCleanup_00ad12a0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ad8170 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ad8170
void* CCleanup_00ad8170::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ad8250 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ad8250
void* CCleanup_00ad8250::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ad9bb0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ad9bb0
void* CCleanup_00ad9bb0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ae4210 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ae4210
void* CCleanup_00ae4210::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ae9b20 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ae9b20
void* CCleanup_00ae9b20::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00af2350 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00af2350
void* CCleanup_00af2350::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00af3780 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00af3780
void* CCleanup_00af3780::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00afa970 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00afa970
void* CCleanup_00afa970::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00afa9a0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00afa9a0
void* CCleanup_00afa9a0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00afaa30 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00afaa30
void* CCleanup_00afaa30::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b035b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b035b0
void* CCleanup_00b035b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b035e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b035e0
void* CCleanup_00b035e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b03610 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b03610
void* CCleanup_00b03610::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b036d0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b036d0
void* CCleanup_00b036d0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b0ae30 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b0ae30
void* CCleanup_00b0ae30::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b0dae0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b0dae0
void* CCleanup_00b0dae0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b0fb80 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b0fb80
void* CCleanup_00b0fb80::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b10880 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b10880
void* CCleanup_00b10880::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b11570 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b11570
void* CCleanup_00b11570::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b14080 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b14080
void* CCleanup_00b14080::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b179d0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b179d0
void* CCleanup_00b179d0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b1a930 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b1a930
void* CCleanup_00b1a930::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b1d7f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b1d7f0
void* CCleanup_00b1d7f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b20a20 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b20a20
void* CCleanup_00b20a20::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b2ea30 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b2ea30
void* CCleanup_00b2ea30::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b2ea60 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b2ea60
void* CCleanup_00b2ea60::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b2ea90 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b2ea90
void* CCleanup_00b2ea90::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b2eb50 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b2eb50
void* CCleanup_00b2eb50::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b36aa0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b36aa0
void* CCleanup_00b36aa0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b36ad0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b36ad0
void* CCleanup_00b36ad0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b47fb0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b47fb0
void* CCleanup_00b47fb0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b51510 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b51510
void* CCleanup_00b51510::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b5b3d0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b5b3d0
void* CCleanup_00b5b3d0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b5c8b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b5c8b0
void* CCleanup_00b5c8b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b5cf80 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b5cf80
void* CCleanup_00b5cf80::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b5f090 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b5f090
void* CCleanup_00b5f090::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b608b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b608b0
void* CCleanup_00b608b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b83e40 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b83e40
void* CCleanup_00b83e40::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b89220 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b89220
void* CCleanup_00b89220::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b8d250 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b8d250
void* CCleanup_00b8d250::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b920f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b920f0
void* CCleanup_00b920f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b92800 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b92800
void* CCleanup_00b92800::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b92dd0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b92dd0
void* CCleanup_00b92dd0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b97210 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b97210
void* CCleanup_00b97210::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b97280 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b97280
void* CCleanup_00b97280::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b972b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b972b0
void* CCleanup_00b972b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b972e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b972e0
void* CCleanup_00b972e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00b97310 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00b97310
void* CCleanup_00b97310::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ba1900 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ba1900
void* CCleanup_00ba1900::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ba2630 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ba2630
void* CCleanup_00ba2630::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ba3cc0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ba3cc0
void* CCleanup_00ba3cc0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ba40f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ba40f0
void* CCleanup_00ba40f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ba4620 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ba4620
void* CCleanup_00ba4620::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ba5390 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ba5390
void* CCleanup_00ba5390::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ba8ea0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ba8ea0
void* CCleanup_00ba8ea0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00baa3b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00baa3b0
void* CCleanup_00baa3b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00bbd920 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00bbd920
void* CCleanup_00bbd920::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00bd01c0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00bd01c0
void* CCleanup_00bd01c0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00bd0210 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00bd0210
void* CCleanup_00bd0210::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00bd40b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00bd40b0
void* CCleanup_00bd40b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00bd4110 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00bd4110
void* CCleanup_00bd4110::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00bd6cf0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00bd6cf0
void* CCleanup_00bd6cf0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00bd7d90 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00bd7d90
void* CCleanup_00bd7d90::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00bd8fd0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00bd8fd0
void* CCleanup_00bd8fd0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00bdc630 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00bdc630
void* CCleanup_00bdc630::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00bdd030 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00bdd030
void* CCleanup_00bdd030::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00be5a60 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00be5a60
void* CCleanup_00be5a60::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00be5a90 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00be5a90
void* CCleanup_00be5a90::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00be5ac0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00be5ac0
void* CCleanup_00be5ac0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00bf8c20 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00bf8c20
void* CCleanup_00bf8c20::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00bfda50 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00bfda50
void* CCleanup_00bfda50::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00bfdb10 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00bfdb10
void* CCleanup_00bfdb10::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c04dc0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c04dc0
void* CCleanup_00c04dc0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c05300 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c05300
void* CCleanup_00c05300::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c05910 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c05910
void* CCleanup_00c05910::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c05eb0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c05eb0
void* CCleanup_00c05eb0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c0f330 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c0f330
void* CCleanup_00c0f330::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c10230 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c10230
void* CCleanup_00c10230::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c12760 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c12760
void* CCleanup_00c12760::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c12ff0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c12ff0
void* CCleanup_00c12ff0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c14ed0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c14ed0
void* CCleanup_00c14ed0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c15390 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c15390
void* CCleanup_00c15390::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c15700 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c15700
void* CCleanup_00c15700::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c1c2f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c1c2f0
void* CCleanup_00c1c2f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c29ec0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c29ec0
void* CCleanup_00c29ec0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c29ef0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c29ef0
void* CCleanup_00c29ef0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c29f20 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c29f20
void* CCleanup_00c29f20::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c2a050 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c2a050
void* CCleanup_00c2a050::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c43da0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c43da0
void* CCleanup_00c43da0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c43dd0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c43dd0
void* CCleanup_00c43dd0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c43e00 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c43e00
void* CCleanup_00c43e00::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c43ff0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c43ff0
void* CCleanup_00c43ff0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c535a0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c535a0
void* CCleanup_00c535a0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c535d0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c535d0
void* CCleanup_00c535d0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c53600 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c53600
void* CCleanup_00c53600::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c53630 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c53630
void* CCleanup_00c53630::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c53660 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c53660
void* CCleanup_00c53660::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c57180 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c57180
void* CCleanup_00c57180::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c5ab60 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c5ab60
void* CCleanup_00c5ab60::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c5ab90 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c5ab90
void* CCleanup_00c5ab90::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c5dc60 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c5dc60
void* CCleanup_00c5dc60::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c5dc90 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c5dc90
void* CCleanup_00c5dc90::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c615e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c615e0
void* CCleanup_00c615e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c67970 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c67970
void* CCleanup_00c67970::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c6a630 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c6a630
void* CCleanup_00c6a630::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c6a660 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c6a660
void* CCleanup_00c6a660::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c70750 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c70750
void* CCleanup_00c70750::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c7e790 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c7e790
void* CCleanup_00c7e790::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c7e890 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c7e890
void* CCleanup_00c7e890::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c7e8c0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c7e8c0
void* CCleanup_00c7e8c0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c7e8f0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c7e8f0
void* CCleanup_00c7e8f0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c93cc0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c93cc0
void* CCleanup_00c93cc0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c95990 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c95990
void* CCleanup_00c95990::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c95a10 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c95a10
void* CCleanup_00c95a10::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c9be10 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c9be10
void* CCleanup_00c9be10::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c9f420 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c9f420
void* CCleanup_00c9f420::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00c9f4a0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00c9f4a0
void* CCleanup_00c9f4a0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ca3c70 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ca3c70
void* CCleanup_00ca3c70::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ca3ca0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ca3ca0
void* CCleanup_00ca3ca0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ca3cd0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ca3cd0
void* CCleanup_00ca3cd0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00cb1ed0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00cb1ed0
void* CCleanup_00cb1ed0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00cb1f00 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00cb1f00
void* CCleanup_00cb1f00::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00cbacd0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00cbacd0
void* CCleanup_00cbacd0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ccbb80 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ccbb80
void* CCleanup_00ccbb80::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ccbbb0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ccbbb0
void* CCleanup_00ccbbb0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00cd3ef0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00cd3ef0
void* CCleanup_00cd3ef0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00cd76b0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00cd76b0
void* CCleanup_00cd76b0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00cda1e0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00cda1e0
void* CCleanup_00cda1e0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00cdd760 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00cdd760
void* CCleanup_00cdd760::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ce1130 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ce1130
void* CCleanup_00ce1130::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

struct CCleanup_00ce42d0 { void cleanup(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00ce42d0
void* CCleanup_00ce42d0::destroy(int flags)
{
	cleanup();
	if (flags & 1)
		freeObject(this);
	return this;
}

extern "C" int vt_00407dc0;
struct CVptrDel_00407dc0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00407dc0
void* CVptrDel_00407dc0::destroy(int flags)
{
	*(const void**)this = &vt_00407dc0;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_0040dfe0;
struct CVptrDel_0040dfe0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0040dfe0
void* CVptrDel_0040dfe0::destroy(int flags)
{
	*(const void**)this = &vt_0040dfe0;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_00427510;
struct CVptrDel_00427510 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00427510
void* CVptrDel_00427510::destroy(int flags)
{
	*(const void**)this = &vt_00427510;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_004279e0;
struct CVptrDel_004279e0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004279e0
void* CVptrDel_004279e0::destroy(int flags)
{
	*(const void**)this = &vt_004279e0;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_00450f40;
struct CVptrDel_00450f40 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00450f40
void* CVptrDel_00450f40::destroy(int flags)
{
	*(const void**)this = &vt_00450f40;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_0045f370;
struct CVptrDel_0045f370 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0045f370
void* CVptrDel_0045f370::destroy(int flags)
{
	*(const void**)this = &vt_0045f370;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_00496320;
struct CVptrDel_00496320 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00496320
void* CVptrDel_00496320::destroy(int flags)
{
	*(const void**)this = &vt_00496320;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_004b6690;
struct CVptrDel_004b6690 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004b6690
void* CVptrDel_004b6690::destroy(int flags)
{
	*(const void**)this = &vt_004b6690;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_0058e4b0;
struct CVptrDel_0058e4b0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0058e4b0
void* CVptrDel_0058e4b0::destroy(int flags)
{
	*(const void**)this = &vt_0058e4b0;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_0058e4e0;
struct CVptrDel_0058e4e0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0058e4e0
void* CVptrDel_0058e4e0::destroy(int flags)
{
	*(const void**)this = &vt_0058e4e0;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_0058ec00;
struct CVptrDel_0058ec00 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0058ec00
void* CVptrDel_0058ec00::destroy(int flags)
{
	*(const void**)this = &vt_0058ec00;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_0058f6c0;
struct CVptrDel_0058f6c0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0058f6c0
void* CVptrDel_0058f6c0::destroy(int flags)
{
	*(const void**)this = &vt_0058f6c0;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_0058f7f0;
struct CVptrDel_0058f7f0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0058f7f0
void* CVptrDel_0058f7f0::destroy(int flags)
{
	*(const void**)this = &vt_0058f7f0;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_00591700;
struct CVptrDel_00591700 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00591700
void* CVptrDel_00591700::destroy(int flags)
{
	*(const void**)this = &vt_00591700;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_005947b0;
struct CVptrDel_005947b0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005947b0
void* CVptrDel_005947b0::destroy(int flags)
{
	*(const void**)this = &vt_005947b0;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_005964d0;
struct CVptrDel_005964d0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005964d0
void* CVptrDel_005964d0::destroy(int flags)
{
	*(const void**)this = &vt_005964d0;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_00596540;
struct CVptrDel_00596540 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00596540
void* CVptrDel_00596540::destroy(int flags)
{
	*(const void**)this = &vt_00596540;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_00597740;
struct CVptrDel_00597740 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00597740
void* CVptrDel_00597740::destroy(int flags)
{
	*(const void**)this = &vt_00597740;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_0059a680;
struct CVptrDel_0059a680 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0059a680
void* CVptrDel_0059a680::destroy(int flags)
{
	*(const void**)this = &vt_0059a680;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_0059b680;
struct CVptrDel_0059b680 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0059b680
void* CVptrDel_0059b680::destroy(int flags)
{
	*(const void**)this = &vt_0059b680;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_0059b870;
struct CVptrDel_0059b870 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0059b870
void* CVptrDel_0059b870::destroy(int flags)
{
	*(const void**)this = &vt_0059b870;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_005a0530;
struct CVptrDel_005a0530 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005a0530
void* CVptrDel_005a0530::destroy(int flags)
{
	*(const void**)this = &vt_005a0530;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_005a1cc0;
struct CVptrDel_005a1cc0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005a1cc0
void* CVptrDel_005a1cc0::destroy(int flags)
{
	*(const void**)this = &vt_005a1cc0;
	if (flags & 1)
		deleteObject(this);
	return this;
}

extern "C" int vt_005b16d0;
struct CVptrDel_005b16d0 { void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005b16d0
void* CVptrDel_005b16d0::destroy(int flags)
{
	*(const void**)this = &vt_005b16d0;
	if (flags & 1)
		deleteObject(this);
	return this;
}
