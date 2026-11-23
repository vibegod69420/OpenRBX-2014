#include "RobloxNetworkReply.h"

#include "decomp.h"



extern "C" __declspec(dllimport) int __cdecl RobloxNetworkReply_ShowMessage(int, const char*, const char*, int);
extern "C" void __cdecl RobloxNetworkReply_HandleMessageResult(int);

// FUNCTION: ROBLOXSTUDIO 0x004f5b20
void RobloxNetworkReply::reportError()
{
	RobloxNetworkReply_HandleMessageResult(
		RobloxNetworkReply_ShowMessage(0, (const char*)0x012CB244, (const char*)0x012CB264, 0));
}

// AUTO-GENERATED IMPLEMENTATIONS


