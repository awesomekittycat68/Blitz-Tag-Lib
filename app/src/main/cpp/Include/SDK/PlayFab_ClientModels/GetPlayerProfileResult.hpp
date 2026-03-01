#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct GetPlayerProfileResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "GetPlayerProfileResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_ClientModels::PlayerProfileModel* GetPlayerProfile() {
            static BNM::Field<::PlayFab_ClientModels::PlayerProfileModel*> _field = GetClass().GetField(O("PlayerProfile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPlayerProfile(::PlayFab_ClientModels::PlayerProfileModel* value) {
            static BNM::Field<::PlayFab_ClientModels::PlayerProfileModel*> _field = GetClass().GetField(O("PlayerProfile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
