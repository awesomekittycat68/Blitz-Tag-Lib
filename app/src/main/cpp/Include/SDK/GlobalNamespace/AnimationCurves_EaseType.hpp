#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class AnimationCurves_EaseType : int {
        EaseInQuad = 1,
        EaseOutQuad = 2,
        EaseInOutQuad = 3,
        EaseInCubic = 4,
        EaseOutCubic = 5,
        EaseInOutCubic = 6,
        EaseInQuart = 7,
        EaseOutQuart = 8,
        EaseInOutQuart = 9,
        EaseInQuint = 10,
        EaseOutQuint = 11,
        EaseInOutQuint = 12,
        EaseInSine = 13,
        EaseOutSine = 14,
        EaseInOutSine = 15,
        EaseInExpo = 16,
        EaseOutExpo = 17,
        EaseInOutExpo = 18,
        EaseInCirc = 19,
        EaseOutCirc = 20,
        EaseInOutCirc = 21,
        EaseInBounce = 22,
        EaseOutBounce = 23,
        EaseInOutBounce = 24,
        EaseInBack = 25,
        EaseOutBack = 26,
        EaseInOutBack = 27,
        EaseInElastic = 28,
        EaseOutElastic = 29,
        EaseInOutElastic = 30,
        Spring = 31,
        Linear = 32,
        Step = 33,
    };
}
