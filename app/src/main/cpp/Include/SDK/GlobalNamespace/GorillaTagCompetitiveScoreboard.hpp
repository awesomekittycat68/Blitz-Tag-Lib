#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaTagCompetitiveManager_GameState.hpp"
#include "RankedMultiplayerScore_PlayerScoreInRound.hpp"

namespace GlobalNamespace {
    struct GorillaTagCompetitiveScoreboard : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTagCompetitiveScoreboard");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetLargeEloDelta() {
            static BNM::Field<float> _field = GetClass().GetField(O("largeEloDelta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*>* GetLines() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*>*> _field = GetClass().GetField(O("lines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSmallEloDelta() {
            static BNM::Field<float> _field = GetClass().GetField(O("smallEloDelta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetWaitingForPlayers() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("waitingForPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLargeEloDelta(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("largeEloDelta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLines(::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*>*> _field = GetClass().GetField(O("lines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmallEloDelta(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("smallEloDelta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitingForPlayers(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("waitingForPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DisplayPredictedResults(bool bShow) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisplayPredictedResults"), {"bShow"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bShow);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateScores(::GlobalNamespace::GorillaTagCompetitiveManager_GameState gameState, float activeRoundTime, ::BNM::Structures::Mono::List<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>* scores, ::BNM::Structures::Mono::Dictionary<int, int>* PlayerRankedTiers, ::BNM::Structures::Mono::Dictionary<int, float>* PlayerPredictedEloDeltas, ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* infectedPlayers, ::GlobalNamespace::RankedProgressionManager* progressionManager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateScores"), {"gameState", "activeRoundTime", "scores", "PlayerRankedTiers", "PlayerPredictedEloDeltas", "infectedPlayers", "progressionManager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameState, activeRoundTime, scores, PlayerRankedTiers, PlayerPredictedEloDeltas, infectedPlayers, progressionManager);
        }
    };
}
