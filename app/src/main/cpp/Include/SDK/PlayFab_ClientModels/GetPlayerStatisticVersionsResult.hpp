#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct GetPlayerStatisticVersionsResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "GetPlayerStatisticVersionsResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::PlayerStatisticVersion*>* GetStatisticVersions() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::PlayerStatisticVersion*>*> _field = GetClass().GetField(O("StatisticVersions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetStatisticVersions(::BNM::Structures::Mono::List<::PlayFab_ClientModels::PlayerStatisticVersion*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::PlayerStatisticVersion*>*> _field = GetClass().GetField(O("StatisticVersions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
