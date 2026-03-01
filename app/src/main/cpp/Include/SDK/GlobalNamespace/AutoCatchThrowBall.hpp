#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AutoCatchThrowBall_HeldBall.hpp"

namespace GlobalNamespace {
    struct AutoCatchThrowBall : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AutoCatchThrowBall");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetBallLayer() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ballLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetBallPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ballPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCatchWaitTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("catchWaitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::AutoCatchThrowBall_HeldBall>* GetHeldBalls() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AutoCatchThrowBall_HeldBall>*> _field = GetClass().GetField(O("heldBalls"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetOverlapResults() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("overlapResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetThrowPitch() {
            static BNM::Field<float> _field = GetClass().GetField(O("throwPitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetThrowSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("throwSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetThrowWaitTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("throwWaitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetVrRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("vrRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBallLayer(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("ballLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBallPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ballPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCatchWaitTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("catchWaitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeldBalls(::BNM::Structures::Mono::List<::GlobalNamespace::AutoCatchThrowBall_HeldBall>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AutoCatchThrowBall_HeldBall>*> _field = GetClass().GetField(O("heldBalls"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverlapResults(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("overlapResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowPitch(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("throwPitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("throwSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowWaitTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("throwWaitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVrRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("vrRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Throw(::GlobalNamespace::TransferrableObject* transferrable, ::BNM::Structures::Unity::Vector3 throwDir) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Throw"), {"transferrable", "throwDir"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(transferrable, throwDir);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
