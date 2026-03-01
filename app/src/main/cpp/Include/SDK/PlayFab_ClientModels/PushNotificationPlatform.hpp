#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_ClientModels {
    enum class PushNotificationPlatform : int {
        ApplePushNotificationService = 0,
        GoogleCloudMessaging = 1,
    };
}
