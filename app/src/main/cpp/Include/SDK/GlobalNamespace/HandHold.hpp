#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "HandHold_HandSnapMethod.hpp"

namespace GlobalNamespace {
    struct HandHold : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HandHold");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_HandPositionReleaseOverride(::GlobalNamespace::HandHold_HandHoldEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_HandPositionReleaseOverride"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_HandPositionReleaseOverride(::GlobalNamespace::HandHold_HandHoldEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_HandPositionReleaseOverride"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_HandPositionRequestOverride(::GlobalNamespace::HandHold_HandHoldPositionEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_HandPositionRequestOverride"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_HandPositionRequestOverride(::GlobalNamespace::HandHold_HandHoldPositionEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_HandPositionRequestOverride"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::BNM::Structures::Mono::Dictionary<::Transform*, ::Transform*>* GetAttached() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Transform*, ::Transform*>*> _field = GetClass().GetField(O("attached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GorillaGrabber*>* GetCurrentGrabbers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaGrabber*>*> _field = GetClass().GetField(O("currentGrabbers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetForceMomentary() {
            static BNM::Field<bool> _field = GetClass().GetField(O("forceMomentary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::HandHold_HandHoldEvent* GetHandPositionReleaseOverride() {
            static BNM::Field<::GlobalNamespace::HandHold_HandHoldEvent*> _field = GetClass().GetField(O("HandPositionReleaseOverride"));
            return _field.Get();
        }
        static ::GlobalNamespace::HandHold_HandHoldPositionEvent* GetHandPositionRequestOverride() {
            static BNM::Field<::GlobalNamespace::HandHold_HandHoldPositionEvent*> _field = GetClass().GetField(O("HandPositionRequestOverride"));
            return _field.Get();
        }
        ::GlobalNamespace::HandHold_HandSnapMethod GetHandSnapMethod() {
            static BNM::Field<::GlobalNamespace::HandHold_HandSnapMethod> _field = GetClass().GetField(O("handSnapMethod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetMyCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("myCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::Tappable* GetMyTappable() {
            static BNM::Field<::GlobalNamespace::Tappable*> _field = GetClass().GetField(O("myTappable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnGrab() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnGrabHanded() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnGrabHanded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnGrabHandHold() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnGrabHandHold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnRelease() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnReleaseHandHold() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnReleaseHandHold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRotatePlayerWhenHeld() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rotatePlayerWhenHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAttached(::BNM::Structures::Mono::Dictionary<::Transform*, ::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Transform*, ::Transform*>*> _field = GetClass().GetField(O("attached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentGrabbers(::BNM::Structures::Mono::List<::GlobalNamespace::GorillaGrabber*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaGrabber*>*> _field = GetClass().GetField(O("currentGrabbers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceMomentary(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("forceMomentary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetHandPositionReleaseOverride(::GlobalNamespace::HandHold_HandHoldEvent* value) {
            static BNM::Field<::GlobalNamespace::HandHold_HandHoldEvent*> _field = GetClass().GetField(O("HandPositionReleaseOverride"));
            _field.Set(value);
        }
        static void SetHandPositionRequestOverride(::GlobalNamespace::HandHold_HandHoldPositionEvent* value) {
            static BNM::Field<::GlobalNamespace::HandHold_HandHoldPositionEvent*> _field = GetClass().GetField(O("HandPositionRequestOverride"));
            _field.Set(value);
        }
        void SetHandSnapMethod(::GlobalNamespace::HandHold_HandSnapMethod value) {
            static BNM::Field<::GlobalNamespace::HandHold_HandSnapMethod> _field = GetClass().GetField(O("handSnapMethod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("myCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyTappable(::GlobalNamespace::Tappable* value) {
            static BNM::Field<::GlobalNamespace::Tappable*> _field = GetClass().GetField(O("myTappable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGrab(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGrabHanded(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnGrabHanded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGrabHandHold(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnGrabHandHold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnRelease(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnReleaseHandHold(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnReleaseHandHold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotatePlayerWhenHeld(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rotatePlayerWhenHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void add_HandPositionReleaseOverride_1(::GlobalNamespace::HandHold_HandHoldEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_HandPositionReleaseOverride"), {"value"});
            _m.Call(value);
        }
        static void add_HandPositionRequestOverride_1(::GlobalNamespace::HandHold_HandHoldPositionEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_HandPositionRequestOverride"), {"value"});
            _m.Call(value);
        }
        ::BNM::Structures::Unity::Vector3 CalculateOffset(::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("CalculateOffset"), {"position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(position);
        }
        bool CanBeGrabbed(::GlobalNamespace::GorillaGrabber* grabber) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanBeGrabbed"), {"grabber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(grabber);
        }
        void CopyProperties(::BNM::IL2CPP::Il2CppObject* handHoldSettings) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyProperties"), {"handHoldSettings"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handHoldSettings);
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool MomentaryGrabOnly() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MomentaryGrabOnly"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void remove_HandPositionReleaseOverride_1(::GlobalNamespace::HandHold_HandHoldEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_HandPositionReleaseOverride"), {"value"});
            _m.Call(value);
        }
        static void remove_HandPositionRequestOverride_1(::GlobalNamespace::HandHold_HandHoldPositionEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_HandPositionRequestOverride"), {"value"});
            _m.Call(value);
        }
    };
}
