#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_CosmeticSystem_Editor {
    enum class EEdCosBrowserAntiClippingFilter : int {
        None = 0,
        NameTag = 1,
        LeftArm = 2,
        RightArm = 4,
        Chest = 8,
        HuntComputer = 16,
        Badge = 32,
        BuilderWatch = 64,
        FriendshipBraceletLeft = 128,
        FriendshipBraceletRight = 256,
        All = 511,
    };
}
