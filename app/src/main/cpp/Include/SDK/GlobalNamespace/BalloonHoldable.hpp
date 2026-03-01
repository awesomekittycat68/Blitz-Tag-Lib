#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BalloonHoldable_BalloonStates.hpp"
#include "TransferrableObject.hpp"

namespace GlobalNamespace {
    struct BalloonHoldable : ::GlobalNamespace::TransferrableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BalloonHoldable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioSource* GetBalloonBopSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("balloonBopSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetBalloonDynamics() {
            static BNM::Field<void*> _field = GetClass().GetField(O("balloonDynamics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetBalloonInflatSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("balloonInflatSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetBalloonPopFXColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("balloonPopFXColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetBalloonPopFXPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("balloonPopFXPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BalloonHoldable_BalloonStates GetBalloonState() {
            static BNM::Field<::GlobalNamespace::BalloonHoldable_BalloonStates> _field = GetClass().GetField(O("balloonState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBeginScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("beginScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBopSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("bopSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetCollisionPtAsRemote() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("collisionPtAsRemote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableCollisionHandling() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableCollisionHandling"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableRelease() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetForceAppliedAsRemote() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("forceAppliedAsRemote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetFullyInflatedScale() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("fullyInflatedScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastOwnershipRequest() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastOwnershipRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LineRenderer* GetLineRenderer() {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("lineRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxDistanceFromOwner() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDistanceFromOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetMesh() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("mesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetOriginalOwner() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("originalOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPoppedTimerLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("poppedTimerLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRb() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReturnTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("returnTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScaleTimerLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("scaleTimerLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("timer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterVolume* GetWaterVolume() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume*> _field = GetClass().GetField(O("waterVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBalloonBopSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("balloonBopSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBalloonDynamics(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("balloonDynamics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBalloonInflatSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("balloonInflatSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBalloonPopFXColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("balloonPopFXColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBalloonPopFXPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("balloonPopFXPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBalloonState(::GlobalNamespace::BalloonHoldable_BalloonStates value) {
            static BNM::Field<::GlobalNamespace::BalloonHoldable_BalloonStates> _field = GetClass().GetField(O("balloonState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBeginScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("beginScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBopSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bopSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionPtAsRemote(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("collisionPtAsRemote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableCollisionHandling(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableCollisionHandling"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableRelease(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceAppliedAsRemote(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("forceAppliedAsRemote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFullyInflatedScale(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("fullyInflatedScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastOwnershipRequest(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastOwnershipRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineRenderer(::LineRenderer* value) {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("lineRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDistanceFromOwner(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDistanceFromOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMesh(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("mesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOriginalOwner(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("originalOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPoppedTimerLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("poppedTimerLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRb(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReturnTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("returnTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleTimerLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scaleTimerLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterVolume(::GorillaLocomotion_Swimming::WaterVolume* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume*> _field = GetClass().GetField(O("waterVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void EnableDynamics(bool enable, bool collider, bool forceKinematicOn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableDynamics"), {"enable", "collider", "forceKinematicOn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable, collider, forceKinematicOn);
        }
        void Grab() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Grab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdateReplicated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdateReplicated"));
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
        void OnItemDestroyedOrDisabled() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnItemDestroyedOrDisabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnOwnerChangeCb(::GlobalNamespace::NetPlayer* newOwner, ::GlobalNamespace::NetPlayer* prevOwner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOwnerChangeCb"), {"newOwner", "prevOwner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newOwner, prevOwner);
        }
        void OnOwnershipTransferred(::GlobalNamespace::NetPlayer* newOwner, ::GlobalNamespace::NetPlayer* prevOwner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOwnershipTransferred"), {"newOwner", "prevOwner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newOwner, prevOwner);
        }
        void OnSpawn(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSpawn"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        void OnStateChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStateChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnWorldShareableItemSpawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnWorldShareableItemSpawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OwnerPopBalloon() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OwnerPopBalloon"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayDestroyedOrDisabledEffect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayDestroyedOrDisabledEffect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayPopBalloonFX() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayPopBalloonFX"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopBalloon() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopBalloon"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopBalloonRemote() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopBalloonRemote"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PreDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PreDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Release() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Release"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetToDefaultState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetToDefaultState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetToHome() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetToHome"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RunLocalPopSM() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RunLocalPopSM"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ShouldSimulate() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldSimulate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
