#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SubscriptionStatus_Platform.hpp"
#include "SubscriptionStatus_TransactionType.hpp"

namespace Viveport {
    struct SubscriptionStatus : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport", "SubscriptionStatus");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::Viveport::SubscriptionStatus_Platform>* GetPlatforms() {
            static BNM::Method<::BNM::Structures::Mono::List<::Viveport::SubscriptionStatus_Platform>*> _method = GetClass().GetMethod(O("get_Platforms"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPlatforms(::BNM::Structures::Mono::List<::Viveport::SubscriptionStatus_Platform>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Platforms"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Viveport::SubscriptionStatus_TransactionType GetType_pg() {
            static BNM::Method<::Viveport::SubscriptionStatus_TransactionType> _method = GetClass().GetMethod(O("get_Type"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetType(::Viveport::SubscriptionStatus_TransactionType value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Type"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::Viveport::SubscriptionStatus_Platform>* get_Platforms() {
            static BNM::Method<::BNM::Structures::Mono::List<::Viveport::SubscriptionStatus_Platform>*> _m = GetClass().GetMethod(O("get_Platforms"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Viveport::SubscriptionStatus_TransactionType get_Type() {
            static BNM::Method<::Viveport::SubscriptionStatus_TransactionType> _m = GetClass().GetMethod(O("get_Type"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Platforms(::BNM::Structures::Mono::List<::Viveport::SubscriptionStatus_Platform>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Platforms"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Type(::Viveport::SubscriptionStatus_TransactionType value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Type"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
