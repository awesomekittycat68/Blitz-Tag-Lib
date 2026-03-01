#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DebugTestGrabber : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DebugTestGrabber");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::Collider*>* GetColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaVelocityEstimator* GetEstimator() {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("estimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersGrabber* GetGrabber() {
            static BNM::Field<::GlobalNamespace::CrittersGrabber*> _field = GetClass().GetField(O("grabber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsGrabbing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isGrabbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsHandGrabbingDisabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHandGrabbingDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersActorGrabber* GetOtherHand() {
            static BNM::Field<::GlobalNamespace::CrittersActorGrabber*> _field = GetClass().GetField(O("otherHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRemainingGrabDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("remainingGrabDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSetIsGrabbing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("setIsGrabbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSetRelease() {
            static BNM::Field<bool> _field = GetClass().GetField(O("setRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTransformToFollow() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("transformToFollow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetColliders(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEstimator(::GlobalNamespace::GorillaVelocityEstimator* value) {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("estimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabber(::GlobalNamespace::CrittersGrabber* value) {
            static BNM::Field<::GlobalNamespace::CrittersGrabber*> _field = GetClass().GetField(O("grabber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsGrabbing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isGrabbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsHandGrabbingDisabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHandGrabbingDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOtherHand(::GlobalNamespace::CrittersActorGrabber* value) {
            static BNM::Field<::GlobalNamespace::CrittersActorGrabber*> _field = GetClass().GetField(O("otherHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemainingGrabDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("remainingGrabDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetIsGrabbing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("setIsGrabbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetRelease(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("setRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransformToFollow(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("transformToFollow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DoGrab() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoGrab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DoRelease() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoRelease"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
