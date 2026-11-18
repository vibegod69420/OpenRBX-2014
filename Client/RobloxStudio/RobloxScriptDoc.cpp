#include "RobloxScriptDoc.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00495610
int RobloxScriptDoc::getField40() const
{
	return field_0040;
}

class CScriptDocSubObject
{
public:
	void sub_511470();
};

// FUNCTION: ROBLOXSTUDIO 0x0050f860
void RobloxScriptDoc::sub_50F860()
{
	if (*(void **)((char *)this + 0x3C) != 0)
	{
		((CScriptDocSubObject *)((char *)this - 8))->sub_511470();

		void *obj = (char *)(*(void **)((char *)this + 0x3C)) + 8;
		typedef void (__thiscall *VFunc)(void *);
		VFunc fn = (*(VFunc **)obj)[9];
		return fn(obj);
	}
	else
	{
		typedef void (__thiscall *VFunc)(void *, void *);
		VFunc fn = (*(VFunc **)this)[10];
		fn(this, (char *)this + 0x44);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS


