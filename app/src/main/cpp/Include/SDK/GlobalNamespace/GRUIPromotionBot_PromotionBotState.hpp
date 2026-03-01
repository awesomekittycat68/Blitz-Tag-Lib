#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRUIPromotionBot_PromotionBotState : int {
        WaitingForLogin = 0,
        ChoosePromotion = 1,
        ChooseCreditIncrease = 2,
        ChoosePurchaseCredits = 3,
        ConfirmPurchaseCredits = 4,
        CelebratePromotion = 5,
        TryingLogIn = 6,
    };
}
