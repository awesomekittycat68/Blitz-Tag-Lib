#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class FriendBackendController_PrivacyState : int {
        VISIBLE = 0,
        PUBLIC_ONLY = 1,
        HIDDEN = 2,
    };
}
