#include "humanoid/HumanoidState.h"

#include "decomp.h"

namespace RBX {
namespace HUMAN {

// FUNCTION: ROBLOXSTUDIO 0x004f6040
int HumanoidState::getConst2() const
{
	return 2;
}

extern unsigned char byte_12DE657;
typedef unsigned char (__cdecl *AssertCallback_12DE694)(const char*, const char*, int);
extern AssertCallback_12DE694 dword_12DE694;
void sub_6B9740(int, const char*);

// FUNCTION: ROBLOXSTUDIO 0x004f5e80
int HumanoidState::getForwardedStateValue()
{
	HumanoidState* cur = this;
	HumanoidState** pNext = (HumanoidState**)((char*)cur + 0x0C);

	if (*pNext != 0)
	{
		do
		{
			if (byte_12DE657 != 0)
			{
				if (*(unsigned char*)((char*)cur + 0x14) == 0)
				{
					if (dword_12DE694 == 0 ||
						dword_12DE694("m_followRedirections",
							"D:\\BuildAgent\\work\\Trunk2012\\Client\\RobloxStudio\\RobloxNetworkReply.cpp",
							67) == 0)
					{
						sub_6B9740(byte_12DE657,
							"m_followRedirections file: D:\\BuildAgent\\work\\Trunk2012\\Client\\RobloxStudio\\RobloxNetworkReply.cpp line: 67");
					}
				}
			}

			cur = *pNext;
			pNext = (HumanoidState**)((char*)cur + 0x0C);
		}
		while (*(HumanoidState**)((char*)cur + 0x0C) != 0);
	}

	return *(int*)((char*)cur + 8);
}

class HumanoidStateVCall
{
public:
	virtual void v0();
	virtual void v1(int);
};

// FUNCTION: ROBLOXSTUDIO 0x009d6ff0
void HumanoidState::dispose()
{
	char* p = *(char**)((char*)this + 0x0C);
	if (p)
	{
		((HumanoidStateVCall*)(p + 4))->v1(1);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace HUMAN
} // namespace RBX
