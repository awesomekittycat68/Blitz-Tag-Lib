#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CollisionEventNotifier : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CollisionEventNotifier");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_CollisionEnterEvent(::GlobalNamespace::CollisionEventNotifier_CollisionEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_CollisionEnterEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_CollisionEnterEvent(::GlobalNamespace::CollisionEventNotifier_CollisionEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_CollisionEnterEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_CollisionExitEvent(::GlobalNamespace::CollisionEventNotifier_CollisionEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_CollisionExitEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_CollisionExitEvent(::GlobalNamespace::CollisionEventNotifier_CollisionEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_CollisionExitEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::GlobalNamespace::CollisionEventNotifier_CollisionEvent* GetCollisionEnterEvent() {
            static BNM::Field<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*> _field = GetClass().GetField(O("CollisionEnterEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CollisionEventNotifier_CollisionEvent* GetCollisionExitEvent() {
            static BNM::Field<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*> _field = GetClass().GetField(O("CollisionExitEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCollisionEnterEvent(::GlobalNamespace::CollisionEventNotifier_CollisionEvent* value) {
            static BNM::Field<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*> _field = GetClass().GetField(O("CollisionEnterEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionExitEvent(::GlobalNamespace::CollisionEventNotifier_CollisionEvent* value) {
            static BNM::Field<::GlobalNamespace::CollisionEventNotifier_CollisionEvent*> _field = GetClass().GetField(O("CollisionExitEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_CollisionEnterEvent_1(::GlobalNamespace::CollisionEventNotifier_CollisionEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_CollisionEnterEvent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_CollisionExitEvent_1(::GlobalNamespace::CollisionEventNotifier_CollisionEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_CollisionExitEvent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void OnCollisionEnter(::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionEnter"), {"collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collision);
        }
        void OnCollisionExit(::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionExit"), {"collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collision);
        }
        void remove_CollisionEnterEvent_1(::GlobalNamespace::CollisionEventNotifier_CollisionEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_CollisionEnterEvent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_CollisionExitEvent_1(::GlobalNamespace::CollisionEventNotifier_CollisionEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_CollisionExitEvent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
