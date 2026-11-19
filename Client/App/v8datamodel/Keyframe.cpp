#include "v8datamodel/Keyframe.h"

#include "decomp.h"

namespace RBX {

class KeyframeContext;

KeyframeContext* Keyframe_getDataModelContext();

class KeyframePoseValidator
{
public:
	bool isValidInContext(KeyframeContext* context);
};

class KeyframeSequence
{
public:
	void onKeyframeChanged();
};

// FUNCTION: ROBLOXSTUDIO 0x0091d330
void Keyframe::notifyKeyframeSequence()
{
	KeyframeSequence* sequence = *(KeyframeSequence**)((char*)this + 0x38);
	if (sequence != NULL)
	{
		char* sub = (char*)sequence + 0x1c;
		if (sub != NULL)
		{
			KeyframePoseValidator* validator = *(KeyframePoseValidator**)(sub + 0x0c);
			KeyframeContext* context = Keyframe_getDataModelContext();
			if (validator->isValidInContext(context))
			{
				KeyframeSequence* base = (KeyframeSequence*)(sub - 0x1c);
				if (base != NULL)
				{
					return base->onKeyframeChanged();
				}
			}
		}
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
