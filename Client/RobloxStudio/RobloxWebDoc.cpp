#include "RobloxWebDoc.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00526730
void RobloxWebDoc::reset()
{
    *reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0xc) = 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00495640
int RobloxWebDoc::getField14() const
{
	return field_0014;
}

// AUTO-GENERATED IMPLEMENTATIONS


