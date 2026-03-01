#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "IAPurchase_BaseHandler.hpp"

namespace Viveport {
    struct IAPurchase_IAPHandler : ::Viveport::IAPurchase_BaseHandler {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport", "IAPurchase").GetInnerClass("IAPHandler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Viveport::IAPurchase_IAPurchaseListener* GetListener() {
            static BNM::Field<::Viveport::IAPurchase_IAPurchaseListener*> _field = GetClass().GetField(O("listener"));
            return _field.Get();
        }
        static void SetListener(::Viveport::IAPurchase_IAPurchaseListener* value) {
            static BNM::Field<::Viveport::IAPurchase_IAPurchaseListener*> _field = GetClass().GetField(O("listener"));
            _field.Set(value);
        }
        void BalanceHandler(int code, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BalanceHandler"), {"code", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, message);
        }
        void CancelSubscriptionHandler(int code, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CancelSubscriptionHandler"), {"code", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, message);
        }
        ::Viveport_Internal::IAPurchaseCallback* getBalanceHandler() {
            static BNM::Method<::Viveport_Internal::IAPurchaseCallback*> _m = GetClass().GetMethod(O("getBalanceHandler"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Viveport_Internal::IAPurchaseCallback* getCancelSubscriptionHandler() {
            static BNM::Method<::Viveport_Internal::IAPurchaseCallback*> _m = GetClass().GetMethod(O("getCancelSubscriptionHandler"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Viveport_Internal::IAPurchaseCallback* getIsReadyHandler() {
            static BNM::Method<::Viveport_Internal::IAPurchaseCallback*> _m = GetClass().GetMethod(O("getIsReadyHandler"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Viveport_Internal::IAPurchaseCallback* getPurchaseHandler() {
            static BNM::Method<::Viveport_Internal::IAPurchaseCallback*> _m = GetClass().GetMethod(O("getPurchaseHandler"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Viveport_Internal::IAPurchaseCallback* getQueryHandler() {
            static BNM::Method<::Viveport_Internal::IAPurchaseCallback*> _m = GetClass().GetMethod(O("getQueryHandler"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Viveport_Internal::IAPurchaseCallback* getQueryListHandler() {
            static BNM::Method<::Viveport_Internal::IAPurchaseCallback*> _m = GetClass().GetMethod(O("getQueryListHandler"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Viveport_Internal::IAPurchaseCallback* getQuerySubscriptionHandler() {
            static BNM::Method<::Viveport_Internal::IAPurchaseCallback*> _m = GetClass().GetMethod(O("getQuerySubscriptionHandler"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Viveport_Internal::IAPurchaseCallback* getQuerySubscriptionListHandler() {
            static BNM::Method<::Viveport_Internal::IAPurchaseCallback*> _m = GetClass().GetMethod(O("getQuerySubscriptionListHandler"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Viveport_Internal::IAPurchaseCallback* getRequestHandler() {
            static BNM::Method<::Viveport_Internal::IAPurchaseCallback*> _m = GetClass().GetMethod(O("getRequestHandler"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Viveport_Internal::IAPurchaseCallback* getRequestSubscriptionHandler() {
            static BNM::Method<::Viveport_Internal::IAPurchaseCallback*> _m = GetClass().GetMethod(O("getRequestSubscriptionHandler"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Viveport_Internal::IAPurchaseCallback* getRequestSubscriptionWithPlanIDHandler() {
            static BNM::Method<::Viveport_Internal::IAPurchaseCallback*> _m = GetClass().GetMethod(O("getRequestSubscriptionWithPlanIDHandler"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Viveport_Internal::IAPurchaseCallback* getSubscribeHandler() {
            static BNM::Method<::Viveport_Internal::IAPurchaseCallback*> _m = GetClass().GetMethod(O("getSubscribeHandler"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void IsReadyHandler(int code, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IsReadyHandler"), {"code", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, message);
        }
        void PurchaseHandler(int code, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PurchaseHandler"), {"code", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, message);
        }
        void QueryHandler(int code, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QueryHandler"), {"code", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, message);
        }
        void QueryListHandler(int code, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QueryListHandler"), {"code", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, message);
        }
        void QuerySubscriptionHandler(int code, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QuerySubscriptionHandler"), {"code", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, message);
        }
        void QuerySubscriptionListHandler(int code, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QuerySubscriptionListHandler"), {"code", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, message);
        }
        void RequestHandler(int code, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestHandler"), {"code", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, message);
        }
        void RequestSubscriptionHandler(int code, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSubscriptionHandler"), {"code", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, message);
        }
        void RequestSubscriptionWithPlanIDHandler(int code, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSubscriptionWithPlanIDHandler"), {"code", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, message);
        }
        void SubscribeHandler(int code, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SubscribeHandler"), {"code", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code, message);
        }
    };
}
