#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_MultiplayerModels {
    struct ListMatchmakingQueuesResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "ListMatchmakingQueuesResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::MatchmakingQueueConfig*>* GetMatchMakingQueues() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::MatchmakingQueueConfig*>*> _field = GetClass().GetField(O("MatchMakingQueues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMatchMakingQueues(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::MatchmakingQueueConfig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::MatchmakingQueueConfig*>*> _field = GetClass().GetField(O("MatchMakingQueues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
