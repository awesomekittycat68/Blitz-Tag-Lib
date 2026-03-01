#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/NetworkComponent.hpp"
#include "../GlobalNamespace/ShaderHashId.hpp"
#include "LurkerGhost_ghostState.hpp"
#include "LurkerGhost_LurkerGhostData.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GorillaTagScripts {
    struct LurkerGhost : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "LurkerGhost");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTagScripts::LurkerGhost_LurkerGhostData GetData() {
            static BNM::Method<::GorillaTagScripts::LurkerGhost_LurkerGhostData> _method = GetClass().GetMethod(O("get_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetData(::GorillaTagScripts::LurkerGhost_LurkerGhostData value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::ShaderHashId GetBlackAndWhite() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_BlackAndWhite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::LurkerGhost_LurkerGhostData GetData_f() {
            static BNM::Field<::GorillaTagScripts::LurkerGhost_LurkerGhostData> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetBonesMeshRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("bonesMeshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChargeSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCooldownDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCooldownTimeRemaining() {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownTimeRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentRepeatHuntTimes() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentRepeatHuntTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::LurkerGhost_ghostState GetCurrentState() {
            static BNM::Field<::GorillaTagScripts::LurkerGhost_ghostState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetCurrentWaypoint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("currentWaypoint"));
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
        ::BNM::Structures::Unity::Vector4 GetHauntedMagicNumbers() {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("HauntedMagicNumbers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHauntNeighbors() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hauntNeighbors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetHuntAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("huntAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHuntedPassedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("huntedPassedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetLastHauntedVRRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("lastHauntedVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ZoneBasedObject* GetLastWaypointRegion() {
            static BNM::Field<::GlobalNamespace::ZoneBasedObject*> _field = GetClass().GetField(O("lastWaypointRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxCooldownDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxCooldownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxHuntDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHuntDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxRepeatHuntDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxRepeatHuntDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxRepeatHuntTimes() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxRepeatHuntTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetMeshRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("meshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinCatchDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("minCatchDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextTagTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("nextTagTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetPassingPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("passingPlayer"));
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
        ::AudioClip* GetPossessedAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("possessedAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPossessionDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("PossessionDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* GetPossibleTargets() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("possibleTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetScryableMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("scryableMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetScryableMaterialBones() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("scryableMaterialBones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScryingAngerAfterTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("scryingAngerAfterTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScryingAngerAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("scryingAngerAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScryingAngerDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("scryingAngerDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ThrowableSetDressing* GetScryingGlass() {
            static BNM::Field<::GlobalNamespace::ThrowableSetDressing*> _field = GetClass().GetField(O("scryingGlass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSeekAheadDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("seekAheadDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSeekCloseEnoughDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("seekCloseEnoughDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSeekSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("seekSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSphereColliderRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("sphereColliderRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSpookyMagicNumbers() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("SpookyMagicNumbers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTagCoolDown() {
            static BNM::Field<float> _field = GetClass().GetField(O("tagCoolDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetTargetPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("targetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetTargetPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("targetPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetTargetRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("targetRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTargetTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("targetTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetTargetVRRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("targetVRRig"));
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
        ::Material* GetVisibleMaterialBones() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("visibleMaterialBones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneBasedObject*>* GetWaypointRegions() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneBasedObject*>*> _field = GetClass().GetField(O("waypointRegions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetWaypoints() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("waypoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetWaypointsContainer() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("waypointsContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlackAndWhite(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_BlackAndWhite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetData_fs(::GorillaTagScripts::LurkerGhost_LurkerGhostData value) {
            static BNM::Field<::GorillaTagScripts::LurkerGhost_LurkerGhostData> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBonesMeshRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("bonesMeshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCooldownTimeRemaining(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownTimeRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentRepeatHuntTimes(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentRepeatHuntTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GorillaTagScripts::LurkerGhost_ghostState value) {
            static BNM::Field<::GorillaTagScripts::LurkerGhost_ghostState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentWaypoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("currentWaypoint"));
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
        void SetHauntedMagicNumbers(::BNM::Structures::Unity::Vector4 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector4> _field = GetClass().GetField(O("HauntedMagicNumbers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHauntNeighbors(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hauntNeighbors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHuntAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("huntAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHuntedPassedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("huntedPassedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHauntedVRRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("lastHauntedVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastWaypointRegion(::GlobalNamespace::ZoneBasedObject* value) {
            static BNM::Field<::GlobalNamespace::ZoneBasedObject*> _field = GetClass().GetField(O("lastWaypointRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxCooldownDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxCooldownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxHuntDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHuntDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxRepeatHuntDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxRepeatHuntDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxRepeatHuntTimes(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxRepeatHuntTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMeshRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("meshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinCatchDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minCatchDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextTagTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nextTagTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPassingPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("passingPlayer"));
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
        void SetPossessedAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("possessedAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPossessionDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PossessionDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPossibleTargets(::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("possibleTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScryableMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("scryableMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScryableMaterialBones(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("scryableMaterialBones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScryingAngerAfterTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scryingAngerAfterTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScryingAngerAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scryingAngerAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScryingAngerDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scryingAngerDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScryingGlass(::GlobalNamespace::ThrowableSetDressing* value) {
            static BNM::Field<::GlobalNamespace::ThrowableSetDressing*> _field = GetClass().GetField(O("scryingGlass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeekAheadDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("seekAheadDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeekCloseEnoughDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("seekCloseEnoughDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeekSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("seekSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSphereColliderRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sphereColliderRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpookyMagicNumbers(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("SpookyMagicNumbers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagCoolDown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tagCoolDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("targetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("targetPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("targetRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("targetTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetVRRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("targetVRRig"));
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
        void SetVisibleMaterialBones(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("visibleMaterialBones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaypointRegions(::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneBasedObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneBasedObject*>*> _field = GetClass().GetField(O("waypointRegions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaypoints(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("waypoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaypointsContainer(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("waypointsContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ChangeState(::GorillaTagScripts::LurkerGhost_ghostState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void ChargeAtPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChargeAtPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        ::GorillaTagScripts::LurkerGhost_LurkerGhostData get_Data() {
            static BNM::Method<::GorillaTagScripts::LurkerGhost_LurkerGhostData> _m = GetClass().GetMethod(O("get_Data"));
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
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        bool PickPlayer(float maxDistance) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PickPlayer"), {"maxDistance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(maxDistance);
        }
        void PickPlayer(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PickPlayer"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void PlaySound(::AudioClip* clip, bool loop) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySound"), {"clip", "loop"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(clip, loop);
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
        void ReadDataShared(::GorillaTagScripts::LurkerGhost_ghostState state, int index, int targetActorNumber, ::BNM::Structures::Unity::Vector3 targetPos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataShared"), {"state", "index", "targetActorNumber", "targetPos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state, index, targetActorNumber, targetPos);
        }
        void SeekPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SeekPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_Data(::GorillaTagScripts::LurkerGhost_LurkerGhostData value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Data"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateGhostVisibility() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateGhostVisibility"));
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
