#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class ContinuousProperty_Type : int {
        Color = 0,
        Scale = 1,
        BlendShape = 2,
        Float = 3,
        ShaderVector2_X = 4,
        ShaderColor = 5,
        BezierInterpolation = 6,
        AxisAngle = 7,
        TransformInterpolation = 8,
        OffsetInterpolation = 9,
        Boolean = 10,
        Speed = 11,
        Rate = 12,
        Volume = 13,
        Pitch = 14,
        PlayStop = 15,
        EnableDisable = 16,
        UnityEvent = 17,
        Trigger = 18,
    };
}
