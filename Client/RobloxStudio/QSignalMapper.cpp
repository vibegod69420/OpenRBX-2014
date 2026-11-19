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

// FUNCTION: ROBLOXSTUDIO 0x004f2c80
void QSignalMapper::setupConnections()
{
	typedef void (__thiscall QSignalMapper::*ConnectFn)(void*, void*);
	ConnectFn connect = *(ConnectFn*)0x00E1119C;

	(this->*connect)(*(void**)((char*)this + 0x274), *(void**)((char*)this + 0x278));

	if (*(unsigned char*)0x013000F0)
	{
		(this->*connect)(*(void**)((char*)this + 0x278), *(void**)((char*)this + 0x274));
	}
	else
	{
		(this->*connect)(*(void**)((char*)this + 0x278), *(void**)((char*)this + 0x27C));
		(this->*connect)(*(void**)((char*)this + 0x27C), *(void**)((char*)this + 0x274));
	}

	(this->*connect)(*(void**)((char*)this + 0x274), *(void**)((char*)this + 0x280));
	(this->*connect)(*(void**)((char*)this + 0x280), *(void**)((char*)this + 0x318));
}

// AUTO-GENERATED IMPLEMENTATIONS


