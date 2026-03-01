#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LoginIdentityProvider.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_AuthenticationModels {
    struct ValidateEntityTokenResponse : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.AuthenticationModels", "ValidateEntityTokenResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_AuthenticationModels::EntityKey* GetEntity() {
            static BNM::Field<::PlayFab_AuthenticationModels::EntityKey*> _field = GetClass().GetField(O("Entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetIdentityProvider() {
            static BNM::Field<void*> _field = GetClass().GetField(O("IdentityProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_AuthenticationModels::EntityLineage* GetLineage() {
            static BNM::Field<::PlayFab_AuthenticationModels::EntityLineage*> _field = GetClass().GetField(O("Lineage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEntity(::PlayFab_AuthenticationModels::EntityKey* value) {
            static BNM::Field<::PlayFab_AuthenticationModels::EntityKey*> _field = GetClass().GetField(O("Entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdentityProvider(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("IdentityProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineage(::PlayFab_AuthenticationModels::EntityLineage* value) {
            static BNM::Field<::PlayFab_AuthenticationModels::EntityLineage*> _field = GetClass().GetField(O("Lineage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
