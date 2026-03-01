#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_MultiplayerModels {
    struct GetQueueStatisticsResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "GetQueueStatisticsResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetNumberOfPlayersMatching() {
            static BNM::Field<void*> _field = GetClass().GetField(O("NumberOfPlayersMatching"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_MultiplayerModels::Statistics* GetTimeToMatchStatisticsInSeconds() {
            static BNM::Field<::PlayFab_MultiplayerModels::Statistics*> _field = GetClass().GetField(O("TimeToMatchStatisticsInSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNumberOfPlayersMatching(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("NumberOfPlayersMatching"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeToMatchStatisticsInSeconds(::PlayFab_MultiplayerModels::Statistics* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::Statistics*> _field = GetClass().GetField(O("TimeToMatchStatisticsInSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
