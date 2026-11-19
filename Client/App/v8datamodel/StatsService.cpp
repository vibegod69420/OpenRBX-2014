#include "v8datamodel/StatsService.h"

#include "decomp.h"

namespace RBX {
namespace Stats {

// FUNCTION: ROBLOXSTUDIO 0x004a4c00
class PageManager
{
public:
	__declspec(dllimport) void setPage(StatsService* service, const char* pageName, int flags);
};

extern PageManager gPageManager;

StatsService::StatsService()
{
	volatile int unk;
	unk = 0;
	gPageManager.setPage(this, "Start Page", 0);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Stats
} // namespace RBX
