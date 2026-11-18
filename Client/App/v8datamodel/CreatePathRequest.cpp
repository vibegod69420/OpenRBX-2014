#include "v8datamodel/CreatePathRequest.h"

#include "decomp.h"

namespace RBX {
namespace PathfindingService {

// FUNCTION: ROBLOXSTUDIO 0x00786a60
void CreatePathRequest::cancel()
{
    struct Releasable
    {
        virtual void slot0() = 0;
        virtual void release(int) = 0;
    };

    Releasable* p = reinterpret_cast<Releasable*>(
        *reinterpret_cast<void**>(reinterpret_cast<unsigned char*>(this) + 0xC));

    if (p)
    {
        p->release(1);
    }
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace PathfindingService
} // namespace RBX
