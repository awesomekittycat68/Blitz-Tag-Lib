#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "StreetLightSaber_State.hpp"

namespace GorillaTag_Cosmetics {
    struct StreetLightSaber : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "StreetLightSaber");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag_Cosmetics::StreetLightSaber_State GetCurrentState() {
            static BNM::Method<::GorillaTag_Cosmetics::StreetLightSaber_State> _method = GetClass().GetMethod(O("get_CurrentState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::StreetLightSaber_StaffStates*>* GetAllStates() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::StreetLightSaber_StaffStates*>*> _field = GetClass().GetField(O("allStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GorillaTag_Cosmetics::StreetLightSaber_State, ::GorillaTag_Cosmetics::StreetLightSaber_StaffStates*>* GetAllStatesDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaTag_Cosmetics::StreetLightSaber_State, ::GorillaTag_Cosmetics::StreetLightSaber_StaffStates*>*> _field = GetClass().GetField(O("allStatesDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAutoSwitch() {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoSwitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAutoSwitchEnabledTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("autoSwitchEnabledTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAutoSwitchTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("autoSwitchTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHashId() {
            static BNM::Field<int> _field = GetClass().GetField(O("hashId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetInstancedMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("instancedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaterialIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("materialIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetMeshRenderer() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("meshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinHitVelocityThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("minHitVelocityThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetShaderColorProperty() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("shaderColorProperty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTrailRenderer() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("trailRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::StreetLightSaber_State>* GetValues() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::StreetLightSaber_State>*> _field = GetClass().GetField(O("values"));
            return _field.Get();
        }
        ::GorillaLocomotion_Climbing::GorillaVelocityTracker* GetVelocityTracker() {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaVelocityTracker*> _field = GetClass().GetField(O("velocityTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllStates(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::StreetLightSaber_StaffStates*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::StreetLightSaber_StaffStates*>*> _field = GetClass().GetField(O("allStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllStatesDict(::BNM::Structures::Mono::Dictionary<::GorillaTag_Cosmetics::StreetLightSaber_State, ::GorillaTag_Cosmetics::StreetLightSaber_StaffStates*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaTag_Cosmetics::StreetLightSaber_State, ::GorillaTag_Cosmetics::StreetLightSaber_StaffStates*>*> _field = GetClass().GetField(O("allStatesDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoSwitch(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoSwitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoSwitchEnabledTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("autoSwitchEnabledTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoSwitchTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("autoSwitchTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHashId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("hashId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstancedMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("instancedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterialIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("materialIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMeshRenderer(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("meshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinHitVelocityThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minHitVelocityThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShaderColorProperty(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("shaderColorProperty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrailRenderer(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("trailRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityTracker(::GorillaLocomotion_Climbing::GorillaVelocityTracker* value) {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaVelocityTracker*> _field = GetClass().GetField(O("velocityTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnableAutoSwitch(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableAutoSwitch"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        void ForceSwitchTo(::GorillaTag_Cosmetics::StreetLightSaber_State targetState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceSwitchTo"), {"targetState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetState);
        }
        ::GorillaTag_Cosmetics::StreetLightSaber_State get_CurrentState() {
            static BNM::Method<::GorillaTag_Cosmetics::StreetLightSaber_State> _m = GetClass().GetMethod(O("get_CurrentState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HitReceived(::BNM::Structures::Unity::Vector3 contact) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HitReceived"), {"contact"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(contact);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetStaff() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetStaff"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SwitchState(int newIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwitchState"), {"newIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newIndex);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateStateAuto() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateStateAuto"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateStateManual() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateStateManual"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
