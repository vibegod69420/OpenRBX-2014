#include "reflection/PropertyTreeWidget.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x004fa790
struct PropertyTreeWidget_Callee4FE590
{
	void __thiscall call(void* out, void* arg2, void* arg3);
};

extern void (__cdecl* PropertyTreeWidget_IndirectE10508)(void*);

void PropertyTreeWidget::firePropertyChange()
{
	int local;
	void* p = *(void**)this;
	((PropertyTreeWidget_Callee4FE590*)this)->call(&local, *(void**)p, p);
	PropertyTreeWidget_IndirectE10508(*(void**)this);
}

// FUNCTION: ROBLOXSTUDIO 0x004fa7c0
struct PropertyTreeWidget_Callee4FE430
{
	void __thiscall call(void* out, void* arg2, void* arg3);
};

void PropertyTreeWidget::firePropertyChange2()
{
	int local;
	void* p = *(void**)this;
	((PropertyTreeWidget_Callee4FE430*)this)->call(&local, *(void**)p, p);
	PropertyTreeWidget_IndirectE10508(*(void**)this);
}

// FUNCTION: ROBLOXSTUDIO 0x004fa730
struct PropertyTreeWidget_Callee49BB20
{
	void __thiscall call(void* out, void* arg2, void* arg3);
};

void PropertyTreeWidget::firePropertyChange3()
{
	int local;
	void* p = *(void**)this;
	((PropertyTreeWidget_Callee49BB20*)this)->call(&local, *(void**)p, p);
	PropertyTreeWidget_IndirectE10508(*(void**)this);
}

// FUNCTION: ROBLOXSTUDIO 0x004fa760
struct PropertyTreeWidget_Callee4FE4F0
{
	void __thiscall call(void* out, void* arg2, void* arg3);
};

void PropertyTreeWidget::firePropertyChange4()
{
	int local;
	void* p = *(void**)this;
	((PropertyTreeWidget_Callee4FE4F0*)this)->call(&local, *(void**)p, p);
	PropertyTreeWidget_IndirectE10508(*(void**)this);
}

// AUTO-GENERATED IMPLEMENTATIONS


