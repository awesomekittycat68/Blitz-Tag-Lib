#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ThrowableBug_BugName.hpp"

namespace GlobalNamespace {
    struct ThrowableBugBeacon : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ThrowableBugBeacon");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::ThrowableBug_BugName GetBugName() {
            static BNM::Method<::GlobalNamespace::ThrowableBug_BugName> _method = GetClass().GetMethod(O("get_BugName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetRange() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Range"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnCall(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCall"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnCall(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCall"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnChangeSpeedMultiplier(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconFloatEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnChangeSpeedMultiplier"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnChangeSpeedMultiplier(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconFloatEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnChangeSpeedMultiplier"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnDismiss(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDismiss"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnDismiss(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDismiss"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnLock(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnLock"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnLock(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnLock"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnUnlock(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnUnlock"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnUnlock(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnUnlock"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::GlobalNamespace::ThrowableBug_BugName GetBugName_f() {
            static BNM::Field<::GlobalNamespace::ThrowableBug_BugName> _field = GetClass().GetField(O("bugName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* GetOnCall() {
            static BNM::Field<::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*> _field = GetClass().GetField(O("OnCall"));
            return _field.Get();
        }
        static ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconFloatEvent* GetOnChangeSpeedMultiplier() {
            static BNM::Field<::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconFloatEvent*> _field = GetClass().GetField(O("OnChangeSpeedMultiplier"));
            return _field.Get();
        }
        static ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* GetOnDismiss() {
            static BNM::Field<::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*> _field = GetClass().GetField(O("OnDismiss"));
            return _field.Get();
        }
        static ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* GetOnLock() {
            static BNM::Field<::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*> _field = GetClass().GetField(O("OnLock"));
            return _field.Get();
        }
        static ::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* GetOnUnlock() {
            static BNM::Field<::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*> _field = GetClass().GetField(O("OnUnlock"));
            return _field.Get();
        }
        float GetRange_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("range"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBugName(::GlobalNamespace::ThrowableBug_BugName value) {
            static BNM::Field<::GlobalNamespace::ThrowableBug_BugName> _field = GetClass().GetField(O("bugName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnCall(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* value) {
            static BNM::Field<::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*> _field = GetClass().GetField(O("OnCall"));
            _field.Set(value);
        }
        static void SetOnChangeSpeedMultiplier(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconFloatEvent* value) {
            static BNM::Field<::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconFloatEvent*> _field = GetClass().GetField(O("OnChangeSpeedMultiplier"));
            _field.Set(value);
        }
        static void SetOnDismiss(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* value) {
            static BNM::Field<::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*> _field = GetClass().GetField(O("OnDismiss"));
            _field.Set(value);
        }
        static void SetOnLock(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* value) {
            static BNM::Field<::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*> _field = GetClass().GetField(O("OnLock"));
            _field.Set(value);
        }
        static void SetOnUnlock(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* value) {
            static BNM::Field<::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent*> _field = GetClass().GetField(O("OnUnlock"));
            _field.Set(value);
        }
        void SetRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("range"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void add_OnCall_1(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCall"), {"value"});
            _m.Call(value);
        }
        static void add_OnChangeSpeedMultiplier_1(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconFloatEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnChangeSpeedMultiplier"), {"value"});
            _m.Call(value);
        }
        static void add_OnDismiss_1(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDismiss"), {"value"});
            _m.Call(value);
        }
        static void add_OnLock_1(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnLock"), {"value"});
            _m.Call(value);
        }
        static void add_OnUnlock_1(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnUnlock"), {"value"});
            _m.Call(value);
        }
        void Call() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Call"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ChangeSpeedMultiplier(float f) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeSpeedMultiplier"), {"f"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(f);
        }
        void Dismiss() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dismiss"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::ThrowableBug_BugName get_BugName() {
            static BNM::Method<::GlobalNamespace::ThrowableBug_BugName> _m = GetClass().GetMethod(O("get_BugName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_Range() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Range"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Lock() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Lock"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void remove_OnCall_1(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCall"), {"value"});
            _m.Call(value);
        }
        static void remove_OnChangeSpeedMultiplier_1(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconFloatEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnChangeSpeedMultiplier"), {"value"});
            _m.Call(value);
        }
        static void remove_OnDismiss_1(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDismiss"), {"value"});
            _m.Call(value);
        }
        static void remove_OnLock_1(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnLock"), {"value"});
            _m.Call(value);
        }
        static void remove_OnUnlock_1(::GlobalNamespace::ThrowableBugBeacon_ThrowableBugBeaconEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnUnlock"), {"value"});
            _m.Call(value);
        }
        void Unlock() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unlock"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
