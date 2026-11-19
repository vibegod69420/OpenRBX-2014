#include "G3D/Random.h"

#include "decomp.h"

namespace G3D {

typedef void (__stdcall *RandomVoidPtrFn)(void*);
typedef int (__stdcall *RandomIntIntFn)(int);
typedef int (__stdcall *RandomIntVoidFn)();
typedef int (__stdcall *RandomIntIntIntFn)(int, int);

extern RandomVoidPtrFn g_RandomProc_00E1305C;
extern RandomIntIntFn  g_RandomProc_00E13068;
extern RandomIntVoidFn g_RandomProc_00E13050;
extern RandomIntIntIntFn g_RandomProc_00E1304C;
extern RandomIntIntFn  g_RandomProc_00E13060;
extern RandomVoidPtrFn g_RandomProc_00E13054;
extern RandomIntIntFn  g_RandomProc_00E13058;

extern unsigned char g_RandomData_012DFA9C;
extern int g_RandomData_012DFAA4;
extern int g_RandomData_012DFA88;
extern unsigned char g_RandomData_012DFA8C;

// FUNCTION: ROBLOXSTUDIO 0x006d8660
int Random::initialize()
{
	g_RandomProc_00E1305C(&g_RandomData_012DFA9C);

	RandomIntIntFn proc = g_RandomProc_00E13068;
	int state = proc(1) - 1;
	g_RandomData_012DFAA4 = state;
	if (state < -1)
	{
		int count = -1 - state;
		do
		{
			proc(1);
			--count;
		}
		while (count != 0);
	}

	g_RandomData_012DFA88 = g_RandomProc_00E13050();
	g_RandomProc_00E13060(g_RandomProc_00E1304C(0, 0x7F00));
	g_RandomProc_00E13054(&g_RandomData_012DFA8C);
	return g_RandomProc_00E13058(0);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace G3D
