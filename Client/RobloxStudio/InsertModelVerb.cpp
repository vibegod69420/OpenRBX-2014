// FLAGS: /nologo /c /O2 /Ob2 /Oi /Ot /Oy /GS /EHsc /GR /Gy /fp:precise /arch:SSE /Zc:wchar_t /Zc:forScope

#include "InsertModelVerb.h"

extern "C" void targetInsertModel();
extern "C" void targetSaveSelection();

// FUNCTION: ROBLOXSTUDIO 0x0051f030
void InsertModelVerb::invoke(int) const
{
	targetInsertModel();
}

// FUNCTION: ROBLOXSTUDIO 0x0051f620
void SelectionSaveToFileVerb::invoke(int) const
{
	targetSaveSelection();
}
