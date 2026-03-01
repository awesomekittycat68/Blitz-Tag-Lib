#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class MultiplayerErrorErrorKey : int {
        Unknown = 0,
        DestinationUnavailable = 1,
        DlcRequired = 2,
        General = 3,
        GroupFull = 4,
        InviterNotJoinable = 5,
        LevelNotHighEnough = 6,
        LevelNotUnlocked = 7,
        NetworkTimeout = 8,
        NoLongerAvailable = 9,
        UpdateRequired = 10,
        TutorialRequired = 11,
    };
}
