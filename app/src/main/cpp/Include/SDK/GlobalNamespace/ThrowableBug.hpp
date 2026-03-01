#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTZone.hpp"
#include "ThrowableBug_AudioState.hpp"
#include "ThrowableBug_BugName.hpp"
#include "TransferrableObject.hpp"

namespace GlobalNamespace {
    struct ThrowableBug : ::GlobalNamespace::TransferrableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ThrowableBug");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static int GetGIsHeld() {
            static BNM::Field<int> _field = GetClass().GetField(O("_g_IsHeld"));
            return _field.Get();
        }
        ::Animator* GetAnimator() {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("animator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAscentRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("ascentRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAscentSlerp() {
            static BNM::Field<float> _field = GetClass().GetField(O("ascentSlerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAscentSlerpRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("ascentSlerpRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBobbingDefaultFrequency() {
            static BNM::Field<float> _field = GetClass().GetField(O("bobbingDefaultFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBobingFrequency() {
            static BNM::Field<float> _field = GetClass().GetField(O("bobingFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBobingSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("bobingSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBobingState() {
            static BNM::Field<float> _field = GetClass().GetField(O("bobingState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBobMagnintude() {
            static BNM::Field<float> _field = GetClass().GetField(O("bobMagnintude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ThrowableBug_BugName GetBugName() {
            static BNM::Field<::GlobalNamespace::ThrowableBug_BugName> _field = GetClass().GetField(O("bugName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetBugRotationalVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("bugRotationalVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCollisionCheckMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("collisionCheckMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCollisionHitRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("collisionHitRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ThrowableBug_AudioState GetCurrentAudioState() {
            static BNM::Field<::GlobalNamespace::ThrowableBug_AudioState> _field = GetClass().GetField(O("currentAudioState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetCurrentZone() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("currentZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDescentRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("descentRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDescentSlerp() {
            static BNM::Field<float> _field = GetClass().GetField(O("descentSlerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDescentSlerpRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("descentSlerpRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetFlyingBugAudioClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("flyingBugAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetFollowingRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("followingRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetGrabBugAudioClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("grabBugAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsTooHighTravelingDown() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isTooHighTravelingDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsTooLowTravelingUp() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isTooLowTravelingUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLocked() {
            static BNM::Field<bool> _field = GetClass().GetField(O("locked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLockedTarget() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lockedTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaximumHeightOffOfTheGroundBeforeStartingDescent() {
            static BNM::Field<float> _field = GetClass().GetField(O("maximumHeightOffOfTheGroundBeforeStartingDescent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaximumHeightOffOfTheGroundBeforeStoppingAscent() {
            static BNM::Field<float> _field = GetClass().GetField(O("maximumHeightOffOfTheGroundBeforeStoppingAscent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxNaturalSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxNaturalSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxRandFrequency() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxRandFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinimumHeightOffOfTheGroundBeforeStartingAscent() {
            static BNM::Field<float> _field = GetClass().GetField(O("minimumHeightOffOfTheGroundBeforeStartingAscent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinimumHeightOffOfTheGroundBeforeStoppingDescent() {
            static BNM::Field<float> _field = GetClass().GetField(O("minimumHeightOffOfTheGroundBeforeStoppingDescent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinRandFrequency() {
            static BNM::Field<float> _field = GetClass().GetField(O("minRandFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRaycastFrameCounter() {
            static BNM::Field<int> _field = GetClass().GetField(O("raycastFrameCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRaycastFramePeriod() {
            static BNM::Field<int> _field = GetClass().GetField(O("raycastFramePeriod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* GetRayCastNonAllocColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("rayCastNonAllocColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* GetRayCastNonAllocColliders2() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("rayCastNonAllocColliders2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetReleaseBugAudioClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("releaseBugAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ThrowableBugReliableState* GetReliableState() {
            static BNM::Field<::GlobalNamespace::ThrowableBugReliableState*> _field = GetClass().GetField(O("reliableState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldRandomizeFrequency() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldRandomizeFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlowdownAcceleration() {
            static BNM::Field<float> _field = GetClass().GetField(O("slowdownAcceleration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlowingDownProgress() {
            static BNM::Field<float> _field = GetClass().GetField(O("slowingDownProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpeedMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("speedMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartingSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("startingSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetStartZone() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("startZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetTargetVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("targetVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetThrownVeloicity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("thrownVeloicity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetThrownYVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("thrownYVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUpdateMultiplier() {
            static BNM::Field<int> _field = GetClass().GetField(O("updateMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaVelocityEstimator* GetVelocityEstimator() {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("velocityEstimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimator(::Animator* value) {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("animator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAscentRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ascentRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAscentSlerp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ascentSlerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAscentSlerpRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ascentSlerpRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBobbingDefaultFrequency(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bobbingDefaultFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBobingFrequency(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bobingFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBobingSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bobingSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBobingState(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bobingState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBobMagnintude(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bobMagnintude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBugName(::GlobalNamespace::ThrowableBug_BugName value) {
            static BNM::Field<::GlobalNamespace::ThrowableBug_BugName> _field = GetClass().GetField(O("bugName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBugRotationalVelocity(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("bugRotationalVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionCheckMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("collisionCheckMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionHitRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("collisionHitRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentAudioState(::GlobalNamespace::ThrowableBug_AudioState value) {
            static BNM::Field<::GlobalNamespace::ThrowableBug_AudioState> _field = GetClass().GetField(O("currentAudioState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentZone(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("currentZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDescentRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("descentRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDescentSlerp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("descentSlerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDescentSlerpRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("descentSlerpRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlyingBugAudioClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("flyingBugAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFollowingRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("followingRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabBugAudioClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("grabBugAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsTooHighTravelingDown(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isTooHighTravelingDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsTooLowTravelingUp(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isTooLowTravelingUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocked(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("locked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLockedTarget(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lockedTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaximumHeightOffOfTheGroundBeforeStartingDescent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maximumHeightOffOfTheGroundBeforeStartingDescent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaximumHeightOffOfTheGroundBeforeStoppingAscent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maximumHeightOffOfTheGroundBeforeStoppingAscent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxNaturalSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxNaturalSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxRandFrequency(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxRandFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinimumHeightOffOfTheGroundBeforeStartingAscent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minimumHeightOffOfTheGroundBeforeStartingAscent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinimumHeightOffOfTheGroundBeforeStoppingDescent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minimumHeightOffOfTheGroundBeforeStoppingDescent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinRandFrequency(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minRandFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaycastFrameCounter(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("raycastFrameCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaycastFramePeriod(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("raycastFramePeriod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRayCastNonAllocColliders(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("rayCastNonAllocColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRayCastNonAllocColliders2(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("rayCastNonAllocColliders2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReleaseBugAudioClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("releaseBugAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReliableState(::GlobalNamespace::ThrowableBugReliableState* value) {
            static BNM::Field<::GlobalNamespace::ThrowableBugReliableState*> _field = GetClass().GetField(O("reliableState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldRandomizeFrequency(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldRandomizeFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlowdownAcceleration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slowdownAcceleration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlowingDownProgress(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slowingDownProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeedMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("speedMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startingSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartZone(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("startZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("targetVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrownVeloicity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("thrownVeloicity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrownYVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("thrownYVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateMultiplier(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("updateMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityEstimator(::GlobalNamespace::GorillaVelocityEstimator* value) {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("velocityEstimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool isValid(::GlobalNamespace::ThrowableBugBeacon* tbb) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("isValid"), {"tbb"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(tbb);
        }
        void LateUpdateLocal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdateShared() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCollisionEnter(::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionEnter"), {"collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collision);
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
        bool OnRelease(::GlobalNamespace::DropZone* zoneReleased, ::GameObject* releasingHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnRelease"), {"zoneReleased", "releasingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zoneReleased, releasingHand);
        }
        float RandomizeBobingFrequency() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("RandomizeBobingFrequency"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool ShouldBeKinematic() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldBeKinematic"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ThrowableBugBeacon_OnCall(::GlobalNamespace::ThrowableBugBeacon* tbb) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ThrowableBugBeacon_OnCall"), {"tbb"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tbb);
        }
        void ThrowableBugBeacon_OnChangeSpeedMultiplier(::GlobalNamespace::ThrowableBugBeacon* tbb, float f) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ThrowableBugBeacon_OnChangeSpeedMultiplier"), {"tbb", "f"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tbb, f);
        }
        void ThrowableBugBeacon_OnDismiss(::GlobalNamespace::ThrowableBugBeacon* tbb) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ThrowableBugBeacon_OnDismiss"), {"tbb"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tbb);
        }
        void ThrowableBugBeacon_OnLock(::GlobalNamespace::ThrowableBugBeacon* tbb) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ThrowableBugBeacon_OnLock"), {"tbb"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tbb);
        }
        void ThrowableBugBeacon_OnUnlock(::GlobalNamespace::ThrowableBugBeacon* tbb) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ThrowableBugBeacon_OnUnlock"), {"tbb"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tbb);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
