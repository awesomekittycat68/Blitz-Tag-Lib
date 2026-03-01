#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class QuestCategory : int {
        NONE = 0,
        Social = 1,
        Exploration = 2,
        Gameplay = 3,
        GameRound = 4,
        Tag = 5,
    };
}
