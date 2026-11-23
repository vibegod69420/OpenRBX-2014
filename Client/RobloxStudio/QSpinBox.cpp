#include "QSpinBox.h"

#include "decomp.h"



class DontAskAgainManager
{
public:
	__declspec(dllimport) void __thiscall Register(QSpinBox* owner, const char* text, int showAgain);
};

extern DontAskAgainManager g_dontAskAgainManager;

// FUNCTION: ROBLOXSTUDIO 0x00478cb0
QSpinBox::QSpinBox()
{
	volatile int state = 0;
	g_dontAskAgainManager.Register(this, "Don't ask me again", 0);
}

// AUTO-GENERATED IMPLEMENTATIONS


