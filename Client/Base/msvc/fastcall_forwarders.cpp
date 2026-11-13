// __fastcall import tail forwarders. Jump targets are wildcarded.

extern "C" __declspec(dllimport) void __fastcall fastcallImport(void*);

// FUNCTION: ROBLOXSTUDIO 0x0040d7a0
void fastcallForward_0040d7a0(void* p)
{
	fastcallImport(p);
}

// FUNCTION: ROBLOXSTUDIO 0x0040d800
void fastcallForward_0040d800(void* p)
{
	fastcallImport(p);
}
