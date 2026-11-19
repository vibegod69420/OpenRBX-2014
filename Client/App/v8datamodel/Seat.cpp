#include "v8datamodel/Seat.h"

#include "decomp.h"

namespace RBX {

class PartInstance
{
public:
	int getClassIndex();
};

// FUNCTION: ROBLOXSTUDIO 0x00892dd0
int Seat::getClassIndex()
{
	return ((PartInstance*)this)->getClassIndex() + 0x10;
}

// FUNCTION: ROBLOXSTUDIO 0x0090fff0
int Seat::isOccupied() const
{
    return *reinterpret_cast<const int*>(reinterpret_cast<const char*>(this) + 0x118) == 1;
}

void*Seat::sub_892DE0()
{
	return reinterpret_cast<char*>(this) - 0x64;
}

void __cdecl sub_6B9740(int, const char*);

// FUNCTION: ROBLOXSTUDIO 0x0090ff90
int Seat::getState() const
{
	int state = *reinterpret_cast<const int*>(reinterpret_cast<const char*>(this) + 0x118);
	switch (state)
	{
	case 0:
		return 0;
	case 1:
		return 1;
	case 2:
		return 2;
	default:
		break;
	}

	unsigned char flag = *reinterpret_cast<unsigned char*>(0x012DE657);
	if (flag)
	{
		typedef unsigned char (__cdecl *AssertCallback)(const char*, const char*, int);
		AssertCallback callback = *reinterpret_cast<AssertCallback*>(0x012DE694);
		if (callback)
		{
			if (callback(reinterpret_cast<const char*>(0x010062B8),
			             reinterpret_cast<const char*>(0x00E788F0),
			             0x75))
				return 1;

			flag = *reinterpret_cast<unsigned char*>(0x012DE657);
		}

		sub_6B9740(flag, reinterpret_cast<const char*>(0x00E78940));
	}

	return 1;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
