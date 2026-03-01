#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_ClientModels {
    struct UpdatePlayerStatisticsRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "UpdatePlayerStatisticsRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::StatisticUpdate*>* GetStatistics() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::StatisticUpdate*>*> _field = GetClass().GetField(O("Statistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetStatistics(::BNM::Structures::Mono::List<::PlayFab_ClientModels::StatisticUpdate*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::StatisticUpdate*>*> _field = GetClass().GetField(O("Statistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
