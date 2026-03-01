#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport {
    struct IAPurchase : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport", "IAPurchase");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Viveport_Internal::IAPurchaseCallback* GetCancelSubscriptionIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("cancelSubscriptionIl2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::IAPurchaseCallback* GetGetBalanceIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("getBalanceIl2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::IAPurchaseCallback* GetIsReadyIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("isReadyIl2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::IAPurchaseCallback* GetPurchaseIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("purchaseIl2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::IAPurchaseCallback* GetQuery01Il2cppCallback() {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("query01Il2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::IAPurchaseCallback* GetQuery02Il2cppCallback() {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("query02Il2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::IAPurchaseCallback* GetQuerySubscriptionIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("querySubscriptionIl2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::IAPurchaseCallback* GetQuerySubscriptionListIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("querySubscriptionListIl2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::IAPurchaseCallback* GetRequest01Il2cppCallback() {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("request01Il2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::IAPurchaseCallback* GetRequest02Il2cppCallback() {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("request02Il2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::IAPurchaseCallback* GetRequestSubscriptionIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("requestSubscriptionIl2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::IAPurchaseCallback* GetRequestSubscriptionWithPlanIDIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("requestSubscriptionWithPlanIDIl2cppCallback"));
            return _field.Get();
        }
        static ::Viveport_Internal::IAPurchaseCallback* GetSubscribeIl2cppCallback() {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("subscribeIl2cppCallback"));
            return _field.Get();
        }
        static void SetCancelSubscriptionIl2cppCallback(::Viveport_Internal::IAPurchaseCallback* value) {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("cancelSubscriptionIl2cppCallback"));
            _field.Set(value);
        }
        static void SetGetBalanceIl2cppCallback(::Viveport_Internal::IAPurchaseCallback* value) {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("getBalanceIl2cppCallback"));
            _field.Set(value);
        }
        static void SetIsReadyIl2cppCallback(::Viveport_Internal::IAPurchaseCallback* value) {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("isReadyIl2cppCallback"));
            _field.Set(value);
        }
        static void SetPurchaseIl2cppCallback(::Viveport_Internal::IAPurchaseCallback* value) {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("purchaseIl2cppCallback"));
            _field.Set(value);
        }
        static void SetQuery01Il2cppCallback(::Viveport_Internal::IAPurchaseCallback* value) {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("query01Il2cppCallback"));
            _field.Set(value);
        }
        static void SetQuery02Il2cppCallback(::Viveport_Internal::IAPurchaseCallback* value) {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("query02Il2cppCallback"));
            _field.Set(value);
        }
        static void SetQuerySubscriptionIl2cppCallback(::Viveport_Internal::IAPurchaseCallback* value) {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("querySubscriptionIl2cppCallback"));
            _field.Set(value);
        }
        static void SetQuerySubscriptionListIl2cppCallback(::Viveport_Internal::IAPurchaseCallback* value) {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("querySubscriptionListIl2cppCallback"));
            _field.Set(value);
        }
        static void SetRequest01Il2cppCallback(::Viveport_Internal::IAPurchaseCallback* value) {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("request01Il2cppCallback"));
            _field.Set(value);
        }
        static void SetRequest02Il2cppCallback(::Viveport_Internal::IAPurchaseCallback* value) {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("request02Il2cppCallback"));
            _field.Set(value);
        }
        static void SetRequestSubscriptionIl2cppCallback(::Viveport_Internal::IAPurchaseCallback* value) {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("requestSubscriptionIl2cppCallback"));
            _field.Set(value);
        }
        static void SetRequestSubscriptionWithPlanIDIl2cppCallback(::Viveport_Internal::IAPurchaseCallback* value) {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("requestSubscriptionWithPlanIDIl2cppCallback"));
            _field.Set(value);
        }
        static void SetSubscribeIl2cppCallback(::Viveport_Internal::IAPurchaseCallback* value) {
            static BNM::Field<::Viveport_Internal::IAPurchaseCallback*> _field = GetClass().GetField(O("subscribeIl2cppCallback"));
            _field.Set(value);
        }
        static void CancelSubscription(::Viveport::IAPurchase_IAPurchaseListener* listener, ::BNM::Structures::Mono::String* pchSubscriptionId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CancelSubscription"), {"listener", "pchSubscriptionId"});
            _m.Call(listener, pchSubscriptionId);
        }
        static void CancelSubscriptionIl2cppCallback(int errorCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CancelSubscriptionIl2cppCallback"), {"errorCode", "message"});
            _m.Call(errorCode, message);
        }
        static void GetBalance(::Viveport::IAPurchase_IAPurchaseListener* listener) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetBalance"), {"listener"});
            _m.Call(listener);
        }
        static void GetBalanceIl2cppCallback(int errorCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetBalanceIl2cppCallback"), {"errorCode", "message"});
            _m.Call(errorCode, message);
        }
        static void IsReady(::Viveport::IAPurchase_IAPurchaseListener* listener, ::BNM::Structures::Mono::String* pchAppKey) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IsReady"), {"listener", "pchAppKey"});
            _m.Call(listener, pchAppKey);
        }
        static void IsReadyIl2cppCallback(int errorCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IsReadyIl2cppCallback"), {"errorCode", "message"});
            _m.Call(errorCode, message);
        }
        static void Purchase(::Viveport::IAPurchase_IAPurchaseListener* listener, ::BNM::Structures::Mono::String* pchPurchaseId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Purchase"), {"listener", "pchPurchaseId"});
            _m.Call(listener, pchPurchaseId);
        }
        static void PurchaseIl2cppCallback(int errorCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseIl2cppCallback"), {"errorCode", "message"});
            _m.Call(errorCode, message);
        }
        static void Query(::Viveport::IAPurchase_IAPurchaseListener* listener) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Query"), {"listener"});
            _m.Call(listener);
        }
        static void Query(::Viveport::IAPurchase_IAPurchaseListener* listener, ::BNM::Structures::Mono::String* pchPurchaseId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Query"), {"listener", "pchPurchaseId"});
            _m.Call(listener, pchPurchaseId);
        }
        static void Query01Il2cppCallback(int errorCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Query01Il2cppCallback"), {"errorCode", "message"});
            _m.Call(errorCode, message);
        }
        static void Query02Il2cppCallback(int errorCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Query02Il2cppCallback"), {"errorCode", "message"});
            _m.Call(errorCode, message);
        }
        static void QuerySubscription(::Viveport::IAPurchase_IAPurchaseListener* listener, ::BNM::Structures::Mono::String* pchSubscriptionId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QuerySubscription"), {"listener", "pchSubscriptionId"});
            _m.Call(listener, pchSubscriptionId);
        }
        static void QuerySubscriptionIl2cppCallback(int errorCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QuerySubscriptionIl2cppCallback"), {"errorCode", "message"});
            _m.Call(errorCode, message);
        }
        static void QuerySubscriptionList(::Viveport::IAPurchase_IAPurchaseListener* listener) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QuerySubscriptionList"), {"listener"});
            _m.Call(listener);
        }
        static void QuerySubscriptionListIl2cppCallback(int errorCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QuerySubscriptionListIl2cppCallback"), {"errorCode", "message"});
            _m.Call(errorCode, message);
        }
        static void Request(::Viveport::IAPurchase_IAPurchaseListener* listener, ::BNM::Structures::Mono::String* pchPrice) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Request"), {"listener", "pchPrice"});
            _m.Call(listener, pchPrice);
        }
        static void Request(::Viveport::IAPurchase_IAPurchaseListener* listener, ::BNM::Structures::Mono::String* pchPrice, ::BNM::Structures::Mono::String* pchUserData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Request"), {"listener", "pchPrice", "pchUserData"});
            _m.Call(listener, pchPrice, pchUserData);
        }
        static void Request01Il2cppCallback(int errorCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Request01Il2cppCallback"), {"errorCode", "message"});
            _m.Call(errorCode, message);
        }
        static void Request02Il2cppCallback(int errorCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Request02Il2cppCallback"), {"errorCode", "message"});
            _m.Call(errorCode, message);
        }
        static void RequestSubscription(::Viveport::IAPurchase_IAPurchaseListener* listener, ::BNM::Structures::Mono::String* pchPrice, ::BNM::Structures::Mono::String* pchFreeTrialType, int nFreeTrialValue, ::BNM::Structures::Mono::String* pchChargePeriodType, int nChargePeriodValue, int nNumberOfChargePeriod, ::BNM::Structures::Mono::String* pchPlanId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSubscription"), {"listener", "pchPrice", "pchFreeTrialType", "nFreeTrialValue", "pchChargePeriodType", "nChargePeriodValue", "nNumberOfChargePeriod", "pchPlanId"});
            _m.Call(listener, pchPrice, pchFreeTrialType, nFreeTrialValue, pchChargePeriodType, nChargePeriodValue, nNumberOfChargePeriod, pchPlanId);
        }
        static void RequestSubscriptionIl2cppCallback(int errorCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSubscriptionIl2cppCallback"), {"errorCode", "message"});
            _m.Call(errorCode, message);
        }
        static void RequestSubscriptionWithPlanID(::Viveport::IAPurchase_IAPurchaseListener* listener, ::BNM::Structures::Mono::String* pchPlanId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSubscriptionWithPlanID"), {"listener", "pchPlanId"});
            _m.Call(listener, pchPlanId);
        }
        static void RequestSubscriptionWithPlanIDIl2cppCallback(int errorCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSubscriptionWithPlanIDIl2cppCallback"), {"errorCode", "message"});
            _m.Call(errorCode, message);
        }
        static void Subscribe(::Viveport::IAPurchase_IAPurchaseListener* listener, ::BNM::Structures::Mono::String* pchSubscriptionId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Subscribe"), {"listener", "pchSubscriptionId"});
            _m.Call(listener, pchSubscriptionId);
        }
        static void SubscribeIl2cppCallback(int errorCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SubscribeIl2cppCallback"), {"errorCode", "message"});
            _m.Call(errorCode, message);
        }
    };
}
