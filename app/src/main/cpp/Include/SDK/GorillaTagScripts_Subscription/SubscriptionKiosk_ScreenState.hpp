#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Subscription {
    enum class SubscriptionKiosk_ScreenState : int {
        SafeAccount = 0,
        WaitingForScan = 1,
        Scanning = 2,
        SubscriptionStatusUnknown = 3,
        MainMenuSubscribed = 4,
        MainMenuUnsubscribed = 5,
        SubscriptionData = 6,
        PurchaseSubscription = 7,
        SubscriptionPurchaseInProgress = 8,
        SubscriptionPurchaseResult = 9,
        None = 10,
    };
}
