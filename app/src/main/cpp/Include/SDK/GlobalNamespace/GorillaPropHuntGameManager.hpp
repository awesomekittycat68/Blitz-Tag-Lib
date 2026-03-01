#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaPropHuntGameManager_EPropHuntGameState.hpp"
#include "GorillaTagManager.hpp"
#include "XSceneRef.hpp"
#include "../GorillaGameModes/GameModeType.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GorillaPropHuntGameManager : ::GlobalNamespace::GorillaTagManager {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaPropHuntGameManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "GorillaPropHuntGameManager: ";
        static constexpr const char* preLogEd = "(editor only log) GorillaPropHuntGameManager: ";
        static constexpr const char* preLogBeta = "(beta only log) GorillaPropHuntGameManager: ";
        static constexpr const char* preErr = "ERROR!!!  GorillaPropHuntGameManager: ";
        static constexpr const char* preErrEd = "ERROR!!!  (editor only log) GorillaPropHuntGameManager: ";
        static constexpr const char* preErrBeta = "ERROR!!!  (beta only log) GorillaPropHuntGameManager: ";
        static constexpr bool _k__GT_PROP_HUNT__USE_POOLING__ = true;
        int64_t GetPhTimeRoundStartedMillis() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get__ph_timeRoundStartedMillis"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPhTimeRoundStartedMillis(int64_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set__ph_timeRoundStartedMillis"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetAllPropIDsNoPool() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _method = GetClass().GetMethod(O("get_AllPropIDs_NoPool"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetHandFollowDistance() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_HandFollowDistance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GorillaPropHuntGameManager* GetInstance() {
            static BNM::Method<::GlobalNamespace::GorillaPropHuntGameManager*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GlobalNamespace::GorillaPropHuntGameManager* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsReadyToSpawnPropsNoPool() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsReadyToSpawnProps_NoPool"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::PropPlacementRB* GetPropDecoyPrefab() {
            static BNM::Method<::GlobalNamespace::PropPlacementRB*> _method = GetClass().GetMethod(O("get_PropDecoyPrefab"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetRoundIsPlaying() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_RoundIsPlaying"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int64_t GetPhTimeRoundStartedMillis_f() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("__ph_timeRoundStartedMillis__"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetGPhActivePlayerRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("_g_ph_activePlayerRigs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::PropHuntHandFollower*>* GetGPhAllHandFollowers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::PropHuntHandFollower*>*> _field = GetClass().GetField(O("_g_ph_allHandFollowers"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::PropHuntPropZone*>* GetGPhAllPropZones() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::PropHuntPropZone*>*> _field = GetClass().GetField(O("_g_ph_allPropZones"));
            return _field.Get();
        }
        static int GetGPhDefaultStencilRefOfSkeletonMat() {
            static BNM::Field<int> _field = GetClass().GetField(O("_g_ph_defaultStencilRefOfSkeletonMat"));
            return _field.Get();
        }
        static float GetGPhHapticsLastImpulseEndTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_g_ph_hapticsLastImpulseEndTime"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::PlayableBoundaryTracker*>* GetGPhRigToPropHuntZoneTrackers() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::PlayableBoundaryTracker*>*> _field = GetClass().GetField(O("_g_ph_rig_to_propHuntZoneTrackers"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetGPhTitleDataSeparators() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_g_ph_titleDataSeparators"));
            return _field.Get();
        }
        bool GetIsListeningForXSceneRefLoadCallbacks() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isListeningForXSceneRefLoadCallbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsListeningToPoolsOnReady() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isListeningTo_Pools_OnReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetPhAllPropIDsNoPool() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_ph_allPropIDs_noPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPhBlindfoldForCamera1p() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_ph_blindfold_forCamera_1p"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPhBlindfoldForCamera3p() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_ph_blindfold_forCamera_3p"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPhBlindfoldForCameraIsInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ph_blindfold_forCamera_isInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState GetPhGameState() {
            static BNM::Field<::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState> _field = GetClass().GetField(O("_ph_gameState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState GetPhGameStateLastUpdate() {
            static BNM::Field<::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState> _field = GetClass().GetField(O("_ph_gameState_lastUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPhGorillaGhostBodyMaterialIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ph_gorillaGhostBodyMaterialIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPhHideStateWarnSoundsTimesPlayed() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ph_hideState_warnSounds_timesPlayed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPhIsLocalPlayerParticipating() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ph_isLocalPlayerParticipating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPhIsLocalPlayerSkeleton() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ph_isLocalPlayerSkeleton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PlayableBoundaryManager* GetPhPlayBoundary() {
            static BNM::Field<::GlobalNamespace::PlayableBoundaryManager*> _field = GetClass().GetField(O("_ph_playBoundary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPhPlayBoundaryCurrentTargetPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_ph_playBoundary_currentTargetPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPhPlayBoundaryHasTargetPositionForRound() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ph_playBoundary_hasTargetPositionForRound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPhPlayBoundaryInitialPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_ph_playBoundary_initialPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPhPlayBoundaryInitialPositionIsInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ph_playBoundary_initialPosition_isInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPhPlayBoundaryIsResolved() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ph_playBoundary_isResolved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LightningManager* GetPhPlayStateStartLightningManager() {
            static BNM::Field<::GlobalNamespace::LightningManager*> _field = GetClass().GetField(O("_ph_playState_startLightning_manager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPhPlayStateStartLightningManagerIsResolved() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ph_playState_startLightning_manager_isResolved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPhPlayStateStartLightningStrikeTimesIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ph_playState_startLightning_strikeTimes_index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPhRandomSeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("_ph_randomSeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPhRoundTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_ph_roundTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GameObject*>* GetPhVrRigToBlindfolds() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GameObject*>*> _field = GetClass().GetField(O("_ph_vrRig_to_blindfolds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRoundIsPlaying_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_roundIsPlaying"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_CosmeticSystem::AllCosmeticsArraySO* GetMPhAllCosmetics() {
            static BNM::Field<::GorillaTag_CosmeticSystem::AllCosmeticsArraySO*> _field = GetClass().GetField(O("m_ph_allCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetMPhBlindfoldForAvatarPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("m_ph_blindfold_forAvatarPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetMPhBlindfoldForCameraPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("m_ph_blindfold_forCameraPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_CosmeticSystem::CosmeticSO* GetMPhFallbackPropCosmeticSO() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticSO*> _field = GetClass().GetField(O("m_ph_fallbackPropCosmeticSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetMPhGorillaGhostBodyMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("m_ph_gorillaGhostBodyMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMPhHandFollowDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_ph_hand_follow_distance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMPhHapticsNearBorderAmpCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_ph_hapticsNearBorder_ampCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMPhHapticsNearBorderBaseAmp() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_ph_hapticsNearBorder_baseAmp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMPhHapticsNearBorderBorderProximity() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_ph_hapticsNearBorder_borderProximity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMPhHideStateDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_ph_hideState_duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetMPhHideStateStartSoundBank() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("m_ph_hideState_startSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetMPhHideStateWarnSoundBank() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("m_ph_hideState_warnSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMPhHideStateWarnSoundBankPlayCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_ph_hideState_warnSoundBank_playCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetMPhPlaneCrossingSoundBank() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("m_ph_planeCrossingSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetMPhPlayBoundaryEndPointTransforms() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("m_ph_playBoundary_endPointTransforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMPhPlayBoundaryRadiusScaleOverRoundTimeCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_ph_playBoundary_radiusScaleOverRoundTime_curve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMPhPlayBoundaryRadiusScaleOverRoundTimeMaxTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_ph_playBoundary_radiusScaleOverRoundTime_maxTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMPhPlayBoundaryTimeLimit() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_ph_playBoundary_timeLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::XSceneRef GetMPhPlayBoundaryXSceneRef() {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("m_ph_playBoundary_xSceneRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::XSceneRef GetMPhPlayStateStartLightningManagerRef() {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("m_ph_playState_startLightning_manager_ref"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetMPhPlayStateStartLightningStrikeTimes() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("m_ph_playState_startLightning_strikeTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetMPhPlayStateStartSoundBank() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("m_ph_playState_startSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetMPhPlayStateTaggedSoundBank() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("m_ph_playState_taggedSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PropPlacementRB* GetMPhPropDecoyPrefab() {
            static BNM::Field<::GlobalNamespace::PropPlacementRB*> _field = GetClass().GetField(O("m_ph_propDecoyPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetMPhSoundNearBorderAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("m_ph_soundNearBorder_audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMPhSoundNearBorderBaseVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_ph_soundNearBorder_baseVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMPhSoundNearBorderMaxDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_ph_soundNearBorder_maxDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMPhSoundNearBorderVolumeCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_ph_soundNearBorder_volumeCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPhTimeRoundStartedMillis_fs(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("__ph_timeRoundStartedMillis__"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetGPhDefaultStencilRefOfSkeletonMat(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_g_ph_defaultStencilRefOfSkeletonMat"));
            _field.Set(value);
        }
        static void SetGPhHapticsLastImpulseEndTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_g_ph_hapticsLastImpulseEndTime"));
            _field.Set(value);
        }
        void SetIsListeningForXSceneRefLoadCallbacks(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isListeningForXSceneRefLoadCallbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsListeningToPoolsOnReady(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isListeningTo_Pools_OnReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhAllPropIDsNoPool(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_ph_allPropIDs_noPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhBlindfoldForCamera1p(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_ph_blindfold_forCamera_1p"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhBlindfoldForCamera3p(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_ph_blindfold_forCamera_3p"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhBlindfoldForCameraIsInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ph_blindfold_forCamera_isInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhGameState(::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState value) {
            static BNM::Field<::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState> _field = GetClass().GetField(O("_ph_gameState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhGameStateLastUpdate(::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState value) {
            static BNM::Field<::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState> _field = GetClass().GetField(O("_ph_gameState_lastUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhGorillaGhostBodyMaterialIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ph_gorillaGhostBodyMaterialIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhHideStateWarnSoundsTimesPlayed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ph_hideState_warnSounds_timesPlayed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhIsLocalPlayerParticipating(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ph_isLocalPlayerParticipating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhIsLocalPlayerSkeleton(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ph_isLocalPlayerSkeleton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhPlayBoundary(::GlobalNamespace::PlayableBoundaryManager* value) {
            static BNM::Field<::GlobalNamespace::PlayableBoundaryManager*> _field = GetClass().GetField(O("_ph_playBoundary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhPlayBoundaryCurrentTargetPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_ph_playBoundary_currentTargetPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhPlayBoundaryHasTargetPositionForRound(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ph_playBoundary_hasTargetPositionForRound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhPlayBoundaryInitialPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_ph_playBoundary_initialPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhPlayBoundaryInitialPositionIsInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ph_playBoundary_initialPosition_isInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhPlayBoundaryIsResolved(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ph_playBoundary_isResolved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhPlayStateStartLightningManager(::GlobalNamespace::LightningManager* value) {
            static BNM::Field<::GlobalNamespace::LightningManager*> _field = GetClass().GetField(O("_ph_playState_startLightning_manager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhPlayStateStartLightningManagerIsResolved(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ph_playState_startLightning_manager_isResolved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhPlayStateStartLightningStrikeTimesIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ph_playState_startLightning_strikeTimes_index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhRandomSeed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_ph_randomSeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhRoundTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_ph_roundTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoundIsPlaying(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_roundIsPlaying"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhAllCosmetics(::GorillaTag_CosmeticSystem::AllCosmeticsArraySO* value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::AllCosmeticsArraySO*> _field = GetClass().GetField(O("m_ph_allCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhBlindfoldForAvatarPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("m_ph_blindfold_forAvatarPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhBlindfoldForCameraPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("m_ph_blindfold_forCameraPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhFallbackPropCosmeticSO(::GorillaTag_CosmeticSystem::CosmeticSO* value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticSO*> _field = GetClass().GetField(O("m_ph_fallbackPropCosmeticSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhGorillaGhostBodyMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("m_ph_gorillaGhostBodyMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhHandFollowDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_ph_hand_follow_distance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhHapticsNearBorderAmpCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_ph_hapticsNearBorder_ampCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhHapticsNearBorderBaseAmp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_ph_hapticsNearBorder_baseAmp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhHapticsNearBorderBorderProximity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_ph_hapticsNearBorder_borderProximity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhHideStateDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_ph_hideState_duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhHideStateStartSoundBank(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("m_ph_hideState_startSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhHideStateWarnSoundBank(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("m_ph_hideState_warnSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhHideStateWarnSoundBankPlayCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_ph_hideState_warnSoundBank_playCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhPlaneCrossingSoundBank(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("m_ph_planeCrossingSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhPlayBoundaryEndPointTransforms(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("m_ph_playBoundary_endPointTransforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhPlayBoundaryRadiusScaleOverRoundTimeCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_ph_playBoundary_radiusScaleOverRoundTime_curve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhPlayBoundaryRadiusScaleOverRoundTimeMaxTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_ph_playBoundary_radiusScaleOverRoundTime_maxTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhPlayBoundaryTimeLimit(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_ph_playBoundary_timeLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhPlayBoundaryXSceneRef(::GlobalNamespace::XSceneRef value) {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("m_ph_playBoundary_xSceneRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhPlayStateStartLightningManagerRef(::GlobalNamespace::XSceneRef value) {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("m_ph_playState_startLightning_manager_ref"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhPlayStateStartLightningStrikeTimes(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("m_ph_playState_startLightning_strikeTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhPlayStateStartSoundBank(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("m_ph_playState_startSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhPlayStateTaggedSoundBank(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("m_ph_playState_taggedSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhPropDecoyPrefab(::GlobalNamespace::PropPlacementRB* value) {
            static BNM::Field<::GlobalNamespace::PropPlacementRB*> _field = GetClass().GetField(O("m_ph_propDecoyPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhSoundNearBorderAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("m_ph_soundNearBorder_audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhSoundNearBorderBaseVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_ph_soundNearBorder_baseVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhSoundNearBorderMaxDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_ph_soundNearBorder_maxDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPhSoundNearBorderVolumeCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_ph_soundNearBorder_volumeCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool _GetRigShouldBeSkeleton(::GlobalNamespace::VRRig* rig, ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* participatingPlayers) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_GetRigShouldBeSkeleton"), {"rig", "participatingPlayers"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rig, participatingPlayers);
        }
        void _Initialize_defaultStencilRefOfSkeletonMat() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_Initialize_defaultStencilRefOfSkeletonMat"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _Initialize_gorillaGhostBodyMaterialIndex() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_Initialize_gorillaGhostBodyMaterialIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _InitializeBlindfoldForCamera() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_InitializeBlindfoldForCamera"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _OnParticipatingPlayersChanged(::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* addedPlayers, ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* removedPlayers) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_OnParticipatingPlayersChanged"), {"addedPlayers", "removedPlayers"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(addedPlayers, removedPlayers);
        }
        void _OnXSceneRefLoaded_LightningManager() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_OnXSceneRefLoaded_LightningManager"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _OnXSceneRefLoaded_PlayBoundary() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_OnXSceneRefLoaded_PlayBoundary"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _OnXSceneRefUnloaded_LightningManager() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_OnXSceneRefUnloaded_LightningManager"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _OnXSceneRefUnloaded_PlayBoundary() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_OnXSceneRefUnloaded_PlayBoundary"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _PH_OnRoundStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_PH_OnRoundStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _Pools_OnReady() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_Pools_OnReady"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _ProcessPropsList_NoPool(::BNM::Structures::Mono::String* titleDataPropsLines) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_ProcessPropsList_NoPool"), {"titleDataPropsLines"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(titleDataPropsLines);
        }
        void _ResetRigAppearance(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_ResetRigAppearance"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        void _ResolveXSceneRefs() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_ResolveXSceneRefs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _SetPlayerBlindfoldVisibility(::GlobalNamespace::NetPlayer* netPlayer, bool shouldEnable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_SetPlayerBlindfoldVisibility"), {"netPlayer", "shouldEnable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netPlayer, shouldEnable);
        }
        void _SetPlayerBlindfoldVisibility(::GlobalNamespace::VRRig* vrRig, ::GlobalNamespace::NetPlayer* netPlayer, bool shouldEnable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_SetPlayerBlindfoldVisibility"), {"vrRig", "netPlayer", "shouldEnable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(vrRig, netPlayer, shouldEnable);
        }
        bool _ShouldRigBeVisible(::GlobalNamespace::VRRig* rig, bool shouldBeSkeleton, float signedDistToBoundary) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_ShouldRigBeVisible"), {"rig", "shouldBeSkeleton", "signedDistToBoundary"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rig, shouldBeSkeleton, signedDistToBoundary);
        }
        float _UpdateBoundaryProximityState(::GlobalNamespace::VRRig* rig, bool isSkeleton) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("_UpdateBoundaryProximityState"), {"rig", "isSkeleton"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rig, isSkeleton);
        }
        void _UpdateControllerHaptics(float signedDistToBoundary) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_UpdateControllerHaptics"), {"signedDistToBoundary"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(signedDistToBoundary);
        }
        void _UpdateGameState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_UpdateGameState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _UpdateParticipatingPlayers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_UpdateParticipatingPlayers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AddInfectedPlayer(::GlobalNamespace::NetPlayer* infectedPlayer, bool withTagStop) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddInfectedPlayer"), {"infectedPlayer", "withTagStop"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(infectedPlayer, withTagStop);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanPlayerParticipate(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanPlayerParticipate"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        ::BNM::Structures::Mono::String* GameModeName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GameModeName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GameModeNameRoomLabel() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GameModeNameRoomLabel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaGameModes::GameModeType GameType() {
            static BNM::Method<::GorillaGameModes::GameModeType> _m = GetClass().GetMethod(O("GameType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t get__ph_timeRoundStartedMillis() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get__ph_timeRoundStartedMillis"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* get_AllPropIDs_NoPool() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("get_AllPropIDs_NoPool"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_HandFollowDistance() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_HandFollowDistance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::GorillaPropHuntGameManager* get_instance() {
            static BNM::Method<::GlobalNamespace::GorillaPropHuntGameManager*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
        bool get_IsReadyToSpawnProps_NoPool() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsReadyToSpawnProps_NoPool"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::PropPlacementRB* get_PropDecoyPrefab() {
            static BNM::Method<::GlobalNamespace::PropPlacementRB*> _m = GetClass().GetMethod(O("get_PropDecoyPrefab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_RoundIsPlaying() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_RoundIsPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetCosmeticId(uint32_t randomUInt) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetCosmeticId"), {"randomUInt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(randomUInt);
        }
        int GetSeed() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetSeed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InfectionRoundEnd() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InfectionRoundEnd"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InfectionRoundEndCheck() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InfectionRoundEndCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InfectionRoundStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InfectionRoundStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InfectionRoundStartCheck() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InfectionRoundStartCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool LocalCanTag(::GlobalNamespace::NetPlayer* myPlayer, ::GlobalNamespace::NetPlayer* otherPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LocalCanTag"), {"myPlayer", "otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(myPlayer, otherPlayer);
        }
        bool LocalIsTagged(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LocalIsTagged"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        int MyMatIndex(::GlobalNamespace::NetPlayer* forPlayer) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("MyMatIndex"), {"forPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(forPlayer);
        }
        void NewVRRig(::GlobalNamespace::NetPlayer* player, int vrrigPhotonViewID, bool didTutorial) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NewVRRig"), {"player", "vrrigPhotonViewID", "didTutorial"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, vrrigPhotonViewID, didTutorial);
        }
        void OnSerializeRead(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSerializeRead"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void OnSerializeWrite(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSerializeWrite"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void PH_OnRoundEnd() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PH_OnRoundEnd"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PH_OnRoundStartRPC(int64_t timeRoundStartedMillis, int seed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PH_OnRoundStartRPC"), {"timeRoundStartedMillis", "seed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(timeRoundStartedMillis, seed);
        }
        static void RegisterPropHandFollower(::GlobalNamespace::PropHuntHandFollower* hand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterPropHandFollower"), {"hand"});
            _m.Call(hand);
        }
        static void RegisterPropZone(::GlobalNamespace::PropHuntPropZone* propZone) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterPropZone"), {"propZone"});
            _m.Call(propZone);
        }
        void set__ph_timeRoundStartedMillis(int64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set__ph_timeRoundStartedMillis"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void set_instance(::GlobalNamespace::GorillaPropHuntGameManager* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_instance"), {"value"});
            _m.Call(value);
        }
        void SpawnProps() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnProps"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartPlaying() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopPlaying() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void UnregisterPropHandFollower(::GlobalNamespace::PropHuntHandFollower* hand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterPropHandFollower"), {"hand"});
            _m.Call(hand);
        }
        static void UnregisterPropZone(::GlobalNamespace::PropHuntPropZone* propZone) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterPropZone"), {"propZone"});
            _m.Call(propZone);
        }
        void UpdatePlayerAppearance(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayerAppearance"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
    };
}
