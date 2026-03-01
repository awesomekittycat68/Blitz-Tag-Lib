#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    enum class EventCaching : uint8_t {
        DoNotCache = 0,
        MergeCache = 1,
        ReplaceCache = 2,
        RemoveCache = 3,
        AddToRoomCache = 4,
        AddToRoomCacheGlobal = 5,
        RemoveFromRoomCache = 6,
        RemoveFromRoomCacheForActorsLeft = 7,
        SliceIncreaseIndex = 10,
        SliceSetIndex = 11,
        SlicePurgeIndex = 12,
        SlicePurgeUpToIndex = 13,
    };
}
