#include "QDebuggerClient.h"

#include "decomp.h"



extern unsigned char byte_12E0EB4;

class QDbgSession
{
public:
	bool fn7A61B0();
	bool fn7A61F0(int a1);
};

// FUNCTION: ROBLOXSTUDIO 0x00433b80
bool QDebuggerClient::updateDebuggerState()
{
	QDbgSession* session = *(QDbgSession**)((char*)this + 0x14);
	if (session)
	{
		if (byte_12E0EB4)
			return session->fn7A61F0(*(int*)((char*)this + 0x58));
		return session->fn7A61B0();
	}
	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS


