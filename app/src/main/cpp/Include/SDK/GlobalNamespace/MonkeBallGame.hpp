#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameBallId.hpp"
#include "MonkeBallGame_GameState.hpp"
#include "MonkeBallGame_RPC.hpp"
#include "NetworkComponent.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct MonkeBallGame : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MonkeBallGame");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetBallLauncher() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_BallLauncher"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Transform* GetBallLauncher_f() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_ballLauncher"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::CallLimiter*>* GetCallLimiters() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CallLimiter*>*> _field = GetClass().GetField(O("_callLimiters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentPlayerTotal() {
            static BNM::Field<int> _field = GetClass().GetField(O("_currentPlayerTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetForceOrigColorDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("_forceOrigColorDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetForceOrigColorFix() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_forceOrigColorFix"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetForceSync() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_forceSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetForceSyncDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("_forceSyncDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFrameIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_frameIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetNeutralBallStartLocation() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_neutralBallStartLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSetStoredLocalPlayerColor() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_setStoredLocalPlayerColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetStoredLocalPlayerColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_storedLocalPlayerColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetBallLaunchAngleXRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("ballLaunchAngleXRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetBallLaunchAngleYRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("ballLaunchAngleYRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetBallLauncherVelocityRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("ballLauncherVelocityRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MonkeBallResetGame* GetCenterResetButton() {
            static BNM::Field<::GlobalNamespace::MonkeBallResetGame*> _field = GetClass().GetField(O("centerResetButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::ParticleSystem*>* GetEndZoneEffects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::ParticleSystem*>*> _field = GetClass().GetField(O("endZoneEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGameDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("gameDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetGameEndTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("gameEndTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MonkeBallGame_GameState GetGameState() {
            static BNM::Field<::GlobalNamespace::MonkeBallGame_GameState> _field = GetClass().GetField(O("gameState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallGoalZone*>* GetGoalZones() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallGoalZone*>*> _field = GetClass().GetField(O("goalZones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::MonkeBallGame* GetInstance() {
            static BNM::Field<::GlobalNamespace::MonkeBallGame*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView* GetPhotonView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetResetBallPositionOnScore() {
            static BNM::Field<bool> _field = GetClass().GetField(O("resetBallPositionOnScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MonkeBallResetGame* GetResetButton() {
            static BNM::Field<::GlobalNamespace::MonkeBallResetGame*> _field = GetClass().GetField(O("resetButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRestrictBallDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("restrictBallDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRestrictBallDurationAfterScore() {
            static BNM::Field<float> _field = GetClass().GetField(O("restrictBallDurationAfterScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallScoreboard*>* GetScoreboards() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallScoreboard*>*> _field = GetClass().GetField(O("scoreboards"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallShotclock*>* GetShotclocks() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallShotclock*>*> _field = GetClass().GetField(O("shotclocks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBall*>* GetStartingBalls() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBall*>*> _field = GetClass().GetField(O("startingBalls"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallTeam*>* GetTeam() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallTeam*>*> _field = GetClass().GetField(O("team"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBallLauncher(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_ballLauncher"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCallLimiters(::BNM::Structures::Mono::Array<::GlobalNamespace::CallLimiter*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CallLimiter*>*> _field = GetClass().GetField(O("_callLimiters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentPlayerTotal(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_currentPlayerTotal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceOrigColorDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_forceOrigColorDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceOrigColorFix(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_forceOrigColorFix"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceSync(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_forceSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceSyncDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_forceSyncDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrameIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_frameIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNeutralBallStartLocation(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_neutralBallStartLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetStoredLocalPlayerColor(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_setStoredLocalPlayerColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStoredLocalPlayerColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_storedLocalPlayerColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBallLaunchAngleXRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("ballLaunchAngleXRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBallLaunchAngleYRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("ballLaunchAngleYRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBallLauncherVelocityRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("ballLauncherVelocityRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCenterResetButton(::GlobalNamespace::MonkeBallResetGame* value) {
            static BNM::Field<::GlobalNamespace::MonkeBallResetGame*> _field = GetClass().GetField(O("centerResetButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndZoneEffects(::BNM::Structures::Mono::Array<::ParticleSystem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::ParticleSystem*>*> _field = GetClass().GetField(O("endZoneEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gameDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEndTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("gameEndTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameState(::GlobalNamespace::MonkeBallGame_GameState value) {
            static BNM::Field<::GlobalNamespace::MonkeBallGame_GameState> _field = GetClass().GetField(O("gameState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoalZones(::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallGoalZone*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallGoalZone*>*> _field = GetClass().GetField(O("goalZones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::MonkeBallGame* value) {
            static BNM::Field<::GlobalNamespace::MonkeBallGame*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        void SetPhotonView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResetBallPositionOnScore(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("resetBallPositionOnScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResetButton(::GlobalNamespace::MonkeBallResetGame* value) {
            static BNM::Field<::GlobalNamespace::MonkeBallResetGame*> _field = GetClass().GetField(O("resetButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRestrictBallDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("restrictBallDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRestrictBallDurationAfterScore(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("restrictBallDurationAfterScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreboards(::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallScoreboard*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallScoreboard*>*> _field = GetClass().GetField(O("scoreboards"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShotclocks(::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallShotclock*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallShotclock*>*> _field = GetClass().GetField(O("shotclocks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingBalls(::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBall*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBall*>*> _field = GetClass().GetField(O("startingBalls"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeam(::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallTeam*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MonkeBallTeam*>*> _field = GetClass().GetField(O("team"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AssignNetworkListeners() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AssignNetworkListeners"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void Despawned(::BNM::IL2CPP::Il2CppObject* runner, bool hasState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Despawned"), {"runner", "hasState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, hasState);
        }
        void ForceOriginalColorSync() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceOriginalColorSync"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ForceSyncPlayersVisuals() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceSyncPlayersVisuals"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::Transform* get_BallLauncher() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_BallLauncher"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetCurrentGameState(int& playerIds, int& playerTeams, int& scores, int64_t& packedBallPosRot, int64_t& packedBallVel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetCurrentGameState"), {"playerIds", "playerTeams", "scores", "packedBallPosRot", "packedBallVel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&playerIds, &playerTeams, &scores, &packedBallPosRot, &packedBallVel);
        }
        ::GlobalNamespace::MonkeBallGame_GameState GetGameState_1() {
            static BNM::Method<::GlobalNamespace::MonkeBallGame_GameState> _m = GetClass().GetMethod(O("GetGameState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::MonkeBall* GetMonkeBall(::GlobalNamespace::GameBallId gameBallId) {
            static BNM::Method<::GlobalNamespace::MonkeBall*> _m = GetClass().GetMethod(O("GetMonkeBall"), {"gameBallId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameBallId);
        }
        int GetOtherTeam(int teamId) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetOtherTeam"), {"teamId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(teamId);
        }
        ::GlobalNamespace::MonkeBallTeam* GetTeam_1(int teamId) {
            static BNM::Method<::GlobalNamespace::MonkeBallTeam*> _m = GetClass().GetMethod(O("GetTeam"), {"teamId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(teamId);
        }
        bool IsMasterClient() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsMasterClient"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LaunchBall(::GlobalNamespace::GameBallId gameBallId, ::Transform* launcher, float minVelocity, float maxVelocity, float minXAngle, float maxXAngle, float minYAngle, float maxYAngle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LaunchBall"), {"gameBallId", "launcher", "minVelocity", "maxVelocity", "minXAngle", "maxXAngle", "minYAngle", "maxYAngle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId, launcher, minVelocity, maxVelocity, minXAngle, maxXAngle, minYAngle, maxYAngle);
        }
        void LaunchBallNeutral(::GlobalNamespace::GameBallId gameBallId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LaunchBallNeutral"), {"gameBallId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId);
        }
        void LaunchBallWithTeam(::GlobalNamespace::GameBallId gameBallId, int teamId, ::Transform* launcher, ::BNM::Structures::Unity::Vector2 velocityRange, ::BNM::Structures::Unity::Vector2 angleXRange, ::BNM::Structures::Unity::Vector2 angleYRange) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LaunchBallWithTeam"), {"gameBallId", "teamId", "launcher", "velocityRange", "angleXRange", "angleYRange"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId, teamId, launcher, velocityRange, angleXRange, angleYRange);
        }
        void OnBallGrabbed(::GlobalNamespace::GameBallId gameBallId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBallGrabbed"), {"gameBallId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId);
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
        void OnEnterStatePlaying() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnterStatePlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnterStatePostGame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnterStatePostGame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnterStatePostScore() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnterStatePostScore"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnterStatePreGame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnterStatePreGame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnMasterClientSwitched(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMasterClientSwitched"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void OnPlayerDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPlayerJoined(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerJoined"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void OnPlayerLeft(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeft"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void PlayScoreFx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayScoreFx"));
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
        void RefreshScore() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshScore"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshTeamPlayers(bool playSounds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshTeamPlayers"), {"playSounds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playSounds);
        }
        void RefreshTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReportRPCCall(::GlobalNamespace::MonkeBallGame_RPC rpcCall, ::Photon_Pun::PhotonMessageInfo info, ::BNM::Structures::Mono::String* susReason) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportRPCCall"), {"rpcCall", "info", "susReason"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rpcCall, info, susReason);
        }
        void RequestGameState(::GlobalNamespace::MonkeBallGame_GameState newGameState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestGameState"), {"newGameState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newGameState);
        }
        void RequestResetBall(::GlobalNamespace::GameBallId gameBallId, int teamId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestResetBall"), {"gameBallId", "teamId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId, teamId);
        }
        void RequestResetGame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestResetGame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestResetGameRPC(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestResetGameRPC"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void RequestRestrictBallToTeam(::GlobalNamespace::GameBallId gameBallId, int teamId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestRestrictBallToTeam"), {"gameBallId", "teamId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId, teamId);
        }
        void RequestRestrictBallToTeamOnScore(::GlobalNamespace::GameBallId gameBallId, int teamId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestRestrictBallToTeamOnScore"), {"gameBallId", "teamId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId, teamId);
        }
        void RequestScore(int teamId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestScore"), {"teamId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(teamId);
        }
        void RequestSetGameStateRPC(int newGameState, double newGameEndTime, ::BNM::Structures::Mono::Array<int>* playerIds, ::BNM::Structures::Mono::Array<int>* playerTeams, ::BNM::Structures::Mono::Array<int>* scores, ::BNM::Structures::Mono::Array<int64_t>* packedBallPosRot, ::BNM::Structures::Mono::Array<int64_t>* packedBallVel, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSetGameStateRPC"), {"newGameState", "newGameEndTime", "playerIds", "playerTeams", "scores", "packedBallPosRot", "packedBallVel", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newGameState, newGameEndTime, playerIds, playerTeams, scores, packedBallPosRot, packedBallVel, info);
        }
        void RequestSetScore(int teamId, int score) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSetScore"), {"teamId", "score"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(teamId, score);
        }
        void RequestSetTeam(int teamId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSetTeam"), {"teamId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(teamId);
        }
        void RequestSetTeamRPC(int teamId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestSetTeamRPC"), {"teamId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(teamId, info);
        }
        void RestrictBallToTeam(::GlobalNamespace::GameBallId gameBallId, int teamId, float restrictDuration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestrictBallToTeam"), {"gameBallId", "teamId", "restrictDuration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallId, teamId, restrictDuration);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetGameState_1(::GlobalNamespace::MonkeBallGame_GameState newGameState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGameState"), {"newGameState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newGameState);
        }
        void SetGameStateRPC(int newGameState, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGameStateRPC"), {"newGameState", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newGameState, info);
        }
        void SetResetButtonRPC(bool toggleReset, int teamId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetResetButtonRPC"), {"toggleReset", "teamId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(toggleReset, teamId, info);
        }
        void SetRestrictBallToTeam(int gameBallIndex, int teamId, float restrictDuration, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRestrictBallToTeam"), {"gameBallIndex", "teamId", "restrictDuration", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameBallIndex, teamId, restrictDuration, info);
        }
        void SetScore(int teamId, int score, bool playFX) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetScore"), {"teamId", "score", "playFX"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(teamId, score, playFX);
        }
        void SetScoreRPC(int teamId, int score, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetScoreRPC"), {"teamId", "score", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(teamId, score, info);
        }
        void SetTeamPlayer(int teamId, ::Photon_Realtime::Player* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTeamPlayer"), {"teamId", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(teamId, player);
        }
        void SetTeamRPC(int teamId, ::Photon_Realtime::Player* player, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTeamRPC"), {"teamId", "player", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(teamId, player, info);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ToggleResetButton(bool toggle, int teamId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleResetButton"), {"toggle", "teamId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(toggle, teamId);
        }
        void UnassignNetworkListeners() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnassignNetworkListeners"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ValidateCallLimits(::GlobalNamespace::MonkeBallGame_RPC rpcCall, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateCallLimits"), {"rpcCall", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rpcCall, info);
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
