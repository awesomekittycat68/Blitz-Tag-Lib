#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    struct RecyclerForceVolume : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "RecyclerForceVolume");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAccel() {
            static BNM::Field<float> _field = GetClass().GetField(O("accel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApplyPullToCenterAcceleration() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyPullToCenterAcceleration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDampenLateralVelocity() {
            static BNM::Field<bool> _field = GetClass().GetField(O("dampenLateralVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDampenXVelPerc() {
            static BNM::Field<float> _field = GetClass().GetField(O("dampenXVelPerc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDampenYVelPerc() {
            static BNM::Field<float> _field = GetClass().GetField(O("dampenYVelPerc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableGrip() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableGrip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetEnterPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("enterPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasWindFX() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasWindFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxDepth() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDepth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPullToCenterAccel() {
            static BNM::Field<float> _field = GetClass().GetField(O("pullToCenterAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPullToCenterMaxSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("pullToCenterMaxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPullTOCenterMinDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("pullTOCenterMinDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetScaleWithSize() {
            static BNM::Field<bool> _field = GetClass().GetField(O("scaleWithSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetVolume() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("volume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetWindEffectRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("windEffectRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetWindSFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("windSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAccel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("accel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyPullToCenterAcceleration(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyPullToCenterAcceleration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDampenLateralVelocity(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("dampenLateralVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDampenXVelPerc(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dampenXVelPerc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDampenYVelPerc(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dampenYVelPerc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableGrip(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableGrip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnterPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("enterPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasWindFX(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasWindFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDepth(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDepth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPullToCenterAccel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pullToCenterAccel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPullToCenterMaxSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pullToCenterMaxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPullTOCenterMinDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pullTOCenterMinDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleWithSize(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("scaleWithSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVolume(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("volume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWindEffectRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("windEffectRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWindSFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("windSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void OnTriggerStay(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerStay"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        bool TriggerFilter(::Collider* other, ::Rigidbody*& rb, ::Transform*& xf) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TriggerFilter"), {"other", "rb", "xf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other, &rb, &xf);
        }
    };
}
