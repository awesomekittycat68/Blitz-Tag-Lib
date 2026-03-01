#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "VRRig_WearablePackedStateSlots.hpp"

namespace GlobalNamespace {
    struct ToggleableWearable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ToggleableWearable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAnimationTransitionDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("animationTransitionDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Animator*>* GetAnimators() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Animator*>*> _field = GetClass().GetField(O("animators"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetAnimParamProgress() {
            static BNM::Field<int> _field = GetClass().GetField(O("animParam_Progress"));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig_WearablePackedStateSlots GetAssignedSlot() {
            static BNM::Field<::GlobalNamespace::VRRig_WearablePackedStateSlots> _field = GetClass().GetField(O("assignedSlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAssignedSlotBitIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("assignedSlotBitIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFramesSinceCooldownAndExitingVolume() {
            static BNM::Field<int> _field = GetClass().GetField(O("framesSinceCooldownAndExitingVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasAudioSource() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsOn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLayerMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("layerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOneShot() {
            static BNM::Field<bool> _field = GetClass().GetField(O("oneShot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOwnerIsLocal() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ownerIsLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetOwnerRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("ownerRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProgress() {
            static BNM::Field<float> _field = GetClass().GetField(O("progress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Renderer*>* GetRenderers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Renderer*>*> _field = GetClass().GetField(O("renderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetResetTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("resetTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStartOn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("startOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetToggleCooldownRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("toggleCooldownRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetToggleCooldownTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("toggleCooldownTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetToggleOffSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("toggleOffSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetToggleOnSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("toggleOnSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetToggleTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("toggleTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetTriggerOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("triggerOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTriggerRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("triggerRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTurnOffVibrationDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("turnOffVibrationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTurnOffVibrationStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("turnOffVibrationStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTurnOnVibrationDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("turnOnVibrationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTurnOnVibrationStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("turnOnVibrationStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimationTransitionDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("animationTransitionDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimators(::BNM::Structures::Mono::Array<::Animator*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Animator*>*> _field = GetClass().GetField(O("animators"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAssignedSlot(::GlobalNamespace::VRRig_WearablePackedStateSlots value) {
            static BNM::Field<::GlobalNamespace::VRRig_WearablePackedStateSlots> _field = GetClass().GetField(O("assignedSlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAssignedSlotBitIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("assignedSlotBitIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFramesSinceCooldownAndExitingVolume(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("framesSinceCooldownAndExitingVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasAudioSource(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLayerMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("layerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOneShot(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("oneShot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwnerIsLocal(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ownerIsLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwnerRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("ownerRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgress(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("progress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderers(::BNM::Structures::Mono::Array<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Renderer*>*> _field = GetClass().GetField(O("renderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResetTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("resetTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartOn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("startOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggleCooldownRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("toggleCooldownRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggleCooldownTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("toggleCooldownTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggleOffSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("toggleOffSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggleOnSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("toggleOnSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggleTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("toggleTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("triggerOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("triggerRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnOffVibrationDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("turnOffVibrationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnOffVibrationStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("turnOffVibrationStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnOnVibrationDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("turnOnVibrationDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurnOnVibrationStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("turnOnVibrationStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LocalToggle(bool isLeftHand, bool playAudio, bool playHaptics) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalToggle"), {"isLeftHand", "playAudio", "playHaptics"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, playAudio, playHaptics);
        }
        void SharedSetState(bool state, bool playAudio) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SharedSetState"), {"state", "playAudio"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state, playAudio);
        }
    };
}
