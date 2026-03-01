#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_MultiplayerModels {
    struct SetMatchmakingQueueRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "SetMatchmakingQueueRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_MultiplayerModels::MatchmakingQueueConfig* GetMatchmakingQueue() {
            static BNM::Field<::PlayFab_MultiplayerModels::MatchmakingQueueConfig*> _field = GetClass().GetField(O("MatchmakingQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMatchmakingQueue(::PlayFab_MultiplayerModels::MatchmakingQueueConfig* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::MatchmakingQueueConfig*> _field = GetClass().GetField(O("MatchmakingQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
