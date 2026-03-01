#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    enum class RoomOptionBit : int {
        CheckUserOnJoin = 1,
        DeleteCacheOnLeave = 2,
        SuppressRoomEvents = 4,
        PublishUserId = 8,
        DeleteNullProps = 16,
        BroadcastPropsChangeToAll = 32,
        SuppressPlayerInfo = 64,
    };
}
