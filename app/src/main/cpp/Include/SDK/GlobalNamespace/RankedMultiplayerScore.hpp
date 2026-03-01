#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaTagCompetitiveManager_GameState.hpp"
#include "MonoBehaviourTick.hpp"
#include "RankedMultiplayerScore_PlayerScore.hpp"
#include "RankedMultiplayerScore_PlayerScoreInRound.hpp"
#include "RankedMultiplayerScore_RecordHolder$1.hpp"
#include "RankedMultiplayerScore_ResultData.hpp"

namespace GlobalNamespace {
    struct RankedMultiplayerScore : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RankedMultiplayerScore");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<int, float>* GetPlayerRankedEloScores() {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<int, float>*> _method = GetClass().GetMethod(O("get_PlayerRankedEloScores"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPlayerRankedEloScores(::BNM::Structures::Mono::Dictionary<int, float>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PlayerRankedEloScores"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Dictionary<int, int>* GetPlayerRankedTiers() {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<int, int>*> _method = GetClass().GetMethod(O("get_PlayerRankedTiers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPlayerRankedTiers(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PlayerRankedTiers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::RankedProgressionManager* GetProgression() {
            static BNM::Method<::GlobalNamespace::RankedProgressionManager*> _method = GetClass().GetMethod(O("get_Progression"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetProgression(::GlobalNamespace::RankedProgressionManager* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Progression"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Dictionary<int, float>* GetProjectedEloDeltas() {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<int, float>*> _method = GetClass().GetMethod(O("get_ProjectedEloDeltas"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetProjectedEloDeltas(::BNM::Structures::Mono::Dictionary<int, float>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ProjectedEloDeltas"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>* GetAllFinalPlayerScores() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>*> _field = GetClass().GetField(O("AllFinalPlayerScores"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>* GetAllPlayerInRoundScores() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>*> _field = GetClass().GetField(O("AllPlayerInRoundScores"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaTagCompetitiveManager* GetCompetitiveManager() {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveManager*> _field = GetClass().GetField(O("CompetitiveManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, float>* GetInProgressEloDeltaPerPlayer() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, float>*> _field = GetClass().GetField(O("InProgressEloDeltaPerPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLateJoiner() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsLateJoiner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static float GetLongestUntaggedTieEpsilon() {
            static BNM::Field<float> _field = GetClass().GetField(O("LongestUntaggedTieEpsilon"));
            return _field.Get();
        }
        ::GlobalNamespace::RankedMultiplayerScore_ResultData GetPendingResults() {
            static BNM::Field<::GlobalNamespace::RankedMultiplayerScore_ResultData> _field = GetClass().GetField(O("PendingResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPerSecondTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("PerSecondTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, float>* GetPlayerRankedElos() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, float>*> _field = GetClass().GetField(O("PlayerRankedElos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, int>* GetPlayerRankedTierIndices() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("PlayerRankedTierIndices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPointsPerTag() {
            static BNM::Field<int> _field = GetClass().GetField(O("PointsPerTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPointsPerUninfectedSecMax() {
            static BNM::Field<float> _field = GetClass().GetField(O("PointsPerUninfectedSecMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPointsPerUninfectedSecMin() {
            static BNM::Field<float> _field = GetClass().GetField(O("PointsPerUninfectedSecMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetRESULTTIE() {
            static BNM::Field<int> _field = GetClass().GetField(O("RESULT_TIE"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, bool>* GetVisitedScoreCombintations() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, bool>*> _field = GetClass().GetField(O("VisitedScoreCombintations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasInfectedInitially() {
            static BNM::Field<bool> _field = GetClass().GetField(O("WasInfectedInitially"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllFinalPlayerScores(::BNM::Structures::Mono::List<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>*> _field = GetClass().GetField(O("AllFinalPlayerScores"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllPlayerInRoundScores(::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>*> _field = GetClass().GetField(O("AllPlayerInRoundScores"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompetitiveManager(::GlobalNamespace::GorillaTagCompetitiveManager* value) {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveManager*> _field = GetClass().GetField(O("CompetitiveManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInProgressEloDeltaPerPlayer(::BNM::Structures::Mono::Dictionary<int, float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, float>*> _field = GetClass().GetField(O("InProgressEloDeltaPerPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLateJoiner(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsLateJoiner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLongestUntaggedTieEpsilon(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("LongestUntaggedTieEpsilon"));
            _field.Set(value);
        }
        void SetPendingResults(::GlobalNamespace::RankedMultiplayerScore_ResultData value) {
            static BNM::Field<::GlobalNamespace::RankedMultiplayerScore_ResultData> _field = GetClass().GetField(O("PendingResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerSecondTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PerSecondTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerRankedElos(::BNM::Structures::Mono::Dictionary<int, float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, float>*> _field = GetClass().GetField(O("PlayerRankedElos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerRankedTierIndices(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("PlayerRankedTierIndices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPointsPerTag(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("PointsPerTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPointsPerUninfectedSecMax(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PointsPerUninfectedSecMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPointsPerUninfectedSecMin(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PointsPerUninfectedSecMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRESULTTIE(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("RESULT_TIE"));
            _field.Set(value);
        }
        void SetVisitedScoreCombintations(::BNM::Structures::Mono::Dictionary<int, bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, bool>*> _field = GetClass().GetField(O("VisitedScoreCombintations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasInfectedInitially(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("WasInfectedInitially"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CachePlayerRankedProgressionData(int playerId, int tierIdx, float elo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CachePlayerRankedProgressionData"), {"playerId", "tierIdx", "elo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerId, tierIdx, elo);
        }
        float ComputeGameScore(int tags, float pointsOnDefense) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ComputeGameScore"), {"tags", "pointsOnDefense"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(tags, pointsOnDefense);
        }
        ::BNM::Structures::Mono::Dictionary<int, float>* get_PlayerRankedEloScores() {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<int, float>*> _m = GetClass().GetMethod(O("get_PlayerRankedEloScores"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Dictionary<int, int>* get_PlayerRankedTiers() {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<int, int>*> _m = GetClass().GetMethod(O("get_PlayerRankedTiers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::RankedProgressionManager* get_Progression() {
            static BNM::Method<::GlobalNamespace::RankedProgressionManager*> _m = GetClass().GetMethod(O("get_Progression"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Dictionary<int, float>* get_ProjectedEloDeltas() {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<int, float>*> _m = GetClass().GetMethod(O("get_ProjectedEloDeltas"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound GetInGameScoreForSelf() {
            static BNM::Method<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound> _m = GetClass().GetMethod(O("GetInGameScoreForSelf"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>* GetSortedScores() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>*> _m = GetClass().GetMethod(O("GetSortedScores"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandlePlayerEloAcquired(int playerId, float elo, int tier) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandlePlayerEloAcquired"), {"playerId", "elo", "tier"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerId, elo, tier);
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGameEnded() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGameEnded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGameStarted() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGameStarted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPerSecondTimerElapsed(int playersInGame, int infectedPlayers) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPerSecondTimerElapsed"), {"playersInGame", "infectedPlayers"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playersInGame, infectedPlayers);
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
        void OnStateChanged(::GlobalNamespace::GorillaTagCompetitiveManager_GameState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStateChanged"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void OnTagReported(::GlobalNamespace::NetPlayer* taggedPlayer, ::GlobalNamespace::NetPlayer* taggingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTagReported"), {"taggedPlayer", "taggingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, taggingPlayer);
        }
        void PredictPlayerEloChanges() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PredictPlayerEloChanges"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReceivedScoresForLateJoiner(::BNM::Structures::Mono::Array<int>* playerIds, ::BNM::Structures::Mono::Array<int>* numTags, ::BNM::Structures::Mono::Array<float>* pointsOnDefense, ::BNM::Structures::Mono::Array<float>* joinTime, ::BNM::Structures::Mono::Array<bool>* infected, ::BNM::Structures::Mono::Array<float>* taggedTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReceivedScoresForLateJoiner"), {"playerIds", "numTags", "pointsOnDefense", "joinTime", "infected", "taggedTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerIds, numTags, pointsOnDefense, joinTime, infected, taggedTime);
        }
        void ReportScore() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportScore"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetMatch() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetMatch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_PlayerRankedEloScores(::BNM::Structures::Mono::Dictionary<int, float>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PlayerRankedEloScores"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PlayerRankedTiers(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PlayerRankedTiers"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Progression(::GlobalNamespace::RankedProgressionManager* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Progression"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ProjectedEloDeltas(::BNM::Structures::Mono::Dictionary<int, float>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ProjectedEloDeltas"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void StartTrackingPlayer(::GlobalNamespace::NetPlayer* player, bool lateJoin) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartTrackingPlayer"), {"player", "lateJoin"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, lateJoin);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Unsubscribe() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unsubscribe"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
