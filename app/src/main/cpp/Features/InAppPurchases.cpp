#include "SDK/GorillaTagScripts/SubscriptionManager.hpp"
#include "BNM/Loading.hpp"
#include "InAppPurchases.h"

namespace BlitzTag
{
    void (*SubscriptionPurchaseSubscription)(GorillaTagScripts::SubscriptionManager*, GorillaTagScripts::SubscriptionManager_SubscriptionTerm) = nullptr;

    void new_SubscriptionPurchaseSubscription(GorillaTagScripts::SubscriptionManager* instance, GorillaTagScripts::SubscriptionManager_SubscriptionTerm subTerm)
    {
        Application::OpenUrl("https://forms.gle/gJjqp9fQU4PZbgTK8");
    }

    void InAppPurchases::Initialize()
    {
        BasicHook(GorillaTagScripts::SubscriptionManager::GetClass().GetMethod("PurchaseSubscription"), new_SubscriptionPurchaseSubscription, SubscriptionPurchaseSubscription);
    }
}
