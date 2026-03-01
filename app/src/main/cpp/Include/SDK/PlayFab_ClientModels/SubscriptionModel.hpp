#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SubscriptionProviderStatus.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_ClientModels {
    struct SubscriptionModel : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "SubscriptionModel");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetExpiration() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Expiration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetInitialSubscriptionTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("InitialSubscriptionTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetStatus() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Status"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSubscriptionId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SubscriptionId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSubscriptionItemId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SubscriptionItemId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSubscriptionProvider() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SubscriptionProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetExpiration(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Expiration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialSubscriptionTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("InitialSubscriptionTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatus(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Status"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubscriptionId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SubscriptionId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubscriptionItemId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SubscriptionItemId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubscriptionProvider(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SubscriptionProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
