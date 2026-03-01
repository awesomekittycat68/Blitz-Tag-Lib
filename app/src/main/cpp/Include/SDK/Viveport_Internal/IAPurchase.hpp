#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport_Internal {
    struct IAPurchase : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport.Internal", "IAPurchase");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void CancelSubscription(::Viveport_Internal::IAPurchaseCallback* callback, ::BNM::Structures::Mono::String* pchSubscriptionId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CancelSubscription"), {"callback", "pchSubscriptionId"});
            _m.Call(callback, pchSubscriptionId);
        }
        static void GetBalance(::Viveport_Internal::IAPurchaseCallback* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetBalance"), {"callback"});
            _m.Call(callback);
        }
        static void IsReady(::Viveport_Internal::IAPurchaseCallback* callback, ::BNM::Structures::Mono::String* pchAppKey) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IsReady"), {"callback", "pchAppKey"});
            _m.Call(callback, pchAppKey);
        }
        static void Purchase(::Viveport_Internal::IAPurchaseCallback* callback, ::BNM::Structures::Mono::String* pchPurchaseId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Purchase"), {"callback", "pchPurchaseId"});
            _m.Call(callback, pchPurchaseId);
        }
        static void Query(::Viveport_Internal::IAPurchaseCallback* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Query"), {"callback"});
            _m.Call(callback);
        }
        static void Query(::Viveport_Internal::IAPurchaseCallback* callback, ::BNM::Structures::Mono::String* pchPurchaseId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Query"), {"callback", "pchPurchaseId"});
            _m.Call(callback, pchPurchaseId);
        }
        static void QuerySubscription(::Viveport_Internal::IAPurchaseCallback* callback, ::BNM::Structures::Mono::String* pchSubscriptionId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QuerySubscription"), {"callback", "pchSubscriptionId"});
            _m.Call(callback, pchSubscriptionId);
        }
        static void QuerySubscriptionList(::Viveport_Internal::IAPurchaseCallback* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QuerySubscriptionList"), {"callback"});
            _m.Call(callback);
        }
        static void Request(::Viveport_Internal::IAPurchaseCallback* callback, ::BNM::Structures::Mono::String* pchPrice) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Request"), {"callback", "pchPrice"});
            _m.Call(callback, pchPrice);
        }
        static void Request(::Viveport_Internal::IAPurchaseCallback* callback, ::BNM::Structures::Mono::String* pchPrice, ::BNM::Structures::Mono::String* pchUserData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Request"), {"callback", "pchPrice", "pchUserData"});
            _m.Call(callback, pchPrice, pchUserData);
        }
        static void RequestSubscription(::Viveport_Internal::IAPurchaseCallback* callback, ::BNM::Structures::Mono::String* pchPrice, ::BNM::Structures::Mono::String* pchFreeTrialType, int nFreeTrialValue, ::BNM::Structures::Mono::String* pchChargePeriodType, int nChargePeriodValue, int nNumberOfChargePeriod, ::BNM::Structures::Mono::String* pchPlanId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSubscription"), {"callback", "pchPrice", "pchFreeTrialType", "nFreeTrialValue", "pchChargePeriodType", "nChargePeriodValue", "nNumberOfChargePeriod", "pchPlanId"});
            _m.Call(callback, pchPrice, pchFreeTrialType, nFreeTrialValue, pchChargePeriodType, nChargePeriodValue, nNumberOfChargePeriod, pchPlanId);
        }
        static void RequestSubscriptionWithPlanID(::Viveport_Internal::IAPurchaseCallback* callback, ::BNM::Structures::Mono::String* pchPlanId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSubscriptionWithPlanID"), {"callback", "pchPlanId"});
            _m.Call(callback, pchPlanId);
        }
        static void Subscribe(::Viveport_Internal::IAPurchaseCallback* callback, ::BNM::Structures::Mono::String* pchSubscriptionId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Subscribe"), {"callback", "pchSubscriptionId"});
            _m.Call(callback, pchSubscriptionId);
        }
    };
}
