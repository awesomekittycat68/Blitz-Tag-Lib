#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport {
    struct IAPurchase_StatusDetail : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport", "IAPurchase").GetInnerClass("StatusDetail");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetCancelReason() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_cancel_reason"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCancelReason(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_cancel_reason"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int64_t GetDateNextCharge() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_date_next_charge"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDateNextCharge(int64_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_date_next_charge"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::Viveport::IAPurchase_StatusDetailTransaction*>* GetTransactions() {
            static BNM::Method<::BNM::Structures::Mono::Array<::Viveport::IAPurchase_StatusDetailTransaction*>*> _method = GetClass().GetMethod(O("get_transactions"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTransactions(::BNM::Structures::Mono::Array<::Viveport::IAPurchase_StatusDetailTransaction*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_transactions"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* get_cancel_reason() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_cancel_reason"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t get_date_next_charge() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_date_next_charge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<::Viveport::IAPurchase_StatusDetailTransaction*>* get_transactions() {
            static BNM::Method<::BNM::Structures::Mono::Array<::Viveport::IAPurchase_StatusDetailTransaction*>*> _m = GetClass().GetMethod(O("get_transactions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_cancel_reason(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_cancel_reason"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_date_next_charge(int64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_date_next_charge"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_transactions(::BNM::Structures::Mono::Array<::Viveport::IAPurchase_StatusDetailTransaction*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_transactions"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
