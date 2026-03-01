#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class PlayerGameEvents_EventType : int {
        NONE = 0,
        GameModeObjective = 1,
        GameModeCompleteRound = 2,
        GrabbedObject = 3,
        DroppedObject = 4,
        EatObject = 5,
        TapObject = 6,
        LaunchedProjectile = 7,
        PlayerMoved = 8,
        PlayerSwam = 9,
        TriggerHandEfffect = 10,
        EnterLocation = 11,
        MiscEvent = 12,
    };
}
