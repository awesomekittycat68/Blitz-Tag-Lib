#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ShadeRevealer_State.hpp"
#include "TransferrableObject.hpp"

namespace GlobalNamespace {
    struct ShadeRevealer : ::GlobalNamespace::TransferrableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ShadeRevealer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetBeamForward() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("beamForward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBeamLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("beamLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetBeamSFX() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("beamSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetCatchFX() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("catchFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetCatchSFX() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("catchSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShadeRevealer_State GetCurrentBeamState() {
            static BNM::Field<::GlobalNamespace::ShadeRevealer_State> _field = GetClass().GetField(O("currentBeamState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDrawThresholdTesterInEditor() {
            static BNM::Field<bool> _field = GetClass().GetField(O("drawThresholdTesterInEditor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetEnableWhenLocked() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("enableWhenLocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetEnableWhenPrimed() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("enableWhenPrimed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetEnableWhenScanning() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("enableWhenScanning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetEnableWhenTracking() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("enableWhenTracking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetInitialActivationSFX() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("initialActivationSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsScanning() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isScanning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLockThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("lockThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetObjectsToDisableWhenOff() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("objectsToDisableWhenOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnShadeLaunched() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onShadeLaunched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShadeRevealer_State GetPendingBeamState() {
            static BNM::Field<::GlobalNamespace::ShadeRevealer_State> _field = GetClass().GetField(O("pendingBeamState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CosmeticCritterCatcherShade* GetShadeCatcher() {
            static BNM::Field<::GlobalNamespace::CosmeticCritterCatcherShade*> _field = GetClass().GetField(O("shadeCatcher"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetThresholdTester() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("thresholdTester"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTrackThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("trackThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBeamForward(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("beamForward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBeamLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("beamLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBeamSFX(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("beamSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCatchFX(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("catchFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCatchSFX(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("catchSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentBeamState(::GlobalNamespace::ShadeRevealer_State value) {
            static BNM::Field<::GlobalNamespace::ShadeRevealer_State> _field = GetClass().GetField(O("currentBeamState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrawThresholdTesterInEditor(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("drawThresholdTesterInEditor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableWhenLocked(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("enableWhenLocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableWhenPrimed(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("enableWhenPrimed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableWhenScanning(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("enableWhenScanning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableWhenTracking(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("enableWhenTracking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialActivationSFX(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("initialActivationSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsScanning(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isScanning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLockThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lockThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectsToDisableWhenOff(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("objectsToDisableWhenOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnShadeLaunched(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onShadeLaunched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPendingBeamState(::GlobalNamespace::ShadeRevealer_State value) {
            static BNM::Field<::GlobalNamespace::ShadeRevealer_State> _field = GetClass().GetField(O("pendingBeamState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShadeCatcher(::GlobalNamespace::CosmeticCritterCatcherShade* value) {
            static BNM::Field<::GlobalNamespace::CosmeticCritterCatcherShade*> _field = GetClass().GetField(O("shadeCatcher"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThresholdTester(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("thresholdTester"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrackThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("trackThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CritterWithinBeamThreshold(::GlobalNamespace::CosmeticCritter* critter, ::GlobalNamespace::ShadeRevealer_State criteria, float tolerance) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CritterWithinBeamThreshold"), {"critter", "criteria", "tolerance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(critter, criteria, tolerance);
        }
        ::GlobalNamespace::ShadeRevealer_State GetBeamStateForCritter(::GlobalNamespace::CosmeticCritter* critter, float tolerance) {
            static BNM::Method<::GlobalNamespace::ShadeRevealer_State> _m = GetClass().GetMethod(O("GetBeamStateForCritter"), {"critter", "tolerance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(critter, tolerance);
        }
        ::GlobalNamespace::ShadeRevealer_State GetBeamStateForPosition(::BNM::Structures::Unity::Vector3 toPosition, float tolerance) {
            static BNM::Method<::GlobalNamespace::ShadeRevealer_State> _m = GetClass().GetMethod(O("GetBeamStateForPosition"), {"toPosition", "tolerance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(toPosition, tolerance);
        }
        float GetDistanceToBeamRay(::BNM::Structures::Unity::Vector3 toPosition) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetDistanceToBeamRay"), {"toPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(toPosition);
        }
        void LateUpdateShared() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetBestBeamState(::GlobalNamespace::ShadeRevealer_State state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBestBeamState"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void SetObjectsEnabledFromState(::GlobalNamespace::ShadeRevealer_State state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetObjectsEnabledFromState"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void ShadeCaught() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShadeCaught"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartScanning() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartScanning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopScanning() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopScanning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
