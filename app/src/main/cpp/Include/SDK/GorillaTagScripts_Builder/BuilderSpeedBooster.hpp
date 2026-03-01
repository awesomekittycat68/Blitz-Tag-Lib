#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    struct BuilderSpeedBooster : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "BuilderSpeedBooster");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAccel() {
            static BNM::Field<float> _field = GetClass().GetField(O("accel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAddedWorldUpVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("addedWorldUpVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApplyPullToCenterAcceleration() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyPullToCenterAcceleration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBoosting() {
            static BNM::Field<bool> _field = GetClass().GetField(O("boosting"));
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
        float GetDampenZVelPerc() {
            static BNM::Field<float> _field = GetClass().GetField(O("dampenZVelPerc"));
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
        double GetEnterTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("enterTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetExitClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("exitClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasCheckedZone() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasCheckedZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIgnoreMonkeScale() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ignoreMonkeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxBoostDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxBoostDuration"));
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
        bool GetPositiveForce() {
            static BNM::Field<bool> _field = GetClass().GetField(O("positiveForce"));
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
        ::MeshRenderer* GetWindRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("windRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAccel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("accel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAddedWorldUpVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("addedWorldUpVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyPullToCenterAcceleration(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyPullToCenterAcceleration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBoosting(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("boosting"));
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
        void SetDampenZVelPerc(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dampenZVelPerc"));
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
        void SetEnterTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("enterTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExitClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("exitClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasCheckedZone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasCheckedZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIgnoreMonkeScale(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ignoreMonkeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxBoostDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxBoostDuration"));
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
        void SetPositiveForce(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("positiveForce"));
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
        void SetWindRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("windRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckTableZone() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckTableZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDrawGizmosSelected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDrawGizmosSelected"));
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
