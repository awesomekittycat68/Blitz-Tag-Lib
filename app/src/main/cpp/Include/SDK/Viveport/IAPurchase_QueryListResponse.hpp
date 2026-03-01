#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport {
    struct IAPurchase_QueryListResponse : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport", "IAPurchase").GetInnerClass("QueryListResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetFrom() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_from"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetFrom(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_from"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetTo() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_to"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTo(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_to"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetTotal() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_total"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTotal(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_total"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::Viveport::IAPurchase_QueryResponse2*>* GetPurchaseList() {
            static BNM::Field<::BNM::Structures::Mono::List<::Viveport::IAPurchase_QueryResponse2*>*> _field = GetClass().GetField(O("purchaseList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPurchaseList(::BNM::Structures::Mono::List<::Viveport::IAPurchase_QueryResponse2*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Viveport::IAPurchase_QueryResponse2*>*> _field = GetClass().GetField(O("purchaseList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int get_from() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_from"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_to() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_to"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_total() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_total"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_from(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_from"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_to(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_to"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_total(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_total"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
