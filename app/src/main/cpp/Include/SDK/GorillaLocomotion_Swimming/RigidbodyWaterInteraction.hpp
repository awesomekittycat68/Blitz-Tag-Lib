#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion_Swimming {
    struct RigidbodyWaterInteraction : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Swimming", "RigidbodyWaterInteraction");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterCurrent*>* GetActiveWaterCurrents() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterCurrent*>*> _field = GetClass().GetField(O("activeWaterCurrents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAngularDrag() {
            static BNM::Field<float> _field = GetClass().GetField(O("angularDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApplyAngularDrag() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyAngularDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApplyBuoyancyForce() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyBuoyancyForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApplyDamping() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyDamping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApplySurfaceTorque() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applySurfaceTorque"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApplyWaterCurrents() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyWaterCurrents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBaseAngularDrag() {
            static BNM::Field<float> _field = GetClass().GetField(O("baseAngularDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBuoyancyEquilibrium() {
            static BNM::Field<float> _field = GetClass().GetField(O("buoyancyEquilibrium"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnablePreciseWaterCollision() {
            static BNM::Field<bool> _field = GetClass().GetField(O("enablePreciseWaterCollision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetObjectRadiusForWaterCollision() {
            static BNM::Field<float> _field = GetClass().GetField(O("objectRadiusForWaterCollision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterVolume*>* GetOverlappingWaterVolumes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterVolume*>*> _field = GetClass().GetField(O("overlappingWaterVolumes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRb() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSurfaceTorqueAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("surfaceTorqueAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUnderWaterBuoyancyFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("underWaterBuoyancyFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUnderWaterDampingHalfLife() {
            static BNM::Field<float> _field = GetClass().GetField(O("underWaterDampingHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWaterSurfaceDampingHalfLife() {
            static BNM::Field<float> _field = GetClass().GetField(O("waterSurfaceDampingHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveWaterCurrents(::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterCurrent*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterCurrent*>*> _field = GetClass().GetField(O("activeWaterCurrents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAngularDrag(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("angularDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyAngularDrag(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyAngularDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyBuoyancyForce(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyBuoyancyForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyDamping(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyDamping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplySurfaceTorque(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applySurfaceTorque"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyWaterCurrents(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyWaterCurrents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseAngularDrag(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("baseAngularDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuoyancyEquilibrium(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("buoyancyEquilibrium"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnablePreciseWaterCollision(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("enablePreciseWaterCollision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectRadiusForWaterCollision(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("objectRadiusForWaterCollision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverlappingWaterVolumes(::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterVolume*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::WaterVolume*>*> _field = GetClass().GetField(O("overlappingWaterVolumes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRb(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfaceTorqueAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("surfaceTorqueAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnderWaterBuoyancyFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("underWaterBuoyancyFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnderWaterDampingHalfLife(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("underWaterDampingHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterSurfaceDampingHalfLife(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("waterSurfaceDampingHalfLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InvokeFixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeFixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
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
    };
}
