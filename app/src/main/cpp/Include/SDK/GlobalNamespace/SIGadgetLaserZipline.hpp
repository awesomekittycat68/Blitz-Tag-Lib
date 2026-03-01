#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIGadget.hpp"

namespace GlobalNamespace {
    struct SIGadgetLaserZipline : ::GlobalNamespace::SIGadget {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetLaserZipline");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Vector3 GetActivatedAtPoint() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("activatedAtPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetActivatedAtRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("activatedAtRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetActiveCallbackOnRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("activeCallbackOnRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCooldownDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCooldownOnUseUntilTouchGround() {
            static BNM::Field<bool> _field = GetClass().GetField(O("cooldownOnUseUntilTouchGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCoolingDownUntilNextTouchGround() {
            static BNM::Field<bool> _field = GetClass().GetField(O("coolingDownUntilNextTouchGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCoolingDownUntilTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("coolingDownUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasActiveCallback() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasActiveCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLineBroken() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLineBroken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetLaserBeam() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("laserBeam"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameButtonActivatable* GetMButtonActivatable() {
            static BNM::Field<::GlobalNamespace::GameButtonActivatable*> _field = GetClass().GetField(O("m_buttonActivatable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpeedBoost() {
            static BNM::Field<float> _field = GetClass().GetField(O("speedBoost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasSlidingUngrounded() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasSlidingUngrounded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasTriggerPressed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasTriggerPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetZipline() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("zipline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetZiplineDirection() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("ziplineDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivatedAtPoint(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("activatedAtPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivatedAtRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("activatedAtRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveCallbackOnRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("activeCallbackOnRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownOnUseUntilTouchGround(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("cooldownOnUseUntilTouchGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoolingDownUntilNextTouchGround(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("coolingDownUntilNextTouchGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoolingDownUntilTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("coolingDownUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasActiveCallback(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasActiveCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLineBroken(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLineBroken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaserBeam(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("laserBeam"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMButtonActivatable(::GlobalNamespace::GameButtonActivatable* value) {
            static BNM::Field<::GlobalNamespace::GameButtonActivatable*> _field = GetClass().GetField(O("m_buttonActivatable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeedBoost(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("speedBoost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasSlidingUngrounded(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasSlidingUngrounded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasTriggerPressed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasTriggerPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZipline(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("zipline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZiplineDirection(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("ziplineDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CallBack() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CallBack"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearCallback() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearCallback"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int64_t GetStateLong() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("GetStateLong"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityStateChanged(int64_t oldState, int64_t newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityStateChanged"), {"oldState", "newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(oldState, newState);
        }
        void OnGrabbed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrabbed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnKnockback(::BNM::Structures::Unity::Vector3 knockbackVector) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnKnockback"), {"knockbackVector"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(knockbackVector);
        }
        void OnReleased() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReleased"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSnapped() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSnapped"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUnsnapped() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUnsnapped"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUpdateAuthority(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateAuthority"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void OnUpdateRemote(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateRemote"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
    };
}
