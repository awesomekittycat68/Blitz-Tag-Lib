#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport {
    struct IAPurchase_IAPurchaseListener : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport", "IAPurchase").GetInnerClass("IAPurchaseListener");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void OnBalanceSuccess(::BNM::Structures::Mono::String* pchBalance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBalanceSuccess"), {"pchBalance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pchBalance);
        }
        void OnCancelSubscriptionSuccess(bool bCanceled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCancelSubscriptionSuccess"), {"bCanceled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bCanceled);
        }
        void OnFailure(int nCode, ::BNM::Structures::Mono::String* pchMessage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFailure"), {"nCode", "pchMessage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nCode, pchMessage);
        }
        void OnPurchaseSuccess(::BNM::Structures::Mono::String* pchPurchaseId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPurchaseSuccess"), {"pchPurchaseId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pchPurchaseId);
        }
        void OnQuerySubscriptionListSuccess(::BNM::Structures::Mono::Array<::Viveport::IAPurchase_Subscription*>* subscriptionlist) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnQuerySubscriptionListSuccess"), {"subscriptionlist"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(subscriptionlist);
        }
        void OnQuerySubscriptionSuccess(::BNM::Structures::Mono::Array<::Viveport::IAPurchase_Subscription*>* subscriptionlist) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnQuerySubscriptionSuccess"), {"subscriptionlist"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(subscriptionlist);
        }
        void OnQuerySuccess(::Viveport::IAPurchase_QueryResponse* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnQuerySuccess"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void OnQuerySuccess(::Viveport::IAPurchase_QueryListResponse* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnQuerySuccess"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void OnRequestSubscriptionSuccess(::BNM::Structures::Mono::String* pchSubscriptionId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRequestSubscriptionSuccess"), {"pchSubscriptionId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pchSubscriptionId);
        }
        void OnRequestSubscriptionWithPlanIDSuccess(::BNM::Structures::Mono::String* pchSubscriptionId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRequestSubscriptionWithPlanIDSuccess"), {"pchSubscriptionId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pchSubscriptionId);
        }
        void OnRequestSuccess(::BNM::Structures::Mono::String* pchPurchaseId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRequestSuccess"), {"pchPurchaseId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pchPurchaseId);
        }
        void OnSubscribeSuccess(::BNM::Structures::Mono::String* pchSubscriptionId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSubscribeSuccess"), {"pchSubscriptionId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pchSubscriptionId);
        }
        void OnSuccess(::BNM::Structures::Mono::String* pchCurrencyName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSuccess"), {"pchCurrencyName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pchCurrencyName);
        }
    };
}
