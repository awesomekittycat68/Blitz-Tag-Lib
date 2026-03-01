#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_MultiplayerModels {
    struct EnableMultiplayerServersForTitleRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "EnableMultiplayerServersForTitleRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

    };
}
