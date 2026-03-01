#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRSeedExtractor_PlayerData.hpp"
#include "GRSeedExtractor_ScreenDisplayData.hpp"
#include "GRSeedExtractor_SeedProcessingVisualState.hpp"
#include "GTZone.hpp"

namespace GlobalNamespace {
    struct GRSeedExtractor : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRSeedExtractor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCurrentPlayerActorNumber() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CurrentPlayerActorNumber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetStationOpen() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_StationOpen"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetStationOpenForLocalPlayer() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_StationOpenForLocalPlayer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GameObject* GetChaosSeedVisualPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("chaosSeedVisualPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetChaosSeedVisuals() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("chaosSeedVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TriggerEventNotifier* GetCoreDepositTriggerNotifier() {
            static BNM::Field<::GlobalNamespace::TriggerEventNotifier*> _field = GetClass().GetField(O("coreDepositTriggerNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRSeedExtractor_ScreenDisplayData GetCurrentDisplayData() {
            static BNM::Field<::GlobalNamespace::GRSeedExtractor_ScreenDisplayData> _field = GetClass().GetField(O("currentDisplayData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentPlayerActorNumber_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentPlayerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRSeedExtractor_PlayerData GetCurrentPlayerData() {
            static BNM::Field<::GlobalNamespace::GRSeedExtractor_PlayerData> _field = GetClass().GetField(O("currentPlayerData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDebugSeedCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("debugSeedCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDebugSeedProcessingTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("debugSeedProcessingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetDefaultButtonMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultButtonMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetDepositorAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("depositorAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetDepositorParticles() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("depositorParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetDisableDuringOverdrive() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("disableDuringOverdrive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetDoorAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("doorAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDoorCloseAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("doorCloseAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDoorCloseVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("doorCloseVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDoorOpenAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("doorOpenAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDoorOpenVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("doorOpenVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDrainingProcessingBeaker() {
            static BNM::Field<bool> _field = GetClass().GetField(O("drainingProcessingBeaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetEnableDuringOverdrive() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("enableDuringOverdrive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEstimatedJuiceTimeRemaining() {
            static BNM::Field<float> _field = GetClass().GetField(O("estimatedJuiceTimeRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactor* GetGhostReactor() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("ghostReactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetGreenButtonMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("greenButtonMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::IDCardScanner* GetIdCardScanner() {
            static BNM::Field<::GlobalNamespace::IDCardScanner*> _field = GetClass().GetField(O("idCardScanner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetJuiceDepositTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("juiceDepositTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetJuicerAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("juicerAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetJuicerOverdriveParticles() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("juicerOverdriveParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetJuicerSlowParticles() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("juicerSlowParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastServerRequestTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastServerRequestTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRSeedExtractor_PlayerData GetLocalPlayerData() {
            static BNM::Field<::GlobalNamespace::GRSeedExtractor_PlayerData> _field = GetClass().GetField(O("localPlayerData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetMachineHumAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("machineHumAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMAXOVERDRIVEUSES() {
            static BNM::Field<int> _field = GetClass().GetField(O("MAX_OVERDRIVE_USES"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxVisualChaosSeedCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxVisualChaosSeedCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOverdriveActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("overdriveActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOverdriveAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOverdriveAmountVisual() {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveAmountVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetOverdriveBeepAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("overdriveBeepAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetOverdriveBeepingAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("overdriveBeepingAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOverdriveBeepingVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveBeepingVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetOverdriveConfirmButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("overdriveConfirmButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetOverdriveEngineAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("overdriveEngineAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOverdriveEngineVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveEngineVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetOverdriveFillAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("overdriveFillAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOverdriveFillTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveFillTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOverdriveFillVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveFillVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetOverdriveLightSpinnerOff() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("overdriveLightSpinnerOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetOverdriveLightSpinnerOn() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("overdriveLightSpinnerOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOverdriveLightSpinRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveLightSpinRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetOverdriveLiquidScaleParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("overdriveLiquidScaleParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetOverdriveMeterAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("overdriveMeterAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOverdriveProcessTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveProcessTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOverdrivePurchaseAnimationRoutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("overdrivePurchaseAnimationRoutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetOverdrivePurchaseButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("overdrivePurchaseButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOverdrivePurchasePending() {
            static BNM::Field<bool> _field = GetClass().GetField(O("overdrivePurchasePending"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOverdrivePurchaseTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("overdrivePurchaseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOverdriveServerConfirmationPending() {
            static BNM::Field<bool> _field = GetClass().GetField(O("overdriveServerConfirmationPending"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPROCESSINGTIMESECONDS() {
            static BNM::Field<float> _field = GetClass().GetField(O("PROCESSING_TIME_SECONDS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProcessingAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("processingAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProcessingAmountVisual() {
            static BNM::Field<float> _field = GetClass().GetField(O("processingAmountVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetProcessingHumAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("processingHumAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProcessingHumVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("processingHumVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProcessingLiquidFollowRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("processingLiquidFollowRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetProcessingLiquidScaleParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("processingLiquidScaleParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetRedButtonMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("redButtonMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetScreenText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("screenText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetSeedDepositAttemptAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("seedDepositAttemptAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSeedDepositAttemptVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("seedDepositAttemptVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetSeedDepositAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("seedDepositAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetSeedDepositFailedAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("seedDepositFailedAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSeedDepositFailedVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("seedDepositFailedVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetSeedDepositsPending() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("seedDepositsPending"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSeedDepositVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("seedDepositVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetSeedDropAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("seedDropAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSeedDropVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("seedDropVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetSeedJuicingAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("seedJuicingAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSeedJuicingVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("seedJuicingVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetSeedMovementAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("seedMovementAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSeedMovementVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("seedMovementVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSeedProcessingPosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("seedProcessingPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState>* GetSeedProcessingStates() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState>*> _field = GetClass().GetField(O("seedProcessingStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetSeedTubeAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("seedTubeAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSeedTubeEnd() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("seedTubeEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSeedTubeStart() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("seedTubeStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSeedVisualDropTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("seedVisualDropTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSeedVisualRollTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("seedVisualRollTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetSeedVisualScaleRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("seedVisualScaleRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShutterDoorAnimTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("shutterDoorAnimTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetShutterDoorLiftRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("shutterDoorLiftRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShutterDoorOpenAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("shutterDoorOpenAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetShutterDoorParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("shutterDoorParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStationOpen_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("stationOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStationOpenRequestTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("stationOpenRequestTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeBetweenServerRequests() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeBetweenServerRequests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolProgressionManager* GetToolProgressionManager() {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager*> _field = GetClass().GetField(O("toolProgressionManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TriggerEventNotifier* GetTriggerNotifier() {
            static BNM::Field<::GlobalNamespace::TriggerEventNotifier*> _field = GetClass().GetField(O("triggerNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTubeEndToProcessingPathX() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("tubeEndToProcessingPathX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTubeEndToProcessingPathY() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("tubeEndToProcessingPathY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetUpdateScreenSB() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("UpdateScreenSB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVisualChaosSeedRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("visualChaosSeedRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetZone() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetChaosSeedVisualPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("chaosSeedVisualPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChaosSeedVisuals(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("chaosSeedVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoreDepositTriggerNotifier(::GlobalNamespace::TriggerEventNotifier* value) {
            static BNM::Field<::GlobalNamespace::TriggerEventNotifier*> _field = GetClass().GetField(O("coreDepositTriggerNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentDisplayData(::GlobalNamespace::GRSeedExtractor_ScreenDisplayData value) {
            static BNM::Field<::GlobalNamespace::GRSeedExtractor_ScreenDisplayData> _field = GetClass().GetField(O("currentDisplayData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentPlayerActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentPlayerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentPlayerData(::GlobalNamespace::GRSeedExtractor_PlayerData value) {
            static BNM::Field<::GlobalNamespace::GRSeedExtractor_PlayerData> _field = GetClass().GetField(O("currentPlayerData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugSeedCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("debugSeedCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugSeedProcessingTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("debugSeedProcessingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultButtonMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultButtonMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepositorAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("depositorAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepositorParticles(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("depositorParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableDuringOverdrive(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("disableDuringOverdrive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("doorAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorCloseAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("doorCloseAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorCloseVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("doorCloseVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorOpenAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("doorOpenAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorOpenVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("doorOpenVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrainingProcessingBeaker(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("drainingProcessingBeaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableDuringOverdrive(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("enableDuringOverdrive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEstimatedJuiceTimeRemaining(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("estimatedJuiceTimeRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGhostReactor(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("ghostReactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGreenButtonMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("greenButtonMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdCardScanner(::GlobalNamespace::IDCardScanner* value) {
            static BNM::Field<::GlobalNamespace::IDCardScanner*> _field = GetClass().GetField(O("idCardScanner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJuiceDepositTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("juiceDepositTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJuicerAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("juicerAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJuicerOverdriveParticles(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("juicerOverdriveParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJuicerSlowParticles(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("juicerSlowParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastServerRequestTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastServerRequestTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPlayerData(::GlobalNamespace::GRSeedExtractor_PlayerData value) {
            static BNM::Field<::GlobalNamespace::GRSeedExtractor_PlayerData> _field = GetClass().GetField(O("localPlayerData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMachineHumAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("machineHumAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMAXOVERDRIVEUSES(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MAX_OVERDRIVE_USES"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxVisualChaosSeedCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxVisualChaosSeedCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("overdriveActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveAmountVisual(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveAmountVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveBeepAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("overdriveBeepAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveBeepingAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("overdriveBeepingAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveBeepingVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveBeepingVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveConfirmButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("overdriveConfirmButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveEngineAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("overdriveEngineAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveEngineVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveEngineVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveFillAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("overdriveFillAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveFillTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveFillTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveFillVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveFillVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveLightSpinnerOff(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("overdriveLightSpinnerOff"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveLightSpinnerOn(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("overdriveLightSpinnerOn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveLightSpinRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveLightSpinRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveLiquidScaleParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("overdriveLiquidScaleParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveMeterAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("overdriveMeterAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveProcessTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveProcessTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdrivePurchaseAnimationRoutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("overdrivePurchaseAnimationRoutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdrivePurchaseButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("overdrivePurchaseButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdrivePurchasePending(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("overdrivePurchasePending"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdrivePurchaseTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("overdrivePurchaseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveServerConfirmationPending(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("overdriveServerConfirmationPending"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPROCESSINGTIMESECONDS(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PROCESSING_TIME_SECONDS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProcessingAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("processingAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProcessingAmountVisual(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("processingAmountVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProcessingHumAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("processingHumAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProcessingHumVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("processingHumVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProcessingLiquidFollowRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("processingLiquidFollowRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProcessingLiquidScaleParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("processingLiquidScaleParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRedButtonMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("redButtonMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("screenText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedDepositAttemptAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("seedDepositAttemptAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedDepositAttemptVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("seedDepositAttemptVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedDepositAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("seedDepositAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedDepositFailedAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("seedDepositFailedAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedDepositFailedVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("seedDepositFailedVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedDepositsPending(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("seedDepositsPending"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedDepositVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("seedDepositVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedDropAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("seedDropAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedDropVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("seedDropVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedJuicingAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("seedJuicingAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedJuicingVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("seedJuicingVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedMovementAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("seedMovementAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedMovementVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("seedMovementVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedProcessingPosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("seedProcessingPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedProcessingStates(::BNM::Structures::Mono::List<::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState>*> _field = GetClass().GetField(O("seedProcessingStates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedTubeAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("seedTubeAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedTubeEnd(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("seedTubeEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedTubeStart(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("seedTubeStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedVisualDropTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("seedVisualDropTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedVisualRollTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("seedVisualRollTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeedVisualScaleRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("seedVisualScaleRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShutterDoorAnimTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shutterDoorAnimTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShutterDoorLiftRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("shutterDoorLiftRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShutterDoorOpenAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shutterDoorOpenAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShutterDoorParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("shutterDoorParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStationOpen(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("stationOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStationOpenRequestTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stationOpenRequestTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeBetweenServerRequests(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeBetweenServerRequests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToolProgressionManager(::GlobalNamespace::GRToolProgressionManager* value) {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager*> _field = GetClass().GetField(O("toolProgressionManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerNotifier(::GlobalNamespace::TriggerEventNotifier* value) {
            static BNM::Field<::GlobalNamespace::TriggerEventNotifier*> _field = GetClass().GetField(O("triggerNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTubeEndToProcessingPathX(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("tubeEndToProcessingPathX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTubeEndToProcessingPathY(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("tubeEndToProcessingPathY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateScreenSB(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("UpdateScreenSB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisualChaosSeedRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("visualChaosSeedRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZone(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyState(int playerActorNumber, int coreCount, int coresProcessedByOverdrive, int researchPoints, float coreProcessingPercentage, float overdriveSupply) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyState"), {"playerActorNumber", "coreCount", "coresProcessedByOverdrive", "researchPoints", "coreProcessingPercentage", "overdriveSupply"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerActorNumber, coreCount, coresProcessedByOverdrive, researchPoints, coreProcessingPercentage, overdriveSupply);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CardSwipeFail() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CardSwipeFail"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CardSwipeSuccess() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CardSwipeSuccess"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearSeedVisuals() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearSeedVisuals"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CloseStation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CloseStation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CompleteSeedVisual() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CompleteSeedVisual"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DepositorTriggerEntered(::GlobalNamespace::TriggerEventNotifier* notifier, ::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DepositorTriggerEntered"), {"notifier", "other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(notifier, other);
        }
        void DepositSeedVisual() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DepositSeedVisual"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_CurrentPlayerActorNumber() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CurrentPlayerActorNumber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_StationOpen() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_StationOpen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_StationOpenForLocalPlayer() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_StationOpenForLocalPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Init(::GlobalNamespace::GRToolProgressionManager* progression, ::GlobalNamespace::GhostReactor* gr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"progression", "gr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(progression, gr);
        }
        bool LocalPlayerCanPurchaseOverdrive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LocalPlayerCanPurchaseOverdrive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void OnPlayerCardSwipe(int playerActorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerCardSwipe"), {"playerActorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerActorNumber);
        }
        void OnPlayerStatusReceived(::GlobalNamespace::ProgressionManager_JuicerStatusResponse* statusResponse) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerStatusReceived"), {"statusResponse"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(statusResponse);
        }
        void OnPurchaseOverdrive(bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPurchaseOverdrive"), {"success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success);
        }
        void OnResearchPointsUpdated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnResearchPointsUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnStateUpdated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStateUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OpenStation(int playerActorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OpenStation"), {"playerActorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerActorNumber);
        }
        ::BNM::Coroutine::IEnumerator* OverdrivePurchaseAnimationVisual(int coresToProcess) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("OverdrivePurchaseAnimationVisual"), {"coresToProcess"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(coresToProcess);
        }
        void OverdrivePurchaseButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OverdrivePurchaseButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OverdrivePurchaseConfirmButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OverdrivePurchaseConfirmButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemovePendingSeedDeposit(int entityId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePendingSeedDeposit"), {"entityId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityId);
        }
        void SeedDepositFailed(int playerActorNumber, int entityNetId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SeedDepositFailed"), {"playerActorNumber", "entityNetId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerActorNumber, entityNetId);
        }
        void SeedDepositSucceeded(int playerActorNumber, int entityNetId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SeedDepositSucceeded"), {"playerActorNumber", "entityNetId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerActorNumber, entityNetId);
        }
        void StepSeedVisualAnimation(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StepSeedVisualAnimation"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void TriggerEntered(::GlobalNamespace::TriggerEventNotifier* notifier, ::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerEntered"), {"notifier", "other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(notifier, other);
        }
        void TriggerExited(::GlobalNamespace::TriggerEventNotifier* notifier, ::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerExited"), {"notifier", "other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(notifier, other);
        }
        void TryDepositSeed(int playerActorNumber, int seedNetId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryDepositSeed"), {"playerActorNumber", "seedNetId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerActorNumber, seedNetId);
        }
        void TryDepositSeedServerResponse(bool succeeded) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryDepositSeedServerResponse"), {"succeeded"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(succeeded);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateOverdrivePurchaseButtons() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateOverdrivePurchaseButtons"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateScreenDisplay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateScreenDisplay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ValidateCurrentPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateCurrentPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ValidateSeedDepositSucceeded(int playerActorNumber, int entityNetId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateSeedDepositSucceeded"), {"playerActorNumber", "entityNetId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerActorNumber, entityNetId);
        }
    };
}
