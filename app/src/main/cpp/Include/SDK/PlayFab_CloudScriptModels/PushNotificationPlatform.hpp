#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_CloudScriptModels {
    enum class PushNotificationPlatform : int {
        ApplePushNotificationService = 0,
        GoogleCloudMessaging = 1,
    };
}
