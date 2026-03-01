#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class BurstClassInfo_EFieldTypes : int {
        Float = 0,
        Int = 1,
        Double = 2,
        Bool = 3,
        String = 4,
        LightUserData = 5,
    };
}
