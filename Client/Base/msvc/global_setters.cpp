// Global setters that store their argument, and __fastcall import tail
// forwarders. Stores and jump targets are wildcarded.

extern "C" __declspec(dllimport) void __fastcall fastcallImport(void*);

extern "C" int gslot_00405150;
struct CGlobalSet_00405150 { void set(int); };
// FUNCTION: ROBLOXSTUDIO 0x00405150
void CGlobalSet_00405150::set(int v)
{
	gslot_00405150 = v;
}

extern "C" int gslot_00900040;
struct CGlobalSet_00900040 { void set(int); };
// FUNCTION: ROBLOXSTUDIO 0x00900040
void CGlobalSet_00900040::set(int v)
{
	gslot_00900040 = v;
}

extern "C" int gslot_00900070;
struct CGlobalSet_00900070 { void set(int); };
// FUNCTION: ROBLOXSTUDIO 0x00900070
void CGlobalSet_00900070::set(int v)
{
	gslot_00900070 = v;
}

extern "C" int gslot_009000f0;
struct CGlobalSet_009000f0 { void set(int); };
// FUNCTION: ROBLOXSTUDIO 0x009000f0
void CGlobalSet_009000f0::set(int v)
{
	gslot_009000f0 = v;
}
