#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ProfilesModels {
    struct GetEntityProfilesResponse : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ProfilesModels", "GetEntityProfilesResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityProfileBody*>* GetProfiles() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityProfileBody*>*> _field = GetClass().GetField(O("Profiles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetProfiles(::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityProfileBody*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityProfileBody*>*> _field = GetClass().GetField(O("Profiles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
