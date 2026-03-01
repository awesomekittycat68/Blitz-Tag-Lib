#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/NetworkComponent.hpp"
#include "../GlobalNamespace/PhotonMessageInfoWrapped.hpp"
#include "WhackAMole_GameResult.hpp"
#include "WhackAMole_GameState.hpp"
#include "WhackAMole_WhackAMoleData.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GorillaTagScripts {
    struct WhackAMole : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "WhackAMole");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTagScripts::WhackAMole_WhackAMoleData GetData() {
            static BNM::Method<::GorillaTagScripts::WhackAMole_WhackAMoleData> _method = GetClass().GetMethod(O("get_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetData(::GorillaTagScripts::WhackAMole_WhackAMoleData value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaTagScripts::WhackAMole_WhackAMoleData GetData_f() {
            static BNM::Field<::GorillaTagScripts::WhackAMole_WhackAMoleData> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTagScripts::WhackAMoleLevelSO*>* GetAllLevels() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTagScripts::WhackAMoleLevelSO*>*> _field = GetClass().GetField(O("allLevels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetArrowRotationNeedsUpdate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("arrowRotationNeedsUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetArrowTargetRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("arrowTargetRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetBackgroundLoop() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("backgroundLoop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBestScore() {
            static BNM::Field<int> _field = GetClass().GetField(O("bestScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetBestScoreText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("bestScoreText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBetweenLevelPauseDuration() {
            static BNM::Field<int> _field = GetClass().GetField(O("betweenLevelPauseDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetContinuePressedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("continuePressedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetContinuePressedUI() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ContinuePressedUI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCountdownDuration() {
            static BNM::Field<int> _field = GetClass().GetField(O("countdownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetCounterClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("counterClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetCounterText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("counterText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::WhackAMole_GameResult GetCurentGameResult() {
            static BNM::Field<::GorillaTagScripts::WhackAMole_GameResult> _field = GetClass().GetField(O("curentGameResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurentTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("curentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::WhackAMoleLevelSO* GetCurrentLevel() {
            static BNM::Field<::GorillaTagScripts::WhackAMoleLevelSO*> _field = GetClass().GetField(O("currentLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentLevelIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentLevelIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentScore() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::WhackAMole_GameState GetCurrentState() {
            static BNM::Field<::GorillaTagScripts::WhackAMole_GameState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetEpoch() {
            static BNM::Field<void*> _field = GetClass().GetField(O("epoch"));
            return _field.Get();
        }
        ::AudioClip* GetErrorClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("errorClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGameEndedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("gameEndedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGameId() {
            static BNM::Field<int> _field = GetClass().GetField(O("gameId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetGameOverClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("gameOverClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetHighScorePlayerName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("highScorePlayerName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsMultiplayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMultiplayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetLastAssignedID() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastAssignedID"));
            return _field.Get();
        }
        ::GorillaTagScripts::WhackAMole_GameState GetLastState() {
            static BNM::Field<::GorillaTagScripts::WhackAMole_GameState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::Mole*>* GetLeftMolesList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::Mole*>*> _field = GetClass().GetField(O("leftMolesList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLeftPlayerScore() {
            static BNM::Field<int> _field = GetClass().GetField(O("leftPlayerScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetLeftPlayerScoreText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("leftPlayerScoreText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetLevelArrow() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("levelArrow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetLevelCompleteClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("levelCompleteClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetLevelEndedCountdownText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("levelEndedCountdownText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetLevelEndedCurrentScoreText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("levelEndedCurrentScoreText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetLevelEndedOptionsText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("levelEndedOptionsText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetLevelEndedTotalScoreText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("levelEndedTotalScoreText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetLevelEndedUI() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("levelEndedUI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLevelGoodMolesPicked() {
            static BNM::Field<int> _field = GetClass().GetField(O("levelGoodMolesPicked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLevelHazardMolesHit() {
            static BNM::Field<int> _field = GetClass().GetField(O("levelHazardMolesHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLevelHazardMolesPicked() {
            static BNM::Field<int> _field = GetClass().GetField(O("levelHazardMolesPicked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMachineId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("machineId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetMolesContainerLeft() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("molesContainerLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetMolesContainerRight() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("molesContainerRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::Mole*>* GetMolesList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::Mole*>*> _field = GetClass().GetField(O("molesList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetMultiplyareScoresUI() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("multiplyareScoresUI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetOngoingGameUI() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ongoingGameUI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, int>* GetPickedMolesIndex() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("pickedMolesIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPlayerId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPlayerName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playerName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::Mole*>* GetPotentialMoles() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::Mole*>*> _field = GetClass().GetField(O("potentialMoles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPreviousTime() {
            static BNM::Field<int> _field = GetClass().GetField(O("previousTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRemainingTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("remainingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetResetToFirstLevel() {
            static BNM::Field<bool> _field = GetClass().GetField(O("resetToFirstLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetResultText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("resultText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::Mole*>* GetRightMolesList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::Mole*>*> _field = GetClass().GetField(O("rightMolesList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRightPlayerScore() {
            static BNM::Field<int> _field = GetClass().GetField(O("rightPlayerScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetRightPlayerScoreText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("rightPlayerScoreText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetScoreText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("scoreText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::GorillaTimer* GetTimer() {
            static BNM::Field<::GorillaTagScripts::GorillaTimer*> _field = GetClass().GetField(O("timer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetTimeText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("timeText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalScore() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetVictoryFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("victoryFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::ParticleSystem*>* GetVictoryParticles() {
            static BNM::Field<::BNM::Structures::Mono::Array<::ParticleSystem*>*> _field = GetClass().GetField(O("victoryParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasLocalPlayerInZone() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasLocalPlayerInZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasMasterClient() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasMasterClient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetWelcomeUI() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("welcomeUI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetWhackHazardClips() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("whackHazardClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetWhackMonkeClips() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("whackMonkeClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetWinClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("winClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::MeshRenderer*>* GetZoneBasedMeshRenderers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::MeshRenderer*>*> _field = GetClass().GetField(O("zoneBasedMeshRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneBasedObject*>* GetZoneBasedVisuals() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneBasedObject*>*> _field = GetClass().GetField(O("zoneBasedVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData_fs(::GorillaTagScripts::WhackAMole_WhackAMoleData value) {
            static BNM::Field<::GorillaTagScripts::WhackAMole_WhackAMoleData> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllLevels(::BNM::Structures::Mono::Array<::GorillaTagScripts::WhackAMoleLevelSO*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTagScripts::WhackAMoleLevelSO*>*> _field = GetClass().GetField(O("allLevels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetArrowRotationNeedsUpdate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("arrowRotationNeedsUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetArrowTargetRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("arrowTargetRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBackgroundLoop(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("backgroundLoop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBestScore(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bestScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBestScoreText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("bestScoreText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBetweenLevelPauseDuration(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("betweenLevelPauseDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetContinuePressedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("continuePressedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetContinuePressedUI(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ContinuePressedUI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCountdownDuration(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("countdownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCounterClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("counterClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCounterText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("counterText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurentGameResult(::GorillaTagScripts::WhackAMole_GameResult value) {
            static BNM::Field<::GorillaTagScripts::WhackAMole_GameResult> _field = GetClass().GetField(O("curentGameResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurentTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("curentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentLevel(::GorillaTagScripts::WhackAMoleLevelSO* value) {
            static BNM::Field<::GorillaTagScripts::WhackAMoleLevelSO*> _field = GetClass().GetField(O("currentLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentLevelIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentLevelIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentScore(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GorillaTagScripts::WhackAMole_GameState value) {
            static BNM::Field<::GorillaTagScripts::WhackAMole_GameState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetEpoch(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("epoch"));
            _field.Set(value);
        }
        void SetErrorClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("errorClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEndedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gameEndedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("gameId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameOverClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("gameOverClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHighScorePlayerName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("highScorePlayerName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsMultiplayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMultiplayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLastAssignedID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastAssignedID"));
            _field.Set(value);
        }
        void SetLastState(::GorillaTagScripts::WhackAMole_GameState value) {
            static BNM::Field<::GorillaTagScripts::WhackAMole_GameState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftMolesList(::BNM::Structures::Mono::List<::GorillaTagScripts::Mole*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::Mole*>*> _field = GetClass().GetField(O("leftMolesList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftPlayerScore(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("leftPlayerScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftPlayerScoreText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("leftPlayerScoreText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelArrow(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("levelArrow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelCompleteClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("levelCompleteClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelEndedCountdownText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("levelEndedCountdownText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelEndedCurrentScoreText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("levelEndedCurrentScoreText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelEndedOptionsText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("levelEndedOptionsText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelEndedTotalScoreText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("levelEndedTotalScoreText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelEndedUI(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("levelEndedUI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelGoodMolesPicked(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("levelGoodMolesPicked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelHazardMolesHit(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("levelHazardMolesHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelHazardMolesPicked(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("levelHazardMolesPicked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMachineId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("machineId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMolesContainerLeft(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("molesContainerLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMolesContainerRight(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("molesContainerRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMolesList(::BNM::Structures::Mono::List<::GorillaTagScripts::Mole*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::Mole*>*> _field = GetClass().GetField(O("molesList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMultiplyareScoresUI(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("multiplyareScoresUI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOngoingGameUI(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ongoingGameUI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPickedMolesIndex(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("pickedMolesIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playerName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPotentialMoles(::BNM::Structures::Mono::List<::GorillaTagScripts::Mole*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::Mole*>*> _field = GetClass().GetField(O("potentialMoles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousTime(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("previousTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemainingTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("remainingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResetToFirstLevel(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("resetToFirstLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResultText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("resultText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightMolesList(::BNM::Structures::Mono::List<::GorillaTagScripts::Mole*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::Mole*>*> _field = GetClass().GetField(O("rightMolesList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightPlayerScore(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("rightPlayerScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightPlayerScoreText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("rightPlayerScoreText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("scoreText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimer(::GorillaTagScripts::GorillaTimer* value) {
            static BNM::Field<::GorillaTagScripts::GorillaTimer*> _field = GetClass().GetField(O("timer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("timeText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalScore(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVictoryFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("victoryFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVictoryParticles(::BNM::Structures::Mono::Array<::ParticleSystem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::ParticleSystem*>*> _field = GetClass().GetField(O("victoryParticles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasLocalPlayerInZone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasLocalPlayerInZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasMasterClient(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasMasterClient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWelcomeUI(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("welcomeUI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhackHazardClips(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("whackHazardClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhackMonkeClips(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("whackMonkeClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWinClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("winClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneBasedMeshRenderers(::BNM::Structures::Mono::Array<::MeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::MeshRenderer*>*> _field = GetClass().GetField(O("zoneBasedMeshRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneBasedVisuals(::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneBasedObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneBasedObject*>*> _field = GetClass().GetField(O("zoneBasedVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
        static int CreateNewGameID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CreateNewGameID"));
            return _m.Call();
        }
        ::GorillaTagScripts::WhackAMole_WhackAMoleData get_Data() {
            static BNM::Method<::GorillaTagScripts::WhackAMole_WhackAMoleData> _m = GetClass().GetMethod(O("get_Data"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetCurrentLevel_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetCurrentLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTagScripts::WhackAMole_GameResult GetGameResult() {
            static BNM::Method<::GorillaTagScripts::WhackAMole_GameResult> _m = GetClass().GetMethod(O("GetGameResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetTotalLevelNumbers() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetTotalLevelNumbers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandleOnTimerStopped() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnTimerStopped"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InvokeUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LoadNextLevel() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadNextLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnMoleTapped(::GorillaTagScripts::MoleTypes* moleType, ::BNM::Structures::Unity::Vector3 position, bool isLocalTap, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMoleTapped"), {"moleType", "position", "isLocalTap", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(moleType, position, isLocalTap, isLeftHand);
        }
        void OnOwnerSwitched(::GlobalNamespace::NetPlayer* newOwningPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOwnerSwitched"), {"newOwningPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newOwningPlayer);
        }
        void OnStartButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStartButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool PickMoles() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PickMoles"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool PickSingleMole(int randomMoleIndex, float hazardMoleChance) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PickSingleMole"), {"randomMoleIndex", "hazardMoleChance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(randomMoleIndex, hazardMoleChance);
        }
        ::BNM::Coroutine::IEnumerator* PlayHazardAudio(::AudioClip* clip) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("PlayHazardAudio"), {"clip"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(clip);
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
        void ReadDataShared(::GorillaTagScripts::WhackAMole_GameState _currentState, int _currentLevelIndex, int cScore, int tScore, int bScore, int rPScore, ::BNM::Structures::Mono::String* hScorePName, float _remainingTime, float endedTime, int _gameId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataShared"), {"_currentState", "_currentLevelIndex", "cScore", "tScore", "bScore", "rPScore", "hScorePName", "_remainingTime", "endedTime", "_gameId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_currentState, _currentLevelIndex, cScore, tScore, bScore, rPScore, hScorePName, _remainingTime, endedTime, _gameId);
        }
        void ResetGame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetGame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void RPC_WhackAMoleButtonPressed(TP0 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_WhackAMoleButtonPressed"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        static void RPC_WhackAMoleButtonPressed$Invoker(::BNM::IL2CPP::Il2CppObject* behaviour, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_WhackAMoleButtonPressed@Invoker"), {"behaviour", "message"});
            _m.Call(behaviour, message);
        }
        void set_Data(::GorillaTagScripts::WhackAMole_WhackAMoleData value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Data"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SwitchState(::GorillaTagScripts::WhackAMole_GameState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwitchState"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void UpdateArrowRotation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateArrowRotation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateLevelUI(int levelNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateLevelUI"), {"levelNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(levelNumber);
        }
        void UpdateMeshRendererList() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateMeshRendererList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateResultUI(::GorillaTagScripts::WhackAMole_GameResult gameResult) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateResultUI"), {"gameResult"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameResult);
        }
        void UpdateScoreUI(int totalScore, int _leftPlayerScore, int _rightPlayerScore) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateScoreUI"), {"totalScore", "_leftPlayerScore", "_rightPlayerScore"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(totalScore, _leftPlayerScore, _rightPlayerScore);
        }
        void UpdateScreenData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateScreenData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateTimerUI(int time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTimerUI"), {"time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(time);
        }
        void WhackAMoleButtonPressed(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WhackAMoleButtonPressed"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void WhackAMoleButtonPressedShared(::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WhackAMoleButtonPressedShared"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
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
