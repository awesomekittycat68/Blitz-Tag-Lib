#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ScienceExperimentPlatformGenerator_BubbleData.hpp"
#include "ScienceExperimentPlatformGenerator_BubbleSpawnDebug.hpp"
#include "../GorillaTag_GuidedRefs/GuidedRefReceiverFieldInfo.hpp"
#include "../Photon_Pun/MonoBehaviourPun.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GorillaTag {
    struct ScienceExperimentPlatformGenerator : ::Photon_Pun::MonoBehaviourPun {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "ScienceExperimentPlatformGenerator");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GorillaTag::ScienceExperimentPlatformGenerator_BubbleData>* GetActiveBubbles() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag::ScienceExperimentPlatformGenerator_BubbleData>*> _field = GetClass().GetField(O("activeBubbles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBubbleCountMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("bubbleCountMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBubblePopAnticipationTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("bubblePopAnticipationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBubblePopWobbleAmplitude() {
            static BNM::Field<float> _field = GetClass().GetField(O("bubblePopWobbleAmplitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBubblePopWobbleFrequency() {
            static BNM::Field<float> _field = GetClass().GetField(O("bubblePopWobbleFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTag::ScienceExperimentPlatformGenerator_BubbleSpawnDebug>* GetBubbleSpawnDebug() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag::ScienceExperimentPlatformGenerator_BubbleSpawnDebug>*> _field = GetClass().GetField(O("bubbleSpawnDebug"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetLifetimeRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("lifetimeRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLiquidSurfacePlane() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("liquidSurfacePlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo GetLiquidSurfacePlaneGRef() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo> _field = GetClass().GetField(O("liquidSurfacePlane_gRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxBubbleCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxBubbleCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetRockCountVsLavaProgress() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("rockCountVsLavaProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetRockLifetimeMultiplierVsLavaProgress() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("rockLifetimeMultiplierVsLavaProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetRockMaxSizeMultiplierVsLavaProgress() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("rockMaxSizeMultiplierVsLavaProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetRockSizeVsLifetime() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("rockSizeVsLifetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScaleFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("scaleFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::ScienceExperimentManager* GetScienceExperimentManager() {
            static BNM::Field<::GorillaTag::ScienceExperimentManager*> _field = GetClass().GetField(O("scienceExperimentManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetSizeRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("sizeRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSpawnedPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spawnedPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSpawnRadiusMultiplierVsLavaProgress() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("spawnRadiusMultiplierVsLavaProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetSurfaceRadiusSpawnRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("surfaceRadiusSpawnRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTrailBubbleBoundaryRadiusVsProgress() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("trailBubbleBoundaryRadiusVsProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTrailBubbleLifetimeMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("trailBubbleLifetimeMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTrailBubbleLifetimeVsProgress() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("trailBubbleLifetimeVsProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTrailBubbleSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("trailBubbleSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTrailCountMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("trailCountMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTrailCountVsProgress() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("trailCountVsProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTrailDistanceBetweenSpawns() {
            static BNM::Field<float> _field = GetClass().GetField(O("trailDistanceBetweenSpawns"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetTrailEdgeAvoidanceSpawnsMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("trailEdgeAvoidanceSpawnsMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTag::ScienceExperimentPlatformGenerator_BubbleData>* GetTrailHeads() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag::ScienceExperimentPlatformGenerator_BubbleData>*> _field = GetClass().GetField(O("trailHeads"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTrailMaxTurnAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("trailMaxTurnAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTrailSpawnRateMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("trailSpawnRateMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTrailSpawnRateVsProgress() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("trailSpawnRateVsProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveBubbles(::BNM::Structures::Mono::List<::GorillaTag::ScienceExperimentPlatformGenerator_BubbleData>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag::ScienceExperimentPlatformGenerator_BubbleData>*> _field = GetClass().GetField(O("activeBubbles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBubbleCountMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bubbleCountMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBubblePopAnticipationTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bubblePopAnticipationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBubblePopWobbleAmplitude(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bubblePopWobbleAmplitude"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBubblePopWobbleFrequency(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bubblePopWobbleFrequency"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBubbleSpawnDebug(::BNM::Structures::Mono::List<::GorillaTag::ScienceExperimentPlatformGenerator_BubbleSpawnDebug>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag::ScienceExperimentPlatformGenerator_BubbleSpawnDebug>*> _field = GetClass().GetField(O("bubbleSpawnDebug"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLifetimeRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("lifetimeRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidSurfacePlane(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("liquidSurfacePlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidSurfacePlaneGRef(::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefReceiverFieldInfo> _field = GetClass().GetField(O("liquidSurfacePlane_gRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxBubbleCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxBubbleCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRockCountVsLavaProgress(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("rockCountVsLavaProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRockLifetimeMultiplierVsLavaProgress(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("rockLifetimeMultiplierVsLavaProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRockMaxSizeMultiplierVsLavaProgress(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("rockMaxSizeMultiplierVsLavaProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRockSizeVsLifetime(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("rockSizeVsLifetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scaleFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScienceExperimentManager(::GorillaTag::ScienceExperimentManager* value) {
            static BNM::Field<::GorillaTag::ScienceExperimentManager*> _field = GetClass().GetField(O("scienceExperimentManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSizeRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("sizeRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnedPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("spawnedPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnRadiusMultiplierVsLavaProgress(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("spawnRadiusMultiplierVsLavaProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfaceRadiusSpawnRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("surfaceRadiusSpawnRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrailBubbleBoundaryRadiusVsProgress(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("trailBubbleBoundaryRadiusVsProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrailBubbleLifetimeMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("trailBubbleLifetimeMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrailBubbleLifetimeVsProgress(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("trailBubbleLifetimeVsProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrailBubbleSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("trailBubbleSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrailCountMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("trailCountMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrailCountVsProgress(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("trailCountVsProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrailDistanceBetweenSpawns(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("trailDistanceBetweenSpawns"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrailEdgeAvoidanceSpawnsMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("trailEdgeAvoidanceSpawnsMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrailHeads(::BNM::Structures::Mono::List<::GorillaTag::ScienceExperimentPlatformGenerator_BubbleData>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag::ScienceExperimentPlatformGenerator_BubbleData>*> _field = GetClass().GetField(O("trailHeads"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrailMaxTurnAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("trailMaxTurnAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrailSpawnRateMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("trailSpawnRateMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrailSpawnRateVsProgress(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("trailSpawnRateVsProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector2 GetSpawnPositionWithClearance(::BNM::Structures::Unity::Vector2 inputPosition, float inputSize, float maxDistance, ::BNM::Structures::Unity::Vector3 lavaSurfaceOrigin) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("GetSpawnPositionWithClearance"), {"inputPosition", "inputSize", "maxDistance", "lavaSurfaceOrigin"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(inputPosition, inputSize, maxDistance, lavaSurfaceOrigin);
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
        void RemoveExpiredBubbles(double currentTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveExpiredBubbles"), {"currentTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentTime);
        }
        void SpawnNewBubbles(double currentTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnNewBubbles"), {"currentTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentTime);
        }
        void SpawnRockAuthority(double currentTime, float lavaProgress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnRockAuthority"), {"currentTime", "lavaProgress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentTime, lavaProgress);
        }
        void SpawnSodaBubbleLocal(::BNM::Structures::Unity::Vector2 surfacePosLocal, float spawnSize, float lifetime, double spawnTime, bool addAsTrail, ::BNM::Structures::Unity::Vector3 direction) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnSodaBubbleLocal"), {"surfacePosLocal", "spawnSize", "lifetime", "spawnTime", "addAsTrail", "direction"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(surfacePosLocal, spawnSize, lifetime, spawnTime, addAsTrail, direction);
        }
        void SpawnSodaBubbleRPC(::BNM::Structures::Unity::Vector2 surfacePosLocal, float spawnSize, float lifetime, double spawnTime, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnSodaBubbleRPC"), {"surfacePosLocal", "spawnSize", "lifetime", "spawnTime", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(surfacePosLocal, spawnSize, lifetime, spawnTime, info);
        }
        void SpawnTrailAuthority(double currentTime, float lavaProgress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnTrailAuthority"), {"currentTime", "lavaProgress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentTime, lavaProgress);
        }
        void UpdateActiveBubbles(double currentTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateActiveBubbles"), {"currentTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentTime);
        }
        void UpdateTrails(double currentTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTrails"), {"currentTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentTime);
        }
    };
}
