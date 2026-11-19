#include "reflection/ContentPropertyItem.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00475c50

class ContentSource
{
public:
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void slot3() = 0;
    virtual void slot4() = 0;
    virtual void slot5() = 0;
    virtual void slot6() = 0;
    virtual void slot7() = 0;
    virtual void slot8() = 0;
    virtual void slot9() = 0;
    virtual void slot10() = 0;
    virtual void slot11() = 0;
    virtual void slot12() = 0;
    virtual void slot13() = 0;
    virtual void slot14() = 0;
    virtual void slot15() = 0;
    virtual void slot16() = 0;
    virtual void slot17() = 0;
    virtual void slot18() = 0;
    virtual void setContent(void* content) = 0;
};

void ContentPropertyItem::update()
{
    char* base = reinterpret_cast<char*>(this);
    ContentSource** sources = reinterpret_cast<ContentSource**>(base + 0x78);
    void* content = base + 0x30;

    ContentSource** p = sources;
    for (int i = 6; i != 0; --i)
    {
        (*p)->setContent(content);
        ++p;
    }
}

// FUNCTION: ROBLOXSTUDIO 0x00470560
struct ContentPropertyItemSub
{
	void clearRange(int* end, ContentPropertyItem* owner);
};

void ContentPropertyItem::clear()
{
	char* sub = reinterpret_cast<char*>(this) + 0x14;
	if (*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x1c) != 0)
	{
		reinterpret_cast<ContentPropertyItemSub*>(sub)->clearRange(
			*reinterpret_cast<int**>(sub + 0x14) + *reinterpret_cast<int*>(sub + 0x04),
			this);

		int* begin = *reinterpret_cast<int**>(sub + 0x14);
		int* end = begin + *reinterpret_cast<int*>(sub + 0x04);
		if (begin != end)
		{
			do
			{
				*begin = 0;
				++begin;
			}
			while (begin != end);
		}
	}
}

// AUTO-GENERATED IMPLEMENTATIONS


