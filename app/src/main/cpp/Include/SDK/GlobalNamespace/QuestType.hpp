#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class QuestType : int {
        none = 0,
        gameModeObjective = 1,
        gameModeRound = 2,
        grabObject = 3,
        dropObject = 4,
        eatObject = 5,
        tapObject = 6,
        launchedProjectile = 7,
        moveDistance = 8,
        swimDistance = 9,
        triggerHandEffect = 10,
        enterLocation = 11,
        misc = 12,
        critter = 13,
        fetchObject = 14,
        playerInteraction = 15,
    };
}
