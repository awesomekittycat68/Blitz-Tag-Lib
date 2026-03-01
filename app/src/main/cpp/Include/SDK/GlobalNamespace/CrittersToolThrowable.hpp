#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActor.hpp"

namespace GlobalNamespace {
    struct CrittersToolThrowable : ::GlobalNamespace::CrittersActor {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersToolThrowable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetSqrActivationSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("_sqrActivationSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::DelayedDestroyObject* GetDebugImpactPrefab() {
            static BNM::Field<::GlobalNamespace::DelayedDestroyObject*> _field = GetClass().GetField(O("debugImpactPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDestroyOnImpact() {
            static BNM::Field<bool> _field = GetClass().GetField(O("destroyOnImpact"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasBeenGrabbedByPlayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasBeenGrabbedByPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasTriggeredSinceLastGrab() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasTriggeredSinceLastGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOnlyTriggerOncePerGrab() {
            static BNM::Field<bool> _field = GetClass().GetField(O("onlyTriggerOncePerGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOnlyTriggerOnDirectCritterHit() {
            static BNM::Field<bool> _field = GetClass().GetField(O("onlyTriggerOnDirectCritterHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRequiredActivationSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("requiredActivationSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRequiresPlayerGrabBeforeActivate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("requiresPlayerGrabBeforeActivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldDisable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldDisable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSqrActivationSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_sqrActivationSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugImpactPrefab(::GlobalNamespace::DelayedDestroyObject* value) {
            static BNM::Field<::GlobalNamespace::DelayedDestroyObject*> _field = GetClass().GetField(O("debugImpactPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestroyOnImpact(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("destroyOnImpact"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasBeenGrabbedByPlayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasBeenGrabbedByPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasTriggeredSinceLastGrab(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasTriggeredSinceLastGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnlyTriggerOncePerGrab(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("onlyTriggerOncePerGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnlyTriggerOnDirectCritterHit(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("onlyTriggerOnDirectCritterHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequiredActivationSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("requiredActivationSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequiresPlayerGrabBeforeActivate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("requiresPlayerGrabBeforeActivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldDisable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldDisable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void GrabbedBy(::GlobalNamespace::CrittersActor* grabbingActor, bool positionOverride, ::BNM::Structures::Unity::Quaternion localRotation, ::BNM::Structures::Unity::Vector3 localOffset, bool disableGrabbing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabbedBy"), {"grabbingActor", "positionOverride", "localRotation", "localOffset", "disableGrabbing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabbingActor, positionOverride, localRotation, localOffset, disableGrabbing);
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCollisionEnter(::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionEnter"), {"collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collision);
        }
        void OnImpact(::BNM::Structures::Unity::Vector3 hitPosition, ::BNM::Structures::Unity::Vector3 hitNormal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnImpact"), {"hitPosition", "hitNormal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitPosition, hitNormal);
        }
        void OnImpactCritter(::GlobalNamespace::CrittersPawn* impactedCritter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnImpactCritter"), {"impactedCritter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(impactedCritter);
        }
        void OnPickedUp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPickedUp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ProcessLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ProcessLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ShowDebugVisualization(::BNM::Structures::Unity::Vector3 position, float scale, float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowDebugVisualization"), {"position", "scale", "duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position, scale, duration);
        }
        void TogglePhysics(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TogglePhysics"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
    };
}
