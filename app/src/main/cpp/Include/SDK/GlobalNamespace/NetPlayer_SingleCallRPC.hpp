#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class NetPlayer_SingleCallRPC : int {
        CMS_RequestRoomInitialization = 0,
        CMS_RequestTriggerHistory = 1,
        CMS_SyncTriggerHistory = 2,
        CMS_SyncTriggerCounts = 3,
        RankedSendScoreToLateJoiner = 4,
        Count = 5,
    };
}
