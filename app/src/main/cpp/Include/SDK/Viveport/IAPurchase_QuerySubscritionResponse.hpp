#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport {
    struct IAPurchase_QuerySubscritionResponse : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport", "IAPurchase").GetInnerClass("QuerySubscritionResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetMessage() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_message"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMessage(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_message"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetStatusCode() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_statusCode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetStatusCode(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_statusCode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::Viveport::IAPurchase_Subscription*>* GetSubscriptions() {
            static BNM::Method<::BNM::Structures::Mono::List<::Viveport::IAPurchase_Subscription*>*> _method = GetClass().GetMethod(O("get_subscriptions"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSubscriptions(::BNM::Structures::Mono::List<::Viveport::IAPurchase_Subscription*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_subscriptions"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* get_message() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_message"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_statusCode() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_statusCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::Viveport::IAPurchase_Subscription*>* get_subscriptions() {
            static BNM::Method<::BNM::Structures::Mono::List<::Viveport::IAPurchase_Subscription*>*> _m = GetClass().GetMethod(O("get_subscriptions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_message(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_message"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_statusCode(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_statusCode"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_subscriptions(::BNM::Structures::Mono::List<::Viveport::IAPurchase_Subscription*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_subscriptions"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
