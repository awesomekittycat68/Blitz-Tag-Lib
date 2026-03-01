#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class ZoneClearReason : int {
        JoinZone = 0,
        LeaveZone = 1,
        Disconnect = 2,
        MigrateGameEntityZone = 3,
    };
}
