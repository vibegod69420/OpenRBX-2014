#include "util/PathInterpolatedCFrame.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0058f6b0
int PathInterpolatedCFrame::getField44() const
{
	return field_0044;
}

// FUNCTION: ROBLOXSTUDIO 0x0087bad0
bool PathInterpolatedCFrame::getFlag41() const
{
	return flag_0041;
}

// FUNCTION: ROBLOXSTUDIO 0x00892590
double PathInterpolatedCFrame::getField48() const
{
	return *reinterpret_cast<const double*>(reinterpret_cast<const char*>(this) + 0x48);
}

// FUNCTION: ROBLOXSTUDIO 0x00892dc0
bool PathInterpolatedCFrame::getFlag40() const
{
	return flag_0040;
}

// FUNCTION: ROBLOXSTUDIO 0x00a0f420
double PathInterpolatedCFrame::getField98() const
{
    return *reinterpret_cast<const double*>(reinterpret_cast<const char*>(this) + 0x98);
}

void* __fastcall PathInterpolatedCFrame_computeField20(const PathInterpolatedCFrame* self);

// FUNCTION: ROBLOXSTUDIO 0x00a0fac0
void* PathInterpolatedCFrame::getField20() const
{
	void* value = *reinterpret_cast<void* const*>(reinterpret_cast<const char*>(this) + 0x20);
	if (!value)
		return PathInterpolatedCFrame_computeField20(this);
	return value;
}

// FUNCTION: ROBLOXSTUDIO 0x00892520
float PathInterpolatedCFrame::getFieldE0_118() const
{
	const char* ptr = *reinterpret_cast<char* const*>(reinterpret_cast<const char*>(this) + 0xE0);
	return *reinterpret_cast<const float*>(ptr + 0x118);
}

void* __fastcall PathInterpolatedCFrame_BuyHeadNode(void* list);

// FUNCTION: ROBLOXSTUDIO 0x00a0f5d0
PathInterpolatedCFrame::PathInterpolatedCFrame()
{
	char* base = reinterpret_cast<char*>(this);

	*reinterpret_cast<void**>(base + 0x04) = 0;
	*reinterpret_cast<void**>(base + 0x08) = 0;

	void* node = PathInterpolatedCFrame_BuyHeadNode(base + 0x04);

	*reinterpret_cast<void**>(base + 0x04) = node;
	*reinterpret_cast<void* volatile*>(base + 0x0C) = 0;
	*reinterpret_cast<void**>(base + 0x0C) = node;
}

extern unsigned char g_IMovingNotifyWakeFlag; // 0x012FC99E
void __cdecl RBX_LogIMovingNotifyWake(int level, const char* fmt, const void* part); // 0x006B8A90
void __fastcall RBX_PathInterpolatedCFrame_OnWake(PathInterpolatedCFrame* self); // 0x00A0FAD0

// FUNCTION: ROBLOXSTUDIO 0x00a0fb50
void PathInterpolatedCFrame::notifyMoved()
{
	int& wakeCounter = *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x0C);
	if (wakeCounter == 0)
	{
		unsigned char flag = g_IMovingNotifyWakeFlag;
		if (flag)
			RBX_LogIMovingNotifyWake(flag, "IMoving::notifyMoved wakes part %p", this);

		wakeCounter = 30;
		return RBX_PathInterpolatedCFrame_OnWake(this);
	}

	wakeCounter = 30;
}

struct PathInterpolatedCFrameNode
{
    void* head;
    void unlink(void* iter, void* first, void* last);
};

// FUNCTION: ROBLOXSTUDIO 0x00b57220
void PathInterpolatedCFrame::clearPath()
{
    PathInterpolatedCFrameNode* node = *reinterpret_cast<PathInterpolatedCFrameNode**>(this);
    if (node)
    {
        void* iter;
        node->unlink(&iter, *reinterpret_cast<void**>(node->head), node->head);
        ::operator delete(node->head);
        ::operator delete(node);
        *reinterpret_cast<PathInterpolatedCFrameNode**>(this) = 0;
    }
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
