#include "Network/Server.h"

#include "decomp.h"

namespace RBX {
namespace Network {

struct ServerCalleeC9C650
{
	void sub_c9c650(int arg);
};

// FUNCTION: ROBLOXSTUDIO 0x00c9b2f0
void Server::sub_c9b2f0()
{
	int local;
	if (*reinterpret_cast<unsigned char*>(this))
	{
		reinterpret_cast<ServerCalleeC9C650*>(this)->sub_c9c650(local);
	}
}

struct ServerC9E270_Node38
{
	char pad[0x38];
	ServerC9E270_Node38* child38;
	ServerC9E270_Node38* sub_43ee40();
};

struct ServerC9E270_DescCheck
{
	unsigned char sub_7cd560(void* desc);
};

struct ServerC9E270_Base67af70
{
	void* sub_67af70();
};

struct ServerC9E270_Obj968e70
{
	void* sub_968e70();
};

void* sub_43ec00();
void* sub_418ab0();
void sub_774920(const char* arg1, const char* arg2, const char* arg3, int arg4, int arg5);

// FUNCTION: ROBLOXSTUDIO 0x00c9e270
void Server::sub_c9e270()
{
	void* resultObj;
	void* base;

	if (!this)
		goto firstFail;

	base = *(void**)((char*)this + 0x38);
	if (base)
	{
		void* child = *(void**)((char*)base + 0x38);
		if (child)
			base = ((ServerC9E270_Node38*)child)->sub_43ee40();
	}
	else
	{
		base = this;
	}

	if (!base)
		goto firstFail;

	{
		char* p = (char*)base + 0x1c;
		if (!p)
			goto firstFail;

		void* dc = *(void**)(p + 0x0c);
		if (!((ServerC9E270_DescCheck*)dc)->sub_7cd560(sub_43ec00()))
			goto firstFail;

		void* b2 = p - 0x1c;
		if (!b2)
			goto firstFail;

		resultObj = ((ServerC9E270_Base67af70*)b2)->sub_67af70();
		goto afterFirst;
	}

firstFail:
	resultObj = 0;

afterFirst:
	if (*(unsigned char*)((char*)resultObj + 0x228))
	{
		sub_774920("Game", "NetworkStreamingEnabled", "none", 0, 0);
	}

	{
		void* r2 = ((ServerC9E270_Obj968e70*)resultObj)->sub_968e70();
		if (r2)
		{
			char* p = (char*)r2 + 0x1c;
			if (p)
			{
				void* dc = *(void**)(p + 0x0c);
				if (((ServerC9E270_DescCheck*)dc)->sub_7cd560(sub_418ab0()))
				{
					void* b2 = p - 0x1c;
					if (b2)
					{
						int val = *(int*)((char*)b2 + 0x158);
						if (val)
						{
							sub_774920("Game", "HasTerrain", "none", val, 0);
						}
					}
				}
			}
		}
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
