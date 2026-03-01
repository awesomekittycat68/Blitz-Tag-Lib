#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class MonkeVoteMachine_VotingState : int {
        None = 0,
        Voting = 1,
        Predicting = 2,
        Complete = 3,
    };
}
