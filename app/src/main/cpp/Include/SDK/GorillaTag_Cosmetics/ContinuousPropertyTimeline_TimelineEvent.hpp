#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class ContinuousPropertyTimeline_TimelineEvent : int {
        OnReachedEnd = 1,
        OnReachedBeginning = 2,
        OnEnable = 4,
        OnDisable = 8,
    };
}
