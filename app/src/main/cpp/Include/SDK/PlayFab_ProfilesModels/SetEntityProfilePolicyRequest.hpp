#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_ProfilesModels {
    struct SetEntityProfilePolicyRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ProfilesModels", "SetEntityProfilePolicyRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_ProfilesModels::EntityKey* GetEntity() {
            static BNM::Field<::PlayFab_ProfilesModels::EntityKey*> _field = GetClass().GetField(O("Entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityPermissionStatement*>* GetStatements() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityPermissionStatement*>*> _field = GetClass().GetField(O("Statements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEntity(::PlayFab_ProfilesModels::EntityKey* value) {
            static BNM::Field<::PlayFab_ProfilesModels::EntityKey*> _field = GetClass().GetField(O("Entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatements(::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityPermissionStatement*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityPermissionStatement*>*> _field = GetClass().GetField(O("Statements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
