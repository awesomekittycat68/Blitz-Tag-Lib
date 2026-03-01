#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct TriggerEventNotifier : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TriggerEventNotifier");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_TriggerEnterEvent(::GlobalNamespace::TriggerEventNotifier_TriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_TriggerEnterEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_TriggerEnterEvent(::GlobalNamespace::TriggerEventNotifier_TriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_TriggerEnterEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_TriggerExitEvent(::GlobalNamespace::TriggerEventNotifier_TriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_TriggerExitEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_TriggerExitEvent(::GlobalNamespace::TriggerEventNotifier_TriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_TriggerExitEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        int GetMaskIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("maskIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TriggerEventNotifier_TriggerEvent* GetTriggerEnterEvent() {
            static BNM::Field<::GlobalNamespace::TriggerEventNotifier_TriggerEvent*> _field = GetClass().GetField(O("TriggerEnterEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TriggerEventNotifier_TriggerEvent* GetTriggerExitEvent() {
            static BNM::Field<::GlobalNamespace::TriggerEventNotifier_TriggerEvent*> _field = GetClass().GetField(O("TriggerExitEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMaskIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maskIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerEnterEvent(::GlobalNamespace::TriggerEventNotifier_TriggerEvent* value) {
            static BNM::Field<::GlobalNamespace::TriggerEventNotifier_TriggerEvent*> _field = GetClass().GetField(O("TriggerEnterEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerExitEvent(::GlobalNamespace::TriggerEventNotifier_TriggerEvent* value) {
            static BNM::Field<::GlobalNamespace::TriggerEventNotifier_TriggerEvent*> _field = GetClass().GetField(O("TriggerExitEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_TriggerEnterEvent_1(::GlobalNamespace::TriggerEventNotifier_TriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_TriggerEnterEvent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_TriggerExitEvent_1(::GlobalNamespace::TriggerEventNotifier_TriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_TriggerExitEvent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void remove_TriggerEnterEvent_1(::GlobalNamespace::TriggerEventNotifier_TriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_TriggerEnterEvent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_TriggerExitEvent_1(::GlobalNamespace::TriggerEventNotifier_TriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_TriggerExitEvent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
