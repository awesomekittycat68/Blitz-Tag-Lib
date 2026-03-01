#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_CosmeticSystem_Editor {
    enum class EEdCosBrowserPartsFilter : int {
        None = 0,
        NoParts = 1,
        Holdable = 2,
        Functional = 4,
        Wardrobe = 8,
        Store = 16,
        FirstPerson = 32,
        LocalRig = 64,
        All = 127,
    };
}
