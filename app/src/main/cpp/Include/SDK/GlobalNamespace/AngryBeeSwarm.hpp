#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AngryBeeSwarm_ChaseState.hpp"
#include "BeeSwarmData.hpp"
#include "NetworkComponent.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct AngryBeeSwarm : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AngryBeeSwarm");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::AngryBeeSwarm* GetInstance() {
            static BNM::Field<::GlobalNamespace::AngryBeeSwarm*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr float navMeshSampleRange = 5.0f;
        ::GlobalNamespace::BeeSwarmData GetData() {
            static BNM::Method<::GlobalNamespace::BeeSwarmData> _method = GetClass().GetMethod(O("get_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetData(::GlobalNamespace::BeeSwarmData value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsDormant() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isDormant"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::BeeSwarmData GetData_f() {
            static BNM::Field<::GlobalNamespace::BeeSwarmData> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AngryBeeAnimator* GetBeeAnimator() {
            static BNM::Field<::GlobalNamespace::AngryBeeAnimator*> _field = GetClass().GetField(O("beeAnimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBoredAfterDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("boredAfterDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBoredToDeathAtTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("BoredToDeathAtTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCatchDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("catchDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentPathPointIdx() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentPathPointIdx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AngryBeeSwarm_ChaseState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::AngryBeeSwarm_ChaseState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetEmergeFromPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("emergeFromPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEmergeStartedTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("emergeStartedTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetEmergeToPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("emergeToPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFinalRangeLimit() {
            static BNM::Field<float> _field = GetClass().GetField(O("finalRangeLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFollowTarget() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("followTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetGhostOffsetGrabbingLocal() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("ghostOffsetGrabbingLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetGrabbedPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("grabbedPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabTimestamp"));
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
        float GetHeightAboveNavmesh() {
            static BNM::Field<float> _field = GetClass().GetField(O("heightAboveNavmesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInitialRangeLimit() {
            static BNM::Field<float> _field = GetClass().GetField(O("initialRangeLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::AngryBeeSwarm* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::AngryBeeSwarm*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        float GetLastSpeedIncreased() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastSpeedIncreased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AngryBeeSwarm_ChaseState GetLastState() {
            static BNM::Field<::GlobalNamespace::AngryBeeSwarm_ChaseState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinGrabCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("minGrabCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinHeightAboveWater() {
            static BNM::Field<float> _field = GetClass().GetField(O("MinHeightAboveWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextPathTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("nextPathTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextRefreshClosestPlayerTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("NextRefreshClosestPlayerTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetNoisyOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("noisyOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPath() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* GetPathPoints() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("pathPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayerMinHeightAboveWater() {
            static BNM::Field<float> _field = GetClass().GetField(O("PlayerMinHeightAboveWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRangeLimitBlendDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("rangeLimitBlendDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRefreshClosestPlayerInterval() {
            static BNM::Field<float> _field = GetClass().GetField(O("RefreshClosestPlayerInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTargetIsOnNavMesh() {
            static BNM::Field<bool> _field = GetClass().GetField(O("targetIsOnNavMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetTargetPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("targetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTestEmergeFrom() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("testEmergeFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTestEmergeTo() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("testEmergeTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTotalTimeToEmerge() {
            static BNM::Field<float> _field = GetClass().GetField(O("totalTimeToEmerge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVelocityIncreaseInterval() {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityIncreaseInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVelocityStep() {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData_fs(::GlobalNamespace::BeeSwarmData value) {
            static BNM::Field<::GlobalNamespace::BeeSwarmData> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBeeAnimator(::GlobalNamespace::AngryBeeAnimator* value) {
            static BNM::Field<::GlobalNamespace::AngryBeeAnimator*> _field = GetClass().GetField(O("beeAnimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBoredAfterDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("boredAfterDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBoredToDeathAtTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("BoredToDeathAtTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCatchDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("catchDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentPathPointIdx(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentPathPointIdx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::AngryBeeSwarm_ChaseState value) {
            static BNM::Field<::GlobalNamespace::AngryBeeSwarm_ChaseState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmergeFromPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("emergeFromPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmergeStartedTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("emergeStartedTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmergeToPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("emergeToPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFinalRangeLimit(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("finalRangeLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFollowTarget(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("followTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGhostOffsetGrabbingLocal(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("ghostOffsetGrabbingLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("grabbedPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabTimestamp"));
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
        void SetHeightAboveNavmesh(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("heightAboveNavmesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialRangeLimit(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("initialRangeLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::AngryBeeSwarm* value) {
            static BNM::Field<::GlobalNamespace::AngryBeeSwarm*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetLastSpeedIncreased(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastSpeedIncreased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastState(::GlobalNamespace::AngryBeeSwarm_ChaseState value) {
            static BNM::Field<::GlobalNamespace::AngryBeeSwarm_ChaseState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinGrabCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minGrabCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinHeightAboveWater(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MinHeightAboveWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextPathTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nextPathTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextRefreshClosestPlayerTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("NextRefreshClosestPlayerTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoisyOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("noisyOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPath(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPathPoints(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("pathPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerMinHeightAboveWater(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PlayerMinHeightAboveWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRangeLimitBlendDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rangeLimitBlendDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRefreshClosestPlayerInterval(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("RefreshClosestPlayerInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetIsOnNavMesh(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("targetIsOnNavMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("targetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestEmergeFrom(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("testEmergeFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestEmergeTo(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("testEmergeTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalTimeToEmerge(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("totalTimeToEmerge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityIncreaseInterval(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityIncreaseInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityStep(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ChaseHost() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChaseHost"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ChooseClosestTarget() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChooseClosestTarget"));
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
        void Emerge(::BNM::Structures::Unity::Vector3 fromPosition, ::BNM::Structures::Unity::Vector3 toPosition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Emerge"), {"fromPosition", "toPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fromPosition, toPosition);
        }
        ::GlobalNamespace::BeeSwarmData get_Data() {
            static BNM::Method<::GlobalNamespace::BeeSwarmData> _m = GetClass().GetMethod(O("get_Data"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isDormant() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isDormant"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetNewPath(::BNM::Structures::Unity::Vector3 destination) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetNewPath"), {"destination"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(destination);
        }
        void GrabBodyShared() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabBodyShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitializeSwarm() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeSwarm"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MoveBodyShared() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MoveBodyShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnChangeState(::GlobalNamespace::AngryBeeSwarm_ChaseState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnChangeState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnOwnerChange(::Photon_Realtime::Player* newOwner, ::Photon_Realtime::Player* previousOwner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOwnerChange"), {"newOwner", "previousOwner"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newOwner, previousOwner);
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
        void ResetPath() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetPath"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RiseGrabbedLocalPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RiseGrabbedLocalPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_Data(::GlobalNamespace::BeeSwarmData value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Data"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetInitialRotations() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInitialRotations"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SwarmEmergeUpdateShared() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwarmEmergeUpdateShared"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TestEmerge() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestEmerge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateFollowPath(::BNM::Structures::Unity::Vector3 destination, float currentSpeed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFollowPath"), {"destination", "currentSpeed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(destination, currentSpeed);
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
