#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaTagCompetitiveManager_GameState.hpp"
#include "GorillaTagManager.hpp"
#include "../GorillaGameModes/GameModeType.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GorillaTagCompetitiveManager : ::GlobalNamespace::GorillaTagManager {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTagCompetitiveManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetShowDebugPing() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ShowDebugPing"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetShowDebugPing(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ShowDebugPing"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_onPlayerJoined(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onPlayerJoined"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onPlayerJoined(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onPlayerJoined"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_onPlayerLeft(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onPlayerLeft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onPlayerLeft(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onPlayerLeft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_onRoundEnd(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onRoundEnd"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onRoundEnd(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onRoundEnd"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_onRoundStart(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onRoundStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onRoundStart(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onRoundStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_onStateChanged(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onStateChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onStateChanged(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onStateChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_onTagOccurred(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onTagOccurred"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onTagOccurred(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onTagOccurred"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_onUpdateRemainingTime(::BNM::Structures::Mono::Action<float>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onUpdateRemainingTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onUpdateRemainingTime(::BNM::Structures::Mono::Action<float>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onUpdateRemainingTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*>* GetForceLeaveRoomVolumes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*>*> _field = GetClass().GetField(O("forceLeaveRoomVolumes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaTagCompetitiveManager_GameState GetGameState() {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveManager_GameState> _field = GetClass().GetField(O("gameState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastActiveTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastActiveTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastWaitingForPlayerPingRoomTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastWaitingForPlayerPingRoomTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>* GetOnPlayerJoined() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("onPlayerJoined"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>* GetOnPlayerLeft() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("onPlayerLeft"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnRoundEnd() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onRoundEnd"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnRoundStart() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onRoundStart"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>* GetOnStateChanged() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>*> _field = GetClass().GetField(O("onStateChanged"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*>* GetOnTagOccurred() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("onTagOccurred"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<float>* GetOnUpdateRemainingTime() {
            static BNM::Field<::BNM::Structures::Mono::Action<float>*> _field = GetClass().GetField(O("onUpdateRemainingTime"));
            return _field.Get();
        }
        float GetPostRoundDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("postRoundDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRoundDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("roundDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>* GetScoreboards() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>*> _field = GetClass().GetField(O("scoreboards"));
            return _field.Get();
        }
        ::GlobalNamespace::RankedMultiplayerScore* GetScoring() {
            static BNM::Field<::GlobalNamespace::RankedMultiplayerScore*> _field = GetClass().GetField(O("scoring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartCountdownDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("startCountdownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStateRemainingTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("stateRemainingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWaitingForPlayerPingRoomDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("waitingForPlayerPingRoomDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetForceLeaveRoomVolumes(::BNM::Structures::Mono::List<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*>*> _field = GetClass().GetField(O("forceLeaveRoomVolumes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameState(::GlobalNamespace::GorillaTagCompetitiveManager_GameState value) {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveManager_GameState> _field = GetClass().GetField(O("gameState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastActiveTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastActiveTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastWaitingForPlayerPingRoomTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastWaitingForPlayerPingRoomTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnPlayerJoined(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("onPlayerJoined"));
            _field.Set(value);
        }
        static void SetOnPlayerLeft(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("onPlayerLeft"));
            _field.Set(value);
        }
        static void SetOnRoundEnd(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onRoundEnd"));
            _field.Set(value);
        }
        static void SetOnRoundStart(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onRoundStart"));
            _field.Set(value);
        }
        static void SetOnStateChanged(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>*> _field = GetClass().GetField(O("onStateChanged"));
            _field.Set(value);
        }
        static void SetOnTagOccurred(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("onTagOccurred"));
            _field.Set(value);
        }
        static void SetOnUpdateRemainingTime(::BNM::Structures::Mono::Action<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<float>*> _field = GetClass().GetField(O("onUpdateRemainingTime"));
            _field.Set(value);
        }
        void SetPostRoundDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("postRoundDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoundDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("roundDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetScoreboards(::BNM::Structures::Mono::List<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>*> _field = GetClass().GetField(O("scoreboards"));
            _field.Set(value);
        }
        void SetScoring(::GlobalNamespace::RankedMultiplayerScore* value) {
            static BNM::Field<::GlobalNamespace::RankedMultiplayerScore*> _field = GetClass().GetField(O("scoring"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartCountdownDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startCountdownDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateRemainingTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stateRemainingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitingForPlayerPingRoomDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("waitingForPlayerPingRoomDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void add_onPlayerJoined_1(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onPlayerJoined"), {"value"});
            _m.Call(value);
        }
        static void add_onPlayerLeft_1(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onPlayerLeft"), {"value"});
            _m.Call(value);
        }
        static void add_onRoundEnd_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onRoundEnd"), {"value"});
            _m.Call(value);
        }
        static void add_onRoundStart_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onRoundStart"), {"value"});
            _m.Call(value);
        }
        static void add_onStateChanged_1(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onStateChanged"), {"value"});
            _m.Call(value);
        }
        static void add_onTagOccurred_1(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onTagOccurred"), {"value"});
            _m.Call(value);
        }
        static void add_onUpdateRemainingTime_1(::BNM::Structures::Mono::Action<float>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onUpdateRemainingTime"), {"value"});
            _m.Call(value);
        }
        bool CanJoinFrienship(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanJoinFrienship"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        void CheckForInfected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckForInfected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void DeregisterScoreboard(::GlobalNamespace::GorillaTagCompetitiveScoreboard* scoreboard) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeregisterScoreboard"), {"scoreboard"});
            _m.Call(scoreboard);
        }
        void DisplayScoreboardPredictedResults(bool bShow) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisplayScoreboardPredictedResults"), {"bShow"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bShow);
        }
        void EnterStatePlaying() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnterStatePlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnterStatePostRound() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnterStatePostRound"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnterStateStartingCountdown() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnterStateStartingCountdown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnterStateWaitingForPlayers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnterStateWaitingForPlayers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        bool get_ShowDebugPing() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ShowDebugPing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GorillaTagCompetitiveManager_GameState GetCurrentGameState() {
            static BNM::Method<::GlobalNamespace::GorillaTagCompetitiveManager_GameState> _m = GetClass().GetMethod(O("GetCurrentGameState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetRoundDuration_1() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetRoundDuration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::RankedMultiplayerScore* GetScoring_1() {
            static BNM::Method<::GlobalNamespace::RankedMultiplayerScore*> _m = GetClass().GetMethod(O("GetScoring"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandleInfectionRoundComplete() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleInfectionRoundComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleTagBroadcast(::GlobalNamespace::NetPlayer* taggedPlayer, ::GlobalNamespace::NetPlayer* taggingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleTagBroadcast"), {"taggedPlayer", "taggingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, taggingPlayer);
        }
        bool IsEveryoneTagged() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEveryoneTagged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsGameInvalid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsGameInvalid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsInfectionPossible() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInfectionPossible"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsMatchActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsMatchActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void NetworkLinkSetup(::GlobalNamespace::GameModeSerializer* netSerializer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetworkLinkSetup"), {"netSerializer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netSerializer);
        }
        void OnMasterClientSwitched(::Photon_Realtime::Player* newMasterClient) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMasterClientSwitched"), {"newMasterClient"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newMasterClient);
        }
        void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer* newPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerEnteredRoom"), {"newPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPlayer);
        }
        void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer* otherPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(otherPlayer);
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
        void PingRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PingRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RegisterForcedLeaveVolume(::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume* volume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterForcedLeaveVolume"), {"volume"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(volume);
        }
        static void RegisterScoreboard(::GlobalNamespace::GorillaTagCompetitiveScoreboard* scoreboard) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterScoreboard"), {"scoreboard"});
            _m.Call(scoreboard);
        }
        static void remove_onPlayerJoined_1(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onPlayerJoined"), {"value"});
            _m.Call(value);
        }
        static void remove_onPlayerLeft_1(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onPlayerLeft"), {"value"});
            _m.Call(value);
        }
        static void remove_onRoundEnd_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onRoundEnd"), {"value"});
            _m.Call(value);
        }
        static void remove_onRoundStart_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onRoundStart"), {"value"});
            _m.Call(value);
        }
        static void remove_onStateChanged_1(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onStateChanged"), {"value"});
            _m.Call(value);
        }
        static void remove_onTagOccurred_1(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onTagOccurred"), {"value"});
            _m.Call(value);
        }
        static void remove_onUpdateRemainingTime_1(::BNM::Structures::Mono::Action<float>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onUpdateRemainingTime"), {"value"});
            _m.Call(value);
        }
        void ReportTag(::GlobalNamespace::NetPlayer* taggedPlayer, ::GlobalNamespace::NetPlayer* taggingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportTag"), {"taggedPlayer", "taggingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, taggingPlayer);
        }
        void ResetGame() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetGame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_ShowDebugPing(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ShowDebugPing"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetState(::GlobalNamespace::GorillaTagCompetitiveManager_GameState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
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
        void UnregisterForcedLeaveVolume(::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume* volume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterForcedLeaveVolume"), {"volume"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(volume);
        }
        void UpdateInfectionState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateInfectionState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateScoreboards() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateScoreboards"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateStatePlaying() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateStatePlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateStatePostRound() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateStatePostRound"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateStateStartingCountdown() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateStateStartingCountdown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateStateWaitingForPlayers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateStateWaitingForPlayers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
