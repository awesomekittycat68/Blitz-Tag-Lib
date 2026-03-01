#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NetworkComponent.hpp"
#include "WanderingGhost_ghostState.hpp"
#include "WanderingGhost_Waypoint.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct WanderingGhost : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "WanderingGhost");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int maxColliders = 10;
        ::GlobalNamespace::WanderingGhost_ghostState GetData() {
            static BNM::Method<::GlobalNamespace::WanderingGhost_ghostState> _method = GetClass().GetMethod(O("get_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetData(::GlobalNamespace::WanderingGhost_ghostState value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::WanderingGhost_ghostState GetData_f() {
            static BNM::Field<::GlobalNamespace::WanderingGhost_ghostState> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::ThrowableSetDressing*>* GetAllFlowers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ThrowableSetDressing*>*> _field = GetClass().GetField(O("allFlowers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetAppearAudio() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("appearAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::WanderingGhost_ghostState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::WanderingGhost_ghostState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::WanderingGhost_Waypoint GetCurrentWaypoint() {
            static BNM::Field<::GlobalNamespace::WanderingGhost_Waypoint> _field = GetClass().GetField(O("currentWaypoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDebugForceWaypointRegion() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("debugForceWaypointRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetFlowerDisabledPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("flowerDisabledPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFlowerGroundMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("flowerGroundMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFlowerSpawnDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("flowerSpawnDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFlowerSpawnRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("flowerSpawnRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetHitColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("hitColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverDrag() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverRandomForce() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverRandomForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoverRectifyForce() {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverRectifyForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetHoverVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("hoverVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetIdlePassedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("idlePassedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetIdleStayDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("idleStayDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetIdleVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("idleVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ZoneBasedObject* GetLastWaypointRegion() {
            static BNM::Field<::GlobalNamespace::ZoneBasedObject*> _field = GetClass().GetField(O("lastWaypointRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetMrenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("mrenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetPatrolAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("patrolAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPatrolSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("patrolSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPatrolVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("patrolVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetScryableMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("scryableMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSphereColliderRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("sphereColliderRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTriggerHauntedObjects() {
            static BNM::Field<void*> _field = GetClass().GetField(O("TriggerHauntedObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetVisibleMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("visibleMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneBasedObject*>* GetWaypointRegions() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneBasedObject*>*> _field = GetClass().GetField(O("waypointRegions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::WanderingGhost_Waypoint>* GetWaypoints() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::WanderingGhost_Waypoint>*> _field = GetClass().GetField(O("waypoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetWaypointsContainer() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("waypointsContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData_fs(::GlobalNamespace::WanderingGhost_ghostState value) {
            static BNM::Field<::GlobalNamespace::WanderingGhost_ghostState> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllFlowers(::BNM::Structures::Mono::Array<::GlobalNamespace::ThrowableSetDressing*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ThrowableSetDressing*>*> _field = GetClass().GetField(O("allFlowers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAppearAudio(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("appearAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::WanderingGhost_ghostState value) {
            static BNM::Field<::GlobalNamespace::WanderingGhost_ghostState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentWaypoint(::GlobalNamespace::WanderingGhost_Waypoint value) {
            static BNM::Field<::GlobalNamespace::WanderingGhost_Waypoint> _field = GetClass().GetField(O("currentWaypoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugForceWaypointRegion(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("debugForceWaypointRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlowerDisabledPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("flowerDisabledPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlowerGroundMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("flowerGroundMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlowerSpawnDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("flowerSpawnDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlowerSpawnRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("flowerSpawnRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitColliders(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("hitColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverDrag(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverDrag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverRandomForce(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverRandomForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverRectifyForce(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hoverRectifyForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("hoverVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdlePassedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("idlePassedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdleStayDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("idleStayDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdleVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("idleVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastWaypointRegion(::GlobalNamespace::ZoneBasedObject* value) {
            static BNM::Field<::GlobalNamespace::ZoneBasedObject*> _field = GetClass().GetField(O("lastWaypointRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMrenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("mrenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPatrolAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("patrolAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPatrolSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("patrolSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPatrolVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("patrolVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScryableMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("scryableMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSphereColliderRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sphereColliderRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerHauntedObjects(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("TriggerHauntedObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisibleMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("visibleMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaypointRegions(::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneBasedObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneBasedObject*>*> _field = GetClass().GetField(O("waypointRegions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaypoints(::BNM::Structures::Mono::List<::GlobalNamespace::WanderingGhost_Waypoint>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::WanderingGhost_Waypoint>*> _field = GetClass().GetField(O("waypoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaypointsContainer(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("waypointsContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ChangeState(::GlobalNamespace::WanderingGhost_ghostState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void CopyBackingFieldsToState(bool ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyBackingFieldsToState"), {""});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyStateToBackingFields() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyStateToBackingFields"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DelayedStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DelayedStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::WanderingGhost_ghostState get_Data() {
            static BNM::Method<::GlobalNamespace::WanderingGhost_ghostState> _m = GetClass().GetMethod(O("get_Data"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HauntObjects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HauntObjects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool MaybeHideGhost() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MaybeHideGhost"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnOwnerChange(::Photon_Realtime::Player* newOwner, ::Photon_Realtime::Player* previousOwner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOwnerChange"), {"newOwner", "previousOwner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newOwner, previousOwner);
        }
        void Patrol() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Patrol"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PickNextWaypoint() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PickNextWaypoint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReadDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReadDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void ReadDataShared(::GlobalNamespace::WanderingGhost_ghostState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataShared"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void set_Data(::GlobalNamespace::WanderingGhost_ghostState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Data"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SpawnFlowerNearby() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnFlowerNearby"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
    };
}
