#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class MonkeBallGame_GameState : int {
        None = 0,
        PreGame = 1,
        Playing = 2,
        PostScore = 3,
        PostGame = 4,
    };
}
