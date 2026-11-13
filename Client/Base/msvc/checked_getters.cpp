// Asserted reference getters: assert the holder pointer, return the referenced
// object, or a shared empty object when the reference is null.
extern "C" __declspec(dllimport) void rbxAssertFail(const char*, const char*, int);

extern "C" char gEmpty_00454360[];
struct CRefNode_00454360 { char pad[0x18]; void* f; };
struct CRef_00454360 { char pad[0x4]; CRefNode_00454360* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00454360
void* CRef_00454360::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00454360;
}

extern "C" char gEmpty_004544d0[];
struct CRefNode_004544d0 { char pad[0x18]; void* f; };
struct CRef_004544d0 { char pad[0x4]; CRefNode_004544d0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x004544d0
void* CRef_004544d0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_004544d0;
}

extern "C" char gEmpty_00454810[];
struct CRefNode_00454810 { char pad[0x18]; void* f; };
struct CRef_00454810 { char pad[0x4]; CRefNode_00454810* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00454810
void* CRef_00454810::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00454810;
}

extern "C" char gEmpty_00454ad0[];
struct CRefNode_00454ad0 { char pad[0x18]; void* f; };
struct CRef_00454ad0 { char pad[0x4]; CRefNode_00454ad0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00454ad0
void* CRef_00454ad0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00454ad0;
}

extern "C" char gEmpty_00454ca0[];
struct CRefNode_00454ca0 { char pad[0x18]; void* f; };
struct CRef_00454ca0 { char pad[0x4]; CRefNode_00454ca0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00454ca0
void* CRef_00454ca0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00454ca0;
}

extern "C" char gEmpty_00454e60[];
struct CRefNode_00454e60 { char pad[0x18]; void* f; };
struct CRef_00454e60 { char pad[0x4]; CRefNode_00454e60* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00454e60
void* CRef_00454e60::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00454e60;
}

extern "C" char gEmpty_00455100[];
struct CRefNode_00455100 { char pad[0x18]; void* f; };
struct CRef_00455100 { char pad[0x4]; CRefNode_00455100* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00455100
void* CRef_00455100::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00455100;
}

extern "C" char gEmpty_00469330[];
struct CRefNode_00469330 { char pad[0x18]; void* f; };
struct CRef_00469330 { char pad[0x4]; CRefNode_00469330* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00469330
void* CRef_00469330::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00469330;
}

extern "C" char gEmpty_004694c0[];
struct CRefNode_004694c0 { char pad[0x18]; void* f; };
struct CRef_004694c0 { char pad[0x4]; CRefNode_004694c0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x004694c0
void* CRef_004694c0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_004694c0;
}

extern "C" char gEmpty_00469730[];
struct CRefNode_00469730 { char pad[0x18]; void* f; };
struct CRef_00469730 { char pad[0x4]; CRefNode_00469730* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00469730
void* CRef_00469730::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00469730;
}

extern "C" char gEmpty_004698c0[];
struct CRefNode_004698c0 { char pad[0x18]; void* f; };
struct CRef_004698c0 { char pad[0x4]; CRefNode_004698c0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x004698c0
void* CRef_004698c0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_004698c0;
}

extern "C" char gEmpty_004699c0[];
struct CRefNode_004699c0 { char pad[0x18]; void* f; };
struct CRef_004699c0 { char pad[0x4]; CRefNode_004699c0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x004699c0
void* CRef_004699c0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_004699c0;
}

extern "C" char gEmpty_00469b10[];
struct CRefNode_00469b10 { char pad[0x18]; void* f; };
struct CRef_00469b10 { char pad[0x4]; CRefNode_00469b10* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00469b10
void* CRef_00469b10::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00469b10;
}

extern "C" char gEmpty_00469d00[];
struct CRefNode_00469d00 { char pad[0x18]; void* f; };
struct CRef_00469d00 { char pad[0x4]; CRefNode_00469d00* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00469d00
void* CRef_00469d00::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00469d00;
}

extern "C" char gEmpty_00469eb0[];
struct CRefNode_00469eb0 { char pad[0x18]; void* f; };
struct CRef_00469eb0 { char pad[0x4]; CRefNode_00469eb0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00469eb0
void* CRef_00469eb0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00469eb0;
}

extern "C" char gEmpty_0046a030[];
struct CRefNode_0046a030 { char pad[0x18]; void* f; };
struct CRef_0046a030 { char pad[0x4]; CRefNode_0046a030* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046a030
void* CRef_0046a030::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046a030;
}

extern "C" char gEmpty_0046a180[];
struct CRefNode_0046a180 { char pad[0x18]; void* f; };
struct CRef_0046a180 { char pad[0x4]; CRefNode_0046a180* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046a180
void* CRef_0046a180::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046a180;
}

extern "C" char gEmpty_0046a2f0[];
struct CRefNode_0046a2f0 { char pad[0x18]; void* f; };
struct CRef_0046a2f0 { char pad[0x4]; CRefNode_0046a2f0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046a2f0
void* CRef_0046a2f0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046a2f0;
}

extern "C" char gEmpty_0046a480[];
struct CRefNode_0046a480 { char pad[0x18]; void* f; };
struct CRef_0046a480 { char pad[0x4]; CRefNode_0046a480* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046a480
void* CRef_0046a480::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046a480;
}

extern "C" char gEmpty_0046a640[];
struct CRefNode_0046a640 { char pad[0x18]; void* f; };
struct CRef_0046a640 { char pad[0x4]; CRefNode_0046a640* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046a640
void* CRef_0046a640::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046a640;
}

extern "C" char gEmpty_0046a810[];
struct CRefNode_0046a810 { char pad[0x18]; void* f; };
struct CRef_0046a810 { char pad[0x4]; CRefNode_0046a810* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046a810
void* CRef_0046a810::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046a810;
}

extern "C" char gEmpty_0046aa80[];
struct CRefNode_0046aa80 { char pad[0x18]; void* f; };
struct CRef_0046aa80 { char pad[0x4]; CRefNode_0046aa80* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046aa80
void* CRef_0046aa80::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046aa80;
}

extern "C" char gEmpty_0046ac30[];
struct CRefNode_0046ac30 { char pad[0x18]; void* f; };
struct CRef_0046ac30 { char pad[0x4]; CRefNode_0046ac30* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046ac30
void* CRef_0046ac30::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046ac30;
}

extern "C" char gEmpty_0046add0[];
struct CRefNode_0046add0 { char pad[0x18]; void* f; };
struct CRef_0046add0 { char pad[0x4]; CRefNode_0046add0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046add0
void* CRef_0046add0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046add0;
}

extern "C" char gEmpty_0046af50[];
struct CRefNode_0046af50 { char pad[0x18]; void* f; };
struct CRef_0046af50 { char pad[0x4]; CRefNode_0046af50* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046af50
void* CRef_0046af50::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046af50;
}

extern "C" char gEmpty_0046b0b0[];
struct CRefNode_0046b0b0 { char pad[0x18]; void* f; };
struct CRef_0046b0b0 { char pad[0x4]; CRefNode_0046b0b0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046b0b0
void* CRef_0046b0b0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046b0b0;
}

extern "C" char gEmpty_0046b260[];
struct CRefNode_0046b260 { char pad[0x18]; void* f; };
struct CRef_0046b260 { char pad[0x4]; CRefNode_0046b260* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046b260
void* CRef_0046b260::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046b260;
}

extern "C" char gEmpty_0046b3f0[];
struct CRefNode_0046b3f0 { char pad[0x18]; void* f; };
struct CRef_0046b3f0 { char pad[0x4]; CRefNode_0046b3f0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046b3f0
void* CRef_0046b3f0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046b3f0;
}

extern "C" char gEmpty_0046b570[];
struct CRefNode_0046b570 { char pad[0x18]; void* f; };
struct CRef_0046b570 { char pad[0x4]; CRefNode_0046b570* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046b570
void* CRef_0046b570::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046b570;
}

extern "C" char gEmpty_0046b7b0[];
struct CRefNode_0046b7b0 { char pad[0x18]; void* f; };
struct CRef_0046b7b0 { char pad[0x4]; CRefNode_0046b7b0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046b7b0
void* CRef_0046b7b0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046b7b0;
}

extern "C" char gEmpty_0046b9d0[];
struct CRefNode_0046b9d0 { char pad[0x18]; void* f; };
struct CRef_0046b9d0 { char pad[0x4]; CRefNode_0046b9d0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046b9d0
void* CRef_0046b9d0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046b9d0;
}

extern "C" char gEmpty_0046bb60[];
struct CRefNode_0046bb60 { char pad[0x18]; void* f; };
struct CRef_0046bb60 { char pad[0x4]; CRefNode_0046bb60* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046bb60
void* CRef_0046bb60::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046bb60;
}

extern "C" char gEmpty_0046bc90[];
struct CRefNode_0046bc90 { char pad[0x18]; void* f; };
struct CRef_0046bc90 { char pad[0x4]; CRefNode_0046bc90* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046bc90
void* CRef_0046bc90::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046bc90;
}

extern "C" char gEmpty_0046bd50[];
struct CRefNode_0046bd50 { char pad[0x18]; void* f; };
struct CRef_0046bd50 { char pad[0x4]; CRefNode_0046bd50* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046bd50
void* CRef_0046bd50::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046bd50;
}

extern "C" char gEmpty_0046bee0[];
struct CRefNode_0046bee0 { char pad[0x18]; void* f; };
struct CRef_0046bee0 { char pad[0x4]; CRefNode_0046bee0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046bee0
void* CRef_0046bee0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046bee0;
}

extern "C" char gEmpty_0046c0b0[];
struct CRefNode_0046c0b0 { char pad[0x18]; void* f; };
struct CRef_0046c0b0 { char pad[0x4]; CRefNode_0046c0b0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046c0b0
void* CRef_0046c0b0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046c0b0;
}

extern "C" char gEmpty_0046c210[];
struct CRefNode_0046c210 { char pad[0x18]; void* f; };
struct CRef_0046c210 { char pad[0x4]; CRefNode_0046c210* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046c210
void* CRef_0046c210::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046c210;
}

extern "C" char gEmpty_0046c530[];
struct CRefNode_0046c530 { char pad[0x18]; void* f; };
struct CRef_0046c530 { char pad[0x4]; CRefNode_0046c530* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046c530
void* CRef_0046c530::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046c530;
}

extern "C" char gEmpty_0046c6c0[];
struct CRefNode_0046c6c0 { char pad[0x18]; void* f; };
struct CRef_0046c6c0 { char pad[0x4]; CRefNode_0046c6c0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046c6c0
void* CRef_0046c6c0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046c6c0;
}

extern "C" char gEmpty_0046c820[];
struct CRefNode_0046c820 { char pad[0x18]; void* f; };
struct CRef_0046c820 { char pad[0x4]; CRefNode_0046c820* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046c820
void* CRef_0046c820::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046c820;
}

extern "C" char gEmpty_0046c9a0[];
struct CRefNode_0046c9a0 { char pad[0x18]; void* f; };
struct CRef_0046c9a0 { char pad[0x4]; CRefNode_0046c9a0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046c9a0
void* CRef_0046c9a0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046c9a0;
}

extern "C" char gEmpty_0046cb30[];
struct CRefNode_0046cb30 { char pad[0x18]; void* f; };
struct CRef_0046cb30 { char pad[0x4]; CRefNode_0046cb30* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046cb30
void* CRef_0046cb30::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046cb30;
}

extern "C" char gEmpty_0046cce0[];
struct CRefNode_0046cce0 { char pad[0x18]; void* f; };
struct CRef_0046cce0 { char pad[0x4]; CRefNode_0046cce0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046cce0
void* CRef_0046cce0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046cce0;
}

extern "C" char gEmpty_0046ce70[];
struct CRefNode_0046ce70 { char pad[0x18]; void* f; };
struct CRef_0046ce70 { char pad[0x4]; CRefNode_0046ce70* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046ce70
void* CRef_0046ce70::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046ce70;
}

extern "C" char gEmpty_0046cfa0[];
struct CRefNode_0046cfa0 { char pad[0x18]; void* f; };
struct CRef_0046cfa0 { char pad[0x4]; CRefNode_0046cfa0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046cfa0
void* CRef_0046cfa0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046cfa0;
}

extern "C" char gEmpty_0046d060[];
struct CRefNode_0046d060 { char pad[0x18]; void* f; };
struct CRef_0046d060 { char pad[0x4]; CRefNode_0046d060* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046d060
void* CRef_0046d060::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046d060;
}

extern "C" char gEmpty_0046d2a0[];
struct CRefNode_0046d2a0 { char pad[0x18]; void* f; };
struct CRef_0046d2a0 { char pad[0x4]; CRefNode_0046d2a0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046d2a0
void* CRef_0046d2a0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046d2a0;
}

extern "C" char gEmpty_0046d590[];
struct CRefNode_0046d590 { char pad[0x18]; void* f; };
struct CRef_0046d590 { char pad[0x4]; CRefNode_0046d590* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046d590
void* CRef_0046d590::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046d590;
}

extern "C" char gEmpty_0046d6c0[];
struct CRefNode_0046d6c0 { char pad[0x18]; void* f; };
struct CRef_0046d6c0 { char pad[0x4]; CRefNode_0046d6c0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x0046d6c0
void* CRef_0046d6c0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_0046d6c0;
}

extern "C" char gEmpty_005851c0[];
struct CRefNode_005851c0 { char pad[0x18]; void* f; };
struct CRef_005851c0 { char pad[0x4]; CRefNode_005851c0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x005851c0
void* CRef_005851c0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_005851c0;
}

extern "C" char gEmpty_00585420[];
struct CRefNode_00585420 { char pad[0x18]; void* f; };
struct CRef_00585420 { char pad[0x4]; CRefNode_00585420* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00585420
void* CRef_00585420::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00585420;
}

extern "C" char gEmpty_005855c0[];
struct CRefNode_005855c0 { char pad[0x18]; void* f; };
struct CRef_005855c0 { char pad[0x4]; CRefNode_005855c0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x005855c0
void* CRef_005855c0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_005855c0;
}

extern "C" char gEmpty_00585720[];
struct CRefNode_00585720 { char pad[0x18]; void* f; };
struct CRef_00585720 { char pad[0x4]; CRefNode_00585720* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00585720
void* CRef_00585720::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00585720;
}

extern "C" char gEmpty_00585840[];
struct CRefNode_00585840 { char pad[0x18]; void* f; };
struct CRef_00585840 { char pad[0x4]; CRefNode_00585840* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00585840
void* CRef_00585840::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00585840;
}

extern "C" char gEmpty_005859b0[];
struct CRefNode_005859b0 { char pad[0x18]; void* f; };
struct CRef_005859b0 { char pad[0x4]; CRefNode_005859b0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x005859b0
void* CRef_005859b0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_005859b0;
}

extern "C" char gEmpty_00585b20[];
struct CRefNode_00585b20 { char pad[0x18]; void* f; };
struct CRef_00585b20 { char pad[0x4]; CRefNode_00585b20* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00585b20
void* CRef_00585b20::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00585b20;
}

extern "C" char gEmpty_00585c10[];
struct CRefNode_00585c10 { char pad[0x18]; void* f; };
struct CRef_00585c10 { char pad[0x4]; CRefNode_00585c10* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00585c10
void* CRef_00585c10::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00585c10;
}

extern "C" char gEmpty_00585d70[];
struct CRefNode_00585d70 { char pad[0x18]; void* f; };
struct CRef_00585d70 { char pad[0x4]; CRefNode_00585d70* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00585d70
void* CRef_00585d70::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00585d70;
}

extern "C" char gEmpty_00585ec0[];
struct CRefNode_00585ec0 { char pad[0x18]; void* f; };
struct CRef_00585ec0 { char pad[0x4]; CRefNode_00585ec0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00585ec0
void* CRef_00585ec0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00585ec0;
}

extern "C" char gEmpty_005864e0[];
struct CRefNode_005864e0 { char pad[0x18]; void* f; };
struct CRef_005864e0 { char pad[0x4]; CRefNode_005864e0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x005864e0
void* CRef_005864e0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_005864e0;
}

extern "C" char gEmpty_005867c0[];
struct CRefNode_005867c0 { char pad[0x18]; void* f; };
struct CRef_005867c0 { char pad[0x4]; CRefNode_005867c0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x005867c0
void* CRef_005867c0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_005867c0;
}

extern "C" char gEmpty_00586a20[];
struct CRefNode_00586a20 { char pad[0x18]; void* f; };
struct CRef_00586a20 { char pad[0x4]; CRefNode_00586a20* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00586a20
void* CRef_00586a20::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00586a20;
}

extern "C" char gEmpty_00586b90[];
struct CRefNode_00586b90 { char pad[0x18]; void* f; };
struct CRef_00586b90 { char pad[0x4]; CRefNode_00586b90* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00586b90
void* CRef_00586b90::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00586b90;
}

extern "C" char gEmpty_00586cf0[];
struct CRefNode_00586cf0 { char pad[0x18]; void* f; };
struct CRef_00586cf0 { char pad[0x4]; CRefNode_00586cf0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00586cf0
void* CRef_00586cf0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00586cf0;
}

extern "C" char gEmpty_00586e10[];
struct CRefNode_00586e10 { char pad[0x18]; void* f; };
struct CRef_00586e10 { char pad[0x4]; CRefNode_00586e10* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00586e10
void* CRef_00586e10::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00586e10;
}

extern "C" char gEmpty_00586fb0[];
struct CRefNode_00586fb0 { char pad[0x18]; void* f; };
struct CRef_00586fb0 { char pad[0x4]; CRefNode_00586fb0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00586fb0
void* CRef_00586fb0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00586fb0;
}

extern "C" char gEmpty_00587100[];
struct CRefNode_00587100 { char pad[0x18]; void* f; };
struct CRef_00587100 { char pad[0x4]; CRefNode_00587100* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00587100
void* CRef_00587100::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00587100;
}

extern "C" char gEmpty_00587250[];
struct CRefNode_00587250 { char pad[0x18]; void* f; };
struct CRef_00587250 { char pad[0x4]; CRefNode_00587250* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00587250
void* CRef_00587250::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00587250;
}

extern "C" char gEmpty_005873a0[];
struct CRefNode_005873a0 { char pad[0x18]; void* f; };
struct CRef_005873a0 { char pad[0x4]; CRefNode_005873a0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x005873a0
void* CRef_005873a0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_005873a0;
}

extern "C" char gEmpty_005878f0[];
struct CRefNode_005878f0 { char pad[0x18]; void* f; };
struct CRef_005878f0 { char pad[0x4]; CRefNode_005878f0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x005878f0
void* CRef_005878f0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_005878f0;
}

extern "C" char gEmpty_00587ad0[];
struct CRefNode_00587ad0 { char pad[0x18]; void* f; };
struct CRef_00587ad0 { char pad[0x4]; CRefNode_00587ad0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00587ad0
void* CRef_00587ad0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00587ad0;
}

extern "C" char gEmpty_00587e10[];
struct CRefNode_00587e10 { char pad[0x18]; void* f; };
struct CRef_00587e10 { char pad[0x4]; CRefNode_00587e10* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00587e10
void* CRef_00587e10::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00587e10;
}

extern "C" char gEmpty_00588060[];
struct CRefNode_00588060 { char pad[0x18]; void* f; };
struct CRef_00588060 { char pad[0x4]; CRefNode_00588060* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00588060
void* CRef_00588060::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00588060;
}

extern "C" char gEmpty_005881e0[];
struct CRefNode_005881e0 { char pad[0x18]; void* f; };
struct CRef_005881e0 { char pad[0x4]; CRefNode_005881e0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x005881e0
void* CRef_005881e0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_005881e0;
}

extern "C" char gEmpty_00588350[];
struct CRefNode_00588350 { char pad[0x18]; void* f; };
struct CRef_00588350 { char pad[0x4]; CRefNode_00588350* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00588350
void* CRef_00588350::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00588350;
}

extern "C" char gEmpty_00588540[];
struct CRefNode_00588540 { char pad[0x18]; void* f; };
struct CRef_00588540 { char pad[0x4]; CRefNode_00588540* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00588540
void* CRef_00588540::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00588540;
}

extern "C" char gEmpty_00588640[];
struct CRefNode_00588640 { char pad[0x18]; void* f; };
struct CRef_00588640 { char pad[0x4]; CRefNode_00588640* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00588640
void* CRef_00588640::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00588640;
}

extern "C" char gEmpty_00588780[];
struct CRefNode_00588780 { char pad[0x18]; void* f; };
struct CRef_00588780 { char pad[0x4]; CRefNode_00588780* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00588780
void* CRef_00588780::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00588780;
}

extern "C" char gEmpty_005888d0[];
struct CRefNode_005888d0 { char pad[0x18]; void* f; };
struct CRef_005888d0 { char pad[0x4]; CRefNode_005888d0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x005888d0
void* CRef_005888d0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_005888d0;
}

extern "C" char gEmpty_00588a00[];
struct CRefNode_00588a00 { char pad[0x18]; void* f; };
struct CRef_00588a00 { char pad[0x4]; CRefNode_00588a00* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00588a00
void* CRef_00588a00::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00588a00;
}

extern "C" char gEmpty_00588b60[];
struct CRefNode_00588b60 { char pad[0x18]; void* f; };
struct CRef_00588b60 { char pad[0x4]; CRefNode_00588b60* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00588b60
void* CRef_00588b60::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00588b60;
}

extern "C" char gEmpty_00588cf0[];
struct CRefNode_00588cf0 { char pad[0x18]; void* f; };
struct CRef_00588cf0 { char pad[0x4]; CRefNode_00588cf0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00588cf0
void* CRef_00588cf0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00588cf0;
}

extern "C" char gEmpty_00588e80[];
struct CRefNode_00588e80 { char pad[0x18]; void* f; };
struct CRef_00588e80 { char pad[0x4]; CRefNode_00588e80* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00588e80
void* CRef_00588e80::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00588e80;
}

extern "C" char gEmpty_00588fc0[];
struct CRefNode_00588fc0 { char pad[0x18]; void* f; };
struct CRef_00588fc0 { char pad[0x4]; CRefNode_00588fc0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00588fc0
void* CRef_00588fc0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00588fc0;
}

extern "C" char gEmpty_005890b0[];
struct CRefNode_005890b0 { char pad[0x18]; void* f; };
struct CRef_005890b0 { char pad[0x4]; CRefNode_005890b0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x005890b0
void* CRef_005890b0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_005890b0;
}

extern "C" char gEmpty_00589200[];
struct CRefNode_00589200 { char pad[0x18]; void* f; };
struct CRef_00589200 { char pad[0x4]; CRefNode_00589200* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00589200
void* CRef_00589200::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00589200;
}

extern "C" char gEmpty_00589360[];
struct CRefNode_00589360 { char pad[0x18]; void* f; };
struct CRef_00589360 { char pad[0x4]; CRefNode_00589360* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00589360
void* CRef_00589360::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00589360;
}

extern "C" char gEmpty_005894b0[];
struct CRefNode_005894b0 { char pad[0x18]; void* f; };
struct CRef_005894b0 { char pad[0x4]; CRefNode_005894b0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x005894b0
void* CRef_005894b0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_005894b0;
}

extern "C" char gEmpty_00589710[];
struct CRefNode_00589710 { char pad[0x18]; void* f; };
struct CRef_00589710 { char pad[0x4]; CRefNode_00589710* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00589710
void* CRef_00589710::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00589710;
}

extern "C" char gEmpty_00589940[];
struct CRefNode_00589940 { char pad[0x18]; void* f; };
struct CRef_00589940 { char pad[0x4]; CRefNode_00589940* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00589940
void* CRef_00589940::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00589940;
}

extern "C" char gEmpty_00589b40[];
struct CRefNode_00589b40 { char pad[0x18]; void* f; };
struct CRef_00589b40 { char pad[0x4]; CRefNode_00589b40* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00589b40
void* CRef_00589b40::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00589b40;
}

extern "C" char gEmpty_00589de0[];
struct CRefNode_00589de0 { char pad[0x18]; void* f; };
struct CRef_00589de0 { char pad[0x4]; CRefNode_00589de0* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00589de0
void* CRef_00589de0::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00589de0;
}

extern "C" char gEmpty_00589f30[];
struct CRefNode_00589f30 { char pad[0x18]; void* f; };
struct CRef_00589f30 { char pad[0x4]; CRefNode_00589f30* m; void* get(); };
// FUNCTION: ROBLOXSTUDIO 0x00589f30
void* CRef_00589f30::get()
{
	if (!m)
		rbxAssertFail("m", __FILE__, 0x5a);
	if (m->f) {
		if (!m)
			rbxAssertFail("m", __FILE__, 0x5a);
		return m->f;
	}
	return (void*)gEmpty_00589f30;
}
