#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ProfilesModels {
    struct SetEntityProfilePolicyResponse : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ProfilesModels", "SetEntityProfilePolicyResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityPermissionStatement*>* GetPermissions() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityPermissionStatement*>*> _field = GetClass().GetField(O("Permissions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPermissions(::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityPermissionStatement*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityPermissionStatement*>*> _field = GetClass().GetField(O("Permissions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
