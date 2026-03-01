#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_ClientModels {
    struct MembershipModel : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "MembershipModel");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMembershipExpiration() {
            static BNM::Field<void*> _field = GetClass().GetField(O("MembershipExpiration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMembershipId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MembershipId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOverrideExpiration() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OverrideExpiration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::SubscriptionModel*>* GetSubscriptions() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::SubscriptionModel*>*> _field = GetClass().GetField(O("Subscriptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMembershipExpiration(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("MembershipExpiration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMembershipId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MembershipId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideExpiration(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OverrideExpiration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubscriptions(::BNM::Structures::Mono::List<::PlayFab_ClientModels::SubscriptionModel*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::SubscriptionModel*>*> _field = GetClass().GetField(O("Subscriptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
