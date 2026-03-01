#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CrittersActorGrabber : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersActorGrabber");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* GetActorsStillPresent() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("actorsStillPresent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaVelocityEstimator* GetEstimator() {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("estimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersGrabber* GetGrabber() {
            static BNM::Field<::GlobalNamespace::CrittersGrabber*> _field = GetClass().GetField(O("grabber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabBreakRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabBreakRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabDetachFromBagDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabDetachFromBagDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetHaptics() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("haptics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetHapticsClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("hapticsClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticsLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticsLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticsStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticsStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsGrabbing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isGrabbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsHandGrabbingDisabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHandGrabbingDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersActor* GetLastHover() {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("lastHover"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLocalGrabOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("localGrabOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersActorGrabber* GetOtherHand() {
            static BNM::Field<::GlobalNamespace::CrittersActorGrabber*> _field = GetClass().GetField(O("otherHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayingHaptics() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playingHaptics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersActor* GetQueuedGrab() {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("queuedGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetQueuedRelativeGrabOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("queuedRelativeGrabOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetQueuedRelativeGrabRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("queuedRelativeGrabRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRb() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRemainingGrabDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("remainingGrabDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTransformToFollow() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("transformToFollow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTriggerCollider() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("triggerCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersActor* GetValidGrabTarget() {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("validGrabTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVibrationEndDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("vibrationEndDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVibrationStartDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("vibrationStartDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActorsStillPresent(::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("actorsStillPresent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliders(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEstimator(::GlobalNamespace::GorillaVelocityEstimator* value) {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("estimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabber(::GlobalNamespace::CrittersGrabber* value) {
            static BNM::Field<::GlobalNamespace::CrittersGrabber*> _field = GetClass().GetField(O("grabber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabBreakRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabBreakRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabDetachFromBagDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabDetachFromBagDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHaptics(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("haptics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticsClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("hapticsClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticsLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticsLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticsStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticsStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsGrabbing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isGrabbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsHandGrabbingDisabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHandGrabbingDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHover(::GlobalNamespace::CrittersActor* value) {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("lastHover"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalGrabOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("localGrabOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOtherHand(::GlobalNamespace::CrittersActorGrabber* value) {
            static BNM::Field<::GlobalNamespace::CrittersActorGrabber*> _field = GetClass().GetField(O("otherHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayingHaptics(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playingHaptics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQueuedGrab(::GlobalNamespace::CrittersActor* value) {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("queuedGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQueuedRelativeGrabOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("queuedRelativeGrabOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQueuedRelativeGrabRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("queuedRelativeGrabRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRb(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemainingGrabDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("remainingGrabDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransformToFollow(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("transformToFollow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerCollider(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("triggerCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValidGrabTarget(::GlobalNamespace::CrittersActor* value) {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("validGrabTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVibrationEndDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("vibrationEndDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVibrationStartDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("vibrationStartDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ActivateJoints(::GlobalNamespace::CrittersActor* rigidJoint, ::GlobalNamespace::CrittersActor* softJoint) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateJoints"), {"rigidJoint", "softJoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rigidJoint, softJoint);
        }
        void AddGrabberPhysicsTrigger(::GlobalNamespace::CrittersActor* actor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddGrabberPhysicsTrigger"), {"actor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actor);
        }
        void ApplyGrab(::GlobalNamespace::CrittersActor* grabTarget, ::BNM::Structures::Unity::Quaternion localRotation, ::BNM::Structures::Unity::Vector3 localOffset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyGrab"), {"grabTarget", "localRotation", "localOffset"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabTarget, localRotation, localOffset);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckApplyQueuedGrab() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckApplyQueuedGrab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool DoesActorActivateJoint(::GlobalNamespace::CrittersActor* potentialBagActor, ::GlobalNamespace::CrittersActor*& heldStorableActor) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoesActorActivateJoint"), {"potentialBagActor", "heldStorableActor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(potentialBagActor, &heldStorableActor);
        }
        void DoGrab() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoGrab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DoHover() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoHover"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DoRelease() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoRelease"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::CrittersActor* FindGrabTargets() {
            static BNM::Method<::GlobalNamespace::CrittersActor*> _m = GetClass().GetMethod(O("FindGrabTargets"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void NewJointMethod() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NewJointMethod"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void PlayHaptics(::AudioClip* clip, float strength) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHaptics"), {"clip", "strength"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(clip, strength);
        }
        ::BNM::Coroutine::IEnumerator* PlayHapticsOnLoop() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("PlayHapticsOnLoop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void RemoveGrabberPhysicsTrigger() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveGrabberPhysicsTrigger"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopHaptics() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopHaptics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void VerifyExistingGrab() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VerifyExistingGrab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
