#include "v8world/Mechanism.h"

#include "decomp.h"

namespace RBX {

class Mechanism;
class Callee {
public:
    void step(Mechanism* mechanism);
};

struct MechanismProxy {
    char pad[0x3c];
    Callee* world;
};

// FUNCTION: ROBLOXSTUDIO 0x00b5c470
void Mechanism::step() {
    reinterpret_cast<MechanismProxy*>(this)->world->step(this);
}

void __cdecl rbxf_006B9740(int, const char*);

struct Assembly99E570
{
	void __thiscall fn(unsigned char);
};

struct WorldC037F0
{
	void __thiscall fn();
};

// FUNCTION: ROBLOXSTUDIO 0x00b5c730
void Mechanism::notifyMoved()
{
	char* link = *(char**)((char*)this + 0x28);
	char* answer = *(char**)(link + 0x20);
	char* assembly;
	if (answer)
		assembly = answer - 8;
	else
		assembly = 0;

	unsigned char flag = *(unsigned char*)0x012DE657;
	if (flag && !assembly)
	{
		typedef unsigned char (__cdecl *AssertTest)(const char*, const char*, int);
		AssertTest test = *(AssertTest*)0x012DE694;
		if (test)
		{
			if (test("answer", "D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\v8world\\Assembly.cpp", 107))
				goto done;
			flag = *(unsigned char*)0x012DE657;
		}
		rbxf_006B9740((int)flag, "answer file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\v8world\\Assembly.cpp line: 107");
	}

done:
	((Assembly99E570*)assembly)->fn(0);

	WorldC037F0* world = *(WorldC037F0**)((char*)this + 0x3C);
	if (world)
		world->fn();
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
