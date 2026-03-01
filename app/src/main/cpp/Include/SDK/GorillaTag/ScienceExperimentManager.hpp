#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/NetworkComponent.hpp"
#include "../GlobalNamespace/ScienceExperimentElementID.hpp"
#include "ScienceExperimentManager_PlayerGameState.hpp"
#include "ScienceExperimentManager_RiseSpeed.hpp"
#include "ScienceExperimentManager_RisingLiquidState.hpp"
#include "ScienceExperimentManager_RotatingRingState.hpp"
#include "ScienceExperimentManager_ScienceManagerData.hpp"
#include "ScienceExperimentManager_SyncData.hpp"
#include "ScienceExperimentManager_TagBehavior.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GorillaTag {
    struct ScienceExperimentManager : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "ScienceExperimentManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaTag::ScienceExperimentManager* GetInstance() {
            static BNM::Field<::GorillaTag::ScienceExperimentManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr int maxPlayerCount = 10;
        ::GorillaTag::ScienceExperimentManager_ScienceManagerData GetData() {
            static BNM::Method<::GorillaTag::ScienceExperimentManager_ScienceManagerData> _method = GetClass().GetMethod(O("get_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetData(::GorillaTag::ScienceExperimentManager_ScienceManagerData value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaTag::ScienceExperimentManager_RisingLiquidState GetGameState() {
            static BNM::Method<::GorillaTag::ScienceExperimentManager_RisingLiquidState> _method = GetClass().GetMethod(O("get_GameState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetPlayerCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PlayerCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetRefreshWaterAvailable() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_RefreshWaterAvailable"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetRiseProgress() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_RiseProgress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetRiseProgressLinear() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_RiseProgressLinear"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaTag::ScienceExperimentManager_ScienceManagerData GetData_f() {
            static BNM::Field<::GorillaTag::ScienceExperimentManager_ScienceManagerData> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>* GetAllPlayersInRoom() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("allPlayersInRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetAnimationCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("animationCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterVolume* GetBottleLiquidVolume() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume*> _field = GetClass().GetField(O("bottleLiquidVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetCurrentTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("currentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugDrawPlayerGameState() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDrawPlayerGameState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugRandomizingRings() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugRandomizingRings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDebugRotateRingsTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("debugRotateRingsTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetDrainAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("drainAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDrainBlocker() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("drainBlocker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDrainBlockerClosedPosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("drainBlockerClosedPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDrainBlockerOpenPosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("drainBlockerOpenPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDrainBlockerSlideSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("drainBlockerSlideSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDrainBlockerSlideTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("drainBlockerSlideTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDrainTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("drainTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ScienceExperimentSceneElements* GetElements() {
            static BNM::Field<::GlobalNamespace::ScienceExperimentSceneElements*> _field = GetClass().GetField(O("elements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEntryBridgeQuadMaxScaleY() {
            static BNM::Field<float> _field = GetClass().GetField(O("entryBridgeQuadMaxScaleY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetEntryBridgeQuadMinMaxZHeight() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("entryBridgeQuadMinMaxZHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEntryLiquidMaxScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("entryLiquidMaxScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetEntryLiquidScaleSyncOpeningBottom() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("entryLiquidScaleSyncOpeningBottom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetEntryLiquidScaleSyncOpeningTop() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("entryLiquidScaleSyncOpeningTop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterVolume* GetEntryLiquidVolume() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume*> _field = GetClass().GetField(O("entryLiquidVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetEntryWayBridgeQuadTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("entryWayBridgeQuadTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetEntryWayLiquidMeshTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("entryWayLiquidMeshTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetEruptionAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("eruptionAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFizzParticleEmission() {
            static BNM::Field<void*> _field = GetClass().GetField(O("fizzParticleEmission"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFullyDrainedWaitTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("fullyDrainedWaitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CompositeTriggerEvents* GetGameAreaTriggerNotifier() {
            static BNM::Field<::GlobalNamespace::CompositeTriggerEvents*> _field = GetClass().GetField(O("gameAreaTriggerNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasPlayedDrainEffects() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPlayedDrainEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasPlayedEruptionEffects() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPlayedEruptionEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInfrequentUpdatePeriod() {
            static BNM::Field<float> _field = GetClass().GetField(O("infrequentUpdatePeriod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInGamePlayerCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("inGamePlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag::ScienceExperimentManager_PlayerGameState>* GetInGamePlayerStates() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag::ScienceExperimentManager_PlayerGameState>*> _field = GetClass().GetField(O("inGamePlayerStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaTag::ScienceExperimentManager* GetInstance_f() {
            static BNM::Field<::GorillaTag::ScienceExperimentManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        float GetLagResolutionLavaProgressPerSecond() {
            static BNM::Field<float> _field = GetClass().GetField(O("lagResolutionLavaProgressPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastInfrequentUpdateTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastInfrequentUpdateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastWinnerId() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastWinnerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLastWinnerName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("lastWinnerName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLavaActivationDrainRateVsPlayerCount() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lavaActivationDrainRateVsPlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLavaActivationRockProgressVsPlayerCount() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lavaActivationRockProgressVsPlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLavaProgressToDisableRefreshWater() {
            static BNM::Field<float> _field = GetClass().GetField(O("lavaProgressToDisableRefreshWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLavaProgressToEnableRefreshWater() {
            static BNM::Field<float> _field = GetClass().GetField(O("lavaProgressToEnableRefreshWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLiquidMeshTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("liquidMeshTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLiquidSurfacePlane() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("liquidSurfacePlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterVolume* GetLiquidVolume() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume*> _field = GetClass().GetField(O("liquidVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLocalLagRiseProgressOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("localLagRiseProgressOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxFullTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxFullTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMentoProjectileTag() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mentoProjectileTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("minScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::ScienceExperimentManager_RiseSpeed GetNextRoundRiseSpeed() {
            static BNM::Field<::GorillaTag::ScienceExperimentManager_RiseSpeed> _field = GetClass().GetField(O("nextRoundRiseSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOptPlayersOutOfRoomGameMode() {
            static BNM::Field<bool> _field = GetClass().GetField(O("optPlayersOutOfRoomGameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPreDrainWaitTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("preDrainWaitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetPrevTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("prevTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterVolume* GetRefreshWaterVolume() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume*> _field = GetClass().GetField(O("refreshWaterVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::ScienceExperimentManager_SyncData GetReliableState() {
            static BNM::Field<::GorillaTag::ScienceExperimentManager_SyncData> _field = GetClass().GetField(O("reliableState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRingParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("ringParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRingRotationProgress() {
            static BNM::Field<float> _field = GetClass().GetField(O("ringRotationProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRiseProgress_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("riseProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRiseProgressLinear_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("riseProgressLinear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRiseTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("riseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRiseTimeExtraSlow() {
            static BNM::Field<float> _field = GetClass().GetField(O("riseTimeExtraSlow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRiseTimeFast() {
            static BNM::Field<float> _field = GetClass().GetField(O("riseTimeFast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetRiseTimeLookup() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("riseTimeLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRiseTimeMedium() {
            static BNM::Field<float> _field = GetClass().GetField(O("riseTimeMedium"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRiseTimeSlow() {
            static BNM::Field<float> _field = GetClass().GetField(O("riseTimeSlow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetRotateRingsCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("rotateRingsCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotatingRingAngleSnapDegrees() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotatingRingAngleSnapDegrees"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRotatingRingQuantizeAngles() {
            static BNM::Field<bool> _field = GetClass().GetField(O("rotatingRingQuantizeAngles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetRotatingRingRandomAngleRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("rotatingRingRandomAngleRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag::ScienceExperimentManager_RotatingRingState>* GetRotatingRings() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag::ScienceExperimentManager_RotatingRingState>*> _field = GetClass().GetField(O("rotatingRings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetRotatingRingsAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("rotatingRingsAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetSodaFizzParticleEmissionMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("sodaFizzParticleEmissionMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SlingshotProjectileHitNotifier* GetSodaWaterProjectileTriggerNotifier() {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier*> _field = GetClass().GetField(O("sodaWaterProjectileTriggerNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTag::ScienceExperimentManager_PlayerGameState>* GetSortedPlayerStates() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag::ScienceExperimentManager_PlayerGameState>*> _field = GetClass().GetField(O("sortedPlayerStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::ScienceExperimentManager_TagBehavior GetTagBehavior() {
            static BNM::Field<::GorillaTag::ScienceExperimentManager_TagBehavior> _field = GetClass().GetField(O("tagBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetWaterBalloonPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("waterBalloonPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData_fs(::GorillaTag::ScienceExperimentManager_ScienceManagerData value) {
            static BNM::Field<::GorillaTag::ScienceExperimentManager_ScienceManagerData> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllPlayersInRoom(::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("allPlayersInRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimationCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("animationCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBottleLiquidVolume(::GorillaLocomotion_Swimming::WaterVolume* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume*> _field = GetClass().GetField(O("bottleLiquidVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("currentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugDrawPlayerGameState(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugDrawPlayerGameState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugRandomizingRings(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugRandomizingRings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugRotateRingsTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("debugRotateRingsTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrainAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("drainAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrainBlocker(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("drainBlocker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrainBlockerClosedPosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("drainBlockerClosedPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrainBlockerOpenPosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("drainBlockerOpenPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrainBlockerSlideSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("drainBlockerSlideSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrainBlockerSlideTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("drainBlockerSlideTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrainTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("drainTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetElements(::GlobalNamespace::ScienceExperimentSceneElements* value) {
            static BNM::Field<::GlobalNamespace::ScienceExperimentSceneElements*> _field = GetClass().GetField(O("elements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntryBridgeQuadMaxScaleY(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("entryBridgeQuadMaxScaleY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntryBridgeQuadMinMaxZHeight(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("entryBridgeQuadMinMaxZHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntryLiquidMaxScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("entryLiquidMaxScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntryLiquidScaleSyncOpeningBottom(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("entryLiquidScaleSyncOpeningBottom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntryLiquidScaleSyncOpeningTop(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("entryLiquidScaleSyncOpeningTop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntryLiquidVolume(::GorillaLocomotion_Swimming::WaterVolume* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume*> _field = GetClass().GetField(O("entryLiquidVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntryWayBridgeQuadTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("entryWayBridgeQuadTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntryWayLiquidMeshTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("entryWayLiquidMeshTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEruptionAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("eruptionAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFizzParticleEmission(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("fizzParticleEmission"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFullyDrainedWaitTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fullyDrainedWaitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameAreaTriggerNotifier(::GlobalNamespace::CompositeTriggerEvents* value) {
            static BNM::Field<::GlobalNamespace::CompositeTriggerEvents*> _field = GetClass().GetField(O("gameAreaTriggerNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasPlayedDrainEffects(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPlayedDrainEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasPlayedEruptionEffects(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasPlayedEruptionEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInfrequentUpdatePeriod(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("infrequentUpdatePeriod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInGamePlayerCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("inGamePlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInGamePlayerStates(::BNM::Structures::Mono::Array<::GorillaTag::ScienceExperimentManager_PlayerGameState>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag::ScienceExperimentManager_PlayerGameState>*> _field = GetClass().GetField(O("inGamePlayerStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaTag::ScienceExperimentManager* value) {
            static BNM::Field<::GorillaTag::ScienceExperimentManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetLagResolutionLavaProgressPerSecond(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lagResolutionLavaProgressPerSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastInfrequentUpdateTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastInfrequentUpdateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastWinnerId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastWinnerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastWinnerName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("lastWinnerName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaActivationDrainRateVsPlayerCount(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lavaActivationDrainRateVsPlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaActivationRockProgressVsPlayerCount(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lavaActivationRockProgressVsPlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaProgressToDisableRefreshWater(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lavaProgressToDisableRefreshWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLavaProgressToEnableRefreshWater(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lavaProgressToEnableRefreshWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidMeshTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("liquidMeshTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidSurfacePlane(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("liquidSurfacePlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLiquidVolume(::GorillaLocomotion_Swimming::WaterVolume* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume*> _field = GetClass().GetField(O("liquidVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalLagRiseProgressOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("localLagRiseProgressOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxFullTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxFullTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMentoProjectileTag(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("mentoProjectileTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextRoundRiseSpeed(::GorillaTag::ScienceExperimentManager_RiseSpeed value) {
            static BNM::Field<::GorillaTag::ScienceExperimentManager_RiseSpeed> _field = GetClass().GetField(O("nextRoundRiseSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOptPlayersOutOfRoomGameMode(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("optPlayersOutOfRoomGameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreDrainWaitTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("preDrainWaitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("prevTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRefreshWaterVolume(::GorillaLocomotion_Swimming::WaterVolume* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume*> _field = GetClass().GetField(O("refreshWaterVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReliableState(::GorillaTag::ScienceExperimentManager_SyncData value) {
            static BNM::Field<::GorillaTag::ScienceExperimentManager_SyncData> _field = GetClass().GetField(O("reliableState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRingParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("ringParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRingRotationProgress(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ringRotationProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRiseProgress(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("riseProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRiseProgressLinear(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("riseProgressLinear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRiseTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("riseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRiseTimeExtraSlow(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("riseTimeExtraSlow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRiseTimeFast(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("riseTimeFast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRiseTimeLookup(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("riseTimeLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRiseTimeMedium(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("riseTimeMedium"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRiseTimeSlow(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("riseTimeSlow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotateRingsCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("rotateRingsCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotatingRingAngleSnapDegrees(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotatingRingAngleSnapDegrees"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotatingRingQuantizeAngles(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("rotatingRingQuantizeAngles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotatingRingRandomAngleRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("rotatingRingRandomAngleRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotatingRings(::BNM::Structures::Mono::Array<::GorillaTag::ScienceExperimentManager_RotatingRingState>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag::ScienceExperimentManager_RotatingRingState>*> _field = GetClass().GetField(O("rotatingRings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotatingRingsAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("rotatingRingsAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSodaFizzParticleEmissionMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("sodaFizzParticleEmissionMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSodaWaterProjectileTriggerNotifier(::GlobalNamespace::SlingshotProjectileHitNotifier* value) {
            static BNM::Field<::GlobalNamespace::SlingshotProjectileHitNotifier*> _field = GetClass().GetField(O("sodaWaterProjectileTriggerNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSortedPlayerStates(::BNM::Structures::Mono::List<::GorillaTag::ScienceExperimentManager_PlayerGameState>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag::ScienceExperimentManager_PlayerGameState>*> _field = GetClass().GetField(O("sortedPlayerStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagBehavior(::GorillaTag::ScienceExperimentManager_TagBehavior value) {
            static BNM::Field<::GorillaTag::ScienceExperimentManager_TagBehavior> _field = GetClass().GetField(O("tagBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterBalloonPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("waterBalloonPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddLavaRock(int playerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddLavaRock"), {"playerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerId);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
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
        void DebugErupt() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugErupt"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DeInitElements() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeInitElements"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DisableObjectsInContactWithLava(float lavaScale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableObjectsInContactWithLava"), {"lavaScale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(lavaScale);
        }
        ::GorillaTag::ScienceExperimentManager_ScienceManagerData get_Data() {
            static BNM::Method<::GorillaTag::ScienceExperimentManager_ScienceManagerData> _m = GetClass().GetMethod(O("get_Data"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTag::ScienceExperimentManager_RisingLiquidState get_GameState() {
            static BNM::Method<::GorillaTag::ScienceExperimentManager_RisingLiquidState> _m = GetClass().GetMethod(O("get_GameState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PlayerCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PlayerCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_RefreshWaterAvailable() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_RefreshWaterAvailable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_RiseProgress() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_RiseProgress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_RiseProgressLinear() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_RiseProgressLinear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* GetElement(::GlobalNamespace::ScienceExperimentElementID elementID) {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetElement"), {"elementID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(elementID);
        }
        bool GetMaterialIfPlayerInGame(int playerActorNumber, int& materialIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetMaterialIfPlayerInGame"), {"playerActorNumber", "materialIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerActorNumber, &materialIndex);
        }
        ::GlobalNamespace::NetPlayer* GetPlayerFromId(int id) {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("GetPlayerFromId"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id);
        }
        void InfrequentUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InfrequentUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitElements(::GlobalNamespace::ScienceExperimentSceneElements* elements) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitElements"), {"elements"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(elements);
        }
        void OnColliderEnteredRefreshWater(::GorillaLocomotion_Swimming::WaterVolume* volume, ::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnColliderEnteredRefreshWater"), {"volume", "collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(volume, collider);
        }
        void OnColliderEnteredSoda(::GorillaLocomotion_Swimming::WaterVolume* volume, ::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnColliderEnteredSoda"), {"volume", "collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(volume, collider);
        }
        void OnColliderEnteredVolume(::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnColliderEnteredVolume"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider);
        }
        void OnColliderExitedRefreshWater(::GorillaLocomotion_Swimming::WaterVolume* volume, ::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnColliderExitedRefreshWater"), {"volume", "collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(volume, collider);
        }
        void OnColliderExitedSoda(::GorillaLocomotion_Swimming::WaterVolume* volume, ::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnColliderExitedSoda"), {"volume", "collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(volume, collider);
        }
        void OnColliderExitedVolume(::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnColliderExitedVolume"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
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
        void OnLeftRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnOwnerSwitched(::GlobalNamespace::NetPlayer* newOwningPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOwnerSwitched"), {"newOwningPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newOwningPlayer);
        }
        void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer* otherPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(otherPlayer);
        }
        void OnPlayerTagged(::GlobalNamespace::NetPlayer* taggedPlayer, ::GlobalNamespace::NetPlayer* taggingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerTagged"), {"taggedPlayer", "taggingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, taggingPlayer);
        }
        void OnProjectileEnteredSodaWater(::GlobalNamespace::SlingshotProjectile* projectile, ::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnProjectileEnteredSodaWater"), {"projectile", "collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, collider);
        }
        void OnWaterBalloonHitPlayer(::GlobalNamespace::NetPlayer* hitPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnWaterBalloonHitPlayer"), {"hitPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitPlayer);
        }
        void PlayerEnteredGameArea(int pId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerEnteredGameArea"), {"pId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pId);
        }
        void PlayerExitedGameArea(int playerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerExitedGameArea"), {"playerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerId);
        }
        void PlayerHitByWaterBalloon(int playerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerHitByWaterBalloon"), {"playerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerId);
        }
        void PlayerHitByWaterBalloonRPC(int playerId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerHitByWaterBalloonRPC"), {"playerId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerId, info);
        }
        bool PlayerInGame(::Photon_Realtime::Player* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PlayerInGame"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        void PlayerTouchedLava(int playerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerTouchedLava"), {"playerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerId);
        }
        void PlayerTouchedLavaRPC(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerTouchedLavaRPC"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void PlayerTouchedRefreshWater(int playerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerTouchedRefreshWater"), {"playerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerId);
        }
        void PlayerTouchedRefreshWaterRPC(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerTouchedRefreshWaterRPC"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void RandomizeRings() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RandomizeRings"));
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
        void RefreshWinnerName() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshWinnerName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetGame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetGame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RestartGame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestartGame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* RotateRingsCoroutine() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("RotateRingsCoroutine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP1 = void*>
        void RPC_PlayerHitByWaterBalloon(int playerId, TP1 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_PlayerHitByWaterBalloon"), {"playerId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerId, info);
        }
        static void RPC_PlayerHitByWaterBalloon$Invoker(::BNM::IL2CPP::Il2CppObject* behaviour, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_PlayerHitByWaterBalloon@Invoker"), {"behaviour", "message"});
            _m.Call(behaviour, message);
        }
        template <typename TP0 = void*>
        void RPC_PlayerTouchedLava(TP0 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_PlayerTouchedLava"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        static void RPC_PlayerTouchedLava$Invoker(::BNM::IL2CPP::Il2CppObject* behaviour, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_PlayerTouchedLava@Invoker"), {"behaviour", "message"});
            _m.Call(behaviour, message);
        }
        template <typename TP0 = void*>
        void RPC_PlayerTouchedRefreshWater(TP0 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_PlayerTouchedRefreshWater"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        static void RPC_PlayerTouchedRefreshWater$Invoker(::BNM::IL2CPP::Il2CppObject* behaviour, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_PlayerTouchedRefreshWater@Invoker"), {"behaviour", "message"});
            _m.Call(behaviour, message);
        }
        template <typename TP1 = void*>
        void RPC_ValidateLocalPlayerWaterBalloonHit(int playerId, TP1 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_ValidateLocalPlayerWaterBalloonHit"), {"playerId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerId, info);
        }
        static void RPC_ValidateLocalPlayerWaterBalloonHit$Invoker(::BNM::IL2CPP::Il2CppObject* behaviour, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_ValidateLocalPlayerWaterBalloonHit@Invoker"), {"behaviour", "message"});
            _m.Call(behaviour, message);
        }
        void set_Data(::GorillaTag::ScienceExperimentManager_ScienceManagerData value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Data"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void UpdateDrainBlocker(double currentTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDrainBlocker"), {"currentTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentTime);
        }
        void UpdateEffects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateEffects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateLiquid(float fillProgress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateLiquid"), {"fillProgress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fillProgress);
        }
        void UpdateLocalState(double currentTime, ::GorillaTag::ScienceExperimentManager_SyncData syncData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateLocalState"), {"currentTime", "syncData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentTime, syncData);
        }
        void UpdateRefreshWater() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRefreshWater"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateReliableState(double currentTime, ::GorillaTag::ScienceExperimentManager_SyncData& syncData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateReliableState"), {"currentTime", "syncData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentTime, &syncData);
        }
        void UpdateRotatingRings(float rotationProgress) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRotatingRings"), {"rotationProgress"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rotationProgress);
        }
        void UpdateWinner() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateWinner"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ValidateLocalPlayerWaterBalloonHit(int playerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateLocalPlayerWaterBalloonHit"), {"playerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerId);
        }
        void ValidateLocalPlayerWaterBalloonHitRPC(int playerId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateLocalPlayerWaterBalloonHitRPC"), {"playerId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerId, info);
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
