#include "G3D/Log.h"

#include "decomp.h"

namespace G3D {

// FUNCTION: ROBLOXSTUDIO 0x006d7bc0
int Log::getField04() const
{
	return field_0004;
}

static struct
{
    int data[9];
    int initialized;
} s_commonLog;

// FUNCTION: ROBLOXSTUDIO 0x006d66e0
Log* Log::common()
{
    if (!(s_commonLog.initialized & 1))
    {
        s_commonLog.initialized |= 1;
        s_commonLog.data[0] = 0;
        s_commonLog.data[1] = 0;
        s_commonLog.data[2] = 0;
        s_commonLog.data[3] = 0;
        s_commonLog.data[4] = 0;
        s_commonLog.data[5] = 0;
        s_commonLog.data[6] = 0;
        s_commonLog.data[7] = 0;
        s_commonLog.data[8] = 0;
    }
    return (Log*)s_commonLog.data;
}

// FUNCTION: ROBLOXSTUDIO 0x006d6760
Log* Log::getCommon()
{
    if (!(s_commonLog.initialized & 1))
    {
        s_commonLog.initialized |= 1;
        s_commonLog.data[0] = 0x3f800000;
        s_commonLog.data[1] = 0;
        s_commonLog.data[2] = 0;
        s_commonLog.data[3] = 0;
        s_commonLog.data[4] = 0x3f800000;
        s_commonLog.data[5] = 0;
        s_commonLog.data[6] = 0;
        s_commonLog.data[7] = 0;
        s_commonLog.data[8] = 0x3f800000;
    }
    return (Log*)s_commonLog.data;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace G3D
