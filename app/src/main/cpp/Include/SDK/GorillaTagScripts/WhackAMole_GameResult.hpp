#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    enum class WhackAMole_GameResult : int {
        GameOver = 0,
        Win = 1,
        LevelComplete = 2,
        Unknown = 3,
    };
}
