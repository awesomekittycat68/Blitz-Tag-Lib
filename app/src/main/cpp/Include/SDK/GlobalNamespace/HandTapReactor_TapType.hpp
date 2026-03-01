#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class HandTapReactor_TapType : int {
        None = 0,
        LeftDown = 1,
        LeftUp = 2,
        LeftHighFive = 4,
        LeftFistBump = 8,
        LeftTagFirstPerson = 16,
        LeftTagThirdPerson = 32,
        AllLeft = 63,
        RightDown = 64,
        RightUp = 128,
        RightHighFive = 256,
        RightFistBump = 512,
        RightTagFirstPerson = 1024,
        RightTagThirdPerson = 2048,
        AllRight = 4032,
        All = -1,
    };
}
