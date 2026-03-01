#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTRendererMatSlot.hpp"
#include "SIGadget.hpp"
#include "SIGadgetWristJet_State.hpp"
#include "SIGadgetWristJet_WristJetType.hpp"
#include "SIUpgradeBasedGeneric$1.hpp"
#include "SIUpgradeSet.hpp"

namespace GlobalNamespace {
    struct SIGadgetWristJet : ::GlobalNamespace::SIGadget {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetWristJet");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[SIGadgetWristJet]  ";
        static constexpr const char* preErr = "[SIGadgetWristJet]  ERROR!!!  ";
        static constexpr const char* preErrBeta = "[SIGadgetWristJet]  ERROR!!!  (beta only log)  ";
        static constexpr float kFUEL_CAPACITY = 10.0f;
        bool GetCanRecharge() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CanRecharge"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsFull() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsFull"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetUsesEnergy() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_UsesEnergy"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetCurrentBurnRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentBurnRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFloorTouched() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_floorTouched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetGaugeMatPropBlock() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_gaugeMatPropBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasActiveStateVisual() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasActiveStateVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasInactiveStateVisual() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasInactiveStateVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasThrustLoopAudioSource() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasThrustLoopAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxSqrHorizontalSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxSqrHorizontalSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetThrottle() {
            static BNM::Field<float> _field = GetClass().GetField(O("_throttle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetThrottleControl() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_throttleControl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWarnFuelLowSoundWasPlayed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_warnFuelLowSoundWasPlayed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetActiveStateVisual() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("activeStateVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameButtonActivatable* GetButtonActivatable() {
            static BNM::Field<::GlobalNamespace::GameButtonActivatable*> _field = GetClass().GetField(O("buttonActivatable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentFuel() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentFuel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEmptiedCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("emptiedCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEmptiedCooldownResetProgress() {
            static BNM::Field<float> _field = GetClass().GetField(O("emptiedCooldownResetProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFuelGainRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("fuelGainRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFuelSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("fuelSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFuelSpendRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("fuelSpendRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGravityNegationPercent() {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityNegationPercent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion::GTPlayer* GetGtPlayer() {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> _field = GetClass().GetField(O("gtPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetInactiveStateVisual() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("inactiveStateVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetJetForce() {
            static BNM::Field<float> _field = GetClass().GetField(O("jetForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetWristJet_WristJetType GetJetType() {
            static BNM::Field<::GlobalNamespace::SIGadgetWristJet_WristJetType> _field = GetClass().GetField(O("jetType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GTRendererMatSlot>* GetMGaugeMatSlots() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTRendererMatSlot>*> _field = GetClass().GetField(O("m_gaugeMatSlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetMThrottleFlapMaxRotOffset() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("m_throttleFlapMaxRotOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetMThrottleFlapXforms() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("m_throttleFlapXforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMThrustLoopAudioFadeInTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_thrustLoopAudioFadeInTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMThrustLoopAudioFadeOutTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_thrustLoopAudioFadeOutTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetMThrustLoopAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("m_thrustLoopAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMThrustLoopSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_thrustLoopSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetMWarnFuelLowSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("m_warnFuelLowSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMWarnFuelLowSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_warnFuelLowSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMWarnFuelLowThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_warnFuelLowThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxHorizontalSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHorizontalSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxVerticalSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxVerticalSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinimumBurnRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("minimumBurnRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRechargeRequiresFloorTouch() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rechargeRequiresFloorTouch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetWristJet_State GetState() {
            static BNM::Field<::GlobalNamespace::SIGadgetWristJet_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetThrottleChangeSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("throttleChangeSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Quaternion>* GetThrottleFlapInitialRots() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Quaternion>*> _field = GetClass().GetField(O("throttleFlapInitialRots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentBurnRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_currentBurnRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloorTouched(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_floorTouched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGaugeMatPropBlock(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_gaugeMatPropBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasActiveStateVisual(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasActiveStateVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasInactiveStateVisual(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasInactiveStateVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasThrustLoopAudioSource(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasThrustLoopAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxSqrHorizontalSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxSqrHorizontalSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrottle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_throttle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrottleControl(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_throttleControl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWarnFuelLowSoundWasPlayed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_warnFuelLowSoundWasPlayed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveStateVisual(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("activeStateVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonActivatable(::GlobalNamespace::GameButtonActivatable* value) {
            static BNM::Field<::GlobalNamespace::GameButtonActivatable*> _field = GetClass().GetField(O("buttonActivatable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentFuel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentFuel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmptiedCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("emptiedCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmptiedCooldownResetProgress(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("emptiedCooldownResetProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFuelGainRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fuelGainRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFuelSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fuelSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFuelSpendRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fuelSpendRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravityNegationPercent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityNegationPercent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGtPlayer(::GorillaLocomotion::GTPlayer* value) {
            static BNM::Field<::GorillaLocomotion::GTPlayer*> _field = GetClass().GetField(O("gtPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInactiveStateVisual(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("inactiveStateVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJetForce(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("jetForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJetType(::GlobalNamespace::SIGadgetWristJet_WristJetType value) {
            static BNM::Field<::GlobalNamespace::SIGadgetWristJet_WristJetType> _field = GetClass().GetField(O("jetType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMGaugeMatSlots(::BNM::Structures::Mono::Array<::GlobalNamespace::GTRendererMatSlot>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTRendererMatSlot>*> _field = GetClass().GetField(O("m_gaugeMatSlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMThrottleFlapMaxRotOffset(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("m_throttleFlapMaxRotOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMThrottleFlapXforms(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("m_throttleFlapXforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMThrustLoopAudioFadeInTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_thrustLoopAudioFadeInTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMThrustLoopAudioFadeOutTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_thrustLoopAudioFadeOutTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMThrustLoopAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("m_thrustLoopAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMThrustLoopSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_thrustLoopSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMWarnFuelLowSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("m_warnFuelLowSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMWarnFuelLowSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_warnFuelLowSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMWarnFuelLowThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_warnFuelLowThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxHorizontalSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHorizontalSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxVerticalSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxVerticalSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinimumBurnRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minimumBurnRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRechargeRequiresFloorTouch(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rechargeRequiresFloorTouch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::SIGadgetWristJet_State value) {
            static BNM::Field<::GlobalNamespace::SIGadgetWristJet_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrottleChangeSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("throttleChangeSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrottleFlapInitialRots(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Quaternion>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Quaternion>*> _field = GetClass().GetField(O("throttleFlapInitialRots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void _ApplyClampedThrust() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_ApplyClampedThrust"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet withUpgrades) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyUpgradeNodes"), {"withUpgrades"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(withUpgrades);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Disrupt(float disruptTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Disrupt"), {"disruptTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disruptTime);
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_CanRecharge() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CanRecharge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsFull() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsFull"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_UsesEnergy() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_UsesEnergy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandleStopInteraction() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleStopInteraction"));
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
        void OnEntityInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityStateChanged(int64_t oldState, int64_t newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityStateChanged"), {"oldState", "newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(oldState, newState);
        }
        void OnUpdateAuthority(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateAuthority"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void SetState_1(::GlobalNamespace::SIGadgetWristJet_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void SetStateAuthority(::GlobalNamespace::SIGadgetWristJet_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStateAuthority"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateRecharge(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRecharge"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void UpdateThrottleIndicator() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateThrottleIndicator"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
