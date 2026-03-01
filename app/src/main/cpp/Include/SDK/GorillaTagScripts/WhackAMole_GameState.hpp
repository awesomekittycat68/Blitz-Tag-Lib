#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    enum class WhackAMole_GameState : int {
        Off = 0,
        ContinuePressed = 1,
        Ongoing = 2,
        PickMoles = 3,
        TimesUp = 4,
        LevelStarted = 5,
    };
}
