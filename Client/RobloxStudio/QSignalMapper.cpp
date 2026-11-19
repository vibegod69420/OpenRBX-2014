#include "QSignalMapper.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x004f3950
struct QSignalMapperReleaseTarget
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void release(int);
};

void QSignalMapper::reset()
{
    QSignalMapperReleaseTarget** pp =
        reinterpret_cast<QSignalMapperReleaseTarget**>(reinterpret_cast<char*>(this) + 0x3c4);
    QSignalMapperReleaseTarget* p = *pp;
    if (p)
    {
        p->release(1);
        *pp = 0;
    }
}

// AUTO-GENERATED IMPLEMENTATIONS


