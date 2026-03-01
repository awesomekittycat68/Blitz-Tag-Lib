#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class ChallengeViewerFilter : int {
        Unknown = 0,
        AllVisible = 1,
        Participating = 2,
        Invited = 3,
        ParticipatingOrInvited = 4,
    };
}
