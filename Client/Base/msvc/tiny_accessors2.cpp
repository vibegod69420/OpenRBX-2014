// More tiny accessors: member gets, nested gets, and float member loads.

struct CGet_00403ad0 { char pad[0x68]; int m; int get(); };
// FUNCTION: ROBLOXSTUDIO 0x00403ad0
int CGet_00403ad0::get()
{
	return m;
}

struct CGet_00403b40 { char pad[0x74]; int m; int get(); };
// FUNCTION: ROBLOXSTUDIO 0x00403b40
int CGet_00403b40::get()
{
	return m;
}

struct CGet_004956d0 { char pad[0x4]; int m; int get(); };
// FUNCTION: ROBLOXSTUDIO 0x004956d0
int CGet_004956d0::get()
{
	return m;
}

struct CGet_0058a950 { char pad[0x28]; int m; int get(); };
// FUNCTION: ROBLOXSTUDIO 0x0058a950
int CGet_0058a950::get()
{
	return m;
}

struct CGet_007b4990 { char pad[0x50]; int m; int get(); };
// FUNCTION: ROBLOXSTUDIO 0x007b4990
int CGet_007b4990::get()
{
	return m;
}

struct CGet_00bd4ad0 { char pad[0x2c]; int m; int get(); };
// FUNCTION: ROBLOXSTUDIO 0x00bd4ad0
int CGet_00bd4ad0::get()
{
	return m;
}

struct CGet4_00b4ba90 { char pad[0x2c]; int m; int get(int); };
// FUNCTION: ROBLOXSTUDIO 0x00b4ba90
int CGet4_00b4ba90::get(int)
{
	return m;
}

struct CInner_005e5de0 { char pad[0x34]; int m; };
struct CChain_005e5de0 { char pad[0x28]; CInner_005e5de0* p; int get(); };
// FUNCTION: ROBLOXSTUDIO 0x005e5de0
int CChain_005e5de0::get()
{
	return this->p->m;
}

struct CInner_005e5df0 { char pad[0x2c]; int m; };
struct CChain_005e5df0 { char pad[0x30]; CInner_005e5df0* p; int get(); };
// FUNCTION: ROBLOXSTUDIO 0x005e5df0
int CChain_005e5df0::get()
{
	return this->p->m;
}

struct CInner_00b53510 { char pad[0x34]; int m; };
struct CChain_00b53510 { char pad[0x24]; CInner_00b53510* p; int get(); };
// FUNCTION: ROBLOXSTUDIO 0x00b53510
int CChain_00b53510::get()
{
	return this->p->m;
}

struct CInner_00b53530 { char pad[0x4]; int m; };
struct CChain_00b53530 { char pad[0x24]; CInner_00b53530* p; int get(); };
// FUNCTION: ROBLOXSTUDIO 0x00b53530
int CChain_00b53530::get()
{
	return this->p->m;
}

struct CInner_00b53540 { char pad[0x64]; int m; };
struct CChain_00b53540 { char pad[0x24]; CInner_00b53540* p; int get(); };
// FUNCTION: ROBLOXSTUDIO 0x00b53540
int CChain_00b53540::get()
{
	return this->p->m;
}

struct CInner_00b53550 { char pad[0x24]; int m; };
struct CChain_00b53550 { char pad[0x24]; CInner_00b53550* p; int get(); };
// FUNCTION: ROBLOXSTUDIO 0x00b53550
int CChain_00b53550::get()
{
	return this->p->m;
}

struct CInner_00b53570 { char pad[0x44]; int m; };
struct CChain_00b53570 { char pad[0x24]; CInner_00b53570* p; int get(); };
// FUNCTION: ROBLOXSTUDIO 0x00b53570
int CChain_00b53570::get()
{
	return this->p->m;
}

struct CInner_00b53580 { char pad[0x54]; int m; };
struct CChain_00b53580 { char pad[0x24]; CInner_00b53580* p; int get(); };
// FUNCTION: ROBLOXSTUDIO 0x00b53580
int CChain_00b53580::get()
{
	return this->p->m;
}

struct CInner_00b53590 { char pad[0x14]; int m; };
struct CChain_00b53590 { char pad[0x24]; CInner_00b53590* p; int get(); };
// FUNCTION: ROBLOXSTUDIO 0x00b53590
int CChain_00b53590::get()
{
	return this->p->m;
}

struct CInner_00b535b0 { char pad[0x74]; int m; };
struct CChain_00b535b0 { char pad[0x24]; CInner_00b535b0* p; int get(); };
// FUNCTION: ROBLOXSTUDIO 0x00b535b0
int CChain_00b535b0::get()
{
	return this->p->m;
}

struct CFloat_00bb94a0 { char pad[0xf8]; float m; float get(); };
// FUNCTION: ROBLOXSTUDIO 0x00bb94a0
float CFloat_00bb94a0::get()
{
	return m;
}

struct CFloat8_0099d2f0 { char pad[0x14]; float m; float get(); };
// FUNCTION: ROBLOXSTUDIO 0x0099d2f0
float CFloat8_0099d2f0::get()
{
	return m;
}

struct CFloat8_0099d310 { char pad[0x2c]; float m; float get(); };
// FUNCTION: ROBLOXSTUDIO 0x0099d310
float CFloat8_0099d310::get()
{
	return m;
}
