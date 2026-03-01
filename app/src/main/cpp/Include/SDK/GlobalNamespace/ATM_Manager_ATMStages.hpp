#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class ATM_Manager_ATMStages : int {
        Unavailable = 0,
        Begin = 1,
        Menu = 2,
        Balance = 3,
        Choose = 4,
        Confirm = 5,
        Purchasing = 6,
        Success = 7,
        Failure = 8,
        SafeAccount = 9,
    };
}
