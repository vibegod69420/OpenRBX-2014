#include "PublishSelectionToRobloxVerb.h"

#include "decomp.h"



class SelectionContext
{
public:
	class PublishSelection* getPublishSelection();
};

class PublishSelection
{
public:
	int isPublishable();
};

// FUNCTION: ROBLOXSTUDIO 0x00520640
bool PublishSelectionToRobloxVerb::isEnabled()
{
	SelectionContext* context = *(SelectionContext**)((char*)this + 0x0C);
	if (context)
	{
		PublishSelection* selection = context->getPublishSelection();
		if (selection)
		{
			if (selection->isPublishable())
				return true;
		}
	}
	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS


