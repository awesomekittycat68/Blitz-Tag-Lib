#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    struct SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "SubscriptionManager").GetInnerClass("GetMySubscriptionsAndTheirBenefitsResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>* GetNewlyGrantedBenefitsBySubscriptionSku() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>*> _field = GetClass().GetField(O("NewlyGrantedBenefitsBySubscriptionSku"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>* GetPreviouslyGrantedBenefitsBySubscriptionSku() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>*> _field = GetClass().GetField(O("PreviouslyGrantedBenefitsBySubscriptionSku"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSharedGroupDataUpdateSucceeded() {
            static BNM::Field<void*> _field = GetClass().GetField(O("SharedGroupDataUpdateSucceeded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::SubscriptionManager_MothershipSubscription*>* GetSubscriptions() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::SubscriptionManager_MothershipSubscription*>*> _field = GetClass().GetField(O("Subscriptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNewlyGrantedBenefitsBySubscriptionSku(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>*> _field = GetClass().GetField(O("NewlyGrantedBenefitsBySubscriptionSku"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviouslyGrantedBenefitsBySubscriptionSku(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>*> _field = GetClass().GetField(O("PreviouslyGrantedBenefitsBySubscriptionSku"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSharedGroupDataUpdateSucceeded(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("SharedGroupDataUpdateSucceeded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubscriptions(::BNM::Structures::Mono::List<::GorillaTagScripts::SubscriptionManager_MothershipSubscription*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::SubscriptionManager_MothershipSubscription*>*> _field = GetClass().GetField(O("Subscriptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
