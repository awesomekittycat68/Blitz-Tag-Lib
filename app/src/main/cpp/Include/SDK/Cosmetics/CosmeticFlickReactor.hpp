#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticFlickReactor_AxisMode.hpp"

namespace Cosmetics {
    struct CosmeticFlickReactor : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Cosmetics", "CosmeticFlickReactor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Cosmetics::CosmeticFlickReactor_AxisMode GetAxisMode() {
            static BNM::Field<::Cosmetics::CosmeticFlickReactor_AxisMode> _field = GetClass().GetField(O("axisMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetAxisReference() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("axisReference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBlockUntilTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("blockUntilTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDirectionChangeRequired() {
            static BNM::Field<float> _field = GetClass().GetField(O("directionChangeRequired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFlickWindowSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("flickWindowSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasLastPosition() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasLastPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLocal() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastPeakSign() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastPeakSign"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastPeakSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastPeakSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastPeakTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastPeakTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxSpeedThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinSpeedThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("minSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnFlickLocal() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnFlickLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnFlickShared() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnFlickShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnFlickStrength() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onFlickStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRb() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRetriggerBufferSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("retriggerBufferSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SimpleSpeedTracker* GetSpeedTracker() {
            static BNM::Field<::GlobalNamespace::SimpleSpeedTracker*> _field = GetClass().GetField(O("speedTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseWorldAxes() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useWorldAxes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetWorldSpace() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("worldSpace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAxisMode(::Cosmetics::CosmeticFlickReactor_AxisMode value) {
            static BNM::Field<::Cosmetics::CosmeticFlickReactor_AxisMode> _field = GetClass().GetField(O("axisMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAxisReference(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("axisReference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlockUntilTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("blockUntilTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDirectionChangeRequired(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("directionChangeRequired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlickWindowSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("flickWindowSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasLastPosition(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasLastPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLocal(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPeakSign(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastPeakSign"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPeakSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastPeakSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPeakTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastPeakTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxSpeedThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinSpeedThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnFlickLocal(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnFlickLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnFlickShared(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnFlickShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnFlickStrength(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onFlickStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRb(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetriggerBufferSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("retriggerBufferSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeedTracker(::GlobalNamespace::SimpleSpeedTracker* value) {
            static BNM::Field<::GlobalNamespace::SimpleSpeedTracker*> _field = GetClass().GetField(O("speedTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseWorldAxes(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useWorldAxes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWorldSpace(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("worldSpace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FireEvents(float currentAbsSpeed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FireEvents"), {"currentAbsSpeed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentAbsSpeed);
        }
        float GetSignedSpeedAlong(::BNM::Structures::Unity::Vector3 axis) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetSignedSpeedAlong"), {"axis"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(axis);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 ResolveAxisDirection() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ResolveAxisDirection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
