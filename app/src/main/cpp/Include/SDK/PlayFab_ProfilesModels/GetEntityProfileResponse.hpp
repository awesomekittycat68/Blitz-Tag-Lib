#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ProfilesModels {
    struct GetEntityProfileResponse : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ProfilesModels", "GetEntityProfileResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_ProfilesModels::EntityProfileBody* GetProfile() {
            static BNM::Field<::PlayFab_ProfilesModels::EntityProfileBody*> _field = GetClass().GetField(O("Profile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetProfile(::PlayFab_ProfilesModels::EntityProfileBody* value) {
            static BNM::Field<::PlayFab_ProfilesModels::EntityProfileBody*> _field = GetClass().GetField(O("Profile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
