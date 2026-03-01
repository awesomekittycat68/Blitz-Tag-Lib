#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct GetPlayerStatisticsResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "GetPlayerStatisticsResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::StatisticValue*>* GetStatistics() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::StatisticValue*>*> _field = GetClass().GetField(O("Statistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetStatistics(::BNM::Structures::Mono::List<::PlayFab_ClientModels::StatisticValue*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::StatisticValue*>*> _field = GetClass().GetField(O("Statistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
