#include "v8datamodel/BoxSelectCommand.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x007c2460
void BoxSelectCommand::cancelSelection()
{
    struct BoxSelectCommandSlot16Caller
    {
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
        virtual void call() = 0;
    };

    if (reinterpret_cast<const unsigned char*>(this)[0x28])
    {
        return reinterpret_cast<BoxSelectCommandSlot16Caller*>(this)->call();
    }
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
