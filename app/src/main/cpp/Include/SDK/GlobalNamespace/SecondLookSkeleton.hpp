#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SecondLookSkeleton_GhostState.hpp"

namespace GlobalNamespace {
    struct SecondLookSkeleton : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SecondLookSkeleton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::Transform*>* GetAngerPoint() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("angerPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAngerPointChangedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("angerPointChangedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAngerPointIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("angerPointIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Animator* GetAnimator() {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("animator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBodyHeightOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("bodyHeightOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetCarryingLoop() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("carryingLoop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCatchDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("catchDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCaughtSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("caughtSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetChangeAngerPointOnTimeInterval() {
            static BNM::Field<bool> _field = GetClass().GetField(O("changeAngerPointOnTimeInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChangeAngerPointTimeMinutes() {
            static BNM::Field<float> _field = GetClass().GetField(O("changeAngerPointTimeMinutes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetChaseLoop() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("chaseLoop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChaseSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("chaseSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::RaycastHit GetClosest() {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("closest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCurrentlyLooking() {
            static BNM::Field<bool> _field = GetClass().GetField(O("currentlyLooking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SkeletonPathingNode* GetCurrentNode() {
            static BNM::Field<::GlobalNamespace::SkeletonPathingNode*> _field = GetClass().GetField(O("currentNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SecondLookSkeleton_GhostState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::SecondLookSkeleton_GhostState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SkeletonPathingNode*>* GetExitPoints() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SkeletonPathingNode*>*> _field = GetClass().GetField(O("exitPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFirstLookActivated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("firstLookActivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SkeletonPathingNode* GetFirstNode() {
            static BNM::Field<::GlobalNamespace::SkeletonPathingNode*> _field = GetClass().GetField(O("firstNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGhostActivationDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("ghostActivationDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetGrabbedSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("grabbedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHeightOffset() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("heightOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetInitialScream() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("initialScream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLocalCaught() {
            static BNM::Field<bool> _field = GetClass().GetField(O("localCaught"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLocalThrown() {
            static BNM::Field<bool> _field = GetClass().GetField(O("localThrown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLookedAway() {
            static BNM::Field<bool> _field = GetClass().GetField(O("lookedAway"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLookSource() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lookSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("mask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxRotSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxRotSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxSeeDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxSeeDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SkeletonPathingNode* GetNextNode() {
            static BNM::Field<::GlobalNamespace::SkeletonPathingNode*> _field = GetClass().GetField(O("nextNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetOffsetGrabPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("offsetGrabPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SkeletonPathingNode*>* GetPathPoints() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SkeletonPathingNode*>*> _field = GetClass().GetField(O("pathPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetPatrolLoop() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("patrolLoop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPatrolSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("patrolSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPlayerMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("playerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* GetPlayersSeen() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("playersSeen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetPlayerTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("playerTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReachNodeDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("reachNodeDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRequireSecondLookToActivate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("requireSecondLookToActivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRequireTappingToActivate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("requireTappingToActivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SkeletonPathingNode*>* GetResetChaseHistory() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SkeletonPathingNode*>*> _field = GetClass().GetField(O("resetChaseHistory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* GetRHits() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("rHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSpookyGhost() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spookyGhost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSpookyText() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spookyText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SecondLookSkeletonSynchValues* GetSynchValues() {
            static BNM::Field<::GlobalNamespace::SecondLookSkeletonSynchValues*> _field = GetClass().GetField(O("synchValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTapped() {
            static BNM::Field<bool> _field = GetClass().GetField(O("tapped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetThrowForce() {
            static BNM::Field<float> _field = GetClass().GetField(O("throwForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetThrowSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("throwSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeFirstAppeared() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeFirstAppeared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeThrown() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeThrown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeThrownCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeThrownCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeToFirstDisappear() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeToFirstDisappear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAngerPoint(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("angerPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAngerPointChangedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("angerPointChangedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAngerPointIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("angerPointIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimator(::Animator* value) {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("animator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyHeightOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bodyHeightOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCarryingLoop(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("carryingLoop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCatchDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("catchDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCaughtSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("caughtSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChangeAngerPointOnTimeInterval(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("changeAngerPointOnTimeInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChangeAngerPointTimeMinutes(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("changeAngerPointTimeMinutes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChaseLoop(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("chaseLoop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChaseSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("chaseSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClosest(::BNM::Structures::Unity::RaycastHit value) {
            static BNM::Field<::BNM::Structures::Unity::RaycastHit> _field = GetClass().GetField(O("closest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentlyLooking(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("currentlyLooking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentNode(::GlobalNamespace::SkeletonPathingNode* value) {
            static BNM::Field<::GlobalNamespace::SkeletonPathingNode*> _field = GetClass().GetField(O("currentNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::SecondLookSkeleton_GhostState value) {
            static BNM::Field<::GlobalNamespace::SecondLookSkeleton_GhostState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExitPoints(::BNM::Structures::Mono::Array<::GlobalNamespace::SkeletonPathingNode*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SkeletonPathingNode*>*> _field = GetClass().GetField(O("exitPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirstLookActivated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("firstLookActivated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirstNode(::GlobalNamespace::SkeletonPathingNode* value) {
            static BNM::Field<::GlobalNamespace::SkeletonPathingNode*> _field = GetClass().GetField(O("firstNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGhostActivationDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ghostActivationDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("grabbedSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeightOffset(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("heightOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialScream(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("initialScream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalCaught(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("localCaught"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalThrown(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("localThrown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLookedAway(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("lookedAway"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLookSource(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lookSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("mask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxRotSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxRotSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxSeeDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxSeeDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextNode(::GlobalNamespace::SkeletonPathingNode* value) {
            static BNM::Field<::GlobalNamespace::SkeletonPathingNode*> _field = GetClass().GetField(O("nextNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffsetGrabPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("offsetGrabPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPathPoints(::BNM::Structures::Mono::Array<::GlobalNamespace::SkeletonPathingNode*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SkeletonPathingNode*>*> _field = GetClass().GetField(O("pathPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPatrolLoop(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("patrolLoop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPatrolSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("patrolSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("playerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayersSeen(::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("playersSeen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("playerTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReachNodeDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("reachNodeDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequireSecondLookToActivate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("requireSecondLookToActivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequireTappingToActivate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("requireTappingToActivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResetChaseHistory(::BNM::Structures::Mono::List<::GlobalNamespace::SkeletonPathingNode*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SkeletonPathingNode*>*> _field = GetClass().GetField(O("resetChaseHistory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRHits(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("rHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpookyGhost(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spookyGhost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpookyText(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spookyText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSynchValues(::GlobalNamespace::SecondLookSkeletonSynchValues* value) {
            static BNM::Field<::GlobalNamespace::SecondLookSkeletonSynchValues*> _field = GetClass().GetField(O("synchValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTapped(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("tapped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowForce(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("throwForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("throwSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeFirstAppeared(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeFirstAppeared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeThrown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeThrown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeThrownCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeThrownCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeToFirstDisappear(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeToFirstDisappear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ActivateGhost() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateGhost"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanGrab() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanGrab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CanSeePlayer() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanSeePlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CanSeePlayerWithResults(::BNM::Structures::Unity::RaycastHit& closest) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanSeePlayerWithResults"), {"closest"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&closest);
        }
        void CaughtMove() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CaughtMove"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CaughtPlayerUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CaughtPlayerUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ChangeState(::GlobalNamespace::SecondLookSkeleton_GhostState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void ChaseMove() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChaseMove"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckActivateGhost() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckActivateGhost"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CheckPlayerSeen() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckPlayerSeen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CheckReachedNextNode(bool forChuck, bool forChase) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckReachedNextNode"), {"forChuck", "forChase"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(forChuck, forChase);
        }
        void ChuckPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChuckPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DeactivateGhost() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeactivateGhost"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FloatPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FloatPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FollowPosition() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FollowPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool GhostAtExit() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GhostAtExit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GhostMove(::Transform* target, float speed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GhostMove"), {"target", "speed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(target, speed);
        }
        void GrabPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsCurrentlyLooking() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsCurrentlyLooking"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsMine() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsMine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void PatrolMove() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PatrolMove"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProcessGhostState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessGhostState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemoteActivateGhost() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteActivateGhost"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemotePlayerCaught(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemotePlayerCaught"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void RemotePlayerSeen(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemotePlayerSeen"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void SetHeightOffset_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHeightOffset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetNodes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNodes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetTappedState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTappedState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartChasing() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartChasing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SyncNodes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SyncNodes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
