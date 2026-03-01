#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_ClientModels {
    enum class TradeStatus : int {
        Invalid = 0,
        Opening = 1,
        Open = 2,
        Accepting = 3,
        Accepted = 4,
        Filled = 5,
        Cancelled = 6,
    };
}
