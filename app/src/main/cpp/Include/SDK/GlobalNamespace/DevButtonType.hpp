#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class DevButtonType : int {
        LogLevel = 0,
        Grow = 1,
        Shrink = 2,
        ScrollUp = 3,
        Mute = 4,
        LineExpand = 5,
        LineForward = 6,
        ScrollDown = 7,
        Bottom = 8,
        Toggle = 9,
        Clear = 10,
        ConsoleMode = 11,
        InspectorMode = 12,
        ComponentInspectorMode = 13,
        InspectorShowAllFields = 14,
        InspectorShowPrivateItems = 15,
    };
}
