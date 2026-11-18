#include "RobloxObjectBrowserDoc.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00495630
int RobloxObjectBrowserDoc::getField1C() const
{
	return field_001c;
}

// Helper used to force a virtual dispatch through vtable slot 13 (offset 0x34).
struct RobloxObjectBrowserDoc_VirtualCallHelper
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void DeleteContents();
};

void RobloxObjectBrowserDoc_VirtualCallHelper::slot0() {}
void RobloxObjectBrowserDoc_VirtualCallHelper::slot1() {}
void RobloxObjectBrowserDoc_VirtualCallHelper::slot2() {}
void RobloxObjectBrowserDoc_VirtualCallHelper::slot3() {}
void RobloxObjectBrowserDoc_VirtualCallHelper::slot4() {}
void RobloxObjectBrowserDoc_VirtualCallHelper::slot5() {}
void RobloxObjectBrowserDoc_VirtualCallHelper::slot6() {}
void RobloxObjectBrowserDoc_VirtualCallHelper::slot7() {}
void RobloxObjectBrowserDoc_VirtualCallHelper::slot8() {}
void RobloxObjectBrowserDoc_VirtualCallHelper::slot9() {}
void RobloxObjectBrowserDoc_VirtualCallHelper::slot10() {}
void RobloxObjectBrowserDoc_VirtualCallHelper::slot11() {}
void RobloxObjectBrowserDoc_VirtualCallHelper::slot12() {}
void RobloxObjectBrowserDoc_VirtualCallHelper::DeleteContents() {}

// FUNCTION: ROBLOXSTUDIO 0x004f6c10
bool RobloxObjectBrowserDoc::OnNewDocument()
{
    reinterpret_cast<RobloxObjectBrowserDoc_VirtualCallHelper*>(this)->DeleteContents();
    return true;
}

// FUNCTION: ROBLOXSTUDIO 0x004f6cd0
void RobloxObjectBrowserDoc::DeleteContents()
{
	unsigned char& flag = *reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x0c);
	if (flag)
		flag = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS


